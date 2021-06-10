/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tayamamo <tayamamo@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 17:02:05 by tayamamo          #+#    #+#             */
/*   Updated: 2021/06/10 20:19:03 by tayamamo         ###   ########.fr       */
/*   Copyright 2021                                                           */
/* ************************************************************************** */

#ifndef EX00_EASYFIND_HPP_
#define EX00_EASYFIND_HPP_

#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
bool    easyfind(T& container, int x) {
    try {
        typename T::iterator itr
            = std::find(container.begin(), container.end(), x);
        if (itr == container.end())
            throw std::runtime_error("Not found!");
        return  (true);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        return (false);
    }
}

#endif  // EX00_EASYFIND_HPP_
