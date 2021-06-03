
#include <iostream>
#include "DynamicArray.h"
#include "Curso.h"
using namespace std;

int main() {
    Curso c1("CVV",15,28,"123456");
    Curso c2("CCII",20,35,"85332");
    Curso c3("Desarrollo Basado en Plataformas",18,40,"DBP");
    Curso c4("CCII",20,36,"5485128");
    
    //cout << c1 << endl; // imprime cvv, 15, 15, 123456
    // sobrecargar al operador <<

    Curso arr[4]={c1, c2, c3, c4}; 
    int tam = sizeof(arr) / sizeof(arr[0]); // tamaño
    

    DynamicArray<Curso> p(arr,tam); // objeto p de tipo Curso
    //p.print();                    // tiene como parametros al arreglo y al tamaño
    cout << p << endl;
    
    return 0;
}

