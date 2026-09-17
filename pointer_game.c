#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void attack(int *hp, int damage)
{
    *hp -= damage;

    if (*hp < 0)
    {
        *hp = 0;
    }
}

void AddScore(int *score, int amount)
{
    *score += amount;
}

int main(int argc, char *argv[])
{
    int player_hp = 100;
    int monster_hp = 50;
    int score = 0;

    srand((unsigned int)time(NULL));

    printf("=== pointer RPG ===\n");

    while(player_hp > 0 && monster_hp > 0)
    {
        int choice;

        printf("\n내 HP: %d\n", player_hp);
        printf("몬스터 HP: %d\n", monster_hp);
        printf("점수: %d\n", score);

        printf("\n1. 공격\n");
        printf("2. 회복\n");
        printf("선택: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            int damage = rand() % 15 + 5;

            printf("몬스터에게 %d 데미지!\n", damage);

            // monster_hp address deliver
            attack(&monster_hp, damage);

            // score address deliver
            AddScore(&score, 10);
        }
        else if(choice == 2)
        {
            player_hp += 10;

            if(player_hp > 100)
            {
                player_hp = 100;
            }

            printf("HP healing!\n");
        }
        else
        {
            printf("wrong\n");
            continue;
        }

        if(monster_hp > 0)
        {
            int monster_damage = rand() % 10 + 1;

            printf("몬스터의 공격! %d 데미지!\n", monster_damage);

            attack(&player_hp, monster_damage);
        }
    }

    if(player_hp > 0)
    {
        printf("\n몬스터를 쓰러뜨렸습니다!\n");
        printf("최종 점수: %d\n", score);
    }
    else
    {
        printf("게임 오버!\n");
    }

    return 0;
}