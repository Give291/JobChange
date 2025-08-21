#include "Warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "����";
    cout << "* ����� �����Ͽ����ϴ�!" << endl;
    HP = 80;
    MP = 20;
    power = 20;
    defence = 15;
    accuracy = 10;
    speed = 8;
    level = 1;
}

void Warrior::attack() {
    cout << "* ����� �ֵθ���!" << endl;
}

void Warrior::attack(Monster* monster) {
    cout << nickname << "�� ����!" << endl;
    int damage = power - monster->getDefence();
    if (damage <= 0) damage = 1;

    cout << monster->getName() << "���� " << damage << "�� ���ظ� �������ϴ�!" << endl;

    bool alive = monster->setHP(monster->getHP() - damage);
    if (alive) {
        cout << monster->getName() << "�� ���� HP: " << monster->getHP() << endl;
    }
    else {
        cout << monster->getName() << "��(��) ��������!" << endl;
        cout << nickname << "�� �¸�!" << endl;
    }
}
