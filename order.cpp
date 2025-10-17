#include "order.h"

using namespace std;

Order::Order(int _id,int _status) {
    if (_status >= 0 && _status <= 3) {
        status = static_cast<OrderStatus>(_status);
    } else {
        status = PENDING; //default
    }
    order_id = _id;
}
void Order::display_order() {
    cout << "Order ID: " << order_id << endl;
    cout << "Items in the order:" << endl;
    for (Item item : items) {
        item.display();
    }
    cout << "Order Status: ";
    switch (status) {
        case PENDING: cout << "Pending"; break;
        case IN_PROGRESS: cout << "In Progress"; break;
        case DELIVERED: cout << "Delivered"; break;
        case CANCELLED: cout << "Cancelled"; break;
    }
    cout << endl;
}

void Order::add_item(Menu m) {
    string order_name;
    cout << "Enter item order number to add(done=0): ";
    items.push_back(m.search(order_name));
}