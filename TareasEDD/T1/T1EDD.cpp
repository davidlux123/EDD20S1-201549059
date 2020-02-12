#include <iostream>

using namespace std;

int main()
{
	int matrix[5][5];

	//LLENO LA MATRIZ DE CEROS
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++)
		{

			matrix[i][j] = 0;

		}
	}

	//ACA ES DONDE SUCEDE LA MAGIA
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {

			if (i == 0)
			{
				matrix[i][j] = 1;

			}
			else if (i == 4)
			{
				matrix[i][j] = 1;
			}
			else {

				if (j == 0)
				{
					matrix[i][j] = 1;
				}
				else if (j == 4)
				{
					matrix[i][j] = 1;
				}

			}

		}


	}

	//IMPRIMERO LA MATRIZ
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++)
		{

			cout << matrix[i][j];

		}
		cout << endl;
	}

	return 0;


}