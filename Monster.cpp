#include "Monster.h"
#include "Player.h"

void Monster::attack(Player* player) {
    cout << name << "�� ����!" << endl;
    int damage = power - player->getDefence();
    if (damage <= 0) damage = 1;

    cout << player->getNickname() << "���� " << damage << "�� ���ظ� �������ϴ�!" << endl;

    bool alive = player->setHP(player->getHP() - damage);
    if (alive) {
        cout << player->getNickname() << "�� ���� HP: " << player->getHP() << endl;
    }
    else {
        cout << player->getNickname() << "��(��) ��������!" << endl;
        cout << name << "�� �¸�!" << endl;
    }
}
