#ifndef DAPS_TEST_TEST_DAPS_H
#define DAPS_TEST_TEST_DAPS_H

#include "txdb.h"

#include <boost/filesystem.hpp>
#include <boost/thread.hpp>

struct TestingSetup {
    CCoinsViewDB *pcoinsdbview;
    boost::filesystem::path pathTemp;
    boost::thread_group threadGroup;
    //ECCVerifyHandle globalVerifyHandle;

    TestingSetup();
    ~TestingSetup();
};

#endif
