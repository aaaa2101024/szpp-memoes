type Prop = {
    typoList:string[];
}

export default function TypoList(prop:Prop){
    const typoList:string[] = prop.typoList;
    return (
        <div>
            <ul>
                {typoList.map((typo:string,index:number) => {
                    return (<li id={index.toString()}>{typo}</li>)
                })}
            </ul>
        </div>
    )
}