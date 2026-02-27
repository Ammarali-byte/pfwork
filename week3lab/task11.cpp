#include<iostream>
using namespace std;
int main(){
    int currentpopulation,birthraten,populationinnextthreedecades;
    cout<<"Enter the current world population :  ";
    cin>>currentpopulation;
    cout<<"Enter the monthly birthrate (numbers of births per months)";
    cin>>birthraten;
    populationinnextthreedecades=birthraten*(12*30)+currentpopulation;
    cout<<"population in next three decades will be "<<populationinnextthreedecades;


}