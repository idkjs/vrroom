open Vrroom;

let maybeError = Some("oops!");

[@react.component]
let make = () => {
  <div>
    /* Before */
      {switch (maybeError) {
       | Some(error) => React.string(error)
       | None => React.null
       }}
      /* After */
      <Control.IfSome option=maybeError>
        ...{error => error |> text}
      </Control.IfSome>
    </div>;
};
