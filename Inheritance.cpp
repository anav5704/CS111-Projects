#include<iostream>
using namespace std;

int main(){

    struct engine {
        char type;
        int pistons;
    };

    class Vehicle {
        private:
            string brand;
            engine engine;       

        public:
            Vehicle( string brand, char type, int pistons){
               this->brand = brand;
               this->engine.type = type;
               this->engine.pistons = pistons;
            }
            void get(){
                cout << "Vehicle details:" << endl;
                cout << "Brand:" << brand << endl;
                cout << "Engine:" << engine.type << "-" << engine.pistons << endl;
            }
            string getBrand(){
                return brand;
            }
    };

    class Car: public Vehicle {
            private:
                string model;
                int year;
            
            public:
                Car(string brand, char type, int pistons, string model, int year) 
                    :  Vehicle( brand, type, pistons) , model(model), year(year) {
                        if (year > 2020){
                            cout << "Sheesh thats a modern machine ;)" << endl;
                            this->year = year;
                        }
                    }

                ~Car(){
                     cout << "Destructor for: " << getBrand() << " " << model << " was called." << endl;
                }

                void get(){
                    cout << "Model: " << model << endl;
                    Vehicle::get();
                }
    };

    Car anavsCar("Bugatti", 'W', 16, "Mistral", 2021);
    anavsCar.get();

    Vehicle truck("Toyota", 'V', 2);
    truck.get();

    system("PAUSE");
    return 0;
}