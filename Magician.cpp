#include "Magician.h"
#include <iostream>
using namespace std;

// 생성자: Player 클래스 상속 후 능력치 초기화
Magician::Magician(string nickname) : Player(nickname) {
    job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    HP = 50;
    MP = 50;
    power = 25;
    defence = 5;
    accuracy = 10;
    speed = 7;
    level = 1;
}

// 일반 공격 출력
void Magician::attack() {
    cout << "* 마법을 시전한다!" << endl;
}

// 몬스터 공격: 공격력-방어력 계산, 최소 데미지 1
void Magician::attack(Monster* monster) {
    cout << nickname << "의 마법 공격!" << endl;

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
