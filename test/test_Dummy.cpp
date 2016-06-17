#include <boost/test/unit_test.hpp>
#include <trac_ik/Dummy.hpp>

using namespace trac_ik;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    trac_ik::DummyClass dummy;
    dummy.welcome();
}
