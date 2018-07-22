let component = ReasonReact.statelessComponent("Board");

let make = (~state: state, ~onMark, ~onRestart, _children) => {
  ...component,
  render: _ =>
    <div className="game-board">
      (
        ReasonReact.array(
          Array.of_list(
            List.mapi(
              (index: int, row: row) =>
                <BoardRow
                  key=(string_of_int(index))
                  gameState=state.gameState
                  row
                  onMark
                  index
                />,
              state.board,
            ),
          ),
        )
      )
    </div>,
};