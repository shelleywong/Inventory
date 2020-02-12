#include <iostream>
#include "Inventory.h"

using std::cin;
using std::cout;
using std::string;

int main()
{
  char choice = 'q';
  Inventory stock("Cupcake",2.99,100);

  do
  {
    cout<<"\nMENU\n====\n(S)ell item\n(Q)uit\n>";
    cin>>choice;
    if( choice == 'S' || choice == 's' )
    {
      if(stock.m_in_stock == 0){
        cout<<"Sorry, that item is out of stock\n";
      }
      else{
        stock.sell();
        cout<<stock<<"\n";
      }
    }
  }while( choice != 'q' && choice != 'Q');

  return 0;
}