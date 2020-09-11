#include<stdlib.h>;
#include<iostream>;
#include <limits>;

using namespace std;




int  main()
{
	cin.clear();
	cout << "Press anything to start" << endl;
	cin.get();
	system("cls");
	int FirstArraySize[2];
	int SecArraySize[2];
	int NewArraySize[2];
	do
	{
		cout << "Input size of first array" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> FirstArraySize[0] >> FirstArraySize[1];
	} while (cin.fail());
	do
	{
		cout << "Input size of second array" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> SecArraySize[0] >> SecArraySize[1];
	} while (cin.fail());




	if (FirstArraySize[1] == SecArraySize[0])
	{
		NewArraySize[0] = FirstArraySize[0];
		NewArraySize[1] = SecArraySize[1];



		cout << "input first array" << endl;
		int** FirstArray = new int*[FirstArraySize[0]];
		for (int count = 0; count< FirstArraySize[0]; count++)
			FirstArray[count] = new int[FirstArraySize[1]];
		int i1 = 0;
		int j1 = 0;
		for (i1; i1 < FirstArraySize[0]; i1++)
		{
			for (j1; j1 < FirstArraySize[1]; j1++)
			{
				do
				{
					cout << "input element[" << i1 << "][" << j1 << "]" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cin >> FirstArray[i1][j1];
				} while (cin.fail());
			}
			j1 = 0;
		}
		i1 = 0;



		cout << "first array is:" << endl;
		for (i1; i1 < FirstArraySize[0]; i1++)
		{
			for (j1; j1 < FirstArraySize[1]; j1++)
			{
				cout << " " << FirstArray[i1][j1];
			}
			j1 = 0;
			cout << endl;
		}
		i1 = 0;



		cout << "input second array" << endl;
		int** SecArray = new int* [SecArraySize[0]];
		for (int count = 0; count < SecArraySize[0]; count++)
			SecArray[count] = new int[SecArraySize[1]];
		int i2 = 0;
		int j2 = 0;
		for (i2; i2 < SecArraySize[0]; i2++)
		{
			for (j2; j2 < SecArraySize[1]; j2++)
			{
				do
				{
					cout << "input element[" << i2 << "][" << j2 << "]" << endl;
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cin >> SecArray[i2][j2];				}
				while (cin.fail());
			}
			j2 = 0;
		}
		i2 = 0;



		cout << "second array is:" << endl;
		for (i2; i2 < SecArraySize[0]; i2++)
		{
			for (j2; j2 < SecArraySize[1]; j2++)
			{
				cout << " " << SecArray[i2][j2];
			}
			j2 = 0;
			cout << endl;
		}
		i2 = 0;



		int sum=0;
		int** NewArray = new int* [NewArraySize[0]];
		int i = 0;
		int j = 0;
		for (int count = 0; count < NewArraySize[0]; count++)
			NewArray[count] = new int[NewArraySize[1]];
		for (i; i < NewArraySize[0]; i++)
		{
			for (j; j < NewArraySize[1]; j++)
			{
				for (j1; j1 < FirstArraySize[1]; j1++)
				{
						sum += FirstArray[i][j1] * SecArray[j1][j];
				}
				j1 = 0;
				NewArray[i][j] = sum;
				sum = 0;
			}
			j = 0;
		}
		i = 0;



		cout << "Multiplied array is:"<< endl;
		for (i; i < NewArraySize[0]; i++)
		{
			for (j; j < NewArraySize[1]; j++)
			{
				cout << " " <<NewArray[i][j];
			}
			j = 0;
			cout << endl;
		}
		i = 0;
	}
	else cout << "Impossible to multiply" << endl;
	return 0;
}