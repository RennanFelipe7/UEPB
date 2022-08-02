var AlunosJson = require('./Alunos.json')

var alunos = AlunosJson.alunos

console.log("\nAbaixo se encontra a situação dos alunos : ")

for(var i = 0; i < alunos.length; i++){
    if(alunos[i].Media >= 7){
        console.log("\nO aluno " + alunos[i].Nome + " foi APROVADO com média = " + alunos[i].Media)
    }else if(alunos[i].Media <= 6.9 && alunos[i].Media >= 4){
        console.log("\nO aluno " + alunos[i].Nome + " ficou para a PROVA FINAL com média = " + alunos[i].Media)
    }else{
        console.log("\nO aluno " + alunos[i].Nome + " foi REPROVADO com média = " + alunos[i].Media)
    }    
}
