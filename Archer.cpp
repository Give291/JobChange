#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "궁수";
    cout << "* 궁수로 전직하였습니다." << endl;
    HP = 65;
    MP = 25;
    power = 22;
    defence = 7;
    accuracy = 12;
    speed = 10;
    level = 1;
}

void Archer::attack() {
    cout << "* 활을 쏜다!" << endl;
}

void Archer::attack(Monster* monster) {
    cout << nickname << "의 활 공격!" << endl;

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
