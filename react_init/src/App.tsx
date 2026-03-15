import { useState } from 'react'
import './App.css'

const prof = {
  name: "aaaa1024",
  hobby: "a"
}

const szpp = [
  { name: "hoge", id: "70239999" },
  { name: "hoge", id: "70239999" },
  { name: "hoge", id: "70239999" },
];

const listItem = szpp.map(szpp =>
  <div>
    <li>name = {szpp.name}</li>
    <li>id = {szpp.id}</li>
  </div>
)


function MyButton() {
  return (
    <button> hogehogehoge</button>
  )
}



function App() {

  return (
    <>
      <div></div>
      <button>hogehoge</button>
      <MyButton />
      <div>{1 == 0 ? (
        prof.hobby) : ("nop."
      )}</div>
      <div>
        <ul>
        {listItem}
        </ul>
      </div>
    </>
  )
}

export default App
