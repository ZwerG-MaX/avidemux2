INCLUDE(ve_plugin)

SET(ffVTEnc_SRCS
        ffVTEncPlugin.cpp
        ADM_ffVTEnc.cpp
)
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

ADD_VIDEO_ENCODER(ADM_ve_ffVTEnc ${ffVTEnc_SRCS})

INIT_VIDEO_ENCODER(ADM_ve_ffVTEnc)
INSTALL_VIDEO_ENCODER(ADM_ve_ffVTEnc)
TARGET_LINK_LIBRARIES(ADM_ve_ffVTEnc ADM_libavcodec ADM_libavutil)
INCLUDE_DIRECTORIES("${AVIDEMUX_SOURCE_DIR}/avidemux/")
