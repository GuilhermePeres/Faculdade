function Jogar() {
    var opc = document.getElementById("opcao");
    var selecionado = opc.value;

    var computador = Math.floor(Math.random() * 3);

    /* 
        0 == pedra
        1 == papel
        2 == tesoura 
    */

    if (selecionado == "pedra") {
        if (computador == 0) {
            alert("COMPUTADOR ESCOLHEU PEDRA \n EMPATE!")
        }
        else {
            if (computador == 1) {
                alert("COMPUTADOR ESCOHEU PAPEL \n VOCÊ PERDEU!");
            }
            else {
                if (computador == 2) {
                    alert("COMPUTADOR ESCOLHEU TESOURA \n VOCÊ VENCEU!");
                }
            }
        }
    }
    else {
        if (selecionado == "papel") {
            if (computador == 0) {
                alert("COMPUTADOR ESCOLHEU PEDRA \n VOCÊ VENCEU!")
            }
            else {
                if (computador == 1) {
                    alert("COMPUTADOR ESCOHEU PAPEL \n EMPATE!");
                }
                else {
                    if (computador == 2) {
                        alert("COMPUTADOR ESCOLHEU TESOURA \n VOCÊ PERDEU!");
                    }
                }
            }
        }
        else {
            if (selecionado == "tesoura") {
                if (computador == 0) {
                    alert("COMPUTADOR ESCOLHEU PEDRA \n VOCÊ PERDEU!")
                }
                else {
                    if (computador == 1) {
                        alert("COMPUTADOR ESCOHEU PAPEL \n VOCÊ VENCEU!");
                    }
                    else {
                        if (computador == 2) {
                            alert("COMPUTADOR ESCOLHEU TESOURA \n EMPATE!");
                        }
                    }
                }
            }
        }
    }
}