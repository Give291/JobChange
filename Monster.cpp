#include "Monster.h"
#include "Player.h"

void Monster::attack(Player* player) {
    cout << name << "의 공격!" << endl;
    int damage = power - player->getDefence();
    if (damage <= 0) damage = 1;

    cout << player->getNickname() << "에게 " << damage << "의 피해를 입혔습니다!" << endl;

    bool alive = player->setHP(player->getHP() - damage);
    if (alive) {
        cout << player->getNickname() << "의 남은 HP: " << player->getHP() << endl;
    }
    else {
        cout << player->getNickname() << "은(는) 쓰러졌다!" << endl;
        cout << name << "의 승리!" << endl;
    }
}
