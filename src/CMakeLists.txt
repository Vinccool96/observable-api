add_library(EXCEPTIONS STATIC exceptions/NotImplementedException.cpp exceptions/NotImplementedException.hpp)

add_library(BEANS STATIC beans/WeakListener.hpp beans/Observable.hpp
        beans/WeakInvalidationListener.cpp beans/WeakInvalidationListener.hpp)

add_library(BEANS_VALUE STATIC
        beans/value/ObservableValue.cpp beans/value/ObservableValue.hpp
        beans/value/ObservableBooleanValue.hpp beans/value/ObservableBooleanValue.cpp)