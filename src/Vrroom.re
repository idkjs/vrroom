type nothing;

module Helpers = {

  module Text = {
    let string = React.string;
    let int = n => n |> string_of_int |> string;
    let float = f => f |> Js.Float.toString |> string;
    let any = v => v |> Js.String.make |> string;
  };

  let text = Text.string;
  let nothing = React.null;
  let nbsp = {js|'\\u00a0'|js};
  module ClassName = {
    let join = items =>
      items |> List.filter((!==)("")) |> String.concat(" ");

    let if_ = (cond, cls) => cond ? cls : "";

    let fromOption =
      fun
      | Some(cls) => cls
      | None => "";
  };
};

include Helpers;

module Control = {
  module Map = {
    [@react.component]
    let make = (~items: array('a), ~empty: React.element=nothing, ~children) => {
      <React.Fragment>
        {switch (items) {
         | [||] => empty
         | _ => items |> Array.map(children) |> React.array
         }}
      </React.Fragment>;
    };
  };

  module MapList = {
    [@react.component]
    let make = (~items: list('a), ~empty: React.element=nothing, ~children) => {
      <Map items={items |> Array.of_list} empty> children </Map>;
    };
  };

  module If = {
    [@react.component]
    let make = (~cond: bool, ~children: React.element) => {
      cond ? children : nothing;
    };
  };

  module IfSome = {
    [@react.component]
    let make = (~option: option('a), ~children) => {
      switch (option) {
      | Some(value) => children(value)
      | None => nothing
      };
    };
  };
};
