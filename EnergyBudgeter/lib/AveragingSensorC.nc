generic module AveragingSensorC() @safe() {
  provides {
    interface AveragingSensor<fp_t>;
  }
  uses {
    interface SensorValueUpdate<fp_t>; 
  }
}
implementation {
  // TODO range check and generic
  uint16_t  count = 0;
  uint32_t  sum   = 0;

  event void SensorValueUpdate.update(fp_t val) {
    if (sum + val < sum) {
      sum   /= 2;
      count /= 2;
    }
    
    sum += val;
    count++;
  }

  command fp_t AveragingSensor.get(bool clear) {
    fp_t result = 0;

    if(count > 0) {
      result = (fp_t)(sum / count);  // floor is fine
    }

    if (clear) {
      count = 0;
      sum = 0;
    }

    return result;
  }
}
