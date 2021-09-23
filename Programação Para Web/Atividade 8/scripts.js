//-----------
//1° Forma
//-----------
alert("Utilizando a 1° forma:" +
    "\n var Aluno1 = new Object();" +
    "\n Aluno1.ra = ''123456789'';" +
    "\n Aluno1.nome = ''Fulano Ciclano'';");

var Aluno1 = new Object();
Aluno1.ra = "123456789";
Aluno1.nome = "Fulano Ciclano";

alert("Testando a primeira forma: " +
    "\n RA: " + Aluno1["ra"] +
    "\n Nome: " + Aluno1["nome"]);


//-----------
//2° Forma
//-----------
alert("Utilizando a 2° forma:" +
    "\n var Aluno2 = {};" +
    "\n Aluno2[''ra''] = ''123456789'';" +
    "\n Aluno2[''nome''] = ''Fulano Ciclano'';");

var Aluno2 = {};
Aluno2["ra"] = "123456789";
Aluno2["nome"] = "Fulano Ciclano";

alert("Testando a segunda forma: " +
    "\n RA: " + Aluno2.ra +
    "\n Nome: " + Aluno2.nome);


//----------
//3°Forma
//----------
alert("Utilizando a 3° forma:" +
    "\n var Aluno3 = {" +
    "\n ra: ''123456789''," +
    "\n nome: ''Fulano Ciclano''");

var Aluno3 = {
    ra: "123456789",
    nome: "Fulano Ciclano"
};

alert("Testando a terceira forma: " +
    "\n RA: " + Aluno3.ra +
    "\n Nome: " + Aluno3.nome);