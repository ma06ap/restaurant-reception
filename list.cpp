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