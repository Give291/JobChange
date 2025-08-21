#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "전사";
    cout << "* 전사로 전직하였습니다!" << endl;
    HP = 80;
    MP = 20;
    power = 20;
    defence = 15;
    accuracy = 10;
    speed = 8;
    level = 1;
}

void Warrior::attack() {
    cout << "* 장검을 휘두른다!" << endl;
}

void Warrior::attack(Monster* monster) {
    cout << nickname << "의 공격!" << endl;
    int damage = power - monster->getDefence();
    if (damage <= 0) damage = 1;

    cout << monster->getName() << "에게 " << damage << "의 피해를 입혔습니다!" << endl;

    bool alive = monster->setHP(monster->getHP() - damage);
    if (alive) {
        cout << monster->getName() << "의 남은 HP: " << monster->getHP() << endl;
    }
    else {
        cout << monster->getName() << "은(는) 쓰러졌다!" << endl;
        cout << nickname << "의 승리!" << endl;
    }
}
