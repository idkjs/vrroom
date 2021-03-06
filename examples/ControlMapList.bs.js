// Generated by ReScript, PLEASE EDIT WITH CARE
'use strict';

var List = require("bs-platform/lib/js/list.js");
var $$Array = require("bs-platform/lib/js/array.js");
var React = require("react");
var Vrroom = require("../src/Vrroom.bs.js");

function ControlMapList$Item(Props) {
  var label = Props.label;
  return React.createElement("li", undefined, Vrroom.text(label));
}

var Item = {
  make: ControlMapList$Item
};

var items = {
  hd: "pears",
  tl: {
    hd: "mangos",
    tl: {
      hd: "persimon",
      tl: /* [] */0
    }
  }
};

function ControlMapList(Props) {
  return React.createElement("div", undefined, React.createElement("ul", undefined, $$Array.of_list(List.map((function (name) {
                            return React.createElement(ControlMapList$Item, {
                                        label: name
                                      });
                          }), items))), React.createElement("ul", undefined, React.createElement(Vrroom.Control.MapList.make, {
                      items: items,
                      children: (function (name) {
                          return React.createElement(ControlMapList$Item, {
                                      label: name
                                    });
                        })
                    })), React.createElement("ul", undefined, React.createElement(ControlMapList$Item, {
                      label: "."
                    })), React.createElement("ul", undefined, React.createElement(Vrroom.Control.MapList.make, {
                      items: /* [] */0,
                      empty: React.createElement(ControlMapList$Item, {
                            label: "-"
                          }),
                      children: (function (name) {
                          return React.createElement(ControlMapList$Item, {
                                      label: name
                                    });
                        })
                    })));
}

var noItems = /* [] */0;

var make = ControlMapList;

exports.Item = Item;
exports.items = items;
exports.noItems = noItems;
exports.make = make;
/* react Not a pure module */
