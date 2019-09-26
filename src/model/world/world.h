//
// Created by janek on 17.09.19.
//

#ifndef EVE_WORLD_H
#define EVE_WORLD_H

#include "../entity/food/food.h"

class World {
private:
    Food food[100] = {};
    int foodIndex = 0;
public:
    void addFood(Food*);
    Food* getFood();
    int getSize();
};

#endif //EVE_WORLD_H
