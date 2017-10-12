#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {


    return;
}

void ItemToPurchase::SetName(string name) {
    itemName = name;

    return;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;

    return;
}

void ItemToPurchase::SetQuantity(int quantity) {
    itemQuantity = quantity;

    return;
}

string ItemToPurchase::GetName() const {
    return itemName;
}

int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}

void ItemToPurchase::Print() {

}