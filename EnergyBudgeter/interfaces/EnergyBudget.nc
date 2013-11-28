#include "FixPointMath.h"

interface EnergyBudget {
  /**
   * This event is signaled by the energy budgeter, if the energy budget
   * has been revised, resulting in task rescheduling or load adaptation
   */
  event void budgetUpdated(fp_t maxCurrent); // in mA
}
