#include<iostream>
#include<queue>

using namespace std;


int main() // funcao principal
{
    int opcao;// variavel do tipo inteiro para estrutura de controle
    string nome;
    int horas;

    cout << "Bem-Vindo a Ngonha Lubrificantes!" <<endl;


    do{ // Estrutura do controle

                queue<int> senha; // Criacao da fila
                for(int i=0; i<10; i++){
                    senha.push(i);
                }


            //Menu de opcoes para o usuario
            cout << "Digite 0 para parar o programa \n";
            cout << "Digite 1 para  Senha chamada/Cliente em atendimento\n";
            cout << "Digite 2 para Proximo cliente  = numero de senha \n";
            cout << "Digite 3 para Numero total de senhas tiradas \n";
            cout << "Digite 4 para Senhas por atender \n";
            cout << "Digite 5 para imprimir numero de senhas \n";
            cin>> opcao;

            if(opcao==1){
                    cout << "Digite o nome do cliente: \n";
                    cin >> nome;
                    cout << "Digite a hora \n";
                    cin >> horas;
                    cout << "Nome do cliente: "<< nome<< endl;
                    cout << "Cliente em atendimento/senha chamada: "<< senha.front() << endl;
                    cout << "Horas de atendimento: "<< horas << "h" << endl;

            }
            if(opcao==2){
                cout << "Digite o nome do cliente: \n";
                cin >> nome;
                cout << "Nome do cliente: "<< nome<< endl;
                cout << "Proximo cliente: "<< senha.front()+1 << endl;

            }
            if(opcao==3){
                cout << "Numero total de senhas tiradas: " << senha.front()-- <<endl;

            }
            if(opcao==4){
                cout << "Senhas por atender: " <<senha.size()-senha.front() << endl;

            }
            if(opcao==5){
                    cout << "O total de senhas e: " << senha.size()<< endl;

            }

    }while(opcao!=0);



    return 0;
}
