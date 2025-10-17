#include "list.h"

Menu::Menu(const string& _title) : title(_title) {
    items.clear();
}

void Menu::add_item(const Item& item) {
    items.push_back(item);
}
void Menu::display_menu() {
    cout << title << endl;
    for (Item item : items) {
        item.display();
    }
}

Item Menu::search (string item_name){
    while (1) {
    for (Item item : items) {
        if (item.get_name() == item_name) {
            return item;
        }
    }
    cout << "Item not found. Please enter a valid item name: ";
    cin >> item_name;
    }
}