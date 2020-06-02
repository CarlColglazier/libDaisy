#pragma once
#ifndef DSY_CODEC_AK4556_H
#define DSY_CODEC_AK4556_H

#include "daisy_core.h"

/** 
    Driver for the AK4556 Stereo Codec
    \file dev_codec_ak4556.h
*/

/** 
    Resets the AK4556
    \param reset_pin should be a dsy_gpio_pin that is connected to the RST pin of the AK4556
*/
void codec_ak4556_init(dsy_gpio_pin reset_pin);

#endif
