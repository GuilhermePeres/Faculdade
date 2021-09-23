alert("Exercício 1");

function Retangulo(x, y) {
    this.x = x;
    this.y = y;
}

function CalcArea(x, y) {
    this.x = x;
    this.y = y;
    this.area = (x * y);
    alert("Área do retângulo = " + this.area);
}

CalcArea.prototype = new Retangulo();
var myRetangulo = new Retangulo(50, 20);

alert("Calculando área do retângulo: " +
    "\n base: " + myRetangulo.x +
    "\n altura: " + myRetangulo.y);

CalcArea(myRetangulo.x, myRetangulo.y);

//--------------------------------------------
//--------------------------------------------
//--------------------------------------------

alert("Exercício 2");

function Conta() {
    var correntista;
    var banco;
    var numeroDaConta;
    var saldo;

    this.getCorrentista = function () {
        return correntista;
    };

    this.getBanco = function () {
        return banco;
    };

    this.getNumeroDaConta = function () {
        return numeroDaConta;
    };

    this.getSaldo = function () {
        return saldo;
    };

    this.setCorrentista = function (value) {
        correntista = value;
    };

    this.setBanco = function (value) {
        banco = value;
    };

    this.setNumeroDaConta = function (value) {
        numeroDaConta = value;
    };

    this.setSaldo = function (value) {
        saldo = value;
    };


}

function Corrente() {
    var saldoEspecial;

    this.getSaldoEspecial = function () {
        return saldoEspecial;
    };

    this.setSaldoEspecial = function (value) {
        saldoEspecial = value;
    };
}

function Poupanca() {
    var juros;
    var dataVencimento;

    this.getJuros = function () {
        return juros;
    };

    this.getDataVencimento = function () {
        return dataVencimento;
    };

    this.setJuros = function (value) {
        juros = value;
    };

    this.setDataVencimento = function (value) {
        dataVencimento = value;
    };
}

Corrente.prototype = new Conta();
Poupanca.prototype = new Conta();

contaCorrente = new Corrente();
contaPoupanca = new Poupanca();

contaCorrente.setBanco('0015');
contaCorrente.setCorrentista('Jilberto');
contaCorrente.setNumeroDaConta('01234567');
contaCorrente.setSaldo('2500');
contaCorrente.setSaldoEspecial('sim');

contaPoupanca.setBanco('0030');
contaPoupanca.setCorrentista('Ana Livia');
contaPoupanca.setNumeroDaConta('987644321');
contaPoupanca.setJuros('0.5%');
contaPoupanca.setDataVencimento('15/06/2025');

alert("Conta Corrente: \n" +
    "Banco: " + contaCorrente.getBanco() + "\n" +
    "Correntista: " + contaCorrente.getCorrentista() + "\n" +
    "Número da conta: " + contaCorrente.getNumeroDaConta() + "\n" +
    "Saldo: " + contaCorrente.getSaldo() + "\n" +
    "Saldo especial: " + contaCorrente.getSaldoEspecial());

alert("Conta Poupança: \n" +
    "Banco: " + contaPoupanca.getBanco() + "\n" +
    "Correntista: " + contaPoupanca.getCorrentista() + "\n" +
    "Número da conta: " + contaPoupanca.getNumeroDaConta() + "\n" +
    "Juros: " + contaPoupanca.getJuros() + "\n" +
    "Data de vencimento: " + contaPoupanca.getDataVencimento());