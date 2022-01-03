#include <bits\stdc++.h>
#include <conio.h>
#include <iostream>
int main()
{
    using namespace std;
    vector<int> data(10);
    for (int i = 0; i < data.size(); i++)
    {
        data[i] = rand();
    }
    for (auto &&i : data)
    {
        std::cout << i << " ";
    }

    //     -push_back()
    // Veriyi dizinin sonuna ekler.
    data.push_back(5);

    // -pop_back()
    // Vektörün sahip olduğu son elemanı çıkarır.
    data.pop_back();
    // -back()
    // vektörün son elemanını döndürür.
    data.back();
    // -swap()
    // Tüm vektör içeriğini başka bir vektöre aktarır.
    vector<int> copydata;
    copydata.swap(data);
    // -insert()
    // Vektör içine belirtilen bir konuma eleman ekler veya çıkarır.
    data.insert(data.begin() + 2, 5);
    // -erase()
    // Vektör içinde belirtilen bir konumda bulunan elemanı çıkarır.
    data.erase(data.end() - 1);
    // -size()
    // Vektör boyutunu döndürür.
    data.size();
    // -begin()
    // Vektör başlangıcını gösterir.
    data.begin();
    // -end()
    // Vektör sonunu gösterir.
    data.end();
    // -clear()
    data.clear();
    // Vektör içeriğini siler.
    cout << "\ncapacity:" << data.capacity() << "\n";

    getchar();
    return 0;
}