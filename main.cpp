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
    std::vector<int> numeros = {10, 20, 30, 40, 50};

    for(std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
        std::cout << *it << std::endl;
    }
    cout << endl;
}

// Ejercicio 2: Contenedores Estándar y Secuencias

void ejercicio2() {
    cout << "Ejercicio 2: Contenedores Estándar y Secuencias" << endl;
    std::list<float> lista = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::stack<float, std::list<float>> pila(lista);

    while(!pila.empty()) {
        std::cout << pila.top() << std::endl;
        pila.pop();
    }
    cout << endl;
}

// Ejercicio 3: Algoritmos

void ejercicio3() {
    cout << "Ejercicio 3: Algoritmos" << endl;
    std::vector<int> numeros = {50, 20, 60, 10, 30, 40};
    std::sort(numeros.begin(), numeros.end());

    for(int num : numeros) {
        std::cout << num << std::endl;
    }

    int maxNum = *std::max_element(numeros.begin(), numeros.end());
    std::cout << "Número máximo: " << maxNum << std::endl;
    cout << endl;
}





int main(){

}


