#include <iostream>

using namespace std;

int main()
{
    cout<<"                          (:  AHLAN YA USER YA HABIBI  :)"<<endl;
    cout<<"                                                         "<<endl;
    int y=1;
    cout<<"Please Enter Your Message :";
    string x;
    cin>>x;
    //cin.ignore();
    //cin.getline(x);
    while (y==1){


    for (int i=0; i<=x.length(); i++)
        {



        if(x[i]>=65 && x[i]<=90){
            if(x[i]>=78)
                x[i]-=13;
            else if (x[i]<78)
                x[i]+=13;
        }
        if (x[i]>=97 && x[i]<=122){
            if(x[i]>=110)
                x[i]-=13;
            else if (x[i]<110)
                x[i]+=13;
        }

}
    cout<<x<<endl;
    cout<<"Enter 1 to Continue or any Key to Leave :";
    cin>>y;
    cout<<"Please Enter Your Message :";
    cin.get();
    getline(cin,x);
    }
    return 0;
}
