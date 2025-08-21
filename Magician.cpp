#include "Magician.h"
#include <iostream>
using namespace std;

// ������: Player Ŭ���� ��� �� �ɷ�ġ �ʱ�ȭ
Magician::Magician(string nickname) : Player(nickname) {
    job_name = "������";
    cout << "* ������� �����Ͽ����ϴ�." << endl;
    HP = 50;
    MP = 50;
    power = 25;
    defence = 5;
    accuracy = 10;
    speed = 7;
    level = 1;
}

// �Ϲ� ���� ���
void Magician::attack() {
    cout << "* ������ �����Ѵ�!" << endl;
}

// ���� ����: ���ݷ�-���� ���, �ּ� ������ 1
void Magician::attack(Monster* monster) {
    cout << nickname << "�� ���� ����!" << endl;

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
