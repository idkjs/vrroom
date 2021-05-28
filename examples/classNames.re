open Vrroom;

let maybeErrorClass = Some("is-oops");
let isHovered = true;

[@react.component]
let make = _ => {
  <div>
    {let className =
       ClassName.(
         join([
           "tooltip",
           "s-hovered" |> if_(isHovered),
           maybeErrorClass |> fromOption,
         ])
       );

     <div className> {"Hello world!" |> text} </div>}
    <div
      className=ClassName.(join(["tooltip", "s-hovered" |> if_(isHovered)]))>
      {"Hello world!" |> text}
    </div>
  </div>;
};
