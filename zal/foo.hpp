#pragma once

#include "Human.hpp"

#include <algorithm>
#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > ret_v(people.size());
    // Twoja implementacja tutaj
    
    std::for_each(people.begin(), people.end(), [](Human& pp) { pp.birthday(); });

    std::transform(people.rbegin(), people.rend(), ret_v.begin(), [](Human pp) {
        if (pp.isMonster())
            return 'n';
        else
            return 'y';
    });

    return ret_v;
}
