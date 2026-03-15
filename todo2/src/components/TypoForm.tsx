import type React from "react";
type Prop = {
    typo:string;
    setTypo:(typo:string) => void;
    typoLists:string[];
    setTypoLists:(typoLists:string[]) => void;
}

export default function TypoForm(prop: Prop) {
    const handleInputValue = (e:React.ChangeEvent<HTMLInputElement>) => {
        prop.setTypo(e.target.value);
    }

    const handleAddTypoLists = () => {
        prop.setTypoLists([...prop.typoLists,prop.typo]);
    }
    console.log(prop.typoLists);
    return (
        <div>
            <input type="typo" placeholder="daaaa" onChange={handleInputValue}></input>
            <input type="button" value="sousinn" onClick={handleAddTypoLists}></input>
        </div>
    )
}