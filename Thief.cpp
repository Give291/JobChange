#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    cout << "* 도적으로 전직하였습니다." << endl;
    HP = 60;
    MP = 20;
    power = 20;
    defence = 8;
    accuracy = 15;
    speed = 12;
    level = 1;
}

void Thief::attack() {
    cout << "* 단검을 휘두른다!" << endl;
}

void Thief::attack(Monster* monster) {
    cout << nickname << "의 단검 공격!" << endl;

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
