#include<iostream>
#include<string>
//Karen Lopez Aljure
using namespace std;


int decodePermits( const string permits, int total);


int main()
{
    int total=0;
    string permit1 = "rw-r--r--";
    string permit2 = "rwxr-x--x";
    string allpermits = "rwxrwxrwx";

    cout<<permit1<<endl;
    cout<<permit2<<endl;
    cout<<allpermits<<endl<<endl;

    cout << decodePermits(permit1, total) <<endl;
    cout << decodePermits(permit2, total) <<endl;
    cout << decodePermits(allpermits, total) <<endl;



    cin.get();
    cin.ignore();
    return 0;
}


int decodePermits( const string permits, int total){
    // Complete esta función siguiendo las recomendaciones anteriores
    //r : 4    w : 2    x : 1    - : 0
    int k=0, r=4, w=2, x=1, conta=0, total1=0;
    k=permits.length();

    total=0;
    for(int i=0; i<k; i++){
        conta++;
        if(conta%3==0){
            for(int j=conta-1; j>=conta-3; j--){
                if(permits[j]=='r')total1+=4;
                if(permits[j]=='w')total1+=2;
                if(permits[j]=='x')total1+=1;
                if(permits[j]=='-')total1+=0;
                if(j==conta-3){
                    total+=total1;
                    total*=10;
                }
            }
        }
        total1=0;
    }
    return total/=10;
}
