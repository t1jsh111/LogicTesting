//
// Created by tijsh on 27-11-2022.
//

#include "Disjunction.h"

Disjunction::Disjunction(std::unique_ptr<Proposition> left, std::unique_ptr<Proposition> right) :
        m_left(std::move(left)), m_right(std::move(right)) {

}

std::string Disjunction::getString() const {
    return "(" + m_left->getString() + " or " + m_right->getString() + ")";
}

Proposition::PropositionType Disjunction::getPropositionType() const {
    return PropositionType::Disjunction;
}
