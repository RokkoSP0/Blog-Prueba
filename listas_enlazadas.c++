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

    if (primero=NULL)
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