#include "Archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "�ü�";
    cout << "* �ü��� �����Ͽ����ϴ�." << endl;
    HP = 65;
    MP = 25;
    power = 22;
    defence = 7;
    accuracy = 12;
    speed = 10;
    level = 1;
}

void Archer::attack() {
    cout << "* Ȱ�� ���!" << endl;
}

void Archer::attack(Monster* monster) {
    cout << nickname << "�� Ȱ ����!" << endl;

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
