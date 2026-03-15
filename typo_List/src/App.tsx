import { useState } from 'react'
import './App.css'
import Title from './Components/Title'
import Form from './Components/Form';
import Show from './Components/Show'

function App() {
  const [typo,setTypo] = useState<string>("");
  const [typoList,setTypoList] = useState<string[]>([]);
  const [type,setType] = useState<string>("");
  const [typeList,setTypeList] = useState<string[]>([]);

  return (
    <>
    {/*タイトルとか */}
    <Title />
    {/*入力欄 */}
    <Form typo={typo} type={type} typoList={typoList} typeList={typeList} setTypo={setTypo} setType={setType} setTypoList={setTypoList} setTypeList={setTypeList}/>
    {/*表示用(typo,type) */}
    <Show typoList={typoList} typeList={typeList}/>
    </>
  )
}

export default App
