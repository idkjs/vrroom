open Vrroom;

module Page = {
  [@react.component]
  let make = () => {
    <div>
      <h1> {"Fragments" |> text} </h1>
      <Fragments />
      <h1> {"ControlMap" |> text} </h1>
      <ControlMap />
      <h1> {"ControlMapList" |> text} </h1>
      <ControlMapList />
      <h1> {"ControlIf" |> text} </h1>
      <ControlIf />
      <h1> {"ControlIfSome" |> text} </h1>
      <ControlIfSome />
    </div>;
  };
};

ReactDOMRe.renderToElementWithId(<Page />, "index");
