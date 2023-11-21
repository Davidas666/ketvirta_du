#include<fstream>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double alga[50],procentai[50],nauja[50];
    string vardas[50], pavarde[50];
    ifstream fd("salary.txt");
    ofstream rez("newSalary.txt");
    int x = 0;
    while (fd >> vardas[x] >> pavarde[x] >> alga[x] >> procentai[x]) {
        nauja[x]=((procentai[x] / 100) + 1) * alga[x];
        x++;
    }

    for (int i = 0; i < x; i++) {
        
        rez << vardas[i] << " " << pavarde[i] <<" "<< nauja[i] << endl;
    }
    fd.close();
    rez.close();

}