open Vrroom;

let showHello = true;

[@react.component]
let make = () => {
  <div>
      /* Before */
      {if (showHello) {
         React.string("Hello");
       } else {
         React.null;
       }}
      /* After */
      <Control.If cond=showHello> {"Hello" |> text} </Control.If>
    </div>;
};
