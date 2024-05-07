#ifndef __HAL_H
#define __HAL_H

#include <stdint.h>
#include <Arduino.h>

/* Encoder */
#define CONFIG_ENCODER_B_PIN        34
#define CONFIG_ENCODER_A_PIN        35
#define CONFIG_ENCODER_PUSH_PIN     27

/* Power */
#define CONFIG_POWER_EN_PIN         21

/* Battery */
#define CONFIG_BAT_DET_PIN          37
#define CONFIG_BAT_CHG_DET_PIN      38


namespace HAL
{
    void Init();
    void Update();





/* Power */
    void Power_Init();


/* Encoder */
    void Encoder_Init();
    int16_t Encoder_GetDiff();
    bool Encoder_GetIsPush();
    void Encoder_SetEnable(bool en);


}

#endif
