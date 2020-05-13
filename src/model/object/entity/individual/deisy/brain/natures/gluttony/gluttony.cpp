#include "gluttony.h"

Action Gluttony::think(const std::unique_ptr<std::vector<Object *> > & visibles, double energy) {
    if (!visibles->empty()) return Action (MOVE);
    if (dice.rand() >= GLUTTONY_TURN_WEIGHT) return Action (SLEEP);
    if (dice.rand() < GLUTTONY_CHANGE_DIR_WEIGHT) turnLeft = !turnLeft;
    return Action (turnLeft ? TURN_LEFT : TURN_RIGHT);
}
