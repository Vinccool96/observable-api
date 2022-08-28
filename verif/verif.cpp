//
// Created by Vincent on 2022-04-01.
//

#include "verif.hpp"

template<typename Base, typename T>
inline bool verif::instanceof(const T *ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}