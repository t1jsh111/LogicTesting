//
// Created by tijsh on 27-11-2022.
//

#include "Conjunction.h"

Conjunction::Conjunction(std::unique_ptr<Proposition> left, std::unique_ptr<Proposition> right) : BinaryOperator(std::move(left), std::move(right))
 {

}

std::string Conjunction::getString() const {
    return "(" + m_left->getString() + " and " + m_right->getString() + ")";
}

Proposition::PropositionType Conjunction::getPropositionType() const {
    return PropositionType::Conjunction;
}
