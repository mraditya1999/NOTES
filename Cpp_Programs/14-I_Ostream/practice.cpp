#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Item
{
private:
    string name;
    float price;
    int quantity;

public:
    Item() {}
    Item(string name, float price, int quantity);
    friend ifstream &operator>>(ifstream &ifs, Item &i);
    friend ofstream &operator<<(ofstream &ofs, Item &i);
    friend ostream &operator<<(ostream &os, Item &i);
};

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator it = v.begin();

    string name;
    float price;
    int quantity;
    int n;

    cout << "Enter the number of items: ";
    cin >> n;

    vector<Item> items;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of the item: ";
        cin >> name;
        cout << "Enter the price of the item: ";
        cin >> price;
        cout << "Enter the quantity of the item: ";
        cin >> quantity;
        items.push_back(Item(name, price, quantity));
        cout << endl;
    }

    ofstream ofs("items.txt");
    for (Item i : items)
        ofs << i;

    ifstream ifs("items.txt");
    vector<Item> items2;
    while (ifs >> name >> price >> quantity)
        items2.push_back(Item(name, price, quantity));

    for (Item i : items2)
        cout << i;

    return 0;
}

Item::Item(string name, float price, int quantity)
{
    this->name = name;
    this->price = price;
    this->quantity = quantity;
}

ifstream &operator>>(ifstream &ifs, Item &i)
{
    ifs >> i.name >> i.price >> i.quantity;
    return ifs;
}

ofstream &operator<<(ofstream &ofs, Item &i)
{
    ofs << i.name << " " << i.price << " " << i.quantity << endl;
    return ofs;
}

ostream &operator<<(ostream &os, Item &i)
{
    os << i.name << " " << i.price << " " << i.quantity << endl;
    return os;
}