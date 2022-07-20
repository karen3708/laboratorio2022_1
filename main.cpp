#include <iostream>
//Karen Lopez Aljure
using namespace std;

int main()
{   unsigned short ejerc;
    int A, B, ent,  g, total;
    bool salir = false;
    do{
    cout <<endl <<"Ingrese el numero del ejercicio a ejecutar (1 a 3) o cero (0) para salir: ";
    cin >> ejerc;
    cout <<endl;
    switch (ejerc){ //menu ejercicios

    case 0:
        //salir
        salir = true;
    break;

    //Problema 2
    case 1:
        cout << "Ingrese una cantidad de dinero para evaluar la cantidad minima de billetes y monedas: ";
        cin >> A;
        B = 10000;
        for(int j=1; j<=3;j++){
            for(int i=0; i<=2; i++){
                cout << (i*i-4*i+5)*B <<": " << A/((i*i-4*i+5)*B) <<endl;
                A = A%((i*i-4*i+5)*B );
            }
        B/=10;
        }
        cout << "50:" << A/50 <<endl;
        cout << "Faltante: " << A%50 <<endl;
    break;

    //Problema 5
    //Escribe un programa que muestre el siguiente patrón en la pantalla
    case 2:
        cout << "Por favor ingrese un numero impar: " << endl;
        cin >> A;
        if(A%2==0){
                    A++;
                }
        for (int i = 1; i <= A; i+=2){
            for (int j = A+1; j>=i; j-=2){
            cout << " ";
                }
            for (int k = 1; k<= i; k++){
            cout << "*";
                }
            cout << endl;
        }
        for (int i = A; i >= 1; i-=2){
            for (int j = i; j<=A+2; j+=2){
            cout << " ";
                }
            for (int k = i-2; k>0; k--){
            cout << "*";
                }
            cout << endl;
        }
    break;

    //Problema 15
    //Escribe un programa que reciba un número impar n y calcula la suma de los números en la diagonal de una espiral de nxn.
    case 3:
        cout << "Ingrese un numero impar positivo: ";
        cin >> A;
        if(A%2==0 or A<1){cout << endl <<A <<" NO es un numero impar positivo." <<endl;}
        else{
        cout <<endl;
        ent = 1;
        total = 1;
        if(A%2!=0){
        for (int i=1;i<=A;i+=2){
            if (i>1){
                for(int j=1;j<=4;j++){
                    ent = ent + (i-1);
                    total = total + ent;
                }

            }

        }
        cout <<endl <<"En una espiral de "<<A <<"X" <<A <<" la suma de sus diagonales es: " <<total <<endl <<endl;

        for (unsigned short f=0, ts=0, ti=0; f<A;f++){
            for (unsigned short c=0; c<A; c++){
                if (f<=c && f<=A-1-c){ //triangulo superior
                    cout <<(A-2*f)*(A-2*f)-(A-2*f-1)+ts <<"\t";
                    ts++;
            }
            else if (f>c && f>A-1-c){//triangulo inferior
                    g = A-1-f;
                    ts++;
                    cout << (A-2*g)*(A-2*g)-2*(A-2*g-1)-ts <<"\t";
            }
            else if(f>c && f<=A-1-c){//triangulo izquierdo
                cout << (A-2*c)*(A-2*c)-(A-2*c-1)-ti+c <<"\t";
            }
            else {
                 g = A-c;
                 cout << (A-2*g)*(A-2*g)+ti-(g-1) <<"\t";
                }
            }
            ts = 0;
            ti++;
            cout <<endl <<endl <<endl;
            }
        }
        }

    break;

    //Numero incorrecto de problema
    default:
      cout << "El ejercicio ingresado no existe";
    break;
      cout <<endl;
    } //Cierra switch problemas
    }while(salir==false);

    return 0;
}
