// import "./App.css"; /* ここーーーーーーーーーーーーーーーー！！！！ */
// import TodoInput from "./components/TodoInput";
// import TodoItem from "./components/TodoItem";
// //コンポーネントもimport必須

// function App() {
//   return (
//   <>
//    <TodoInput onAdd={() => console.log("add")} />
//     <TodoItem todo={{
//       "id":123,
//       "text":"string",
//       "completed":false
//     }} onDelete={() => console.log("de")} onToggle={()=>{console.log("to")}} />
//       </>
//   )
// }

// export default App
// //useStateの使い方が作れてうれしい

// src/App.tsx

import './App.css';
import { useState } from 'react';
import TodoInput from './components/TodoInput';
import TodoList from './components/TodoList';
import type { Todo } from './type/Todo.type';

function App() {
  const [todos, setTodos] = useState<Todo[]>([]);

  const addTodo = (text: string) => {
    const newTodo: Todo = {
      id: Date.now(),
      text,
      completed: false,
    };
    setTodos([newTodo, ...todos]);//そのまんま、todosにぶち込めない
    //配列を持ってくる, 展開するtodosをという意味これを新たに格納する
  };

  const toggleTodo = (id: number) => {
    setTodos(todos.map(todo =>
      todo.id === id ? { ...todo, completed: !todo.completed } : todo
    ));
  };

  const deleteTodo = (id: number) => {
    setTodos(todos.filter(todo => todo.id !== id));
  };//todosからidが一致を消す、これをぶち込む

  return (
    <div style={{ padding: 20 }}>
      <h1>My TODO List</h1>
      <TodoInput onAdd={addTodo} />
      <TodoList todos={todos} onToggle={toggleTodo} onDelete={deleteTodo} />
    </div>
  );
}

export default App;

