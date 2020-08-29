#include<iostream>

class Hanoi{

  public :

    static void printMove(
      int n,
      char from,
      char to){

        std::cout<<"Move disk "<<n<<" from "
        <<from<<" to "<<to<<"\n";
        
    }


    // eg. from A to B using C as  
    // intermediate (auxillary = aux) 
    // first put from A->aux C 
    // then aux C->destination B 
    static void solve(
      int n ,
      char from,
      char to,
      char aux ){

        //1 disk is easy to move
        if(n==1){
          printMove(n,from,to);
          return ;
        }

        //otherwise recursive move
        //n -1 disks into aux 
        solve(n-1,from,aux,to);

        //and nth disk in aux
        printMove(n,from,to);

        //and now the n-1 from aux into to ;)
        solve(n-1,aux,to,from);
      }
};