#include<iostream>

using namespace std;

class Hanoi{

  public :

    void move(int n,char from,char to){
      cout<<"Move disk "<<n<<" from "
      <<from<<" to "<<to<<"\n";
    }

    void solve(
      int n ,
      char from,
      char to,
      char aux ){

        //1 disk is easy to move
        if(n==1){
          move(n,from,to);
        }

        //otherwise recursive move
        //n -1 disks into aux 
        solve(n-1,from,)


        //and nth disk in aux
      }
};