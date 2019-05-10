#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double v1[100], v2[100], v3[100];
	int n, i=0;
	
	cout << "Digite a quantidade de alunos: "; cin >> n;
	while (n<1 || n>100)
	{
		cout << "Quantidade invalida!!!" << endl;
		cout << "Digite a quantidade de alunos: "; cin >> n;
	}
	 	
	for (int i = 0; i < n; i++)
	{
		cout << "Digite a nota P1 do aluno " << i+1 << ": "; cin >> v1[i];
		while (v1[i] < 0 || v1[i] > 10)
		{
			cout << "Nota invalida!!!" << endl;
			cout << "Digite a nota P1 do aluno " << i+1 << ": "; cin >> v1[i];
		}
		cout << "Digite a nota P1 do aluno " << i+1 << ": "; cin >> v2[i];
		while (v2[i] < 0 || v2[i] > 10)
		{
			cout << "Nota invalida!!!" << endl;
			cout << "Digite a nota P2 do aluno " << i+1 << ": "; cin >> v2[i];
		} 
		v3[i] = (v1[i] + v2[i])/ 2.0; 
	}
	cout << endl << "Numero do aluno" << setw(6) << "P1" << setw(8) << "P2" << setw (10) << "Media" << endl;
	for (int i = 0; i < n; i++)
		cout << setw(8) <<i+1 << setw(14) << setprecision (2) << fixed << v1[i] << setprecision(2) << fixed << setw(8) << v2[i] << setprecision(2) << fixed << setw (8) << v3[i] << endl;
system ("PAUSE");
	return 0;
}
