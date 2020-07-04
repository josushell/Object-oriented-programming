#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Kart {
private:
    string name;
    double price;
public:
    Kart(string name, double price) : name(name), price(price) {}

    string get_name() { return name; }
    double get_price() { return price; }

    virtual void use_item() {
        cout << "No Item" << endl;
    }
};

class ItemKart : public Kart{
private:
    string item;
public:
    ItemKart(string name, double price, string item) :
        Kart(name, price), item(item) {}
    
    string get_item() { return item; }

    void use_item() override {
        cout << "Use Item: " << item << endl;
    }
};


int main() {
    // 1. Kart
    ItemKart ion("ion", 30000, "booster");

    cout << "Name: " << ion.get_name() << endl;
    cout << "Price: " << ion.get_price() << endl;
    cout << "Item: " << ion.get_item() << endl;

    // 2. Use Item
    Kart *k = &ion;
    k->use_item();

    // 3. Three Karts
    vector<Kart*> karts;
    karts.push_back(&ion);
    karts.push_back(new Kart("mentice", 50000));
    karts.push_back(new Kart("boot", 20000));

    for (Kart *kart : karts) {
        kart->use_item();
    }

    return 0;
}