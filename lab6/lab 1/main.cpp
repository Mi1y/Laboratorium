#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
    int liczba, loteria;
    int counter=0;
    int countermniejsza=0;
    int counterwieksza=0;

int main()
{
    cout << "Czas na zabawe, zgadnij jaka liczba zostala wylosowana od 1 do 10, masz 3 proby" << endl;
    srand(time(NULL));
    loteria = rand() % 10+1;

        while(liczba!=loteria){
        ++counter;
        cout << "Zgadnij jaka liczba wylosowala " << liczba << " proba " << counter << endl;
        cin >> liczba;

        if (counter==9){
        cout << " przekroczyles 10 prob, przegrales" << endl;
        return 0;
        }

                    if(liczba<loteria){
                    ++countermniejsza;
                    }

                    if (countermniejsza==3){
                    cout << "za malo" << endl;
                    }

                    if(liczba>loteria){
                    ++counterwieksza;
                    }

                    if (counterwieksza==3){
                    cout << "za duzo" << endl;
                    }

        if(liczba==loteria){
        cout << "Brawo trafiles" << endl;
        cout << "wylosowana liczba byla " << loteria << " udalo ci sie za " << counter << " razem" << endl;
        }
    }
return 0;
}
/*
        else if (counter == 3 && countermniejsza > counterwieksza){
            cout <<"przegrales, za duzo malych liczb dales";
            return 0;
        }
        else if (counter == 3  && counterwieksza > countermniejsza) {
            cout <<"przegrales, za duzo duzych liczb dales";
            return 0;
        }
        */
