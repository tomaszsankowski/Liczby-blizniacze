#include <iostream>
#include <fstream>
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
    ofstream out;
    out.open("twins.txt");
	int n=1000000;
	bool *tab;
	tab = new bool [n+1];

	for(int i=2; i<=n; i++)
		tab[i] = 0;
    int counter=0;
	sito(tab, n);
	for(int i=2;i<=n;i++)
        	if(!tab[i])
            		out<<i<<endl;
	delete []tab;
	out.close();
    return 0;
}
