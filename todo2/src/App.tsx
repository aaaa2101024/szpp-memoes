import { useState } from 'react'
import './App.css'
import Title from './components/Title'
import TypoForm from './components/TypoForm'
import TypoList from './components/TypoList'

function App() {
 const [typo, setTypo] = useState<string>("");
 const [typoList, setTypoLists] = useState<string[]>([]);


 return (
    <>
    {/*表題 */}
    <Title />
    {/*入力 */}
    <TypoForm typo={typo} setTypo={setTypo} typoLists={typoList} setTypoLists={setTypoLists}/>
    {/*ここまで入力フォーム*/}
    {/* typoリスト */}
    <TypoList typoList={typoList}/>
    </>
  )
}

export default App

