# Uniwersalna funkcja `wypisz` w C++ (Szablony / Templates)

Prosty projekt demonstrujący użycie przeciążonych szablonów funkcji (`template`) w języku C++, pozwalający na wygodne wypisywanie zawartości różnych struktur danych za pomocą jednej nazwy funkcji.

## 🚀 Funkcjonalności

* **Pełna uniwersalność typów:** Obsługuje zarówno kontenery posiadające iteratory (np. `std::vector`, `std::list`), jak i adaptery bez iteratorów (`std::queue`).
* **Dowolny typ danych:** Działa dla `int`, `std::string`, `double` i każdego innego typu wspierającego operator `<<`.
* **Elastyczna etykieta:** Dzięki drugiemu parametrowi szablonu (`Label`), jako opis można przekazać zarówno zwykły tekst (`const char*`), obiekt `std::string`, jak i liczby.
* **Bezpieczeństwo danych:** Kolejka (`std::queue`) jest przekazywana do funkcji przez wartość (kopię), dzięki czemu wypisanie jej zawartości nie opróżnia oryginału w programie głównym.

## 💻 Przykład użycia

```cpp
// Wypisanie wektora liczb
vector<int> vecInt = {1, 2, 3, 4, 5};
wypisz("Wektor int", vecInt);

// Wypisanie kolejki napisów
queue<string> qStr;
qStr.push("Cześć");
qStr.push("Świecie");
wypisz("Kolejka string", qStr);
