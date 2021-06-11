/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 07:25:41 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/11 09:07:26 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "mutantstack.hpp"

int main() {
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(10);
    mstack.push(0);
    mstack.push(999);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << std::endl;

    std::cout << "MutantStack" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    std::cout << std::endl;

    MutantStack<int> ms(mstack);
    it = ms.begin();
    ite = ms.end() - 1;
    std::cout << "MutantStack copy" << std::endl;
    while (it != ite) {
        std::cout << *ite << std::endl;
        --ite;
    }
    std::cout << *ite << std::endl;
    std::cout << std::endl;

    std::cout << "MutantStack copy stack" << std::endl;
    std::stack<int> s(mstack);
    while (!s.empty()) {
        std::cout << s.top() << std::endl;
        s.pop();
    }
    return 0;
}
