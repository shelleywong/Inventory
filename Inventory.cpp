/*
 * @file Inventory.cpp
 * @author Shelley Wong
 * 
 * Functions for Inventory class.
 */
#include <iostream>
#include <iomanip>
#include "Inventory.h"

using std::string;
using std::ostream;
using std::cout;
  
/*
 * @brief         Inventory constructor
 * @param name    String name of the item in inventory
 * @param price   Float price of item in inventory
 * @param count   Integer count of how much of the item is in inventory
 */
Inventory::Inventory(string name, float price, int count)
{
  m_name = name;
  m_price = price;
  m_in_stock = count;
}

/*
 * @brief         Sell an item from inventory
 *
 * When an item from inventory is sold, decrease the number of
 * items in stock.
 */
void Inventory::sell()
{
  if(m_in_stock == 0){
    cout<<"Sorry, that item is out of stock\n";
  }
  else{
    m_in_stock--;
  }
}

/*
 * @brief         Print the name and price of item in inventory
 * @param stream  output stream for printing
 * @param item    Item from inventory class
 * @return        Return the output stream message
 * 
 * Print the item name and dollar price of the item.
 */
ostream& operator<<(ostream& stream, const Inventory& item)
{
  stream << item.m_name 
         << " $"
         << std::fixed << std::setprecision(2) << item.m_price;
  return stream;
}