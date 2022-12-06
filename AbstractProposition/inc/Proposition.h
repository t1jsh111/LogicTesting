//
// Created by tijsh on 27-11-2022.
//

#ifndef LOGIC_PROPOSITION_H
#define LOGIC_PROPOSITION_H

#include <string>
class Proposition {
public:
    enum PropositionType {Conjunction, Disjunction, Implication, Negation, PropositionVariable};

    void print() const;
    virtual std::string getString() const = 0;
    virtual PropositionType getPropositionType() const = 0;
};


#endif //LOGIC_PROPOSITION_H
