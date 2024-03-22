#include <iostream>
#include <vector>
using namespace std;

struct shoe
    {
        string color;
        int size;
    };
int main(){
    
    vector<shoe> my_shoe;
    shoe my_shoe2;

    cout << " Enter a shoe color: ";
    cin >> my_shoe2.color;

    while(my_shoe2.color != "end")
    {
        //have user enter shoe size next because it was previously asked for when starting
        cout << " Enter a shoe size: ";
        cin >> my_shoe2.size;
        //after adding size push it back and then ask for color
        my_shoe.push_back(my_shoe2);

        cout << " Enter a shoe color: ";
        cin >> my_shoe2.color;
    }
    cout << "\n Details of shoes:\n";
    for (int i = 0; i < my_shoe.size(); ++i)
    {
        cout << "Color: " << my_shoe[i].color << ", Size: " << my_shoe[i].size << endl;
    }


    return 0;
}