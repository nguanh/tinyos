#include "FixPointMath.h"

module TempSensorConverterP {
  uses {
    interface GetSet<const temp_converter_config_t *> as Config @exactlyonce();
  }
  provides {
    interface SensorValueConverter<sfp_t>;
  }
}

implementation {
  command sfp_t SensorValueConverter.convert (uint16_t val) {
    return val;
  }
}
