console.log("sudo rm -rf /");
let variable = 10;
var v = 100;
const c = 100;

console.log(v);

//num := 5
// num == new Num;

v = "aaaaa";
console.log(v);

variable += 100;
variable *= 100;
console.log(variable);

if (variable >= 100)
{
    console.log("fuga");
}
else if (variable === 0)
{
    console.log("hoge");
}

let hoge = 10;
for (let i = 0; i < hoge; i++)
{
    console.log(i);
}

function func(num, txt)
{
    console.log(num + "回");
    console.log(txt + "大学で寝る")
}

func(10, "静岡");

// DOM操作しよう！！！
let num1 = document.getElementById("num1");
console.log(num1.textContent);

const num2 = document.getElementsByClassName("class1");
num2[0].innerTEXT = '<h3>おはようございます！</h3>';

// jquery
$(function () {
    $(".class1").css("color", "red");
})
