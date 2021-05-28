open Vrroom;

module Item = {
  [@react.component]
  let make = (~label) => {
    <li> {label |> text} </li>;
  };
};

let items = [|"pears", "mangos", "persimon"|];
let noItems = [||];

[@react.component]
let make = () => {
  <div>

      <ul>
        {items |> Array.map(name => <Item label=name />) |> React.array}
      </ul>
      <h1> {"After" |> text} </h1>
      <ul>
        <Control.Map items> ...{name => <Item label=name />} </Control.Map>
      </ul>
      <h1> {"Before - Special case empty" |> text} </h1>
      <ul>
        {switch (noItems) {
         | [||] => <Item label="." />
         | items =>
           items |> Array.map(name => <Item label=name />) |> React.array
         }}
      </ul>
      <h1> {"After - Special case empty" |> text} </h1>
      <ul>
        <Control.Map items=noItems empty={<Item label="-" />}>
          ...{name => <Item label=name />}
        </Control.Map>
      </ul>
    </div>;
    /* Before */
};
