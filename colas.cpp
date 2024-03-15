#include <iostream>
#include <queue>

using namespace std;

template <typename T>
class Cola {
private:
    queue<T> cola;

public:
    void colocar(const T& elemento) {
        cola.push(elemento);
    }

    void desencolar() {
        if (!cola.empty()) {
            cola.pop();
        }
        else {
            cout << "La cola está vacía. No se puede desencolar." << endl;
        }
    }

    T frente() const {
        if (!cola.empty()) {
            return cola.front();
        }
        else {
            throw logic_error("La cola está vacía.");
        }
    }

    bool estaVacia() const {
        return cola.empty();
    }

    int tamano() const {
        return cola.size();
    }
};

int main() {
    
    Cola<int> cola_enteros;

    
    cola_enteros.colocar(5);
    cola_enteros.colocar(10);
    cola_enteros.colocar(15);

    
    cout << "Frente de la cola: " << cola_enteros.frente() << endl;

    
    cola_enteros.desencolar();

    
    cout << "Tamano de la cola: " << cola_enteros.tamano() << endl;

    
    Cola<string> cola_cadenas;

    
    cola_cadenas.colocar("Javier");
    cola_cadenas.colocar("Juan");

    
    cout << "cola de cadenas: " << cola_cadenas.frente() << endl;

    return 0;
}
