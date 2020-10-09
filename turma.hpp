#ifndef _TURMA_
#define _TURMA_

#include <iostream>

#include "aluno.hpp"

using namespace std;

#define CAPACIDADE_MAX 10


class Turma{
  string nome;
  string id;
  Aluno* alunos[CAPACIDADE_MAX];
  int capacidade = 0;

public:

  Turma();
  Turma(string nome, string id);
  string getNome();
  void setNome(string nome);
  string getId();
  void setId(string id);
  void listarAlunos();
  int getCapacidade();
  void addAluno(Aluno* novo);
  void removePeloNome(string nome);
  void removePeloCpf(string cpf);
  void removePeloEmail(string email);
};

#endif