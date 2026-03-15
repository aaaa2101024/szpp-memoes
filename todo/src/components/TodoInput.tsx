// src/components/TodoInput.tsx

import { useState } from 'react';//usestateをいれる

type Props = {
    onAdd: (text: string) => void;
}

// 責任を逃すためにバラバラにした一つ一つをコンポーネント
// に渡す.
// べた書きしていたのを、コンポーネントで作れる
// propsで更新したり追加したりできる、関数の
// 関数: 引数の名前: 型 => 返り血の型
// これを関数で宣言しているぐらい
// 


//ここからページ
//Props型のonaddを受け取る

const TodoInput = ({ onAdd }: Props) => {
    //フォームの入力を保存するやつです
    const [text, setText] = useState('');

    //イベント完治でなんかする
    const handleSubmit = (e: React.FormEvent) => {
        e.preventDefault();
        if (text.trim()) {
            onAdd(text);
            setText('');
        }
    };
    //簡単に言うなら、テキストの中身が存在するなら、addして無にする

    return (
        <form onSubmit={handleSubmit}>
            <input
                type="text"
                placeholder='新しいタスク'
                value={text}
                onChange={(e) => setText(e.target.value)}
            ></input>
            <button type="submit">追加</button>
        </form>
    );
};

//ここまでして、関数の中身自体は定義してないので、定義しに行く

export default TodoInput;
