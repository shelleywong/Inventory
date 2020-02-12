/*
 * @file Inventory.h
 * @author Shelley Wong
 * 
 * Inventory class keeps track of inventory items, price of those items,
 * and whether or not those items are in stock.
 */
#ifndef _INVENTORY_
#define _INVENTORY_
#include <iostream>

using std::string;
using std::ostream;

class Inventory
{
  private:
    string m_name;
    float m_price;
    int m_in_stock;

  public:
    Inventory(string,float,int);
    void sell();
    friend ostream& operator<<(ostream&, const Inventory&);
};

#endif