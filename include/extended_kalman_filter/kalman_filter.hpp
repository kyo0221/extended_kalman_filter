#ifndef EXTENDED_KALMAN_FILTER__KALMAN_FILTER_HPP_
#define EXTENDED_KALMAN_FILTER__KALMAN_FILTER_HPP_

#include "extended_kalman_filter/visibility_control.h"

namespace extended_kalman_filter
{

class KalmanFilter
{
public:
  KalmanFilter();

  virtual ~KalmanFilter();
};

}  // namespace extended_kalman_filter

#endif  // EXTENDED_KALMAN_FILTER__KALMAN_FILTER_HPP_
