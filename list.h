#include <iostream>
#include <vector>
#include "item.h"  

using namespace std;

class Menu {
private:
    string title;
    vector<Item> items;
public:
    Menu(const string& _title) : title(_title) {
        items.clear();
    }

    void add_item(const Item& item) {
        items.push_back(item);
    }
    void display_menu() {
        cout << title << endl;
        for (Item item : items) {
            item.display();
        }
    }
};