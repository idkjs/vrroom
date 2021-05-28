open Vrroom.Helpers;

module ThreeItems = {
  [@react.component]
  let make = () => {
    <React.Fragment>
      <li> {"Item 1" |> text} </li>
      <li> {"Item 2" |> text} </li>
      <li> {"Item 3" |> text} </li>
    </React.Fragment>;
  };
};

[@react.component]
let make = () => {
  <ol>
    <li> {"Item 0" |> text} </li>
    <ThreeItems />
    <li> {"Item 4" |> text} </li>
  </ol>;
};
