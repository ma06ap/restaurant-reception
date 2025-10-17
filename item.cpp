
#include "item.h"
#include <iostream>
#include <string>

using namespace std;


void Item::set_price(float _price) {
    while (_price < 0.0f) {
        cout << "Price cannot be negative. Please enter a valid price: ";
        cin >> _price;
    }
    price = _price;
    cout << "Price updated successfully." << endl;
}
void Item::set_name(const string& _name) {
    name = _name;
    cout << "Name updated successfully." << endl;
}
void Item::set_type(int input) {
    while (input < 0 || input > 2) {
        cout << "Invalid type. Please enter 0 for food, 1 for drink, or 2 for dessert: ";
        cin >> input;   
    }
    Item_type _type = static_cast<Item_type>(input);
    type = _type;
    cout << "Type updated successfully." << endl;
}
Item::Item(string _name, float _price, int _type) {
    while (_price < 0.0f) {
        cout << "Price cannot be negative. Please enter a valid price: ";
        cin >> _price;
    }
    name = _name;
    price = _price;
    while (_type < 0 || _type > 2)
    {
        cout << "Invalid type. Please enter 0 for food, 1 for drink, or 2 for dessert: ";
        cin >> _type;
    }
    type = static_cast<Item_type>(_type);
}

float Item::get_price() { return price; }
Item_type Item::get_type() { return type; }
string Item::get_name() { return name; }

void Item::change () {
    string arg;
    cout << "Enter what you want to change (All/name/price/type): ";
    cin >> arg;
        if (arg=="All")
        {
            string _name;
            float _price;
            int _type;
            cout << "Enter new name: ";
            cin >> _name;
            this->set_name(_name);
            cout << "Enter new price: ";
            cin >> _price;
            this->set_price(_price);
            cout << "Enter new type (0: food, 1: drink, 2: dessert): ";
            cin >> _type;
            this->set_type(_type);
        } 
        else if (arg=="name")
        {
            string _name;
            cout << "Enter new name: ";
            cin >> _name;
            this->set_name(_name);
        }
        else if (arg=="price")
        {
            float _price;
            cout << "Enter new price: ";
            cin >> _price;
            this->set_price(_price);
        }
        else if (arg=="type")
        {
            int _type;
            cout << "Enter new type (0: food, 1: drink, 2: dessert): ";
            cin >> _type;
            this->set_type(_type);
        }
        else
        {
            cout << "Invalid option." << endl;
        }
}

void Item::display() {
    cout << "Name: " << this->get_name() << ", ";
    cout << "Price: " << this->get_price() << ", "; 
    cout << "Type: ";
    Item_type temp = this->get_type();
    if (temp == food) cout << "Food" << endl;
    else if (temp == drink) cout << "Drink" << endl;
    else if (temp == dessert) cout << "Dessert" << endl;
}
