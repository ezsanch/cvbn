#include <iostream>
#include <string>


int contarPalabras(const std::string& texto) {
    int contador = 0;  
    bool enPalabra = false; 

    
    for (std::string::size_type i = 0; i < texto.size(); ++i) {
        char c = texto[i];  
        if (c != ' ') {  
            if (!enPalabra) {  
                enPalabra = true; 
                ++contador;  
            }
        } else {
            enPalabra = false; 
        }
    }

    return contador;  
}

int main() {
    std::string texto; 

    
    std::cout << "Introduce una cadena de caracteres: ";
    std::getline(std::cin, texto); 

    
    int cantidadDePalabras = contarPalabras(texto);
    std::cout << "La cantidad de palabras en la cadena es: " << cantidadDePalabras << std::endl;

    return 0;  
}

