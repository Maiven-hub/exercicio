#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <fstream>
#include "function.h"

using namespace std;

int main()
{
    SetConsoleTitleA("Labirinto"); /// Define a program title
    bool is_running = true;
    int dif = 1;
    int opcao_menu;
    player contador;
    while (is_running)
    {
        int vida=100;
        system("cls");
        opcao_menu = menu_principal(dif);
        system("cls");
        switch(opcao_menu)
        {
        case 1:

            system("cls");
            if (dif == 1){mapaFacil(dif,&contador.vida);}
            else if (dif == 2){mapaMedio(dif,&contador.vida);}
            else if (dif == 3){mapaDificil(dif,&contador.vida);}
            else if (dif == 4){

            mapaFacil(dif,&contador.vida);
            if(contador.vida>0)
            {
            mapaMedio(dif,&contador.vida);
            if(contador.vida>0)
            {
            mapaDificil(dif,&contador.vida);
            }
            vitoria(dif, contador.passos,contador.pontos);
            }else{
            break;
              }
            }
            break;
        case 2:
            system("cls");
            break;
        case 3:
            system("cls");
            sobre_jogo();
            system("cls");
            break;
        case 4:
            system("cls");
            dif = mododeJogo();
            system("cls");
            break;
        case 5:
            is_running = false;
            break;
        }
    }
return 0;
}
