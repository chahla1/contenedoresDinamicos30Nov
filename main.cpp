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





int main(){

}


