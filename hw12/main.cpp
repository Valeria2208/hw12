//
//  main.cpp
//  hw12
//
//  Created by Valeria Dudinova on 07.11.2024.
//

#include <iostream>
using namespace std;

class CPU
{
public:
    int model; // Ідентифікатор моделі процесора
    double frequency; // Частота в ГГц

    CPU(int m, double f) : model(m), frequency(f) {}
};

class RAM
{
public:
    int capacity; // Обсяг у ГБ
    int type;     // Тип (наприклад, 1 = DDR3, 2 = DDR4, 3 = DDR5)

    RAM(int c, int t) : capacity(c), type(t) {}
};

class Storage
{
public:
    int capacity; // Обсяг у ГБ
    int type;     // Тип (1 = HDD, 2 = SSD)

    Storage(int c, int t) : capacity(c), type(t) {}
};

class Display
{
public:
    double size;   // Розмір у дюймах
    int resolution; // Ідентифікатор роздільної здатності (1 = 1920x1080, 2 = 2560x1440, 3 = 3840x2160)

    Display(double s, int r) : size(s), resolution(r) {}
};

class Battery
{
public:
    int capacity; // Ємність у мАг
    double life;  // Час роботи у годинах

    Battery(int c, double l) : capacity(c), life(l) {}
};

class Keyboard
{
public:
    bool backlit;  // Підсвітка (true = є, false = немає)
    int layout;    // Ідентифікатор розкладки (1 = QWERTY, 2 = AZERTY, 3 = QWERTZ)

    Keyboard(bool b, int l) : backlit(b), layout(l) {}
};

class GPU
{
public:
    int model;    // Ідентифікатор моделі відеокарти
    int memory;   // Обсяг пам'яті у МБ

    GPU(int m, int mem) : model(m), memory(mem) {}
};

class Laptop
{
public:
    CPU cpu;
    RAM ram;
    Storage storage;
    Display display;
    Battery battery;
    Keyboard keyboard;
    GPU gpu;

    Laptop(CPU c, RAM r, Storage s, Display d, Battery b, Keyboard k, GPU g)
        : cpu(c), ram(r), storage(s), display(d), battery(b), keyboard(k), gpu(g) {}

    void displayInfo()
    {
        cout << "CPU Model ID: " << cpu.model << ", Frequency: " << cpu.frequency << " GHz" << endl;
        cout << "RAM: " << ram.capacity << " GB, Type ID: " << ram.type << endl;
        cout << "Storage: " << storage.capacity << " GB, Type ID: " << storage.type << endl;
        cout << "Display: " << display.size << " inches, Resolution ID: " << display.resolution << endl;
        cout << "Battery: " << battery.capacity << " mAh, Life: " << battery.life << " hours" << endl;
        cout << "Keyboard: " << (keyboard.backlit ? "Backlit" : "Non-backlit") << ", Layout ID: " << keyboard.layout << endl;
        cout << "GPU Model ID: " << gpu.model << ", Memory: " << gpu.memory << " MB" << endl;
    }
};

int main()
{
    CPU cpu(1, 2.8);  // Ідентифікатор моделі = 1, Частота = 2.8 ГГц
    RAM ram(16, 2);   // Обсяг = 16 ГБ, Тип = DDR4 (2)
    Storage storage(512, 2); // Обсяг = 512 ГБ, Тип = SSD (2)
    Display display(15.6, 1); // Розмір = 15.6 дюймів, Роздільна здатність = 1920x1080 (1)
    Battery battery(4500, 8); // Ємність = 4500 мАг, Час роботи = 8 годин
    Keyboard keyboard(true, 1); // Підсвітка = є, Розкладка = QWERTY (1)
    GPU gpu(1, 4096); // Ідентифікатор моделі = 1, Пам'ять = 4096 МБ

    Laptop laptop(cpu, ram, storage, display, battery, keyboard, gpu);

    laptop.displayInfo();

    return 0;
}
