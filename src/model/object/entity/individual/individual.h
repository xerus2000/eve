#ifndef EVE_INDIVIDUAL_H
#define EVE_INDIVIDUAL_H

#include "../entity.h"

#include "../food/food.h"
#include "../../../../config.h"
#include "../../../algebra/algebra.h"
#include "../../../action/action.h"

#include <memory>

/** Abstract base of all kinds of different species */
class Individual : public Entity {
private:
    Individual(long ID, Point position, Vector vision, double energy, int color);

    const long ID;
    static const int DEFAULT_COLOR = INDIVIDUAL_COLOR;

    Vector vision;

protected:
    const int color;

    double reproductionSplit();

public:
    Individual(long ID, Point position, double angle, double energy, int color);
    Individual(long ID, Point position, double angle, double energy);
    ~Individual() override = 0;

    /** Returns the uid of this Individual */
    [[nodiscard]] long getID() const;
    /** Returns the Vision Vector of this Individual */
    [[nodiscard]] Vector getVision() const;

    /** Turns the Individual by the given angle */
    void turnBy (Angle angle);

    /** Eats the given Food item */
    double eat (const Food & food);

    /** Color of the individual */
    virtual int getColor ();

    /** Gives birth to an offspring */
    virtual Individual * reproduce (unsigned long ID) = 0;

    /**@param visibles is a pointer to an array holding all objects within its vision
     * @return the Action to execute */
    virtual Action act(const std::unique_ptr<std::vector<Object *>> & visibles) = 0;
};

#endif //EVE_INDIVIDUAL_H
