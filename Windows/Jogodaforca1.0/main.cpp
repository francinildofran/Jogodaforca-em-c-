#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char palavra[4] = {'c','a','s','a'};
    char op[4] = {};
    int j = 1;

    cout << "           ==================================== \n";
    cout << "           |        JOGO DA FORCA   1.0       | \n";
    cout << "           ==================================== \n";

    for(int i =0; i<4;i++,j++){


        while(op[i] != palavra[i]){
        cout << " \"Dica: Local de moradia. \" \n";
        cout << "Digite uma letra, a palavra tem 4 letras: ";
        cin >> op[i];
        if(op[i] == palavra[i]){
            cout << "Acertou a letra: (" << palavra[i] << ")" << endl;
            cout << "Numero de acertos: " << j << "\n" << endl;
        }else{
            cout << "Errou ! \n";
            cout << "Tente novamente. \n\n";
        }

      }

    }

    system("cls");

    cout << "Parabens !!!!!!!\n";
    cout << "A palavra e: ";

      for(int i =0; i<4;i++){
      cout << palavra[i];
      }

    cout << "\n\n";

    system("pause");
    return 0;
}
