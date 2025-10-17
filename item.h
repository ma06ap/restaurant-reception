#pragma once


#include <string>
#include <iostream>

using namespace std;

enum Item_type { food, drink, dessert };

class Item {
private: 
    string name;
    float price;
    Item_type type;

    void set_price(float _price);
    void set_name(const string& _name);
    void set_type(int input);
public:
    Item(string _name, float _price,int _type);

    float get_price();
    Item_type get_type();
    string get_name();

    void change ();
    void display();
}; 

