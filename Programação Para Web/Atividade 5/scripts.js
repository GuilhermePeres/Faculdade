alert("Exercício 1: Calcular Media do Aluno");

var nome = prompt("Digite o nome do aluno: ");

var nota1 = parseFloat(prompt("Digite a primeira nota: "));

var nota2 = parseFloat(prompt("Digite a segunda nota: "));

var nota3 = parseFloat(prompt("Digite a terceira nota: "));

alert("A media do aluno é: " + ((nota1 + nota2 + nota3) / 3));

if (window.confirm("Deseja ir ao exercício 2?")) {
    alert("Exercício 2: Operações com dois números: ");

    var num1 = parseFloat(prompt("Digite o primeiro número: "));

    var num2 = parseFloat(prompt("Digite o segundo número: "));

    alert("A soma dos dois: " + (num1 + num2));
    alert("A subtração do primeiro pelo segundo: " + (num1 - num2));
    alert("O produto dos dois: " + (num1 * num2));
    alert("A divisão do primeiro pelo segundo: " + (num1 / num2));
    alert("O resto da divisão do primeiro pelo segundo: " + (num1 % num2));
}
