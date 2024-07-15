#ifndef EXTENDED_KALMAN_FILTER__VISIBILITY_CONTROL_H_
#define EXTENDED_KALMAN_FILTER__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define EXTENDED_KALMAN_FILTER_EXPORT __attribute__ ((dllexport))
    #define EXTENDED_KALMAN_FILTER_IMPORT __attribute__ ((dllimport))
  #else
    #define EXTENDED_KALMAN_FILTER_EXPORT __declspec(dllexport)
    #define EXTENDED_KALMAN_FILTER_IMPORT __declspec(dllimport)
  #endif
  #ifdef EXTENDED_KALMAN_FILTER_BUILDING_LIBRARY
    #define EXTENDED_KALMAN_FILTER_PUBLIC EXTENDED_KALMAN_FILTER_EXPORT
  #else
    #define EXTENDED_KALMAN_FILTER_PUBLIC EXTENDED_KALMAN_FILTER_IMPORT
  #endif
  #define EXTENDED_KALMAN_FILTER_PUBLIC_TYPE EXTENDED_KALMAN_FILTER_PUBLIC
  #define EXTENDED_KALMAN_FILTER_LOCAL
#else
  #define EXTENDED_KALMAN_FILTER_EXPORT __attribute__ ((visibility("default")))
  #define EXTENDED_KALMAN_FILTER_IMPORT
  #if __GNUC__ >= 4
    #define EXTENDED_KALMAN_FILTER_PUBLIC __attribute__ ((visibility("default")))
    #define EXTENDED_KALMAN_FILTER_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define EXTENDED_KALMAN_FILTER_PUBLIC
    #define EXTENDED_KALMAN_FILTER_LOCAL
  #endif
  #define EXTENDED_KALMAN_FILTER_PUBLIC_TYPE
#endif

#endif  // EXTENDED_KALMAN_FILTER__VISIBILITY_CONTROL_H_
