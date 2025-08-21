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

    // 1? �÷��̾� �г��� �Է�
    cout << "�г����� �Է��ϼ���: ";
    cin >> nickname;

    // 2? �÷��̾� ���� ����
    cout << "<���� ����>" << endl;
    cout << "1. ����  2. ������  3. ����  4. �ü�" << endl;
    cout << "����: ";
    cin >> job_choice;

    Player* player = nullptr; // �߻� Ŭ���� �����ͷ� ����

    // 3 ������ �´� ��ü ����
	switch (job_choice) { // ���ڸ� �Է¹޾� switch������ �б�, �߻�Ŭ���� Player�� ��ӹ��� �� ���� Ŭ������ ��ü�� ����
    case 1: player = new Warrior(nickname); break;
    case 2: player = new Magician(nickname); break;
    case 3: player = new Thief(nickname); break;
    case 4: player = new Archer(nickname); break;
    default:
        cout << "�߸��� �Է��Դϴ�." << endl;
        return 1;
	} // �� ���� Ŭ������ �����ڸ� ȣ���Ͽ� �ɷ�ġ�� �ʱ�ȭ�ϰ�, ���� �̸��� ����, �����Ҵ�!!

    // 4? ���� ����
	Monster* slime = new Monster("������"); // ���� ��ü ����, �̸��� ������ ���� �Ҵ�!!

    // 5? ���� ����
    player->attack(slime); // �÷��̾ ���� ����
    cout << endl;

    slime->attack(player); // ���Ͱ� �÷��̾� ����
    cout << endl;

    // 6? �÷��̾� ���� ���
    player->printPlayerStatus();

    // 7? �޸� ����
	delete player;// ���� �Ҵ�� �÷��̾� ��ü ����  
	delete slime; // ���� �Ҵ�� �޸� ����  

    return 0;
}
