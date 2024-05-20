/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:01:50 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 17:01:51 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string *_ideas;
    public:
        Brain();
        ~Brain();
        Brain(Brain&copy);
        std::string *getIdeas();
        Brain &operator=(const Brain&copy);

};

#endif