#include <iostream>
#include <vector>
#include "item.h"  

using namespace std;

class Menu {
private:
    string title;
    vector<Item> items;
public:
    Menu(const string& _title) ;
    void add_item(const Item& item) ;
    void display_menu() ;
};