#pragma once
#include "Player.h"
#include "Monster.h"

class Magician : public Player {
public:
    Magician(string nickname);
    void attack() override;                // 일반 공격
    void attack(Monster* monster) override; // 몬스터 공격
};
