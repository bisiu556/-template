#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

// 1. Szablon dla kontenerów z iteratorami (np. vector)
// Label - dla etykiety (np. string, const char*, itd.)
// T - dla typu kontenera
template <typename Label, typename T>
void wypisz(const Label& nazwa, const T& kontener)
{
    cout << nazwa << ": ";
    for (const auto& el : kontener)
    {
        cout << el << " ";
    }
    cout << endl;
}

// 2. Szablon dla queue (kolejka przekazywana przez wartoœæ, ¿eby jej nie zniszczyæ)
template <typename Label, typename T>
void wypisz(const Label& nazwa, queue<T> q)
{
    cout << nazwa << ": ";
    while (!q.empty())
        {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    // Wektor intów
    vector<int> vecInt = {1, 2, 3, 4, 5};
    wypisz("Wektor int", vecInt); // przyjmie litera³ "C-style string"

    // Wektor stringów
    vector<string> vecStr = {"kamil", "to", "skibidi", "toilet"};
    string mojeLabel = "Wektor string";
    wypisz(mojeLabel, vecStr); // przyjmie te¿ obiekt std::string

    // Kolejka intów
    queue<int> qInt;
    qInt.push(10);
    qInt.push(20);
    qInt.push(30);
    wypisz("Kolejka int", qInt);

    // Kolejka stringów
    queue<string> qStr;
    qStr.push("camera");
    qStr.push("man");
    wypisz("Kolejka string", qStr);

    return 0;
}
