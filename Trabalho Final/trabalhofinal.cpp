//Aluno: Vitor Dias de Britto Militão - AED's1/2023
#include <iostream>
#include<stdbool.h>
#include <string>
using namespace std;
const int TAM = 100;

//INICIO CLASS DATA
class Data{
    private:
        int dia;
        int mes;
        int ano;

    public:
       void setDia(int dia){
        this->dia=dia;
       }
       void setMes(int mes){
        this->mes=mes;
       }
       void setAno(int ano){
        this->ano=ano;
       }
       int getDia(){
        return dia;
       }
       int getMes(){
        return mes;
       }
       int getAno(){
        return ano;
       }
       void cadastraDataCompleta();
       void escreveDataCompleta();
};

void Data::cadastraDataCompleta() {
    int dia, mes, ano;

    cout << "\nBem-Vindo ao menu de Cadastro de datas!" << endl;

    do {
        cout << "Digite o dia: ";
        cin >> dia;
        if (dia < 1 || dia > 31) {
            cout << "Dia invalido! Digite novamente." << endl;
        }
    } while (dia < 1 || dia > 31);
    setDia(dia);

    do {
        cout << "Digite o mês: ";
        cin >> mes;
        if (mes < 1 || mes > 12) {
            cout << "Mes inválido! Digite um valor entre 1 e 12." << endl;
        }
    } while (mes < 1 || mes > 12);
    setMes(mes);

    cout << "Digite o ano: ";
    cin >> ano;
    setAno(ano);
}

void Data::escreveDataCompleta(){
    int dia= getDia();
    int mes= getMes();
    int ano= getAno();

    cout << "\nData de Nascimento: ";
    cout<<dia<< "/" << mes<<"/"<<ano<<endl;
}

//INICIO CLASS PRINCIPAL - PESSOA
class Pessoa{
    private:
        string nome;
    
    protected:
        Data nascimento;

    public:
        void setNome(string nome)
        {
            this->nome=nome;
        }
        string getNome(){
            return nome;
        }
        void leNome();
        void imprimeNome();
        void lePessoa();
        virtual void imprimePessoa();
        bool verificaAniversariante(int mes); 
        bool verificaMesNascimento(int mes);
        static int N;
};
int Pessoa::N=0;

bool Pessoa::verificaAniversariante(int mes){
    bool aniversariante= false;
    if(nascimento.getMes()== mes){
            aniversariante= true;
        }
    return aniversariante;
}

bool Pessoa::verificaMesNascimento(int mes) {
    return nascimento.getMes() == mes;
}

void Pessoa::leNome() {
    string nome;
    cin.ignore();
    cout << "Digite Nome: " << endl;
    getline(cin, nome);
    setNome(nome);
}

void Pessoa::imprimeNome(){
    string Nome= getNome();
    cout <<""<<Nome<<endl;
}

void Pessoa::lePessoa (){
    leNome(); //FAZ A LEITURA DO NOME
    nascimento.cadastraDataCompleta(); //FAZ A LEITURA DA DATA DE NASCIMENTO
}

void Pessoa::imprimePessoa(){
    cout << "\nNome: " <<getNome()<<endl;
    cout << "ANIVERSARIO: ";
    nascimento.escreveDataCompleta();
}

void listaPessoa(Pessoa* Array[]){
    cout<<"Listagem:"<<endl;
    for(int i =0; i<Pessoa::N; i++){
        Array[i]->imprimePessoa();
    }
    cout<<Pessoa::N;
}

int menu()
{
  int opcao;
  do
  {
    cout << "\nMENU DE OPCOES" << endl;
    cout << "\n0 - Sair" << endl;
    cout << "1 - Cadastrar Aluno" << endl;
    cout << "2 - Cadastrar Professor" << endl;
    cout << "3 - Listar Alunos" << endl;
    cout << "4 - Listar Professores" << endl;
    cout << "5 - Listar todos os Aniversariantes do mes!" << endl;
    cout<<"------------------------"<<endl;
    cout<<"------------------------"<<endl;
    cout << "Sua opcao: ";
    cin >> opcao;

    if (opcao < 0 || opcao > 5)
    {
      cout<<"Selecione uma opção válida!"<<endl;
    }
  } while (opcao < 0 || opcao > 5);

  return opcao;
}

void novoPessoa(Pessoa* pessoa[])
{
   try {
        pessoa[Pessoa::N] = new Pessoa;
        pessoa[Pessoa::N]->lePessoa();
        Pessoa::N++;
    } catch (const bad_alloc& e) {
        cout << "Limite alcançado. Nao sera possivel cadastrar." << endl;
    }
}

//INICIO CLASS ALUNO
class Aluno: public Pessoa{
    private:
        int numMatricula;
    public:
        void setMatricula(int numMatricula) 
       {
        this->numMatricula=numMatricula;
       }
       int getMatricula(){
        return numMatricula;
       }
        static int quantidadeMatriculaAluno;
        void novoAluno(Aluno* aluno[]);
        void cadastraMatricula();
        void leAluno();
        void imprimePessoa() override;
};
int Aluno::quantidadeMatriculaAluno=0;

void Aluno::cadastraMatricula(){
    int mat;
    cout<<"\nDigite o Numero de Matricula"<<endl;
    cin>>mat;
    setMatricula(mat);
}

void novoAluno(Aluno* aluno[])
{
   try {
        aluno[Aluno::quantidadeMatriculaAluno] = new Aluno;
        aluno[Aluno::quantidadeMatriculaAluno]->leAluno();
        Aluno::quantidadeMatriculaAluno++;
    } catch (const bad_alloc& e) {
        cout << "Limite alcançado. Nao sera possivel cadastrar." << endl;
    }
}

void listaAluno(Aluno* Array[]){
    cout<<"Listagem:"<<endl;
    for(int i =0; i<Aluno::quantidadeMatriculaAluno; i++){
        Array[i]->getMatricula();
        Array[i]->imprimePessoa();
    }
}

void Aluno::leAluno (){
    cadastraMatricula(); //FAZ A LEITURA DO NUMERO DE MATRICULA
    leNome(); //FAZ A LEITURA DO NOME
    nascimento.cadastraDataCompleta(); //FAZ A LEITURA DA DATA DE NASCIMENTO
    cout<<"Cadastro completo!"<<endl;
    cout<<"------------------------"<<endl;
}

void Aluno::imprimePessoa() {
    cout << "Nome: " << getNome() << endl;
    cout << "Data de Nascimento: ";
    nascimento.escreveDataCompleta();
    cout << "Numero de Matricula: " << numMatricula << endl; //
}

//INICIO CLASS PROFESSOR
class Professor: public Pessoa{
    private:
        int titulacao;
    public:
        void setTitulacao(int titulacao)
       {
        this->titulacao=titulacao;
       }
       int getTitulacao(){
        return titulacao;
       }
        static int quantidadeTitulacaoProf;
        void cadastraProfessor();
        void imprimePessoa() override;
};
int Professor::quantidadeTitulacaoProf=0;

void Professor::cadastraProfessor(){
    int auxiliar;
    cout<<"Selecione aqui sua titulacao!"<<endl;
    cout<<"Especialista[1]\nMestre[2]\nDoutor[3]"<<endl;
    cin>>auxiliar;
    leNome();
    nascimento.cadastraDataCompleta();
    setTitulacao(auxiliar);
    cout<<"Cadastro completo!"<<endl;
    cout<<"------------------------"<<endl;
    quantidadeTitulacaoProf++;
}

void listaProfessor(Professor* professor[]){
    cout<<"Listagem:"<<endl;
    for(int i =0; i<Professor::quantidadeTitulacaoProf; i++){
        professor[i]->imprimePessoa();
    }
}

void novoProfessor(Professor* professor[])
{
    try {
        professor[Professor::quantidadeTitulacaoProf] = new Professor;
        professor[Professor::quantidadeTitulacaoProf]->cadastraProfessor();
        Professor::quantidadeTitulacaoProf++;
    } catch (const bad_alloc& e) {
        cout << "Limite alcançado. Nao sera possivel cadastrar." << endl;
    }
}

void Professor::imprimePessoa() {
    cout << "Nome: " << getNome() << endl;
    cout << "Data de Nascimento: ";
    nascimento.escreveDataCompleta();
    cout << "Titulacao: " << titulacao << endl; //
}

void listaAniversario(Aluno* aluno[], Professor* professor[]){
    int mes;
    cout << "Digite o mes em questao [mm]: " << endl;
    do {
        cin >> mes;
        if (mes > 12 || mes < 1) {
            cout << "Data invalida. Digite novamente." << endl;
        }
    } while (mes > 12 || mes < 1);

    for (int i = 0; i < Aluno::quantidadeMatriculaAluno; i++) {
        if (aluno[i]->verificaAniversariante(mes)) {
            aluno[i]->imprimePessoa();
            cout << endl;
        }
    }

    for (int i = 0; i < Professor::quantidadeTitulacaoProf; i++) {
        if (professor[i]->verificaAniversariante(mes)) {
            professor[i]->imprimePessoa();
            cout << endl;
        }
    }
    cout << "------------------------" << endl;
}

int main (){
    Pessoa *pessoa[TAM];
    Aluno *aluno[TAM];
    Professor *professor[TAM];
    int opcao;
    
    do{
            opcao=menu();
            switch (opcao){
            case 0:
                cout<<"Obrigado por utilizar."<<endl; // ENCERRA O PROGRAMA
                break;
            case 1:
                novoAluno(aluno); //CADASTRA ALUNO
                break;
            case 2:
                novoProfessor(professor); //CADASTRA PROFESSOR
                break;
            case 3:
                listaAluno(aluno); //LISTA A QUANTIDADE DE ALUNOS
                break;
            case 4:
                listaProfessor(professor); //LISTA A QUANTIDADE DE PROFESSORES
                break;
            case 5: 
                listaAniversario(aluno, professor); //LISTA TODOS OS ANIVERSARIANTES DO MES
                break;
            }
    }while(opcao!=0);  

    return 0; 
}
