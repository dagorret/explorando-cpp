#include <iostream>
#include <ostream>
#include <iomanip>
   
int main()
{
  using namespace std;

  int const low(1); // Mínimo valor para la tabla
  int const high(10); // Máximo valor para la tabla
  int const colwidth(4); //Ancho fijo para todas las columnas

  // Todos lo números deberán estar alineados a la derecha
  cout << right;

  // Primero, imprimir la cabecera
  cout << setw(colwidth) << '*' << '|';

  for (int i(low); i <= high; i = i + 1)
    cout << setw(colwidth) << i;
  cout << '\n';

  // Imprimir la tabla usando un caracter de relleno
  cout << setfill('-') 
     << setw(colwidth) << ""
     << '+'
     << setw((high-low+1) * colwidth) << ""
     << '\n';

  // Resetear el caracter de relleno
  cout << setfill(' ');

  // Para cada fila
  for (int row(low); row <= high; row = row + 1)
  {
    cout << setw(colwidth) << row << '|';
    // Imprimir todas las columnas
    for (int col(low); col <= high; col = col + 1)
      cout << setw(colwidth) << row * col;
    cout << '\n';
  }
}
