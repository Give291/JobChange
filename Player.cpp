#include "Player.h"

Player::Player(string nickname) {
    this->nickname = nickname;
    level = 1;
    HP = 50;
    MP = 30;
    power = 10;
    defence = 5;
    accuracy = 5;
    speed = 5;
}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "����: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}

// getter ���� ��������
string Player::getJobName() { return job_name; }
string Player::getNickname() { return nickname; }
int Player::getLevel() { return level; }
int Player::getHP() { return HP; }
int Player::getMP() { return MP; }
int Player::getPower() { return power; }
int Player::getDefence() { return defence; }
int Player::getAccuracy() { return accuracy; }
int Player::getSpeed() { return speed; }

// setter ������ �ٲ܋�
void Player::setNickname(string nickname) { this->nickname = nickname; }
bool Player::setHP(int HP) {
    if (HP <= 0) { this->HP = 0; return false; }
    this->HP = HP;
    return true;
}
bool Player::setMP(int MP) {
    if (MP <= 0) { this->MP = 0; return false; }
    this->MP = MP;
    return true;
}
void Player::setPower(int power) { this->power = power; }
void Player::setDefence(int defence) { this->defence = defence; }
void Player::setAccuracy(int accuracy) { this->accuracy = accuracy; }
void Player::setSpeed(int speed) { this->speed = speed; }
