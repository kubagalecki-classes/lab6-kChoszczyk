#include "make_random_vector.hpp"
#include <functional>
#include <iostream>
#include <list>
#include <string>

using namespace std;

int main()
{

    /*
    auto vec = make_random_vector(15, 0, 10);
    cout << "Losowy" << endl;
    for (auto e : vec)
        cout << e << endl;
    vec.erase(remove(vec.begin(), vec.end(), 3), vec.end());
    cout << "Posortowany" << endl;
    for (auto e : vec)
        cout << e << endl;*/

    /*string kom;
    // string pie;
    bool cos;
    cin >> kom;
    reverse(kom.begin(), kom.end());
    // if (i1 == kom.end())
    //   cos = 0;
    // else
    //    cos = 1;
    cout << kom << endl;*/

    // Zadanie przed cwiczeniami
    /*int  w;
    auto vec = make_random_vector(20, 0, 10);
    cout << "Losowy" << endl;
    for (auto e : vec)
        cout << e << endl;
    sort(vec.begin(), vec.end(), greater< int >());
    cout << "Posortowany" << endl;
    for (auto e : vec)
        cout << e << endl;
    cin >> w;
    auto c = count_if(vec.begin(), vec.end(), [&](int x) { return x > w; });
    cout << "Liczba policzonych siódemek " << c << endl;*/
}
