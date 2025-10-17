#pragma once

#include <vector>
#include "item.h"
#include "list.h"

using namespace std;

enum OrderStatus {
    PENDING,
    IN_PROGRESS,
    DELIVERED,
    CANCELLED
};
class Order {
private:
    int order_id;
    vector<Item> items;
    OrderStatus status;

public:
    Order(int _id,int _status);
    void display_order() ;
    void add_item(Menu m);
};