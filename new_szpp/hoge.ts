// classの宣言
class Test {
    // privateよりも強固なprivate化
    // typescript外でも大丈夫
    #test: number = 0;
    // 最初に実行されるコンストラクタ
    constructor() {
    }

    // functionなくていい
    public add()
    {
        this.#test += 10;
    }

    // public get_test()
    // {
    //     return this.#test;
    // }

    // getter&&settetを簡単に書く
    get test() {// ()を消し飛ばせる
        return this.#test;
    }
    set test(num: number) {
        this.#test = num;
    }
}


function main() {
    // Testクラスの変数を宣言
    const t = new Test();
    console.log(t.test);
    t.add();
    console.log(t.test);
}