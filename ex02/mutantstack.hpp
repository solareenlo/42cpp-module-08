/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 06:24:11 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/11 08:45:41 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX02_MUTANTSTACK_HPP_
#define EX02_MUTANTSTACK_HPP_

#include <stack>

template<typename T>
class   MutantStack : public std::stack<T> {
 public:
    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack() : std::stack<T>() {}
    MutantStack(MutantStack const& src) : std::stack<T>(src) {}
    ~MutantStack() {}
    MutantStack&    operator=(MutantStack const& right) {
        std::stack<T>::operator=(right);
    }

    iterator begin() { return (std::stack<T>::c.begin()); }
    iterator end() { return (std::stack<T>::c.end()); }
};

#endif  // EX02_MUTANTSTACK_HPP_
