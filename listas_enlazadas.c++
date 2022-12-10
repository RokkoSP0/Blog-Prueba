#include <iostream>
#include <conio.h>

using namespace std; 


struct nodo
{
    int dato;
    nodo* siguiente;
} *primero, *ultimo;

void insertarNodo();
void desplegarLista();

int main()
{
    int menu = 0;
    do
    {
        cout<<"\n|-------------------------------------|";
        cout<<"\n|      LISTA CIRCULAR SIMPLES         |";
        cout<<"\n|-------------------------------------|";
        cout<<"\n|   1. Insertar   |  4. Eliminar      |";
        cout<<"\n|   2. Buscar     |  5. Desplegar     |";
        cout<<"\n|   3. Modificar  |  6. Salir         |";
        cout<<"\n|-------------------------------------|";
        cout<<"\n\n Elija una opcion:_";
        cin>>menu;

        switch (menu)
        {
        case 1:
            cout<<"INSERTE UN NODO EN LA LISTA";
            break;
        case 2:
            cout<<"BUSCAR UN NODO EN LA LISTA";
            break;
        case 3:
            cout<<"MODIFICAR UN NODO EN LA LISTA";
            break;
        case 4:
            cout<<"ELIMINAR UN NODO EN LA LISTA";
            break;
        case 5:
            cout<<"MOSTRAR LOS ELEMENTOS DE LA LISTA";
            break;
        case 6:
            cout<<"Programa finalizado.....";
            break;
        default:
            cout<<"Opcion no valida"<<endl;
            break;
        }
    } while (menu!=6);
    
    insertarNodo();
    insertarNodo();
    insertarNodo();
    insertarNodo();
    insertarNodo();
    cout<<"Lista circular desplegada";
    desplegarLista();
    return 0;
}

// Primero =null  ultimo ==nuell

/* lista ciurcular simple */
void insertarNodo(){
    nodo* nuevo = new nodo();
    cout<<"Ingrese el dato que contendra el nuevo nodo: ";
    cin>>nuevo->dato;
    if (primero==NULL)
    {   
        primero = nuevo;
        primero->siguiente=primero;
        ultimo = primero;
    }else{
        ultimo->siguiente=nuevo;
        nuevo->siguiente= primero;
        ultimo = nuevo;
        cout<<"\nNodo ingresado"<<endl;
    }   
}

void desplegarLista(){
    nodo* actual= new nodo();
    actual = primero;

    if (primero!=NULL)
    {
        do
        {
            cout<<"\n "<<actual->dato;
            actual = actual -> siguiente;
        } while (actual!=primero);
        
    } else{
        cout<<"\n La lista se encuentra vacia"<<endl;
    }
}