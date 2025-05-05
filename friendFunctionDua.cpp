#include <iostream>
using namespace std;

class pelajar;
class manusia
{
public:
    void showNilaiPelajar(pelajar &x);
    void showNilaiPelajarDua(pelajar &y);
};

class pelajar
{
private:
    int nilai;
public:
    pelajar() { nilai = 100; }

};