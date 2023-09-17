// Serialization is a process of storing & retrieving the state of an object.
#include <iostream>
#include <fstream>
using namespace std;

class Item
{
public:
    Item() {}
    Item(string name, float price, int quantity);
    string name;
    float price;
    int quantity;

    // overloading an operator
    friend ifstream &operator>>(ifstream &ifs, Item &i);
    friend ofstream &operator<<(ofstream &ofs, Item &i);
    friend ostream &operator<<(ostream &os, Item &i);
};

Item::Item(string name, float price, int quantity)
{
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}

ostream &operator<<(ostream &os, Item &i)
{
    os << "Name: " << i.name << endl;
    os << "Price: " << i.price << endl;
    os << "Quantity: " << i.quantity << endl;
    return os;
}

ifstream &operator>>(ifstream &ifs, Item &i)
{
    ifs >> i.name >> i.price >> i.quantity;
    return ifs;
}

ofstream &operator<<(ofstream &ofs, Item &i)
{
    ofs << i.name << endl;
    ofs << i.price << endl;
    ofs << i.quantity << endl;
    return ofs;
}

int main()
{
    string name;
    float price;
    int quantity;
    int n;

    cout << "Enter the number of items: ";
    cin >> n;

    Item *list[n];
    cout << "Enter the name, price and quantity of each item: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Item " << i + 1 << ": ";
        cin >> name >> price >> quantity;
        list[i] = new Item(name, price, quantity);
    }

    // Write to a File
    ofstream ofs("Items.txt");
    for (int i = 0; i < n; i++)
        ofs << *list[i];

    Item item;
    ifstream ifs("Items.txt");
    for (int i = 0; i < n; i++)
    {
        ifs >> item;
        cout << item << endl;
    }

    return 0;
}
