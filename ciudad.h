#ifndef CIUDAD_H
#define CIUDAD_H
//funciones
/*Debido a que no recuerdo si hay una función o algoritmo más sencillo para esto, y también porque soy un maldito pedante
 (lo cual se ve reflejado en el uso de comentario multilinea para explicar la razón de existir de la función en cuestión)
 incapáz de buscar en internet una solución ya creada; creo esta función de descomposición entero a string.
 */
int descompDigitos () {
    int idJugador[1]{};


}

int cantidadTrn() {
    int k {}
}

struct Inmueble {   //Conceptualización de inmuebles como elemento de las manzanas con sus propiedades
    int ancho{};
    int largo{};
    int alto{};
};

struct Manzana {    //Conceptualización de la manzana con su largo y ancho (más propiedades se agregarán posteriormente)
    int ancho{};
    int largo{};
    Inmueble trn[cantidadTrn()];
};

struct Calle {      //Conceptualización de la calle con la cantidad de carriles, los carriles y extremos (más propiedades se agregarán además de)
    int n_carriles{};   //Debatible su estatus como variable de estructura o resultado de una función
    int carriles[n_carriles]{};
    Manzana mnz_extremoA[1]{};
    Manzana mnz_extremoB[1]{};
};



class Barrio{
    Manzana mnzs[numeroMnz];
    Calle cles[numeroCle];
};


#endif
