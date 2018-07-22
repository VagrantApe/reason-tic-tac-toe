let component = ReasonReact.reducerComponent("Game");
let initialState = {
  board: [
    [Empty, Empty, Empty],
    [Empty, Empty, Empty],
    [Empty, Empty, Empty],
  ],
  gameState: Playing(Cross),
};

let make = _children => {
  ...component,
  initialState: () => initialState,
  reducer: (action: action, state: state) => ...,
  render: ({state, send}) => 
    <div className="game">
      <Board
        state
        onRestart=(_evt => send(Restart))
        onMark=(id => send(ClickSquare(id)))
      />
    </div>,
}