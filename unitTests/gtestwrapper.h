#ifndef GTESTWRAPPER_H_
#define GTESTWRAPPER_H_

#ifdef _MSC_VER
        #pragma warning(push)
        #pragma warning(disable : 4251)
        #pragma warning(disable : 4275)
        #pragma warning(disable : 4996)
#endif
#undef GTEST_LINKED_AS_SHARED_LIBRARY
#include <gtest/gtest.h>
#ifdef _MSC_VER
        #pragma warning(pop)
#endif

#endif // #ifndef GTESTWRAPPER_H_
