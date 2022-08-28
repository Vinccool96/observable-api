add_library(EXCEPTIONS STATIC exceptions/NotImplementedException.cpp exceptions/NotImplementedException.hpp)

add_library(BEANS STATIC beans/WeakListener.hpp beans/Observable.hpp
        beans/WeakInvalidationListener.cpp beans/WeakInvalidationListener.hpp)

add_library(BEANS_VALUE STATIC
        beans/value/ObservableValue.cpp beans/value/ObservableValue.hpp
        beans/value/ObservableBooleanValue.hpp beans/value/ObservableBooleanValue.cpp
        beans/value/ObservableNumberValue.hpp beans/value/ObservableNumberValue.cpp
        beans/value/ObservableIntegerValue.hpp beans/value/ObservableIntegerValue.cpp
        beans/value/ObservableDoubleValue.hpp beans/value/ObservableDoubleValue.cpp
        beans/value/ObservableFloatValue.hpp beans/value/ObservableFloatValue.cpp
        beans/value/ObservableIntValue.hpp beans/value/ObservableIntValue.cpp
        beans/value/ObservableLongValue.hpp beans/value/ObservableLongValue.cpp
        beans/value/ObservableShortValue.hpp beans/value/ObservableShortValue.cpp
        )