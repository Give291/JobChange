#include <iostream>
#include "player.h"
#include "warrior.h"
#include "magician.h"
#include "thief.h"
#include "archer.h"
#include "monster.h"
using namespace std;

int main() {
    string nickname;
    int job_choice;

    // 1? 플레이어 닉네임 입력
    cout << "닉네임을 입력하세요: ";
    cin >> nickname;

    // 2? 플레이어 직업 선택
    cout << "<직업 선택>" << endl;
    cout << "1. 전사  2. 마법사  3. 도적  4. 궁수" << endl;
    cout << "선택: ";
    cin >> job_choice;

    Player* player = nullptr; // 추상 클래스 포인터로 선언

    // 3 직업에 맞는 객체 생성
	switch (job_choice) { // 숫자를 입력받아 switch문으로 분기, 추상클래스 Player를 상속받은 각 직업 클래스의 객체를 생성
    case 1: player = new Warrior(nickname); break;
    case 2: player = new Magician(nickname); break;
    case 3: player = new Thief(nickname); break;
    case 4: player = new Archer(nickname); break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
	} // 각 직업 클래스의 생성자를 호출하여 능력치를 초기화하고, 직업 이름을 설정, 동적할당!!

    // 4? 몬스터 생성
	Monster* slime = new Monster("슬라임"); // 몬스터 객체 생성, 이름은 슬라임 동적 할당!!

    // 5? 전투 예시
    player->attack(slime); // 플레이어가 몬스터 공격
    cout << endl;

    slime->attack(player); // 몬스터가 플레이어 공격
    cout << endl;

    // 6? 플레이어 상태 출력
    player->printPlayerStatus();

    // 7? 메모리 해제
	delete player;// 동적 할당된 플레이어 객체 해제  
	delete slime; // 동적 할당된 메모리 해제  

    return 0;
}
