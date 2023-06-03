#include<iostream>
#include <string>

using namespace std;

class Animal
{
    protected:
        string sound;
    public:
        string Sound(){
            return sound;
        }

        void set_sound(string sound){
            this->sound = sound;
        }
};

class Dogs : public Animal
{
    private:
        string dog_sound;
    public:
        string Sound(){
            return dog_sound;
        }
        void set_sound(string sound){
            this->dog_sound = sound;
        }
};

int main()
{
    Animal cat;
    cat.set_sound("Meyao");
    string sound = cat.Sound();
    cout<<"Sound of cat "<<(sound)<<endl;

    Dogs pet;
    pet.set_sound("Bow");
    cout<<"Sound of Dog is : "<<pet.Sound()<<endl;

    return 0;
}