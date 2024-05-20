/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:02:01 by dborgian          #+#    #+#             */
/*   Updated: 2024/05/08 17:02:02 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
     private:
        std::string _type;
        Brain *_attribute;
    public:
        Dog();
        ~Dog();
        Dog(const Dog&copy);
        Dog &operator=(const Dog&copy);
        std::string getType() const;
        Brain *getAttribute() const;
        void makeSound() const;
};

#endif