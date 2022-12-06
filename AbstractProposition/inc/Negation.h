//
// Created by tijsh on 27-11-2022.
//

#ifndef LOGIC_NEGATION_H
#define LOGIC_NEGATION_H

#include "Proposition.h"

#include <memory>

class Negation : public Proposition{
public:
    Negation(std::unique_ptr<Proposition> formula);

    std::string getString() const override;


private:
    std::unique_ptr<Proposition> negatedFormula;
};


#endif //LOGIC_NEGATION_H
