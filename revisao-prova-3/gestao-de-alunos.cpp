#include <iostream>
#include <string>

using namespace std;

class Aluno {
private:
    int matricula;
    string nome;
    string curso;
    int periodo;

public:
    //padrao
    Aluno() {
        matricula = 0;
        nome = "";
        curso = "";
        periodo = 0;
    }
    //com atributos
    Aluno(int matricula, string nome, string curso, int periodo) {
        this->matricula = matricula;
        this->nome = nome;
        this->curso = curso;
        this->periodo = periodo;
    }

    //metodos set
    

};