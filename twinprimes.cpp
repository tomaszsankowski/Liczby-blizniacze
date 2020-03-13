#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("twins.txt");
    ofstream out;
    out.open("twinprimess.txt");
	int counter=0;
	int zmienna,poprzednia;
	in>>poprzednia;
	while(in>>zmienna)
    {
        if(zmienna==poprzednia+2)
        {
            out << poprzednia << " " << zmienna << endl;
            counter++;
        }
        poprzednia=zmienna;
    }
    out << counter;

	in.close();
	out.close();
    return 0;
}
