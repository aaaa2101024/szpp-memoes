import type React from "react"

type Prop = {
    typo:string,
    type:string,
    typoList:string[]
    typeList:string[]
    setTypo:(typo:string) => void,
    setType:(type:string) => void,
    setTypoList:(typoList:string[]) => void,
    setTypeList:(typelist:string[]) => void
}
export default function Form(prop:Prop){
    //こうすると、更新されるたびに読まれるらしい
    const handleInputTypoValue = (e:React.ChangeEvent<HTMLInputElement>) => {
        prop.setTypo(e.target.value);
    }
    const handleInputTypeValue = (e:React.ChangeEvent<HTMLInputElement>) => {
        prop.setType(e.target.value);
    }
    const handleAddList = () => {
        prop.setTypoList([...prop.typoList, prop.typo]);
        prop.setTypeList([...prop.typeList, prop.type]);
        prop.setTypo('');
        prop.setType('');
    }

    return (
        //omchangeのおかげで、なんか入力するたびに更新がかかる
        <div>
            <input type="text" placeholder="typoを入力" value={prop.typo} onChange={handleInputTypoValue}/>
            <input type="text" placeholder="typeを入力" value={prop.type} onChange={handleInputTypeValue}/>
            <input type="button" value="daaaa" onClick={handleAddList}/>
        </div>
    )
}