// Generated by ReScript, PLEASE EDIT WITH CARE
'use strict';

var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");
var Vrroom = require("../src/Vrroom.bs.js");

function ControlMap$Item(Props) {
  var label = Props.label;
  return React.createElement("li", undefined, Vrroom.text(label));
}

var Item = {
  make: ControlMap$Item
};

var items = [
  "pears",
  "mangos",
  "persimon"
];

var noItems = [];

function ControlMap(Props) {
  return React.createElement("div", undefined, React.createElement("ul", undefined, $$Array.map((function (name) {
                        return React.createElement(ControlMap$Item, {
                                    label: name
                                  });
                      }), items)), React.createElement("h1", undefined, Vrroom.text("After")), React.createElement("ul", undefined, React.createElement(Vrroom.Control.$$Map.make, {
                      items: items,
                      children: (function (name) {
                          return React.createElement(ControlMap$Item, {
                                      label: name
                                    });
                        })
                    })), React.createElement("h1", undefined, Vrroom.text("Before - Special case empty")), React.createElement("ul", undefined, noItems.length !== 0 ? $$Array.map((function (name) {
                          return React.createElement(ControlMap$Item, {
                                      label: name
                                    });
                        }), noItems) : React.createElement(ControlMap$Item, {
                        label: "."
                      })), React.createElement("h1", undefined, Vrroom.text("After - Special case empty")), React.createElement("ul", undefined, React.createElement(Vrroom.Control.$$Map.make, {
                      items: noItems,
                      empty: React.createElement(ControlMap$Item, {
                            label: "-"
                          }),
                      children: (function (name) {
                          return React.createElement(ControlMap$Item, {
                                      label: name
                                    });
                        })
                    })));
}

var make = ControlMap;

exports.Item = Item;
exports.items = items;
exports.noItems = noItems;
exports.make = make;
/* react Not a pure module */
