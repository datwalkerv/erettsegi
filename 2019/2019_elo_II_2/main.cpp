#include <iostream>

using namespace std;

struct tdata
{ int zi,luna;
} d;

struct eveniment
{ int nr;
  tdata dev;
} e;
int main()
{
    e.dev.luna = 11;
    e.dev.zi = 11;
    d.luna = 11;
    d.zi = 2;
    if((e.dev.luna > d.luna )
    || (e.dev.luna == d.luna && e.dev.zi > d.zi)){
        cout <<  "korabban" << endl;
    }
    return 0;
}
