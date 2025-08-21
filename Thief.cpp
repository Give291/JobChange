#include "Thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "����";
    cout << "* �������� �����Ͽ����ϴ�." << endl;
    HP = 60;
    MP = 20;
    power = 20;
    defence = 8;
    accuracy = 15;
    speed = 12;
    level = 1;
}

void Thief::attack() {
    cout << "* �ܰ��� �ֵθ���!" << endl;
}

void Thief::attack(Monster* monster) {
    cout << nickname << "�� �ܰ� ����!" << endl;

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
