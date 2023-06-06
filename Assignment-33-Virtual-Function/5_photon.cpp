#include <iostream>
#include <math.h>
using namespace std;

class Photon
{
    protected:
        double wavelength;
    public:
        Photon(double wavelength){
            this->wavelength = wavelength/pow(10,-10);
        }
};

class calculate_photonEnergy : public Photon{
    private:
        double E;
    public:
        calculate_photonEnergy(double value_in_angstrom):Photon(value_in_angstrom)
        {

        }
        void calphotonEnergy(){
            E = (6.626*(pow(10,-34))*3*(pow(10,8)))/wavelength;
            cout<<"Value of Photons Energy is : "<<E<<endl;
        }
};

int main()
{
    calculate_photonEnergy pt1(0.5);

    pt1.calphotonEnergy();

    return 0;
}