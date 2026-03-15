/** @type {Array<string>} */
let input = require("fs")
    .readFileSync("/dev/stdin", "utf8")
    .split("\n")
    .map((str) => str.split(" "))
    .flat(),
  i = 0n;

(() => {
  const sortFunc = Array.prototype.sort;
  // 数字のsort
  Array.prototype.sort = function sort(compareFunc) {
    if (compareFunc) return sortFunc.call(this);
    else return sortFunc.call(this, (a, b) => a - b);
  };
  // 文字列のsort
  Array.prototype.charSort = sortFunc;
})();

const { readNumber, readBigInt, readString, log } = {
  readNumber() {
    const t = input[i];
    i++;
    if (t === "") return readNumber();
    return Number(t);
  },
  readBigInt() {
    const t = input[i];
    i++;
    if (t === "") return readBigInt();
    return BigInt(t);
  },
  readString() {
    const t = input[i];
    i++;
    if (t === "") return readString();
    return String(t);
  },
  log: console.log,
};
const datas = {
  alphabet: [
    "a",
    "b",
    "c",
    "d",
    "e",
    "f",
    "g",
    "h",
    "i",
    "j",
    "k",
    "l",
    "m",
    "n",
    "o",
    "p",
    "q",
    "r",
    "s",
    "t",
    "u",
    "v",
    "w",
    "x",
    "y",
    "z",
  ],
  /** @type {(length: number) => string[]} */
  readStrings: (length) => {
    const arr = [];
    for (let i = 0; i < length; i++) arr.push(readString());
    return arr;
  },
  /** @type {(length: number) => number[]} */
  readNumbers: (length) => {
    const arr = [];
    for (let i = 0; i < length; i++) arr.push(readNumber());
    return arr;
  },
  /** @type {(length: number) => bigint[]} */
  readBigInts: (length) => {
    const arr = [];
    for (let i = 0; i < length; i++) arr.push(readBigInt());
    return arr;
  },
};

function main() {
    let a = readNumber();
    let b = readNumber();
    let c = readNumber();
    let x = a;
    let y = b;
    for (let i = 0; i < 10000; i++){
        if (b * c == a)
        {
            console.log("Yes");
            process.exit();
        }
        a++;
        b++;
    }
    console.log("No");
    process.exit();
}

main();