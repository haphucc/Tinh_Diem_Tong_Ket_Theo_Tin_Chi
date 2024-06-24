#include <iostream>
using namespace std;

typedef struct{
    float DTK,TC;
}DT;

int main()
{
    int n;
    float Sum_TC = 0, Sum_DTK = 0;

    cout<<"\n -> Nhap so mon: ";
    cin>>n;
    cout<<endl;
    DT *D = new DT[n];

    for(int i = 0 ; i < n ; i++)
    {
        cout<<" [-] Nhap diem mon thu "<<i + 1<<" : ";
        cin>>D[i].DTK;
        cout<<" [+] So tin chi: ";
        cin>>D[i].TC;
    }

    for(int i = 0 ; i < n ; i++)
    {
        Sum_DTK+= D[i].DTK*D[i].TC;
        Sum_TC+= D[i].TC;
    }
    
    cout<<"\n -> Tong so TC: "<<Sum_TC;
    cout<<"\n -> Diem trung binh cac mon la: "<<Sum_DTK/Sum_TC;
}




//phuc ne 2/2021