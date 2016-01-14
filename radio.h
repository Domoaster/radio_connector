
#include <wiringPi.h>

#include "IConnector.h"
#include "Kernel.h"
#include "Float.h"

namespace domoaster {

class radio : public IConnector
{
  public:
    std::string Name () { return "Radio" ; }
    std::string Class () { return "radio" ; }

    void Init ();
    void Start ();

    void Receive () ;
    void Send (bool) ;

  public:
    int rx_pin;
    int tx_pin;
    bool start;

    int duration;
    int iTime;
    int iLastTime;

    pthread_t thread;
    static radio * radioObj ;

    radio();

    static void radioInterrupt () ;
} ;

} ; // namespace domoaster

extern "C" int LoadPlugins (domoaster::Kernel &) ;