open Vrroom;

module Item = {
  [@react.component]
  let make = (~label) => {
    <li> {label |> text} </li>;
  };
};

let items = ["pears", "mangos", "persimon"];
let noItems = [];

[@react.component]
let make = () => {
  <div>
    /* Before */
      <ul>
        {items
         |> List.map(name => <Item label=name />)
         |> Array.of_list
         |> React.array}
      </ul>
      /* After */
      <ul>
        <Control.MapList items>
          ...{name => <Item label=name />}
        </Control.MapList>
      </ul>
      /* Before - Special case empty */
      <ul>
        {switch (noItems) {
         | [] => <Item label="." />
         | items =>
           items
           |> List.map(name => <Item label=name />)
           |> Array.of_list
           |> React.array
         }}
      </ul>
      /* After - Special case empty*/
      <ul>
        <Control.MapList items=noItems empty={<Item label="-" />}>
          ...{name => <Item label=name />}
        </Control.MapList>
      </ul>
    </div>;
};
