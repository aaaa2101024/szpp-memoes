type Prop = {
    typoList: string[],
    typeList: string[]
}

export default function show(prop: Prop) {
    return (
        <table>
            <thead>
                <tr>
                    <th>typo</th>
                    <th>type</th>
                </tr>
            </thead>
            <tbody>
                {prop.typoList.map((typo: string, index: number) => {
                    const type = prop.typeList[index];
                    return (
                        <tr key={index.toString()}>
                            <td>{typo}</td>
                            <td>{type}</td>
                        </tr>
                    )
                })}
            </tbody>
        </table>
    )
}