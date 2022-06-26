#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<Windows.h>
using namespace std;
using namespace System;

struct coordenada {
    int fila;
    int columna;
};
struct Ficha {
    int posX, posY;
    void InicializarFicha(int x, int y) {
        posX = x;
        posY = y;
    }
};
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void Nombre_Menu()
{
    SetConsoleTextAttribute(hConsole, 3);
    cout << "\n";
    cout << "\n";
    cout << "	 
░░░░░██╗██╗░░░██╗███████╗░██████╗░░█████╗░  ██████╗░███████╗██╗░░░░░
░░░░░██║██║░░░██║██╔════╝██╔════╝░██╔══██╗  ██╔══██╗██╔════╝██║░░░░░
░░░░░██║██║░░░██║█████╗░░██║░░██╗░██║░░██║  ██║░░██║█████╗░░██║░░░░░
██╗░░██║██║░░░██║██╔══╝░░██║░░╚██╗██║░░██║  ██║░░██║██╔══╝░░██║░░░░░
╚█████╔╝╚██████╔╝███████╗╚██████╔╝╚█████╔╝  ██████╔╝███████╗███████╗
░╚════╝░░╚═════╝░╚══════╝░╚═════╝░░╚════╝░  ╚═════╝░╚══════╝╚══════╝

███╗░░░███╗░█████╗░██╗░░░░░██╗███╗░░██╗░█████╗░
████╗░████║██╔══██╗██║░░░░░██║████╗░██║██╔══██╗
██╔████╔██║██║░░██║██║░░░░░██║██╔██╗██║██║░░██║
██║╚██╔╝██║██║░░██║██║░░░░░██║██║╚████║██║░░██║
██║░╚═╝░██║╚█████╔╝███████╗██║██║░╚███║╚█████╔╝
╚═╝░░░░░╚═╝░╚════╝░╚══════╝╚═╝╚═╝░░╚══╝░╚════╝░ << endl;
    cout << "" << endl;
    SetConsoleTextAttribute(hConsole, 5);
    cout << "				   O-----------O-----------O" << endl;
    cout << "				   |           |           |" << endl;
    cout << "				   |   O-------O-------O   |" << endl;
    cout << "				   |   |       |       |   |" << endl;
    cout << "				   |   |   O---O---O   |   |       1. -REGLAS DEL JUEGO " << endl;
    cout << "				   |   |   |       |   |   |       2. -JUGAR " << endl;
    cout << "				   |   |   |       |   |   |       3. -CREDITOS " << endl;
    cout << "				   O---O---O       O---O---O       4. -SALIR " << endl;
    cout << "				   |   |   |       |   |   |      " << endl;
    cout << "				   |   |   |       |   |   |" << endl;
    cout << "				   |   |   O---O---O   |   |" << endl;
    cout << "				   |   |       |       |   |" << endl;
    cout << "				   |   O-------O-------O   |" << endl;
    cout << "				   |           |           |" << endl;
    cout << "				   O-----------O-----------O" << endl;
}
void logo() {

    int Mlogo[14][16] =
    {
        {0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0 },
        {0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0 },
        {0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0 },
        {0,0,0,0,0,1,1,0,0,0,1,1,0,0,0,0 },
        {0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0 },
        {0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0 },
        {0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0 },
        {0,0,0,1,1,0,1,0,1,0,1,0,1,1,0,0 },
        {0,0,1,1,0,1,0,1,0,1,0,1,0,1,1,0 },
        {0,1,1,1,1,0,1,0,1,0,1,0,1,1,1,1 },
        {0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0 },
        {0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0 },
        {0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0 },
        {0,0,0,0,0,0,1,1,0,1,1,0,0,0,0,0 } };
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (Mlogo[i][j] == 0)
            {
                Console::BackgroundColor = ConsoleColor::Black;
                cout << " ";
            }
            if (Mlogo[i][j] == 1) {
                Console::BackgroundColor = ConsoleColor::Yellow;
                cout << " ";
            }
        }
        cout << "\n";
    }
}
void Trofeo() {

    int Mtrofeo[18][28] = {

     { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
     { 0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0 },
     { 0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0 },
     { 0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,0 },
     { 0,0,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,0 },
     { 0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0 },
     { 0,0,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,0,0 },
     { 0,0,0,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,0,0,0 },
     { 0,0,0,0,0,1,1,0,0,0,1,1,1,1,1,1,1,0,0,0,1,1,0,0,0,0,0 },
     { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0 },
     { 0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
     { 0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0 },
     { 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
     { 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
     { 0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0 },
     { 0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0 },
     { 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0 } };

    for (int i = 0; i < 18; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            if (Mtrofeo[i][j] == 0)
            {
                Console::BackgroundColor = ConsoleColor::Black;
                cout << " ";
            }
            if (Mtrofeo[i][j] == 1) {
                Console::BackgroundColor = ConsoleColor::Yellow;
                cout << " ";
            }
        }
        cout << "\n";
    }
}

void reglas()
{
    system("cls");
    SetConsoleTextAttribute(hConsole, 11);
    cout << "¡Bienvenidos jugadores!" << endl;
    cout << "" << endl;
    cout << "Si usted quiere jugar este juego debe saber lo siguiente:" << endl;
    cout << "" << endl;
    cout << "El juego esta conformado por las difirentes fases las cuales son de colo fases de colocaccion, fase de movimiento y fase de vuelo. Ahora vamos con las reglas del juego:" << endl;
    cout << "" << endl;
    cout << "1.- Al empezar a jugar ustedes tienen un tablero vacio, lo cual ustedes deben colocar una ficha turno por turno, hasta que coloque 9 fichas de cada jugador" << endl;
    cout << "2.- Si logra uno de los jugadores consiguir hacer una raya de 3 fichas ya sea horizontal o vertical, se le quitara una ficha del contricante. Esto lo puedes hacer en las diferentes fases del juego" << endl;
    cout << "3.- Si un jugador consigue hacer una raya de 3, y su contricante ya tenga otra raya de 3. No se le puede quitar una de las fichas de su contricante, pero si no es el caso, usted podra quitar cualquier ficha del contricante." << endl;
    cout << "4.- Si logra conseguir una raya de 3 durante la fase de colocación puede quitar la ficha de su contricante. Si no es asi, mire la regla nº2." << endl;
    cout << "5.- Durante la fase de colocaciòn, ni usted, ni el contricante podran desplazarse por el tablero hasta que las todas las fichas esten colocadas." << endl;
    cout << "6.- El jugador que solo le quedan 3 fichas se le otorga la posibilidad de hacer ¡el vuelo!(lo cual consiste en que el jugador puede desplazarse por todo el tablero)." << endl;
    cout << "7.- Si uno de los jugadores tengan 2 fichas el juego terminara." << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "" << endl;
    cout << "Disfrute del maravilloso juego ¡Morries!(o tambien llamado al español el juego del molino >:))" << endl;
}

void Genera_Tablero(int** Matriz)
{
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            Matriz[i][j] = 0;
        }
    }

}
void imprimir_tablero(int** matriz)
{
    Console::SetWindowSize(60, 30);
    cout << "\t\t 0123456";
    cout << " \n";

    for (int i = 0; i < 7; i++) {
        cout << " \t";
        cout << " \t";
        cout << i;

        for (int j = 0; j < 7; j++) {
            if (matriz[i][j] == 0) {
                cout << (char)219;//cuadrador
            }
            if ((matriz[i][j] == 1)) {
                cout << (char)35;// #
            }
            if ((matriz[i][j] == 2)) {
                cout << (char)64;// @
            }
        }
        cout << "\n";
    }
}
void ColocarFichas(int** matriz, int* numeroDeFichasJ1, int* numeroDeFichasJ2, bool* turno, bool* primeraFicha, string nombrejugador1, string nombrejugador2) {

    Ficha* fichasJugador1 = new Ficha[9];
    Ficha* fichasJugador2 = new Ficha[9];
    int fila, columna;
    bool valido;

    imprimir_tablero(matriz);
    cout << "\n\n";

    if (*turno) cout << "<\nJugador 1 :(" << nombrejugador1 << ") Indique la posicion de su ficha\n";
    else cout << "\nJugador 2 :(" << nombrejugador2 << ") Indique la posicion de su ficha\n";

    do {
        valido = true;

        do {
            cout << "Fila: "; cin >> fila;
        } while (fila < 0 || fila > 6);
        do {
            cout << "Columna: "; cin >> columna;
        } while (columna < 0 || columna > 6);

        if (fila == 3 && columna == 3 || fila == 1 && columna == 0 || fila == 2 && columna == 0 || fila == 4 && columna == 0 || fila == 0 && columna == 5) {
            cout << "\nNo es una casilla Disponible\n";
            valido = false;
        }//0 y el medio
        if (fila == 3 && columna == 3 || fila == 1 && columna == 0 || fila == 2 && columna == 0 || fila == 4 && columna == 0 || fila == 0 && columna == 5) {
            cout << "\nNo es una casilla Disponible\n";
            valido = false;
        }//1
        if (fila == 2 && columna == 0 || fila == 2 && columna == 1 || fila == 2 && columna == 5 || fila == 2 && columna == 6) {
            cout << "\nNo es una casilla Disponible\n";
            valido = false;
        }//2
        if (fila == 4 && columna == 0 || fila == 4 && columna == 1 || fila == 4 && columna == 5 || fila == 4 && columna == 6) {
            cout << "\nNo es una casilla Disponible\n";
            valido = false;
        }  //4                                                                                                                 
        if (fila == 5 && columna == 0 || fila == 5 && columna == 2 || fila == 5 && columna == 4 || fila == 5 && columna == 5) {
            cout << "\nNo es una casilla Disponible\n";
            valido = false;
        }  //5                                                                                                                 
        if (fila == 6 && columna == 1 || fila == 6 && columna == 2 || fila == 6 && columna == 4 || fila == 6 && columna == 5) {
            cout << "\nNo es una casilla Disponible\n";
            valido = false;
        }



        if (matriz[fila][columna] == 1 || matriz[fila][columna] == 2) {
            cout << "\nEse casillero ya está ocupado\n";
            valido = false;
        }
    } while (!valido);

    Ficha fichaNueva;
    fichaNueva.InicializarFicha(columna, fila);

    if (*turno) {
        fichasJugador1[*numeroDeFichasJ1] = fichaNueva;
        matriz[fila][columna] = 1;
        (*numeroDeFichasJ1)++;
    }
    else {
        fichasJugador2[*numeroDeFichasJ2] = fichaNueva;
        matriz[fila][columna] = 2;
        (*numeroDeFichasJ2)++;
    }

    if (*primeraFicha) {
        *primeraFicha = false;
    }
    else {
        if (*numeroDeFichasJ1 + *numeroDeFichasJ2 < 24) (*turno) = !(*turno);
        *primeraFicha = true;
    }
    system("cls");
}
bool* asiganarturno() {
    Random r;
    bool* turno = new bool;
    int dturno = r.Next(1, 3);
    if (dturno == 1)
        *turno = true;
    else *turno = false;
    return turno;
}
string IngresarJugado1() {
    string c;
    cout << "\n=======================================";
    cout << "\n Ingresar Nombre del jugador 1: ";
    cin >> c;
    cout << "\n=======================================";
    return c;
}
string IngresarJugado2() {

    string c;
    cout << "\n=======================================";
    cout << "\n Ingresar nombre del jugador 2: ";
    cin >> c;
    cout << "\n======================================\n";
    return c;
}

void seleccionar_punto(int* fila, int* columna)
{
    coordenada punto;
    do {
        cout << " \n Fila: ";
        cin >> punto.fila;
    } while (punto.fila < 0 || punto.fila>6);

    do {
        cout << " \n Columna: ";
        cin >> punto.columna;
    } while (punto.columna < 0 || punto.columna>6);
    *fila = punto.fila;
    *columna = punto.columna;
}

bool validar_Coordenada(int** matriz, int fila, int columna, int valor)
{
    bool valido = false;
    if (matriz[fila][columna] == valor) {
        valido = true;
    }
    else {
        cout << "\nMovimiento no valido\n";
        valido = false;
        getch();
    }
    return valido;
}
void capturar_ficha(int** matriz, int jugador, int fila, int columna)
{
    char opc;
    int valor = 0;
    cout << "\nBuscando Capturar ficha";
    if (jugador == 1)
    {
        valor = 1;
    }
    else {
        valor = 2;
    }
    if (fila >= 2) {
        if (matriz[fila - 2][columna] == valor) {
            cout << "\nEncontro arriba";
            if ((fila - 1) != 2 || (columna) != 2) {
                if (matriz[fila - 1][columna] == valor) {}
                else {
                    matriz[fila - 1][columna] = 0;
                }
            }
        }
    }
    if (fila <= 2) {
        if (matriz[fila + 2][columna] == valor) {
            cout << "\nEncontro abajo";
            if ((fila + 1) != 2 || (columna) != 2) {
                if (matriz[fila + 1][columna] == valor) {}
                else {
                    matriz[fila + 1][columna] = 0;
                }
            }
        }
    }

    if (columna >= 2) {
        if (matriz[fila][columna - 2] == valor) {
            cout << "\n Encontro izquierda";
            if ((fila != 2 || (columna - 1) != 2)) {
                if (matriz[fila][columna - 1] == valor) {}
                else {
                    matriz[fila][columna - 1] = 0;
                }
            }
        }
    }
    if (columna <= 2) {
        if (matriz[fila][columna + 2] == valor) {
            cout << "\n Encontro derecha";
            if ((fila) != 2 || (columna + 1) != 2) {
                if (matriz[fila][columna + 1] == valor) {}
                else {
                    matriz[fila][columna + 1] = 0;
                }
            }
        }
    }
}

void realizar_cambio(int** matriz, int fila, int columna, bool* jugador)
{
    if (*jugador == true) {
        matriz[fila][columna] = 1;
        capturar_ficha(matriz, 1, fila, columna);
        *jugador = false;
    }
    else {
        matriz[fila][columna] = 2;
        capturar_ficha(matriz, 2, fila, columna);
        *jugador = true;
    }
    cout << "\nCambio realizado\n";
    getch();
}

void realizar_mov(int** matriz, int fila, int columna, int valor, bool* jugador)
{

    char opc;
    bool a = false, d = false, w = false, s = false;

    do {
        if (columna >= 1 && matriz[fila][columna - 1] == valor) {
            cout << "\nIzquierda[A]";
            a = true;
        }
        if (matriz[fila][columna + 1] == valor) {
            cout << "\nDerecha[D]";
            d = true;
        }

        if (fila >= 1 && matriz[fila - 1][columna] == valor) {
            cout << "\nArriba[w]";
            w = true;
        }
        if (fila + 1 <= 4) {
            if (matriz[fila + 1][columna] == valor) {
                cout << "\nAbajo[S]";
                s = true;
            }
        }
        cout << "\n";;
        cin >> opc;
        opc = toupper(opc);
    } while (opc != 'A' && opc != 'D' && opc != 'W' && opc != 'S');

    if (opc == 'A' && a == true) {
        realizar_cambio(matriz, fila, columna - 1, jugador);
        matriz[fila][columna] = 0;
    }
    if (opc == 'D' && d == true) {
        realizar_cambio(matriz, fila, columna + 1, jugador);
        matriz[fila][columna] = 0;
    }
    if (opc == 'W' && w == true) {
        realizar_cambio(matriz, fila - 1, columna, jugador);
        matriz[fila][columna] = 0;
    }
    if (opc == 'S' && s == true) {
        realizar_cambio(matriz, fila + 1, columna, jugador);
        matriz[fila][columna] = 0;
    }
}

void mover_fichas(int** matriz, bool* jugador, int* contmovj1, int* contmovj2, string nombrejugador1, string nombrejugador2)
{
    int opc;
    int fila;
    int columna;
    if (*jugador == true) {
        int valor = 0;
        do {
            cout << "\nJugador 1: " << nombrejugador1;
            cout << "\n1. Mover      2. Pasar\n";
            cin >> opc;
        } while (opc < 1 || opc>2);
        if (opc == 1) {
            bool inicio = true;
            //busca su igual
            do {
                seleccionar_punto(&fila, &columna);
                inicio = validar_Coordenada(matriz, fila, columna, 1);
            } while (!inicio);
            //busca espacio libre
            do {
                realizar_mov(matriz, fila, columna, valor, jugador);
                inicio = validar_Coordenada(matriz, fila, columna, 0);
            } while (!inicio);
            system("cls");
            imprimir_tablero(matriz);
            *contmovj1 = *contmovj1 + 1;
        }
        *jugador = false;
    }
    else {
        int valor = 0;
        do {
            cout << "\nJugador 2: " << nombrejugador2;
            cout << "\n1. Mover      2. Pasar\n";

            cin >> opc;
        } while (opc < 1 || opc>2);
        if (opc == 1) {
            bool inicio = true;
            //busca igual
            do {
                seleccionar_punto(&fila, &columna);
                inicio = validar_Coordenada(matriz, fila, columna, 2);
            } while (!inicio);
            //busca espacio libre
            do {

                realizar_mov(matriz, fila, columna, valor, jugador);
                inicio = validar_Coordenada(matriz, fila, columna, 0);
            } while (!inicio);
            system("cls");
            imprimir_tablero(matriz);
            *contmovj2 = *contmovj2 + 1;
        }
        *jugador = true;
    }
}

void validar_Existencia(int** matriz, bool* fin, int* jug_1, int* jug_2)
{
    bool termina = false;
    int jugador1 = 0;
    int jugador2 = 0;
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            if ((matriz[i][j] == 1)) {
                jugador1 = jugador1 + 1;
            }
            if ((matriz[i][j] == 2)) {
                jugador2 = jugador2 + 1;
            }
        }

    }
    if (jugador1 == 0 || jugador2 == 0) {
        termina = true;
    }

    *jug_1 = jugador1;
    *jug_2 = jugador2;
    *fin = termina;
}

int main()
{

    int* numeroDeFichasJ1 = new int(0);
    int* numeroDeFichasJ2 = new int(0);
    bool* primeraFicha = new bool(true);
    bool* turno;
    turno = asiganarturno();
    int* opcion = new int;
    int** Matriz = new int* [7];
    for (int i = 0; i < 7; i++) {
        Matriz[i] = new int[7];
    }

    do {
        system("cls");
        Nombre_Menu();
        do {

            SetConsoleTextAttribute(hConsole, 6);
            cout << "\n              Elegir opcion: ";
            cin >> *opcion;

        } while (*opcion < 1 || *opcion>4);

        switch (*opcion) {
        case 1: {
            reglas();
        }
              break;
        case 2: {

            system("cls");
            Genera_Tablero(Matriz);
            bool jugador;
            bool fin1 = false;
            bool fin2 = false;
            int cantidad_1 = 9;
            int cantidad_2 = 9;
            int contmovj1 = 0;
            int contmovj2 = 0;
            string nombrejugador1 = IngresarJugado1();
            string nombrejugador2 = IngresarJugado2();
            do
            {
                Console::ForegroundColor = System::ConsoleColor::White;
                ColocarFichas(Matriz, numeroDeFichasJ1, numeroDeFichasJ2, turno, primeraFicha, nombrejugador1, nombrejugador2);
            } while (*numeroDeFichasJ1 + *numeroDeFichasJ2 < 18);
            system("cls");
            if (*turno == true) jugador = false;
            else jugador = true;
            imprimir_tablero(Matriz);
            cout << "\n";
            do
            {
                system("cls");
                cout << "\n=====================================";
                cout << "\n||  Jugador_1: " << cantidad_1 << " Moviminetos: " << contmovj1 << "   ||";
                cout << "\n||  Jugador_2: " << cantidad_2 << " Moviminetos: " << contmovj2 << "   ||";
                cout << "\n=====================================";
                cout << "\n\n";
                imprimir_tablero(Matriz);
                mover_fichas(Matriz, &jugador, &contmovj1, &contmovj2, nombrejugador1, nombrejugador2);
                validar_Existencia(Matriz, &fin2, &cantidad_1, &cantidad_2);
            } while (fin1 != true && fin2 != true);
            system("cls");
            if (cantidad_1 > cantidad_2) cout << " \n El ganador es:  " << nombrejugador1;
            else if ((cantidad_2 > cantidad_1))  cout << "\nEl ganador es: " << nombrejugador2;
            else cout << "\n EMPATE ";
            cout << "\nJugador_1: " << cantidad_1 << " Moviminetos: " << contmovj1;
            cout << "\nJugador_2: " << cantidad_2 << " Moviminetos: " << contmovj2;
            cout << " \n\n";
            Trofeo();
            cout << " \n\n";
            cout << "FIN DEL JUEGO";
        }
              break;
        case 3: {
            system("cls");
            cout << "\n";
            logo();
            cout << "\n****************";
            cout << "\n  meow ";
            //aca los nombres
            cout << "\n****************";


        }
              break;
        }
        getch();
    } while (*opcion != 4);

    for (int i = 0; i < 7; i++) {
        delete Matriz[i];
    }
    delete Matriz;
    cout << "Gracias .......";
    getch();
    return(0);
    }
