import type { Todo } from "../type/Todo.type";

type Props = {
    todo: Todo;
    onToggle: (id: number) => void;
    onDelete: (id: number) => void;
}

const TodoItem = ({ todo, onToggle, onDelete }: Props) => {
    return (

        <li style={{ textDecoration: todo.completed ? "line-through" : "none" }}>
            <span
                className={todo.completed ? 'completed' : ''}
                onClick={() => onToggle(todo.id)}
                style={{ cursor: "pointer" }}>
                {todo.text}
            </span>
            <button onClick={() => onDelete(todo.id)} style={{ marginLeft: 10 }}>
                削除
            </button>
        </li>
    );
};

export default TodoItem;