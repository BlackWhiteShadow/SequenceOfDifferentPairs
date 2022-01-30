#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> X)
{
	for (int i = 0; i < X.size(); i++)
	{
		cout << X[i] << " ";
	}

	cout << endl;
}

int main()
{
	vector<int> A;
	vector<int> B;
	vector<int> C;
	int x = 0;
	int i = 0;
	int poz;
	bool found;

	while (x != -1) {
		cin >> x;
		if ((i % 2) == 0)
			A.push_back(x);
		else if ((i % 2) == 1)
			B.push_back(x);
		i++;
	} ;

	A.pop_back();

	x = 0;
	i = 0;

	while (x != -1) {
		cin >> x;
		i++;
		C.push_back(x);
	};

	C.pop_back();

	for (int k = 0; k < C.size(); k++)
	{
		poz = 0;
		found = false;

		for (int i = 0; i < A.size(); i++)
		{
			if (A[i] == C[k])
			{
				poz = i;
				found = true;
				break;
			}
		}

		if (found)
			cout << B[poz] << " ";
		else if(!found)
			cout << 0 << " ";
	}

	cout << -1;
}


