#include <bits/stdc++.h>

using namespace std;

void vectorIntPrint(vector<int> &vector)
{
    if (!vector.size())
        return;
    for (int element : vector)
        cout << element << " ";
    cout << endl;
}

bool tab[100000000];

void sito(int const &n)
{
    // int n = 10000;
    // cin >> n;
    vector<int> se;

    for (int i = 2; i * i <= n; i++)
    {
        if (tab[i] == 0)
            for (int j = i * i; j <= n; j += i)
                tab[j] = true;
    }

    for (int i = 2; i <= n; i++)
        if (tab[i] == 0)
            se.push_back(i);
    vectorIntPrint(se);
}

void gacek()
{
    srand(time(NULL));
    int a = rand() % 7;
    if(a == 0)
    {
        printf("Ja sie lern wy sie teach\n");
    }
    else if(a == 1)
    {
        printf("-Prosze Pana co to maciez?\n-No to.\n-A jak to dziala?\n-Nie wiem\n");
    }
    else if(a == 2)
    {
        printf("Mam dla was taki wspanialy konkurs - Bobr\n");
    }
    else if(a == 3)
    {
        printf("Szkole kolo CARITAS zaprasza!\n");
    }
    else if(a == 4)
    {
        printf("To jest konkurs PROLIFE, za udzial 6 na koniec roku\n");
    }
    else if(a == 5)
    {
        printf("-Prosze Pana co to jest?\n-Co? To?\n-No tak\n-To jest calka\n-A co to calka?\n-No to.\n");
    }
    else if(a == 6)
    {
        printf("Szanowna 2B jak sie ciesze ze was widze o 7 rano, pelnych energi i pasji do uczenia sie informatyki!");
    }
}