#include <iostream>
#include "aluno.hpp"


Aluno::Aluno (){
  this->nome = "Indigente";

}
Aluno::Aluno (string nome, string cpf, int matricula, string email, string  telefone){
  this->nome = nome;
  this->cpf = cpf;
  this->matricula = matricula;
  this->email = email;
  this->telefone = telefone;
}
Aluno::~Aluno (){

}

string Aluno::getNome(){
  return this->nome;
}
void Aluno::setNome(string nome){
  this->nome = nome;
}
string Aluno::getCpf(){
  return this->cpf;
}
void Aluno::setCpf(string cpf){
  this->cpf = cpf;
}
int Aluno::getMatricula(){
  return this->matricula;
}
void Aluno::setMatricula(int matricula){
  this->matricula = matricula;
}
string Aluno::getEmail(){
  return this->email;
}
void Aluno::setEmail(string email){
  this->email = email;
}
string Aluno::getTelefone(){
  return this->telefone;
}
void Aluno::setTelefone(string telefone){
  this->telefone = telefone;
}