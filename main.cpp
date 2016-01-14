
#include "radio.h"

using namespace domoaster ;

int LoadPlugins (Kernel & k)
{
  k.RegisterConnector (new radio) ;
  return 1 ;
}