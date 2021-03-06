#ifdef BR_LIBRARY
  #define JANUS_LIBRARY
#endif

// Use the provided default implementation of some functions
#include "janus/src/janus_io.cpp"

// Use the provided OpenCV I/O implementation
#include "janus/src/opencv_io/opencv_io.cpp"
