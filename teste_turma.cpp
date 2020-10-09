#include <iostream>

#include "turma.hpp"

using namespace std;

int main(int argc, char const *argv[]){

  Turma imd0030("Linguagem de programação I","IMD0030");
  
  Aluno* maria = new Aluno("Maria Antonieta","123456789-11",12345,"maria@escolinha.com.br","94509-3456");
  
  imd0030.addAluno(maria);
  
  Aluno* jaspion = new Aluno("Jaspion police","47792937347",7544,"jaspion@manchete.com.br","97654-9876");

  imd0030.addAluno(jaspion);

  Aluno* lampiao = new Aluno("Lampião bandido","000000666",256346547,"lampiao@nordestebr","");
  
  imd0030.addAluno(lampiao);
  

  cout << imd0030.getId() << " _ " << imd0030.getCapacidade() << "/" << CAPACIDADE_MAX << endl;

  imd0030.listarAlunos();

  imd0030.removePeloNome("Qualquer um");
  imd0030.removePeloCpf("47792937347");

  cout << imd0030.getId() << " _ " << imd0030.getCapacidade() << "/" << CAPACIDADE_MAX << endl;

  imd0030.listarAlunos();

  return 0;
}