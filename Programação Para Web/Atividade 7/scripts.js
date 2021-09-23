var num1 = parseInt(prompt("Digite o primeiro numero: "));
var num2 = parseInt(prompt("Digite o segundo numero: "));
var num3 = parseInt(prompt("Digite o terceiro numero: "));


alert("O número maior é: " + max(num1, num2, num3));


function max(num1, num2, num3) {

    if (num1 >= num2 && num1 >= num3) {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        return num2;
    }
    else if (num3 >= num1 && num3 >= num2) {
        return num3;
    }
}