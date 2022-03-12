#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <fstream>

using namespace std;

int mododeJogo(int);
///STRUCTS
struct player
{
    int passos = 0;
    int vida = 100;
    int pontos= 0;
    int chave=0;

};
struct POSICAOINICIAL/// POSI�AO INICIAL DE CADA MAPA SEPARADO
{
    int x1 = 18;
    int y1 = 0;

    int x2 = 0;///mapa 2
    int y2 = 9;

    int x3 = 0;///mapa 3
    int y3 = 1;
};
struct POSICAOFINAL /// POSI�AO FINAL DE CADA MAPA
{
    int x1 = 3;///mapa 1
    int y1 = 19;

    int x2 = 18;///mapa 2
    int y2 = 19;

    int x3 = 19;///mapa 3
    int y3 = 18;
};
struct TELEPORTE
{
int x1 = 10;
int y1 = 2;
int xx = 18;
int yy = 10;

int xa = 18;
int xb = 18;
int xc = 12;
int xd = 5;//mapa facil



int x2 = 3;
int y2 = 7;
int xv = 13;
int yv = 1;

int x3 = 15;
int y3 = 18;
int xz = 13;
int yz = 10;//mapa medio



int bx = 18;
int by = 3;
int cx = 1;
int cy = 5;

int dx = 1;
int dy = 14;
int ex = 1;
int ey = 18;

int fx = 3;
int fy = 7;
int gx = 17;
int gy = 12;

};
struct ARMADILHA
{
int dano = 40;
int dano2 = 10;
int reg = 20;

};

///FUN��ES


int menu_principal(int dif)///menu principal
{
    system("cls");
    int opcao;
    while (opcao>5 || opcao<1) ///enquanto o usu�rio nao digitar uma tecla v�lida imprime o menu principal
        {
        cout << "-----------------------------" << endl;
        cout << "                           " << endl;
        cout << "   1 - NOVO JOGO           " << endl;
        cout << "                           " << endl;
        cout << "   2 - CONTINUAR           " << endl;
        cout << "                           " << endl;
        cout << "   3 - SOBRE               " << endl;
        cout << "                           " << endl;
        cout << "   4 - MODO DE JOGO        " << endl;
        cout << "                           " << endl;
        cout << "   5 - FIM                 " << endl;
        cout << "                           " << endl;
        cout << "   Modo de jogo = "<<dif<< endl;
        cout << "----------------------------"  << endl;
        cin>> opcao;
        system("cls");
        return opcao;
        }


}
void derrota(int dif,int contador,int *VIDA)
{
        int voltar = 0;
        while (voltar != 1)///enquanto o usu�rio nao digitar uma tecla v�lida imprime o menu
        {
        cout << "---------------------------------------" << endl;
        cout << "                                     " << endl;
        cout << "            VOCE PERDEU '-'           " << endl;
        cout << "                                     " << endl;
        cout << "             "<<contador<<" MOVIMENTOS.          " << endl;
        cout << "                                     " << endl;
        cout << "     TECLE 1 PARA VOLTAR AO MENU      " << endl;
        cout << "--------------------------------------"  << endl;
        cin>> voltar;
        if (dif==4){
            *VIDA=0;
        }
         if (voltar == 1)///caso ele tecle uma tecla v�lida, ele volta ao menu principal
        {
            system("cls");
        }
    }


}

void vitoria(int dif, int contador,int contador2)
{
        int voltar = 0;
        while (voltar != 1)///enquanto o usu�rio nao digitar uma tecla v�lida imprime o menu
        {
        cout << "---------------------------------------" << endl;
        cout << "                                     " << endl;
        cout << "            VOCE VENCEU!!!           " << endl;
        cout << "                                     " << endl;
        cout << "             "<<contador<<" MOVIMENTOS.     " << endl;
        cout << "               "<<contador2<<"  pontos!        " << endl;
        cout << "                                          " << endl;
         cout << "     TECLE 1 PARA VOLTAR AO MENU           " << endl;
        cout << "--------------------------------------"  << endl;
        cin>>voltar;
        }
         if (voltar == 1)///caso ele tecle uma tecla v�lida, ele volta ao menu principal
        {
            system("cls");
          }
        }




int mododeJogo()/// menu de op�oes de jogo
{
    int opcao_menu;
    while (opcao_menu>4 || opcao_menu<1)//enquanto o usu�rio nao digitar uma tecla v�lida imprime o menu
    {
    cout <<"----------------------------------" <<endl;
    cout <<"|                                |" <<endl;
    cout <<"|   1 - FACIL                    |" <<endl;
    cout <<"|                                |" <<endl;
    cout <<"|   2 - MEDIO                    |" <<endl;
    cout <<"|                                |" <<endl;
    cout <<"|   3 - DIFICIL                  |" <<endl;
    cout <<"|                                |" <<endl;
    cout <<"|   4 - TODOS OS MAPAS           |" <<endl;
    cout <<"|        EM SEQUENCIA            |" <<endl;
    cout <<"|                                |" <<endl;
    cout <<"---------------------------------"  <<endl;
    cin>> opcao_menu;
    }
    system("cls");
    return opcao_menu;
}

void sobre_jogo()// menu sobre.
{
    bool voltar = true;
    while (voltar)//enquanto o usu�rio nao digitar uma tecla v�lida imprime o menu
        {
        cout<<" ---------------------------------"<<endl;
        cout<<"|                                |"<<endl;
        cout<<"|    REGRAS???? NAO HA REGRAS,   |"<<endl;
        cout<<"|      APENAS TENTE CHEGAR AO    |"<<endl;
        cout<<"|         FINAL DO MAPA!         |"<<endl;
        cout<<"|                                |"<<endl;
        cout<<"|                                |"<<endl;
        cout<<"|    Feito por: Weslley Maiven   |"<<endl;
        cout<<"|       github: maiven-hub       |"<<endl;
        cout<<"|                                |"<<endl;
        cout<<"|  Tecle 1 para voltar ao menu.  |"<<endl;
        cout<< "--------------------------------"<<endl;
        cin>> voltar;
         if (voltar ==1)//caso ele tecle uma tecla v�lida, ele volta ao menu principal
            {
            system("cls");
            voltar = false;
            }
        }

}


///MODOS DE JOGO

int mapaFacil(int dif,int *VIDA)
{
    ///INICIO: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; /// set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    ///FIM: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
    ///IN�CIO: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA
    COORD coord;
    ///FIM: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA
    POSICAOINICIAL I;/// I = inicio
    POSICAOFINAL F;/// F = final
    TELEPORTE T;
    ARMADILHA A;
    player contador;
    *VIDA = contador.vida;
    char Tecla;
    int jogadorPosicaoX = I.x1;///valor que vem pre - definido para cada mapa 18
    int jogadorPosicaoY = I.y1;///0
    int teste;///vari�vel usada para verificar se o lugar desejado a ir, nao � uma parede
    int mapaFacil[20][20];
    ifstream mapa;
    int l, c;
    mapa.open("mapaFacil.txt");
    mapa >> l;
    mapa >> c;
    for (int i=0;i<l;i++){
        for (int j=0;j<c;j++){
            mapa >> mapaFacil[i][j];
        }
    }
    mapa.close();
                        bool jogo = true;///RODAR PARA SEMPRE, A NAO SER QUE SEJA BREAKADO
                        while (jogo)
                        {
                            for (int li = 0; li < 20; li++)
                            {
                                for (int co = 0; co < 20; co++)
                                {
                                    if (li == jogadorPosicaoX && co == jogadorPosicaoY)
                                    {
                                        cout << char(1);///char do personagem principal
                                    }
                                    else
                                    {
                                        switch (mapaFacil[li][co])
                                        {
                                            case 0: cout << " "; ///char do caminho livre
                                                break;
                                            case 1: cout << char(178);/// char da parede
                                                break;
                                            case 2: cout << "-";//PONTOS
                                                break;
                                            case 3: cout << char(3);//PONTO DE VIDA EXTRA
                                              break;
                                            case 4: cout << "@"; // TELEPORTE
                                                break;
                                            case 5: cout << char(157);//armadilha forte
                                                break;
                                            case 6: cout << char(42);//chave
                                                break;
                                            case 7: cout << char(15);// porta
                                                break;
                                            case 8: cout << char(33);//porta aberta
                                                break;
                                            case 10: cout << char(169);//bomba hit kill
                                                break;
                                            case 11: cout << "o";//ARMADILHA SIMPLES
                                                break;
                                        }
                                    }
                                }
                                cout << "\n";
                            }

                            cout << "Passos = "<< contador.passos<<" || "<<" Pontos = "<<contador.pontos<<" || "<<char(3)<<contador.vida;


                            if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY]==0){//caminho livre
                                teste=0;
                            }
                            if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY]==11){
                                *VIDA=contador.vida-A.dano2;

                                mapaFacil[jogadorPosicaoX][jogadorPosicaoY]=0;

                            }

                            if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY]==5){//ARMADILHA 1
                                *VIDA=contador.vida-A.dano;

                                mapaFacil[jogadorPosicaoX][jogadorPosicaoY]=11;
                                jogadorPosicaoX=18;
                                jogadorPosicaoY=0;


                            }
                            if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY]==10){
                                *VIDA=0;

                            }

                            if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY]==3){ //regenera��o
                                *VIDA=contador.vida+A.reg;

                                teste=3;
                                mapaFacil[jogadorPosicaoX][jogadorPosicaoY]=0;

                            }
                            if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY]==2){//pontos
                                contador.pontos++;
                                mapaFacil[jogadorPosicaoX][jogadorPosicaoY]=0;

                            }
                            if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY]==6){//chave
                                contador.chave=1;
                                mapaFacil[jogadorPosicaoX][jogadorPosicaoY]=0;
                                teste = 6;
                            }
                            if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY]==8){//porta aberta
                                teste=8;
                                contador.chave=0;
                            }

                             //TELEPORTE
                            if (jogadorPosicaoX==T.x1 && jogadorPosicaoY==T.y1){
                                jogadorPosicaoX=T.xx;
                                jogadorPosicaoY=T.yy+1;

                            }
                            if (jogadorPosicaoX==T.xx && jogadorPosicaoY==T.yy){
                                jogadorPosicaoX=T.x1;
                                jogadorPosicaoY=T.y1+1;

                            }
                            if (jogadorPosicaoX== T.xa && jogadorPosicaoY == T.xb){
                                jogadorPosicaoX=T.xc-1;
                                jogadorPosicaoY=T.xd;
                            }
                            if (jogadorPosicaoX== T.xc && jogadorPosicaoY == T.xd){
                                jogadorPosicaoX=T.xa-1;
                                jogadorPosicaoY=T.xb;
                            }
                            //DERROTA
                            if (*VIDA<=0){
                                system("cls");
                                jogo = false;
                                derrota(dif,contador.passos,*&VIDA);
                            //VITORIA
                            }else if (jogadorPosicaoX == F.x1 && jogadorPosicaoY == F.y1) // caso o personagem chegue no final do mapa ele finaliza o mapa
                            {
                                if(dif == 1)
                                {
                                   system("cls");
                                   jogo = false;
                                   vitoria(dif, contador.passos,contador.pontos);///CHAMA A FUNCAO DE AGRADECIMENTO
                                }
                            jogo = false;
                            }

                            if (teste == 1)
                            {
                                cout << "  Parede no caminho!  ";
                            }
                            else if (teste==0)
                            {
                                cout << "                    ";
                            }
                            else if (teste==3)
                            {
                                cout<< "ganhou 20 de *VIDA";
                            }
                            else if (teste==6)
                            {
                                cout<< endl << "voce pegou a chave";
                            }
                            else if (teste==8)
                            {
                                cout<< endl<< "voce usou a chave";
                            }
                            Tecla = getch();
                            switch(Tecla)

                            {
                             case 72:

                                     if (mapaFacil[jogadorPosicaoX-1][jogadorPosicaoY] == 1){//parede
                                        teste = 1;
                                     }else if (mapaFacil[jogadorPosicaoX-1][jogadorPosicaoY] == 7){
                                      teste = 7;
                                      if(contador.chave==1){
                                            mapaFacil[jogadorPosicaoX-1][jogadorPosicaoY] = 8;
                                      }
                                    }
                                    else if (mapaFacil[jogadorPosicaoX-1][jogadorPosicaoY]== 0,4,3,2,5,6,8,11)
                                     {
                                        jogadorPosicaoX--;
                                        contador.passos ++;
                                        teste = 0;
                                     }
                                    break;

                                case 75:
                                      if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY-1] == 1){//parede
                                        teste = 1;
                                      }else if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY-1] == 7){
                                      teste = 7;
                                       if(contador.chave==1){
                                            mapaFacil[jogadorPosicaoX][jogadorPosicaoY-1] = 8;
                                            contador.chave=0;
                                      }
                                      }

                                     else if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY - 1]== 0,4,3,2,5,6,8,11)
                                     {
                                        jogadorPosicaoY--;
                                        contador.passos ++;
                                        teste = 0;
                                     }
                                    break;

                                case 77:
                                      if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY+1] == 1){//parede
                                        teste = 1;
                                     }else if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY+1] == 7){
                                      teste = 7;
                                       if(contador.chave==1){
                                            mapaFacil[jogadorPosicaoX][jogadorPosicaoY+1] = 8;
                                      }
                                      }
                                    else if (mapaFacil[jogadorPosicaoX][jogadorPosicaoY+1] ==  0,4,3,2,5,6,8,11)
                                     {
                                         jogadorPosicaoY++;
                                         contador.passos ++;
                                         teste = 0;
                                     }
                                    break;


                                case 80:
                                     if (mapaFacil[jogadorPosicaoX+1][jogadorPosicaoY] == 1){//parede
                                        teste = 1;
                                      }else if (mapaFacil[jogadorPosicaoX + 1][jogadorPosicaoY] == 7){
                                      teste = 7;
                                       if(contador.chave==1){
                                            mapaFacil[jogadorPosicaoX+1][jogadorPosicaoY] = 8;
                                       }
                                      }

                                     else if (mapaFacil[jogadorPosicaoX + 1][jogadorPosicaoY] ==  0,4,3,2,5,6,8,11)
                                     {
                                        jogadorPosicaoX++;
                                        contador.passos ++;
                                        teste = 0;
                                     }
                                    break;

                                case 's':
                                    system("cls");
                                    int x = menu_principal(dif);
                                    if (x != 2)
                                        {
                                        jogo = false;
                                        }
                                    break;

                            }///switch tecla
                            coord.X = 0;    coord.Y = 0;
                            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                         }///while jogo
}

int mapaMedio(int dif,int *VIDA)
{
    //INICIO: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    //FIM: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
    //IN�CIO: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA
    COORD coord;
    //FIM: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA

    POSICAOINICIAL I;// I = inicio
    POSICAOFINAL F;// F = final
    TELEPORTE T;
    ARMADILHA A;
    player contador;
    char Tecla;
    int jogadorPosicaoX = I.x2;//valor que vem pre - definido para cada mapa
    int jogadorPosicaoY = I.y2;
    int teste;//vari�vel usada para verificar se o lugar desejado a ir, nao � uma parede
    contador.passos = 0;
    int mapaMedio[20][20];
    ifstream mapa;
    int l, c;
    mapa.open("mapaMedio.txt");
    mapa >> l;
    mapa >> c;
    for (int i=0;i<l;i++){
        for (int j=0;j<c;j++){
            mapa >> mapaMedio[i][j];
        }
    }
    mapa.close();

                        bool jogo = true;
                        while (jogo)
                        {
                            for (int li = 0; li < 20; li++)
                            {
                                for (int co = 0; co < 20; co++)
                                {
                                    if (li == jogadorPosicaoX && co == jogadorPosicaoY)
                                    {
                                        cout << char(1);//char do personagem principal
                                    }
                                    else
                                    {
                                        switch (mapaMedio[li][co])
                                        {
                                            case 0: cout << " "; ///char do caminho livre
                                                break;
                                            case 1: cout << char(178);/// char da parede
                                                break;
                                            case 2: cout << "-";
                                                break;
                                            case 3: cout << char(3);
                                              break;
                                            case 4: cout << "@";
                                                break;
                                            case 5: cout << char(157);//armadilha forte
                                                break;
                                            case 6: cout << char(42);//chave
                                                break;
                                            case 7: cout << char(15);// porta
                                                break;
                                            case 8: cout << char(33);//porta aberta
                                                break;
                                            case 9: cout << "?";
                                                break;
                                            case 10: cout << char(169);//bomba hit kill
                                                break;
                                            case 11: cout << "o";
                                                break;
                                        }
                                    }
                                }
                                cout << "\n";
                            }
                            cout << "Passos = "<< contador.passos<<" || "<<" Pontos = "<<contador.pontos<<" || "<<char(3)<<contador.vida;

                            if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY]==0){//caminho livre
                                teste=0;
                            }
                             if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY]==11){
                                contador.vida=contador.vida-A.dano2;

                                mapaMedio[jogadorPosicaoX][jogadorPosicaoY]=0;

                            }

                            if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY]==5){//ARMADILHA 1
                                contador.vida=contador.vida-A.dano;

                                mapaMedio[jogadorPosicaoX][jogadorPosicaoY]=11;
                                jogadorPosicaoX=0;
                                jogadorPosicaoY=9;
                            }
                            if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY]==10){
                                contador.vida=0;

                            }

                            if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY]==3){ //regenera��o
                                contador.vida=contador.vida+A.reg;

                                teste=3;
                                mapaMedio[jogadorPosicaoX][jogadorPosicaoY]=0;

                            }

                            if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY]==2){//pontos
                                contador.pontos++;
                                mapaMedio[jogadorPosicaoX][jogadorPosicaoY]=0;

                            }

                            if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY]==6){//chave
                                contador.chave=1;
                                mapaMedio[jogadorPosicaoX][jogadorPosicaoY]=0;
                                teste = 6;
                            }
                            if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY]==8){//porta aberta
                                teste=8;
                                 contador.chave=0;
                            }
                            if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY]==9){
                                teste=9;
                            }


                            if (jogadorPosicaoX==T.x2 && jogadorPosicaoY==T.y2){//teleporte
                                            jogadorPosicaoX=T.xv-1;
                                            jogadorPosicaoY=T.yv;

                            }
                            if (jogadorPosicaoX==T.xv && jogadorPosicaoY==T.yv){
                                            jogadorPosicaoX=T.x2;
                                            jogadorPosicaoY=T.y2+1;

                            }
                            if (jogadorPosicaoX==T.x3 && jogadorPosicaoY==T.y3){
                                            jogadorPosicaoX=T.xz;
                                            jogadorPosicaoY=T.yz-1;

                            }
                            if (jogadorPosicaoX==T.xz && jogadorPosicaoY==T.yz){
                                            jogadorPosicaoX=T.x3-1;
                                            jogadorPosicaoY=T.y3;

                            }

                            //DERROTA
                            if (contador.vida<=0){
                                system("cls");
                                jogo = false;
                                derrota(dif,contador.passos,&contador.vida);
                                if(dif==4){

                                    menu_principal(dif);
                                    break;
                                }
                            }

                            if (jogadorPosicaoX == F.x2 && jogadorPosicaoY == F.y2) // caso o personagem chegue no final do mapa ele finaliza o mapa
                            {
                                if(dif == 2)
                                {
                                   system("cls");
                                   jogo = false;
                                   vitoria(dif, contador.passos,contador.pontos);
                                }

                            jogo = false;
                            }

                            if (teste == 1)
                            {
                                cout << "  Parede no caminho!  ";
                            }
                            else if (teste==0)
                            {
                                cout << "                    ";
                            }
                            else if (teste==3)
                            {
                                cout<< " ganhou 20 de vida";
                            }
                            else if (teste==6)
                            {
                                cout<< endl << "voce pegou a chave";
                            }
                            else if (teste==8)
                            {
                                cout<< endl<< "voce usou a chave ";
                            }
                            else if (teste==9)
                            {
                                cout<<endl<< "voce encontrou nada!";
                            }

                            Tecla = getch();
                            switch(Tecla)

                            {
                             case 72:

                                     if (mapaMedio[jogadorPosicaoX-1][jogadorPosicaoY] == 1){//parede
                                        teste = 1;
                                     }else if (mapaMedio[jogadorPosicaoX-1][jogadorPosicaoY] == 7){
                                      teste = 7;
                                      if(contador.chave==1){
                                            mapaMedio[jogadorPosicaoX-1][jogadorPosicaoY] = 8;
                                      }
                                    }
                                    else if (mapaMedio[jogadorPosicaoX-1][jogadorPosicaoY]== 0,4,3,2,5,6,8,9)
                                     {
                                        jogadorPosicaoX--;
                                        contador.passos ++;
                                        teste = 0;
                                     }
                                    break;

                                case 75:
                                      if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY-1] == 1){//parede
                                        teste = 1;
                                      }else if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY-1] == 7){
                                      teste = 7;
                                       if(contador.chave==1){
                                            mapaMedio[jogadorPosicaoX][jogadorPosicaoY-1] = 8;
                                      }
                                      }

                                     else if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY - 1]== 0,4,3,2,5,6,8,9)
                                     {
                                        jogadorPosicaoY--;
                                        contador.passos ++;
                                        teste = 0;
                                     }
                                    break;

                                case 77:
                                      if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY+1] == 1){//parede
                                        teste = 1;
                                     }else if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY+1] == 7){
                                      teste = 7;
                                       if(contador.chave==1){
                                            mapaMedio[jogadorPosicaoX][jogadorPosicaoY+1] = 8;
                                             contador.chave=0;
                                      }
                                      }
                                    else if (mapaMedio[jogadorPosicaoX][jogadorPosicaoY+1] ==  0,4,3,2,5,6,8,9)
                                     {
                                         jogadorPosicaoY++;
                                         contador.passos ++;
                                         teste = 0;
                                     }
                                    break;


                                case 80:
                                     if (mapaMedio[jogadorPosicaoX+1][jogadorPosicaoY] == 1){//parede
                                        teste = 1;
                                      }else if (mapaMedio[jogadorPosicaoX + 1][jogadorPosicaoY] == 7){
                                      teste = 7;
                                       if(contador.chave==1){
                                            mapaMedio[jogadorPosicaoX+1][jogadorPosicaoY] = 8;
                                      }
                                      }

                                     else if (mapaMedio[jogadorPosicaoX + 1][jogadorPosicaoY] ==  0,4,3,2,5,6,8,9)
                                     {
                                        jogadorPosicaoX++;
                                        contador.passos ++;
                                        teste = 0;
                                     }
                                    break;

                                  case 's':
                                    system("cls");
                                    int x = menu_principal(dif);
                                    if (x != 2)
                                        {
                                        jogo = false;
                                        }
                                    break;

                            }///switch tecla
                            coord.X = 0;    coord.Y = 0;
                            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                         }///while jogo
}

int mapaDificil(int dif, int *VIDA)
{
    //INICIO: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false; // set the cursor visibility
    SetConsoleCursorInfo(out, &cursorInfo);
    //FIM: COMANDOS PARA QUE O CURSOR N�O FIQUE PISCANDO NA TELA
    //IN�CIO: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA
    COORD coord;
    //FIM: COMANDOS PARA REPOSICIONAR O CURSOR NO IN�CIO DA TELA

    POSICAOINICIAL I;// I = inicio
    POSICAOFINAL F;// F = final
    player contador;
    ARMADILHA A;
    TELEPORTE T;
    char Tecla;
    int jogadorPosicaoX = I.x3;//valor que vem pre - definido para cada mapa
    int jogadorPosicaoY = I.y3;
    int teste;//vari�vel usada para verificar se o lugar desejado a ir, nao � uma parede
    contador.passos;
    int mapaDificil[20][20];
    ifstream mapa;
    int l, c;
    mapa.open("mapaDificil.txt");
    mapa >> l;
    mapa >> c;
    for (int i=0;i<l;i++){
        for (int j=0;j<c;j++){
            mapa >> mapaDificil[i][j];
        }
    }
    mapa.close();
                        bool jogo = true;
                        while (jogo)
                        {
                            for (int li = 0; li < 20; li++)
                            {
                                for (int co = 0; co < 20; co++)
                                {
                                    if (li == jogadorPosicaoX && co == jogadorPosicaoY)
                                    {
                                        cout << char(1);//char do personagem principal
                                    }
                                    else
                                    {
                                        switch (mapaDificil[li][co])
                                        {
                                            case 0: cout << " "; ///char do caminho livre
                                                break;
                                            case 1: cout << char(178);/// char da parede
                                                break;
                                            case 2: cout << "-";
                                                break;
                                            case 3: cout << char(3);
                                              break;
                                            case 4: cout << "@";
                                                break;
                                            case 5: cout << char(157);//armadilha forte
                                                break;
                                            case 6: cout << char(42);//chave
                                                break;
                                            case 7: cout << char(15);// porta
                                                break;
                                            case 8: cout << char(33);//porta aberta
                                                break;
                                            case 9: cout << "?";
                                            break;
                                            case 10: cout << char(169);//bomba hit kill
                                                break;
                                            case 11: cout << "o";
                                                break;
                                        }
                                    }
                                }
                                cout << "\n";
                            }
                            cout << "Passos = "<< contador.passos<<" || "<<" Pontos = "<<contador.pontos<<" || "<<char(3)<<contador.vida;

                            if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY]==0){//caminho livre
                                teste=0;
                            }
                             if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY]==11){
                                contador.vida=contador.vida-A.dano2;

                                mapaDificil[jogadorPosicaoX][jogadorPosicaoY]=0;

                            }
                            if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY]==10){
                                contador.vida=0;

                            }

                            if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY]==5){//ARMADILHA 1
                                contador.vida=contador.vida-A.dano;

                                mapaDificil[jogadorPosicaoX][jogadorPosicaoY]=11;
                                jogadorPosicaoX=0;
                                jogadorPosicaoY=1;

                            }

                            if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY]==3){ //regenera��o fake
                                contador.vida=contador.vida+A.reg;

                                teste=3;
                                mapaDificil[jogadorPosicaoX][jogadorPosicaoY]=0;

                            }

                            if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY]==2){//pontos
                                contador.pontos++;
                                mapaDificil[jogadorPosicaoX][jogadorPosicaoY]=0;

                            }

                            if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY]==6){//chave
                                contador.chave=1;
                                mapaDificil[jogadorPosicaoX][jogadorPosicaoY]=0;
                                teste = 6;
                            }
                            if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY]==8){//porta aberta
                                teste=8;
                                 contador.chave=0;
                            }

                             if (jogadorPosicaoX==T.bx && jogadorPosicaoY==T.by){//teleporte
                                            jogadorPosicaoX=T.cx;
                                            jogadorPosicaoY=T.cy-1;

                            }
                            if (jogadorPosicaoX==T.cx && jogadorPosicaoY==T.cy){
                                            jogadorPosicaoX=T.bx-1;
                                            jogadorPosicaoY=T.by;

                            }

                             if (jogadorPosicaoX==T.dx && jogadorPosicaoY==T.dy){//teleporte
                                            jogadorPosicaoX=T.ex+1;
                                            jogadorPosicaoY=T.ey;

                            }

                             if (jogadorPosicaoX==T.ex && jogadorPosicaoY==T.ey){//teleporte
                                            jogadorPosicaoX=T.dx;
                                            jogadorPosicaoY=T.dy-1;

                            }

                             if (jogadorPosicaoX==T.fx && jogadorPosicaoY==T.fy){//teleporte
                                            jogadorPosicaoX=T.gx;
                                            jogadorPosicaoY=T.gy+1;

                            }

                             if (jogadorPosicaoX==T.gx && jogadorPosicaoY==T.gy){//teleporte
                                            jogadorPosicaoX=T.fx;
                                            jogadorPosicaoY=T.fy+1;

                            }


                            //DERROTA
                            if (contador.vida<=0){
                                system("cls");
                                jogo = false;
                                derrota(dif,contador.passos,&contador.vida); //chama a fun��o que exibe a tela de derrota
                            }

                            if (jogadorPosicaoX == F.x2 && jogadorPosicaoY == F.y2) // caso o personagem chegue no final do mapa ele finaliza o mapa
                            {
                                if(dif == 2)
                                {
                                   system("cls");
                                   jogo = false;
                                   vitoria(dif, contador.passos,contador.pontos); //chama a fun��o que exibe a tela de vit�ria
                                }

                            jogo = false;
                            }

                            if (teste == 1)
                            {
                                cout << "  Parede no caminho!  ";
                            }
                            else if (teste==0)
                            {
                                cout << "                    ";
                            }
                            else if (teste==3)
                            {
                                cout<< " ganhou 20 de vida";
                            }
                            else if (teste==6)
                            {
                                cout<< endl << "voce pegou a chave";
                            }
                            else if (teste==8)
                            {
                                cout<< endl<< "voce usou a chave";
                            }

                            Tecla = getch();
                            switch(Tecla)

                            {
                             case 72:

                                     if (mapaDificil[jogadorPosicaoX-1][jogadorPosicaoY] == 1){//parede
                                        teste = 1;
                                     }else if (mapaDificil[jogadorPosicaoX-1][jogadorPosicaoY] == 7){
                                      teste = 7;
                                      if(contador.chave==1){
                                            mapaDificil[jogadorPosicaoX-1][jogadorPosicaoY] = 8;
                                             contador.chave=0;
                                      }
                                    }
                                    else if (mapaDificil[jogadorPosicaoX-1][jogadorPosicaoY]== 0,4,3,2,5,6,8)
                                     {
                                        jogadorPosicaoX--;
                                        contador.passos ++;
                                        teste = 0;
                                     }
                                    break;

                                case 75:
                                      if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY-1] == 1){//parede
                                        teste = 1;
                                      }else if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY-1] == 7){
                                      teste = 7;
                                       if(contador.chave==1){
                                            mapaDificil[jogadorPosicaoX][jogadorPosicaoY-1] = 8;
                                      }
                                      }

                                     else if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY - 1]== 0,4,3,2,5,6,8)
                                     {
                                        jogadorPosicaoY--;
                                        contador.passos ++;
                                        teste = 0;
                                     }
                                    break;

                                case 77:
                                      if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY+1] == 1){//parede
                                        teste = 1;
                                     }else if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY+1] == 7){
                                      teste = 7;
                                       if(contador.chave==1){
                                            mapaDificil[jogadorPosicaoX][jogadorPosicaoY+1] = 8;
                                      }
                                      }
                                    else if (mapaDificil[jogadorPosicaoX][jogadorPosicaoY+1] ==  0,4,3,2,5,6,8)
                                     {
                                         jogadorPosicaoY++;
                                         contador.passos ++;
                                         teste = 0;
                                     }
                                    break;


                                case 80:
                                     if (mapaDificil[jogadorPosicaoX+1][jogadorPosicaoY] == 1){//parede
                                        teste = 1;
                                      }else if (mapaDificil[jogadorPosicaoX + 1][jogadorPosicaoY] == 7){
                                      teste = 7;
                                       if(contador.chave==1){
                                            mapaDificil[jogadorPosicaoX+1][jogadorPosicaoY] = 8;
                                      }
                                      }

                                     else if (mapaDificil[jogadorPosicaoX + 1][jogadorPosicaoY] ==  0,4,3,2,5,6,8)
                                     {
                                        jogadorPosicaoX++;
                                        contador.passos ++;
                                        teste = 0;
                                     }
                                    break;

                                case 's':
                                    system("cls");
                                    int x = menu_principal(dif);
                                    if (x != 2)
                                        {
                                        jogo = false;
                                        }
                                    break;

                            }///switch tecla
                            coord.X = 0;    coord.Y = 0;
                            SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
                         }///while jogo
}
#endif // FUNCTION_H_INCLUDED
