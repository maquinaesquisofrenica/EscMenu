#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	char opcao;
	bool funcionando = true;
	while(opcao != 27){ // 27 corresponde ao valor do botao ESC
		cout << "Menu" << endl;
		cout << "1 - Opcao" << endl;
		cout << "2 - Opcao" << endl;
		cout << "3 - Opcao" << endl;
		cout << "Pressione Esc para sair";
		cout << "\n\nEscolha: ";  
		opcao = getche(); // le o primeiro caracter do teclado
		setbuf(stdin,NULL); // limpa o buffer
		system("cls"); // limpa a tela
		switch(opcao){
			case 27:{
				cout << "Ate mais!!!" << endl;
				break;
			}
			case '1':{
				cout << "Opcao 1" << endl;
				break;
			}
			case '2' :{
				cout << "Opcao 2" << endl;
				break;
			}
			case '3':{
				cout << "Opcao 3" << endl; 
				break;
			}
			default:{
				cout << "Pressione Esc para sair" << endl;
				break;
			}
		}
		    system("pause");
			system("cls");	
	} // fim while
	
	return 0;	
}
