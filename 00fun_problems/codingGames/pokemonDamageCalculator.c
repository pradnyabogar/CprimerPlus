//Pokemon Damage Calculator

int main(void)
{
    float damage;
    char attack_power, defense_power;
    int attack_points, defense_points;

    float eff_table =  { 
                            {0.5, 0.5, 2, 1},
                            {2, 0.5, 0.5, 0.5},
                            {2, 2, 0.5, 1},
                            {1, 2, 1, 0.5}
                       };

    printf("Enter your attack power \n");
    gets(attack_power);

    printf("Enter your attack points \n");
    scanf("%d \n", attack_points);

    printf("Enter your defense points \n");
    gets(defense_power);

    printf("Enter your defense points \n");
    scanf("%d \n", defense_points);

    for (int j = 0 ; j < 4; j ++)
    {
        for (int i = 0 ; i < 4; i ++)
        {
            damage = 50 * (attack_points/defense_points) * eff_table[i][j];
        }
    }
}