 #include <iostream>
 using namespace std;

 int main() {
	 int numeroDeLenguajes;

	 cout << "!!!Hola!!!.\n" << "Bienvenido a C++.\n";
	 cout << "Cuantos lenguajes de programaci�n dominas? ";
	 cin >> numeroDeLenguajes;

	 if (numeroDeLenguajes < 1)
	 	cout << "Serr� recomendable aprender antes un lenguaje m�s sencillo...\n" << "por ejemplo C, aunque nada es imposible.\n";
	 else
	 	cout << "Este curso ser� sencillo para ti.\n";
	 return 0;
 }
