#pragma once
#include "Player.h"
#include "Monster.h"

class Magician : public Player {
public:
    Magician(string nickname);
    void attack() override;                // �Ϲ� ����
    void attack(Monster* monster) override; // ���� ����
};
