#pragma once
#include <string>
#include <iostream>
using namespace std;

class Player; // Player 클래스는 나중에 정의되므로 forward declaration

class Monster {
public:
    Monster(string name) {
        this->name = name;
        HP = 10;
        power = 30;
        defence = 10;
        speed = 10;
    }

    void attack(Player* player);

    // getter
    string getName() { return name; }
    int getHP() { return HP; }
    int getPower() { return power; }
    int getDefence() { return defence; }
    int getSpeed() { return speed; }

    // setter
    void setName(string name) { this->name = name; }
    bool setHP(int HP) {
        if (HP <= 0) {
            this->HP = 0;
            return false;
        }
        this->HP = HP;
        return true;
    }
    void setPower(int power) { this->power = power; }
    void setDefence(int defence) { this->defence = defence; }
    void setSpeed(int speed) { this->speed = speed; }

protected:
    string name;
    int HP;
    int power;
    int defence;
    int speed;
};
