#include <string>
using namespace std;

class Item {
public:
    string name;
    int quantity;

    void saveToFile();
    void loadFromFile();
};
