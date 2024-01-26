#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(){
int numero_tentativas = 0;
int numero_tentativas_max;
int Palpite;
int Numero_da_Sorte = 1+(rand()%100);

    string Nome_do_jogador;
    cout << " Como te chamas? : ";

    cin >> Nome_do_jogador;
    cout << " Bem vindo, " << Nome_do_jogador;

        cout << " Insere o Numero de Tentativas:";
        cin >> numero_tentativas_max;
    
    srand((unsigned) time(0));
    while(numero_tentativas < numero_tentativas_max){ 
    
     cout << " Adivinha o Numero correto:";
        cin >> Palpite;
        numero_tentativas++;
   
     if( Numero_da_Sorte > Palpite ){
       cout << "O número da sorte é maior do que: " << Palpite << endl;
     }else if( Numero_da_Sorte < Palpite){
       cout << "O número da sorte é menor do que: " << Palpite << endl;
     }else{
       cout << Nome_do_jogador << " Parabéns, você acertou!" << endl;
       
     break;
    }
    if (numero_tentativas == numero_tentativas_max){
        cout << "Quase acertas-te " << Nome_do_jogador << ", o numero correto era " << Numero_da_Sorte << "!" <<endl;
    }
    
    }
    cout << "Acabou o jogo!" << endl;
    return 0;
    }