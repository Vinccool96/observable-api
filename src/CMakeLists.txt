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
        beans/value/ObservableObjectValue.hpp beans/value/ObservableObjectValue.cpp
        beans/value/ObservableStringValue.hpp beans/value/ObservableStringValue.cpp
        beans/value/WritableValue.hpp beans/value/WritableValue.cpp
        beans/value/WritableBooleanValue.hpp beans/value/WritableBooleanValue.cpp
        beans/value/WritableNumberValue.hpp beans/value/WritableNumberValue.cpp
        beans/value/WritableIntegerValue.hpp beans/value/WritableIntegerValue.cpp
        beans/value/WritableDoubleValue.hpp beans/value/WritableDoubleValue.cpp
        beans/value/WritableFloatValue.hpp beans/value/WritableFloatValue.cpp
        beans/value/WritableIntValue.hpp beans/value/WritableIntValue.cpp
        beans/value/WritableLongValue.hpp beans/value/WritableLongValue.cpp
        beans/value/WritableShortValue.hpp beans/value/WritableShortValue.cpp
        beans/value/WritableObjectValue.hpp beans/value/WritableObjectValue.cpp
        beans/value/WritableStringValue.hpp beans/value/WritableStringValue.cpp
        )