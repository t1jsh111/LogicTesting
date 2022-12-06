//
// Created by tijsh on 5-12-2022.
//

#ifndef LOGIC_BINARYOPERATOR_H
#define LOGIC_BINARYOPERATOR_H

#include <memory>
#include "Proposition.h"

class BinaryOperator {
public:
    BinaryOperator(std::unique_ptr<Proposition> left, std::unique_ptr<Proposition> right);
protected:
    std::unique_ptr<Proposition> m_left;
    std::unique_ptr<Proposition> m_right;
};


#endif //LOGIC_BINARYOPERATOR_H

