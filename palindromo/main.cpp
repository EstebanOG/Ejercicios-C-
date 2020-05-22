#include "palindromo.h"

int main()
{
    string texto, textoNormalizado;
    string* palabrasAlDerecho;
    string* palabrasAlReves;
    string* palindromos;
    int contador, contadorPalindromos;
    leerTexto(texto);
    normalizar(texto, textoNormalizado);
    contadorDePalabras(textoNormalizado,contador);
    memoriaDerecho(palabrasAlDerecho, contador);
    formarPalabrasAlDerecho( palabrasAlDerecho, textoNormalizado);
    memoriaReves(palabrasAlReves, contador);
    formarPalabrasAlReves(palabrasAlReves, palabrasAlDerecho, contador);
	contarPalindromos(palabrasAlDerecho, palabrasAlReves, contador, contadorPalindromos);
    memoriaPalindromos( palindromos, contadorPalindromos);
    printTexto(texto, contador);
    printPalabrasAlDerecho(palabrasAlDerecho, contador);
    /*
    crearArregloDePalindromos(palindromos, palabrasAlDerecho, formarPalabrasAlReves, contador);
    print(palabrasAlDerecho, contador);
    print(palindromos, contadorPalindromos);
    liberarMemoria(palabrasAlDerecho);
    liberarMemoria(palabrasAlReves);
    liberarMemoria(palindromos);*/

    system("pause");
    
}


//
//
//string Mayus = "ABCDEFGHIJKLMN�OPQRSTUVWXYZ";
//string Minus = "abcdefghijklmn�opqrstuvwxyz";
//for (int i = 0; i < (int)texto.length(); i++) {
   // for (int j = 0; j < (int)Mayus.length(); j++) {
      //  if (Mayus[j] == texto[i])
           // texto[i] = Minus[j];
   // }
    //for (int j = 0; j < 10; j++) {
       // if ((char)codigos[j] == texto[i])
        //    texto[i] = codigosnorm[j];
