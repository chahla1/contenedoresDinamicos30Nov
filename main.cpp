#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <valarray>
#include <algorithm>
#include <memory>
#include <boost/lexical_cast.hpp>
using namespace std;

// Ejercicio 1: Vector e Iteradores

void ejercicio1() {
    cout << "Ejercicio 1: Vector e Iteradores" << endl;
    vector<int> numeros = {10, 20, 30, 40, 50};

    for(vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        cout << *it << endl;
    }
    cout << endl;
}

// Ejercicio 2: Contenedores Estándar y Secuencias

void ejercicio2() {
    cout << "Ejercicio 2: Contenedores Estándar y Secuencias" << endl;
    list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    stack<float, std::list<float>> pila(lista);

    while(!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }
    cout << endl;
}

// Ejercicio 3: Algoritmos

void ejercicio3() {
    cout << "Ejercicio 3: Algoritmos" << endl;
    vector<int> numeros = {50, 20, 60, 10, 30, 40};
    sort(numeros.begin(), numeros.end());

    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    int maxNum = *max_element(numeros.begin(), numeros.end());
    cout << "Número máximo: " << maxNum << endl;
    cout << endl;
}

// Ejercicio 4: Cálculo numérico

void ejercicio4() {
    cout << "Ejercicio 4: Cálculo numérico" << endl;
    valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

    cout << "Suma: " << valores.sum() << endl;
    cout << "Media: " << valores.sum() / valores.size() << endl;

    valores += 5.0;

    cout << "Valores + 5.0: ";
    for(double valor : valores) {
        cout << valor << " ";
    }
    cout << endl;
    cout << endl;
}

// Ejercicio 5: C++ Moderno
void ejercicio5() {
    cout << "Ejercicio 5: C++ Moderno" << endl;
    auto cuadrado = [](int num) { return num * num; };

    cout << "Cuadrado de 5: " << cuadrado(5) << endl;

    vector<int> numeros = {1, 2, 3, 4, 5};
    for_each(numeros.begin(), numeros.end(), [](int num) {
        cout << num << endl;
    });
    shared_ptr<int> ptr(new int(10));
    cout << "Valor apuntado por ptr: " << *ptr << endl;
    cout << endl;
}
// Ejercicio 6: Introducción a Boost






int main(){

}


