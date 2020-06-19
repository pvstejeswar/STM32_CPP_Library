/*
 * singleton_template.hpp
 *
 *  Created on: Apr 28, 2020
 *      Author: venkatapokkuluri
 */

#ifndef L0_UTILS_SINGLETON_TEMPLATE_HPP_
#define L0_UTILS_SINGLETON_TEMPLATE_HPP_


template <typename T>
class Singleton
{
    public:
        static T& getInstance()
        {
            static T instance;
            return instance;
        }

    protected:
        Singleton() {}
        ~Singleton() {}

    private:
        Singleton(Singleton const&);
        Singleton& operator=(Singleton const&);

};

#endif /* L0_UTILS_SINGLETON_TEMPLATE_HPP_ */
