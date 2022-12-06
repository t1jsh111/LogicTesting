//
// Created by tijsh on 27-11-2022.
//

#include "Negation.h"

Negation::Negation(std::unique_ptr<Proposition> formula) : negatedFormula(std::move(formula)) {

}

std::string Negation::getString() const {
    return "!" + negatedFormula->getString();
}
