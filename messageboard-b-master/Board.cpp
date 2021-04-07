
#include "Board.hpp"
using namespace std;
using std::string;
#include <string>
#include "Direction.hpp"

  namespace ariel{


void Board::post(unsigned int row, unsigned int column, Direction dil , string str){
    unsigned int length=(str.size());

            if(dil==Direction::Vertical) {
           unsigned int i=0;
           unsigned int y=row;
           while (y<length+row)
          
           {
              
               board[y][column]=str.at(i);
               i++;
               y++;
           }

       }
   

       if(dil==Direction::Horizontal)
       {
           unsigned int i=0;
           unsigned int x =column;
           while( x<length+column)
           {
               
               board[row][x]=str.at(i);
                i++;
                x++;
           }
       }
}
string Board::read(unsigned int row, unsigned int column, Direction dil, unsigned int length){
   string ans;
   unsigned size =  length;
      if(dil==Direction::Vertical)
       {
           unsigned int y =row;
           while(y<size+row)
           {
            
                if(board[y][column].empty())
                {
                        ans+="_";
                }
                else 
                {
                    ans+=board[y][column];
                }
                y++;
           } 

       }

               if(dil==Direction::Horizontal)

       {
           unsigned int x =column;
           while(x<size+column)
           {
               if(board[row][x].empty())
               {
                    ans+="_";
               }
                else 
                {
                    ans+=board[row][x];
              }
              x++;
           }
       }
       if(this->C<column) {
           C=column;
       }
       if(this->R>row)  {
                R=row;
       }
       return ans;
}

void Board::show(){
     unsigned int len = C + 1;
     unsigned int i=0;
     
     while ( i<R){
           cout << read(i,0,Direction::Horizontal, len);
           cout << "\n";
           i++;
        } 
    }
  }