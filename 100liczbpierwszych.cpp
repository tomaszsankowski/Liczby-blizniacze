#include <iostream>
using namespace std;

void sito(bool *tab, unsigned int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(!tab[i])
            for(int j=i*i; j<=n;j+=i)
        {
            tab[j]=1;
        }
    }
}
int main()
{
	int n=1000000;
	bool *tab;
	int x;
	cout << "Ilosc liczb pierwszych:" << endl;
	cin >> x;

	tab = new bool [n+1];

	for(int i=2; i<=n; i++)
		tab[i] = 0;
    int counter=0;
	sito(tab, n);
	for(int i=2;i<=n;i++)
        if(counter<x){
            if(!tab[i]){
                cout<<i<<" ";
                counter++;}}

	cout<<endl;

	delete []tab;
    return 0;
}
