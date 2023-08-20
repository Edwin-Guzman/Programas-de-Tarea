/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


void
matrices ()
{

  int a = 0, b = 0, c = 0, dim, d, max, min;
  int A[100];
  int B[100];
  int C[200];

  cout << "Ingrese la dimension del vector A:" << endl;
  cin >> dim;
  cout << endl;

  cout << "Ingrese la dimension del vector B:" << endl;
  cin >> d;
  cout << endl;

  cout << "Ingrese el valor maximo y el minimo aleatorio a generar:" << endl;
  cout << "->" << " ";
  cin >> max;
  cout << "->" << " ";
  cin >> min;
  cout << endl << endl;

  for (int i = 0; i < dim; i++)
    {
      for (int j = 0; j < d; j++)
	A[i] = (rand () % max) + min;
      cout << A[i] << endl;
    }
  cout << endl;
  for (int j = 0; j < d; j++)
    {
      for (int i = 0; i < d; i++)
	B[j] = (rand () % max) + min;
      cout << B[j] << endl;
    }

  while (c < dim)
    {

      if (a < dim && b < d)
	{
	  if (A[a] <= B[b])
	    {
	      C[c] = A[a];
	      a++;
	    }
	  else
	    {
	      C[c] = B[b];
	      b++;
	    }
	}
      c++;
      cout << "Los 2 vectores ordenados en un solo vector:" << endl;
      cout << c;
    }
}


void matrices ();

int
main ()
{

  matrices ();


  return 0;
}
