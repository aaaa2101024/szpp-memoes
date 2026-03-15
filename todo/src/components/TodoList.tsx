import type { Todo } from '../type/Todo.type';
import TodoItem from './TodoItem';

type Props = {
    todos: Todo[];//ただの配列
    onToggle: (id: number) => void;
    onDelete: (id: number) => void;
}

const TodoList = ({ todos, onToggle, onDelete }: Props) => {
    return (
        //配列名.mapで一つ一つ要素を取りだせる
        //関数に1つ1つ渡せる
        //keyを割り当てるためのid
        <ul>
            {todos.map(todo => (
                <TodoItem
                    key={todo.id}
                    todo={todo}
                    onToggle={onToggle}
                    onDelete={onDelete}
                />
            ))}
        </ul>
    );
};

export default TodoList;
