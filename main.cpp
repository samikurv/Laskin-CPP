#include<iostream>
using namespace std;
int main()
{
    float numOne, numTwo, res;
    int choice;
    do
    {
        cout<<"1. Yhteenlasku\n";
        cout<<"2. Vähennyslasku\n";
        cout<<"3. Kertolasku\n";
        cout<<"4. Jakolasku\n";
        cout<<"5. Poistu\n\n";
        cout<<"Valitse(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nLisää kaksi haluamaasi numeroa: ";
            cin>>numOne>>numTwo;
        }
        switch(choice)
        {
            case 1:
                res = numOne+numTwo;
                cout<<"\nVastaus = "<<res;
                break;
            case 2:
                res = numOne-numTwo;
                cout<<"\nVastaus = "<<res;
                break;
            case 3:
                res = numOne*numTwo;
                cout<<"\nVastaus = "<<res;
                break;
            case 4:
                res = numOne/numTwo;
                cout<<"\nVastaus = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nVäärä vastaus!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;
    return 0;
}
