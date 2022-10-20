//***********************************************
// STM32_servo_test
// Copyright (c) 2022 Ricardo SILVESTRE.
// All rights reserved.
//***********************************************

#ifndef STM32_SERVO_TEST_UPDATE_CRC_H
#define STM32_SERVO_TEST_UPDATE_CRC_H

unsigned short update_crc(unsigned short crc_accum, unsigned char *data_blk_ptr, unsigned short data_blk_size);

#endif //STM32_SERVO_TEST_UPDATE_CRC_H