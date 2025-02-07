﻿#ifndef LIBRETRO_CORE_OPTIONS_INTL_H__
#define LIBRETRO_CORE_OPTIONS_INTL_H__

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#pragma warning(disable:4566)
#endif

#include <libretro.h>

/*
 ********************************
 * VERSION: 2.0
 ********************************
 *
 * - 2.0: Add support for core options v2 interface
 * - 1.3: Move translations to libretro_core_options_intl.h
 *        - libretro_core_options_intl.h includes BOM and utf-8
 *          fix for MSVC 2010-2013
 *        - Added HAVE_NO_LANGEXTRA flag to disable translations
 *          on platforms/compilers without BOM support
 * - 1.2: Use core options v1 interface when
 *        RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION is >= 1
 *        (previously required RETRO_ENVIRONMENT_GET_CORE_OPTIONS_VERSION == 1)
 * - 1.1: Support generation of core options v0 retro_core_option_value
 *        arrays containing options with a single value
 * - 1.0: First commit
*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 ********************************
 * Core Option Definitions
 ********************************
*/
/* RETRO_LANGUAGE_AR */

#define CATEGORY_VIDEO_LABEL_AR NULL
#define CATEGORY_VIDEO_INFO_0_AR NULL
#define CATEGORY_AUDIO_LABEL_AR NULL
#define CATEGORY_AUDIO_INFO_0_AR NULL
#define CATEGORY_INPUT_LABEL_AR NULL
#define CATEGORY_INPUT_INFO_0_AR NULL
#define CATEGORY_HACKS_LABEL_AR NULL
#define CATEGORY_HACKS_INFO_0_AR NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_AR NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_AR NULL
#define OPTION_VAL_COMPOSITE_AR NULL
#define OPTION_VAL_SVIDEO_AR NULL
#define OPTION_VAL_RGB_AR NULL
#define OPTION_VAL_MONOCHROME_AR NULL
#define NESTOPIA_PALETTE_LABEL_AR NULL
#define NESTOPIA_PALETTE_INFO_0_AR NULL
#define OPTION_VAL_CXA2025AS_AR NULL
#define OPTION_VAL_CONSUMER_AR NULL
#define OPTION_VAL_CANONICAL_AR NULL
#define OPTION_VAL_ALTERNATIVE_AR NULL
#define OPTION_VAL_RGB_O1_AR NULL
#define OPTION_VAL_PAL_AR NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_AR NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_AR NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_AR NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_AR NULL
#define OPTION_VAL_RAW_AR NULL
#define OPTION_VAL_CUSTOM_AR NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_AR NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_AR NULL
#define NESTOPIA_OVERCLOCK_LABEL_AR NULL
#define NESTOPIA_OVERCLOCK_INFO_0_AR NULL
#define OPTION_VAL_1X_AR NULL
#define OPTION_VAL_2X_AR NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_AR NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_AR NULL
#define OPTION_VAL_AUTO_AR NULL
#define OPTION_VAL_NTSC_AR NULL
#define OPTION_VAL_FAMICOM_AR NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_AR NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_AR NULL
#define NESTOPIA_OVERSCAN_V_LABEL_AR NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_AR NULL
#define NESTOPIA_OVERSCAN_H_LABEL_AR NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_AR NULL
#define NESTOPIA_ASPECT_LABEL_AR NULL
#define NESTOPIA_ASPECT_INFO_0_AR NULL
#define OPTION_VAL_4_3_AR NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_AR NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_AR NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_AR NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_AR NULL
#define OPTION_VAL_DENDY_AR NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_AR NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_AR NULL
#define OPTION_VAL_0X00_AR NULL
#define OPTION_VAL_0XFF_AR NULL
#define OPTION_VAL_RANDOM_AR NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_AR NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_AR NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_AR NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_AR NULL
#define OPTION_VAL_MOUSE_AR NULL
#define OPTION_VAL_POINTER_AR NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_AR NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_AR NULL
#define OPTION_VAL_LIGHTGUN_AR NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_AR NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_AR NULL
#define NESTOPIA_TURBO_PULSE_LABEL_AR NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_AR NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_AR NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_AR NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_AR NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_AR NULL

struct retro_core_option_v2_category option_cats_ar[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AR,
      CATEGORY_VIDEO_INFO_0_AR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AR,
      CATEGORY_AUDIO_INFO_0_AR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AR,
      CATEGORY_INPUT_INFO_0_AR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AR,
      CATEGORY_HACKS_INFO_0_AR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ar[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_AR,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_AR,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_AR },
         { "svideo",     OPTION_VAL_SVIDEO_AR },
         { "rgb",        OPTION_VAL_RGB_AR },
         { "monochrome", OPTION_VAL_MONOCHROME_AR },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_AR,
      NULL,
      NESTOPIA_PALETTE_INFO_0_AR,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_AR },
         { "consumer",             OPTION_VAL_CONSUMER_AR },
         { "canonical",            OPTION_VAL_CANONICAL_AR },
         { "alternative",          OPTION_VAL_ALTERNATIVE_AR },
         { "rgb",                  OPTION_VAL_RGB_O1_AR },
         { "pal",                  OPTION_VAL_PAL_AR },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_AR },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_AR },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_AR },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_AR },
         { "raw",                  OPTION_VAL_RAW_AR },
         { "custom",               OPTION_VAL_CUSTOM_AR },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_AR,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_AR,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_AR },
         { "2x", OPTION_VAL_2X_AR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_AR,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_AR,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_AR },
         { "ntsc",    OPTION_VAL_NTSC_AR },
         { "famicom", OPTION_VAL_FAMICOM_AR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_AR,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_AR,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_AR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_AR,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_AR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_AR,
      NULL,
      NESTOPIA_ASPECT_INFO_0_AR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AR },
         { "ntsc", OPTION_VAL_NTSC_AR },
         { "pal",  OPTION_VAL_PAL_AR },
         { "4:3",  OPTION_VAL_4_3_AR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_AR,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_AR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_AR,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_AR,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_AR },
         { "ntsc",    OPTION_VAL_NTSC_AR },
         { "pal",     OPTION_VAL_PAL_AR },
         { "famicom", OPTION_VAL_FAMICOM_AR },
         { "dendy",   OPTION_VAL_DENDY_AR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_AR,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_AR,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_AR },
         { "0xFF",   OPTION_VAL_0XFF_AR },
         { "random", OPTION_VAL_RANDOM_AR },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_AR,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_AR, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_AR,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_AR,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_AR },
         { "pointer", OPTION_VAL_POINTER_AR },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_AR,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_AR,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_AR },
         { "mouse", OPTION_VAL_MOUSE_AR },
         { "pointer", OPTION_VAL_POINTER_AR },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_AR,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_AR,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_AR,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_AR,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_AR,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_AR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_AR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_AR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ar = {
   option_cats_ar,
   option_defs_ar
};

/* RETRO_LANGUAGE_AST */

#define CATEGORY_VIDEO_LABEL_AST NULL
#define CATEGORY_VIDEO_INFO_0_AST NULL
#define CATEGORY_AUDIO_LABEL_AST NULL
#define CATEGORY_AUDIO_INFO_0_AST NULL
#define CATEGORY_INPUT_LABEL_AST NULL
#define CATEGORY_INPUT_INFO_0_AST NULL
#define CATEGORY_HACKS_LABEL_AST NULL
#define CATEGORY_HACKS_INFO_0_AST NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_AST NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_AST NULL
#define OPTION_VAL_COMPOSITE_AST NULL
#define OPTION_VAL_SVIDEO_AST NULL
#define OPTION_VAL_RGB_AST NULL
#define OPTION_VAL_MONOCHROME_AST NULL
#define NESTOPIA_PALETTE_LABEL_AST NULL
#define NESTOPIA_PALETTE_INFO_0_AST NULL
#define OPTION_VAL_CXA2025AS_AST NULL
#define OPTION_VAL_CONSUMER_AST NULL
#define OPTION_VAL_CANONICAL_AST NULL
#define OPTION_VAL_ALTERNATIVE_AST NULL
#define OPTION_VAL_RGB_O1_AST NULL
#define OPTION_VAL_PAL_AST NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_AST NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_AST NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_AST NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_AST NULL
#define OPTION_VAL_RAW_AST NULL
#define OPTION_VAL_CUSTOM_AST NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_AST NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_AST NULL
#define NESTOPIA_OVERCLOCK_LABEL_AST NULL
#define NESTOPIA_OVERCLOCK_INFO_0_AST NULL
#define OPTION_VAL_1X_AST NULL
#define OPTION_VAL_2X_AST NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_AST NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_AST NULL
#define OPTION_VAL_AUTO_AST NULL
#define OPTION_VAL_NTSC_AST NULL
#define OPTION_VAL_FAMICOM_AST NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_AST NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_AST NULL
#define NESTOPIA_OVERSCAN_V_LABEL_AST NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_AST NULL
#define NESTOPIA_OVERSCAN_H_LABEL_AST NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_AST NULL
#define NESTOPIA_ASPECT_LABEL_AST NULL
#define NESTOPIA_ASPECT_INFO_0_AST NULL
#define OPTION_VAL_4_3_AST NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_AST NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_AST NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_AST NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_AST NULL
#define OPTION_VAL_DENDY_AST NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_AST NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_AST NULL
#define OPTION_VAL_0X00_AST NULL
#define OPTION_VAL_0XFF_AST NULL
#define OPTION_VAL_RANDOM_AST NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_AST NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_AST NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_AST NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_AST NULL
#define OPTION_VAL_MOUSE_AST NULL
#define OPTION_VAL_POINTER_AST NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_AST NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_AST NULL
#define OPTION_VAL_LIGHTGUN_AST NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_AST NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_AST NULL
#define NESTOPIA_TURBO_PULSE_LABEL_AST NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_AST NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_AST NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_AST NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_AST NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_AST NULL

struct retro_core_option_v2_category option_cats_ast[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_AST,
      CATEGORY_VIDEO_INFO_0_AST
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_AST,
      CATEGORY_AUDIO_INFO_0_AST
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_AST,
      CATEGORY_INPUT_INFO_0_AST
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_AST,
      CATEGORY_HACKS_INFO_0_AST
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ast[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_AST,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_AST,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_AST },
         { "svideo",     OPTION_VAL_SVIDEO_AST },
         { "rgb",        OPTION_VAL_RGB_AST },
         { "monochrome", OPTION_VAL_MONOCHROME_AST },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_AST,
      NULL,
      NESTOPIA_PALETTE_INFO_0_AST,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_AST },
         { "consumer",             OPTION_VAL_CONSUMER_AST },
         { "canonical",            OPTION_VAL_CANONICAL_AST },
         { "alternative",          OPTION_VAL_ALTERNATIVE_AST },
         { "rgb",                  OPTION_VAL_RGB_O1_AST },
         { "pal",                  OPTION_VAL_PAL_AST },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_AST },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_AST },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_AST },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_AST },
         { "raw",                  OPTION_VAL_RAW_AST },
         { "custom",               OPTION_VAL_CUSTOM_AST },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_AST,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_AST,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_AST },
         { "2x", OPTION_VAL_2X_AST },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_AST,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_AST,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_AST },
         { "ntsc",    OPTION_VAL_NTSC_AST },
         { "famicom", OPTION_VAL_FAMICOM_AST },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_AST,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_AST,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_AST,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_AST,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_AST,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_AST,
      NULL,
      NESTOPIA_ASPECT_INFO_0_AST,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_AST },
         { "ntsc", OPTION_VAL_NTSC_AST },
         { "pal",  OPTION_VAL_PAL_AST },
         { "4:3",  OPTION_VAL_4_3_AST },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_AST,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_AST,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_AST,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_AST,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_AST },
         { "ntsc",    OPTION_VAL_NTSC_AST },
         { "pal",     OPTION_VAL_PAL_AST },
         { "famicom", OPTION_VAL_FAMICOM_AST },
         { "dendy",   OPTION_VAL_DENDY_AST },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_AST,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_AST,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_AST },
         { "0xFF",   OPTION_VAL_0XFF_AST },
         { "random", OPTION_VAL_RANDOM_AST },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_AST,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_AST, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_AST,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_AST,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_AST },
         { "pointer", OPTION_VAL_POINTER_AST },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_AST,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_AST,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_AST },
         { "mouse", OPTION_VAL_MOUSE_AST },
         { "pointer", OPTION_VAL_POINTER_AST },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_AST,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_AST,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_AST,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_AST,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_AST,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_AST,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_AST,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_AST,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ast = {
   option_cats_ast,
   option_defs_ast
};

/* RETRO_LANGUAGE_CA */

#define CATEGORY_VIDEO_LABEL_CA NULL
#define CATEGORY_VIDEO_INFO_0_CA NULL
#define CATEGORY_AUDIO_LABEL_CA NULL
#define CATEGORY_AUDIO_INFO_0_CA NULL
#define CATEGORY_INPUT_LABEL_CA NULL
#define CATEGORY_INPUT_INFO_0_CA NULL
#define CATEGORY_HACKS_LABEL_CA NULL
#define CATEGORY_HACKS_INFO_0_CA NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CA NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CA NULL
#define OPTION_VAL_COMPOSITE_CA NULL
#define OPTION_VAL_SVIDEO_CA NULL
#define OPTION_VAL_RGB_CA NULL
#define OPTION_VAL_MONOCHROME_CA NULL
#define NESTOPIA_PALETTE_LABEL_CA NULL
#define NESTOPIA_PALETTE_INFO_0_CA NULL
#define OPTION_VAL_CXA2025AS_CA NULL
#define OPTION_VAL_CONSUMER_CA NULL
#define OPTION_VAL_CANONICAL_CA NULL
#define OPTION_VAL_ALTERNATIVE_CA NULL
#define OPTION_VAL_RGB_O1_CA NULL
#define OPTION_VAL_PAL_CA NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_CA NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_CA NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_CA NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_CA NULL
#define OPTION_VAL_RAW_CA NULL
#define OPTION_VAL_CUSTOM_CA NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_CA NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_CA NULL
#define NESTOPIA_OVERCLOCK_LABEL_CA NULL
#define NESTOPIA_OVERCLOCK_INFO_0_CA NULL
#define OPTION_VAL_1X_CA NULL
#define OPTION_VAL_2X_CA NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_CA NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_CA NULL
#define OPTION_VAL_AUTO_CA NULL
#define OPTION_VAL_NTSC_CA NULL
#define OPTION_VAL_FAMICOM_CA NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_CA NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_CA NULL
#define NESTOPIA_OVERSCAN_V_LABEL_CA NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_CA NULL
#define NESTOPIA_OVERSCAN_H_LABEL_CA NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_CA NULL
#define NESTOPIA_ASPECT_LABEL_CA NULL
#define NESTOPIA_ASPECT_INFO_0_CA NULL
#define OPTION_VAL_4_3_CA NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_CA NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_CA NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_CA NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_CA NULL
#define OPTION_VAL_DENDY_CA NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_CA NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_CA NULL
#define OPTION_VAL_0X00_CA NULL
#define OPTION_VAL_0XFF_CA NULL
#define OPTION_VAL_RANDOM_CA NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_CA NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_CA NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_CA NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_CA NULL
#define OPTION_VAL_MOUSE_CA NULL
#define OPTION_VAL_POINTER_CA NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_CA NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_CA NULL
#define OPTION_VAL_LIGHTGUN_CA NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_CA NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_CA NULL
#define NESTOPIA_TURBO_PULSE_LABEL_CA NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_CA NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CA NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_CA NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_CA NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_CA NULL

struct retro_core_option_v2_category option_cats_ca[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CA,
      CATEGORY_VIDEO_INFO_0_CA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CA,
      CATEGORY_AUDIO_INFO_0_CA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CA,
      CATEGORY_INPUT_INFO_0_CA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CA,
      CATEGORY_HACKS_INFO_0_CA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ca[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CA,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CA,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_CA },
         { "svideo",     OPTION_VAL_SVIDEO_CA },
         { "rgb",        OPTION_VAL_RGB_CA },
         { "monochrome", OPTION_VAL_MONOCHROME_CA },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_CA,
      NULL,
      NESTOPIA_PALETTE_INFO_0_CA,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_CA },
         { "consumer",             OPTION_VAL_CONSUMER_CA },
         { "canonical",            OPTION_VAL_CANONICAL_CA },
         { "alternative",          OPTION_VAL_ALTERNATIVE_CA },
         { "rgb",                  OPTION_VAL_RGB_O1_CA },
         { "pal",                  OPTION_VAL_PAL_CA },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_CA },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_CA },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_CA },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_CA },
         { "raw",                  OPTION_VAL_RAW_CA },
         { "custom",               OPTION_VAL_CUSTOM_CA },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_CA,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_CA,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_CA },
         { "2x", OPTION_VAL_2X_CA },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_CA,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_CA,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_CA },
         { "ntsc",    OPTION_VAL_NTSC_CA },
         { "famicom", OPTION_VAL_FAMICOM_CA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_CA,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_CA,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_CA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_CA,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_CA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_CA,
      NULL,
      NESTOPIA_ASPECT_INFO_0_CA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CA },
         { "ntsc", OPTION_VAL_NTSC_CA },
         { "pal",  OPTION_VAL_PAL_CA },
         { "4:3",  OPTION_VAL_4_3_CA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_CA,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_CA,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_CA,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_CA,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_CA },
         { "ntsc",    OPTION_VAL_NTSC_CA },
         { "pal",     OPTION_VAL_PAL_CA },
         { "famicom", OPTION_VAL_FAMICOM_CA },
         { "dendy",   OPTION_VAL_DENDY_CA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_CA,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_CA,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_CA },
         { "0xFF",   OPTION_VAL_0XFF_CA },
         { "random", OPTION_VAL_RANDOM_CA },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_CA,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_CA, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_CA,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_CA,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_CA },
         { "pointer", OPTION_VAL_POINTER_CA },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_CA,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_CA,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_CA },
         { "mouse", OPTION_VAL_MOUSE_CA },
         { "pointer", OPTION_VAL_POINTER_CA },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_CA,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_CA,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_CA,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_CA,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CA,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_CA,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ca = {
   option_cats_ca,
   option_defs_ca
};

/* RETRO_LANGUAGE_CHS */

#define CATEGORY_VIDEO_LABEL_CHS NULL
#define CATEGORY_VIDEO_INFO_0_CHS NULL
#define CATEGORY_AUDIO_LABEL_CHS NULL
#define CATEGORY_AUDIO_INFO_0_CHS NULL
#define CATEGORY_INPUT_LABEL_CHS NULL
#define CATEGORY_INPUT_INFO_0_CHS NULL
#define CATEGORY_HACKS_LABEL_CHS NULL
#define CATEGORY_HACKS_INFO_0_CHS NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CHS NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CHS NULL
#define OPTION_VAL_COMPOSITE_CHS NULL
#define OPTION_VAL_SVIDEO_CHS NULL
#define OPTION_VAL_RGB_CHS NULL
#define OPTION_VAL_MONOCHROME_CHS NULL
#define NESTOPIA_PALETTE_LABEL_CHS NULL
#define NESTOPIA_PALETTE_INFO_0_CHS NULL
#define OPTION_VAL_CXA2025AS_CHS NULL
#define OPTION_VAL_CONSUMER_CHS NULL
#define OPTION_VAL_CANONICAL_CHS NULL
#define OPTION_VAL_ALTERNATIVE_CHS NULL
#define OPTION_VAL_RGB_O1_CHS NULL
#define OPTION_VAL_PAL_CHS NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_CHS NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_CHS NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_CHS NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_CHS NULL
#define OPTION_VAL_RAW_CHS NULL
#define OPTION_VAL_CUSTOM_CHS NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_CHS NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_CHS NULL
#define NESTOPIA_OVERCLOCK_LABEL_CHS NULL
#define NESTOPIA_OVERCLOCK_INFO_0_CHS NULL
#define OPTION_VAL_1X_CHS NULL
#define OPTION_VAL_2X_CHS NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_CHS NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_CHS NULL
#define OPTION_VAL_AUTO_CHS NULL
#define OPTION_VAL_NTSC_CHS NULL
#define OPTION_VAL_FAMICOM_CHS NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_CHS NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_CHS NULL
#define NESTOPIA_OVERSCAN_V_LABEL_CHS NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_CHS NULL
#define NESTOPIA_OVERSCAN_H_LABEL_CHS NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_CHS NULL
#define NESTOPIA_ASPECT_LABEL_CHS NULL
#define NESTOPIA_ASPECT_INFO_0_CHS NULL
#define OPTION_VAL_4_3_CHS NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_CHS NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_CHS NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_CHS NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_CHS NULL
#define OPTION_VAL_DENDY_CHS NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_CHS NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_CHS NULL
#define OPTION_VAL_0X00_CHS NULL
#define OPTION_VAL_0XFF_CHS NULL
#define OPTION_VAL_RANDOM_CHS NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_CHS NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_CHS NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_CHS NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_CHS NULL
#define OPTION_VAL_MOUSE_CHS NULL
#define OPTION_VAL_POINTER_CHS NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_CHS NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_CHS NULL
#define OPTION_VAL_LIGHTGUN_CHS NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_CHS NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_CHS NULL
#define NESTOPIA_TURBO_PULSE_LABEL_CHS NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_CHS NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CHS NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_CHS NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_CHS NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_CHS NULL

struct retro_core_option_v2_category option_cats_chs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHS,
      CATEGORY_VIDEO_INFO_0_CHS
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHS,
      CATEGORY_AUDIO_INFO_0_CHS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHS,
      CATEGORY_INPUT_INFO_0_CHS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHS,
      CATEGORY_HACKS_INFO_0_CHS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_chs[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CHS,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CHS,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_CHS },
         { "svideo",     OPTION_VAL_SVIDEO_CHS },
         { "rgb",        OPTION_VAL_RGB_CHS },
         { "monochrome", OPTION_VAL_MONOCHROME_CHS },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_CHS,
      NULL,
      NESTOPIA_PALETTE_INFO_0_CHS,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_CHS },
         { "consumer",             OPTION_VAL_CONSUMER_CHS },
         { "canonical",            OPTION_VAL_CANONICAL_CHS },
         { "alternative",          OPTION_VAL_ALTERNATIVE_CHS },
         { "rgb",                  OPTION_VAL_RGB_O1_CHS },
         { "pal",                  OPTION_VAL_PAL_CHS },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_CHS },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_CHS },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_CHS },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_CHS },
         { "raw",                  OPTION_VAL_RAW_CHS },
         { "custom",               OPTION_VAL_CUSTOM_CHS },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_CHS,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_CHS,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_CHS },
         { "2x", OPTION_VAL_2X_CHS },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_CHS,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_CHS,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_CHS },
         { "ntsc",    OPTION_VAL_NTSC_CHS },
         { "famicom", OPTION_VAL_FAMICOM_CHS },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_CHS,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_CHS,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_CHS,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_CHS,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_CHS,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_CHS,
      NULL,
      NESTOPIA_ASPECT_INFO_0_CHS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHS },
         { "ntsc", OPTION_VAL_NTSC_CHS },
         { "pal",  OPTION_VAL_PAL_CHS },
         { "4:3",  OPTION_VAL_4_3_CHS },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_CHS,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_CHS,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_CHS },
         { "ntsc",    OPTION_VAL_NTSC_CHS },
         { "pal",     OPTION_VAL_PAL_CHS },
         { "famicom", OPTION_VAL_FAMICOM_CHS },
         { "dendy",   OPTION_VAL_DENDY_CHS },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_CHS,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_CHS,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_CHS },
         { "0xFF",   OPTION_VAL_0XFF_CHS },
         { "random", OPTION_VAL_RANDOM_CHS },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_CHS,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_CHS, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_CHS,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_CHS,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_CHS },
         { "pointer", OPTION_VAL_POINTER_CHS },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_CHS,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_CHS,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_CHS },
         { "mouse", OPTION_VAL_MOUSE_CHS },
         { "pointer", OPTION_VAL_POINTER_CHS },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_CHS,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_CHS,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_CHS,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_CHS,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CHS,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CHS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_CHS,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CHS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_chs = {
   option_cats_chs,
   option_defs_chs
};

/* RETRO_LANGUAGE_CHT */

#define CATEGORY_VIDEO_LABEL_CHT NULL
#define CATEGORY_VIDEO_INFO_0_CHT NULL
#define CATEGORY_AUDIO_LABEL_CHT NULL
#define CATEGORY_AUDIO_INFO_0_CHT NULL
#define CATEGORY_INPUT_LABEL_CHT NULL
#define CATEGORY_INPUT_INFO_0_CHT NULL
#define CATEGORY_HACKS_LABEL_CHT NULL
#define CATEGORY_HACKS_INFO_0_CHT NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CHT NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CHT NULL
#define OPTION_VAL_COMPOSITE_CHT NULL
#define OPTION_VAL_SVIDEO_CHT NULL
#define OPTION_VAL_RGB_CHT NULL
#define OPTION_VAL_MONOCHROME_CHT NULL
#define NESTOPIA_PALETTE_LABEL_CHT NULL
#define NESTOPIA_PALETTE_INFO_0_CHT NULL
#define OPTION_VAL_CXA2025AS_CHT NULL
#define OPTION_VAL_CONSUMER_CHT NULL
#define OPTION_VAL_CANONICAL_CHT NULL
#define OPTION_VAL_ALTERNATIVE_CHT NULL
#define OPTION_VAL_RGB_O1_CHT NULL
#define OPTION_VAL_PAL_CHT NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_CHT NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_CHT NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_CHT NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_CHT NULL
#define OPTION_VAL_RAW_CHT NULL
#define OPTION_VAL_CUSTOM_CHT NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_CHT NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_CHT NULL
#define NESTOPIA_OVERCLOCK_LABEL_CHT NULL
#define NESTOPIA_OVERCLOCK_INFO_0_CHT NULL
#define OPTION_VAL_1X_CHT NULL
#define OPTION_VAL_2X_CHT NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_CHT NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_CHT NULL
#define OPTION_VAL_AUTO_CHT NULL
#define OPTION_VAL_NTSC_CHT NULL
#define OPTION_VAL_FAMICOM_CHT NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_CHT NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_CHT NULL
#define NESTOPIA_OVERSCAN_V_LABEL_CHT NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_CHT NULL
#define NESTOPIA_OVERSCAN_H_LABEL_CHT NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_CHT NULL
#define NESTOPIA_ASPECT_LABEL_CHT NULL
#define NESTOPIA_ASPECT_INFO_0_CHT NULL
#define OPTION_VAL_4_3_CHT NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_CHT NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_CHT NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_CHT NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_CHT NULL
#define OPTION_VAL_DENDY_CHT NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_CHT NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_CHT NULL
#define OPTION_VAL_0X00_CHT NULL
#define OPTION_VAL_0XFF_CHT NULL
#define OPTION_VAL_RANDOM_CHT NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_CHT NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_CHT NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_CHT NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_CHT NULL
#define OPTION_VAL_MOUSE_CHT NULL
#define OPTION_VAL_POINTER_CHT NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_CHT NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_CHT NULL
#define OPTION_VAL_LIGHTGUN_CHT NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_CHT NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_CHT NULL
#define NESTOPIA_TURBO_PULSE_LABEL_CHT NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_CHT NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CHT NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_CHT NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_CHT NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_CHT NULL

struct retro_core_option_v2_category option_cats_cht[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CHT,
      CATEGORY_VIDEO_INFO_0_CHT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CHT,
      CATEGORY_AUDIO_INFO_0_CHT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CHT,
      CATEGORY_INPUT_INFO_0_CHT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CHT,
      CATEGORY_HACKS_INFO_0_CHT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cht[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CHT,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CHT,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_CHT },
         { "svideo",     OPTION_VAL_SVIDEO_CHT },
         { "rgb",        OPTION_VAL_RGB_CHT },
         { "monochrome", OPTION_VAL_MONOCHROME_CHT },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_CHT,
      NULL,
      NESTOPIA_PALETTE_INFO_0_CHT,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_CHT },
         { "consumer",             OPTION_VAL_CONSUMER_CHT },
         { "canonical",            OPTION_VAL_CANONICAL_CHT },
         { "alternative",          OPTION_VAL_ALTERNATIVE_CHT },
         { "rgb",                  OPTION_VAL_RGB_O1_CHT },
         { "pal",                  OPTION_VAL_PAL_CHT },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_CHT },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_CHT },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_CHT },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_CHT },
         { "raw",                  OPTION_VAL_RAW_CHT },
         { "custom",               OPTION_VAL_CUSTOM_CHT },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_CHT,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_CHT,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_CHT },
         { "2x", OPTION_VAL_2X_CHT },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_CHT,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_CHT,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_CHT },
         { "ntsc",    OPTION_VAL_NTSC_CHT },
         { "famicom", OPTION_VAL_FAMICOM_CHT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_CHT,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_CHT,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_CHT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_CHT,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_CHT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_CHT,
      NULL,
      NESTOPIA_ASPECT_INFO_0_CHT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CHT },
         { "ntsc", OPTION_VAL_NTSC_CHT },
         { "pal",  OPTION_VAL_PAL_CHT },
         { "4:3",  OPTION_VAL_4_3_CHT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_CHT,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_CHT,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_CHT },
         { "ntsc",    OPTION_VAL_NTSC_CHT },
         { "pal",     OPTION_VAL_PAL_CHT },
         { "famicom", OPTION_VAL_FAMICOM_CHT },
         { "dendy",   OPTION_VAL_DENDY_CHT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_CHT,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_CHT,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_CHT },
         { "0xFF",   OPTION_VAL_0XFF_CHT },
         { "random", OPTION_VAL_RANDOM_CHT },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_CHT,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_CHT, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_CHT,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_CHT,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_CHT },
         { "pointer", OPTION_VAL_POINTER_CHT },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_CHT,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_CHT,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_CHT },
         { "mouse", OPTION_VAL_MOUSE_CHT },
         { "pointer", OPTION_VAL_POINTER_CHT },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_CHT,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_CHT,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_CHT,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_CHT,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CHT,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CHT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_CHT,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CHT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cht = {
   option_cats_cht,
   option_defs_cht
};

/* RETRO_LANGUAGE_CS */

#define CATEGORY_VIDEO_LABEL_CS NULL
#define CATEGORY_VIDEO_INFO_0_CS NULL
#define CATEGORY_AUDIO_LABEL_CS NULL
#define CATEGORY_AUDIO_INFO_0_CS NULL
#define CATEGORY_INPUT_LABEL_CS NULL
#define CATEGORY_INPUT_INFO_0_CS NULL
#define CATEGORY_HACKS_LABEL_CS NULL
#define CATEGORY_HACKS_INFO_0_CS NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CS NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CS NULL
#define OPTION_VAL_COMPOSITE_CS NULL
#define OPTION_VAL_SVIDEO_CS NULL
#define OPTION_VAL_RGB_CS NULL
#define OPTION_VAL_MONOCHROME_CS NULL
#define NESTOPIA_PALETTE_LABEL_CS NULL
#define NESTOPIA_PALETTE_INFO_0_CS NULL
#define OPTION_VAL_CXA2025AS_CS NULL
#define OPTION_VAL_CONSUMER_CS NULL
#define OPTION_VAL_CANONICAL_CS NULL
#define OPTION_VAL_ALTERNATIVE_CS NULL
#define OPTION_VAL_RGB_O1_CS NULL
#define OPTION_VAL_PAL_CS NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_CS NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_CS NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_CS NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_CS NULL
#define OPTION_VAL_RAW_CS NULL
#define OPTION_VAL_CUSTOM_CS NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_CS NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_CS NULL
#define NESTOPIA_OVERCLOCK_LABEL_CS NULL
#define NESTOPIA_OVERCLOCK_INFO_0_CS NULL
#define OPTION_VAL_1X_CS NULL
#define OPTION_VAL_2X_CS NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_CS NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_CS NULL
#define OPTION_VAL_AUTO_CS NULL
#define OPTION_VAL_NTSC_CS NULL
#define OPTION_VAL_FAMICOM_CS NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_CS NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_CS NULL
#define NESTOPIA_OVERSCAN_V_LABEL_CS NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_CS NULL
#define NESTOPIA_OVERSCAN_H_LABEL_CS NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_CS NULL
#define NESTOPIA_ASPECT_LABEL_CS NULL
#define NESTOPIA_ASPECT_INFO_0_CS NULL
#define OPTION_VAL_4_3_CS NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_CS NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_CS NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_CS NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_CS NULL
#define OPTION_VAL_DENDY_CS NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_CS NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_CS NULL
#define OPTION_VAL_0X00_CS NULL
#define OPTION_VAL_0XFF_CS NULL
#define OPTION_VAL_RANDOM_CS NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_CS NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_CS NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_CS NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_CS NULL
#define OPTION_VAL_MOUSE_CS NULL
#define OPTION_VAL_POINTER_CS NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_CS NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_CS NULL
#define OPTION_VAL_LIGHTGUN_CS NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_CS NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_CS NULL
#define NESTOPIA_TURBO_PULSE_LABEL_CS NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_CS NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CS NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_CS NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_CS NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_CS NULL

struct retro_core_option_v2_category option_cats_cs[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CS,
      CATEGORY_VIDEO_INFO_0_CS
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CS,
      CATEGORY_AUDIO_INFO_0_CS
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CS,
      CATEGORY_INPUT_INFO_0_CS
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CS,
      CATEGORY_HACKS_INFO_0_CS
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cs[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CS,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CS,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_CS },
         { "svideo",     OPTION_VAL_SVIDEO_CS },
         { "rgb",        OPTION_VAL_RGB_CS },
         { "monochrome", OPTION_VAL_MONOCHROME_CS },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_CS,
      NULL,
      NESTOPIA_PALETTE_INFO_0_CS,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_CS },
         { "consumer",             OPTION_VAL_CONSUMER_CS },
         { "canonical",            OPTION_VAL_CANONICAL_CS },
         { "alternative",          OPTION_VAL_ALTERNATIVE_CS },
         { "rgb",                  OPTION_VAL_RGB_O1_CS },
         { "pal",                  OPTION_VAL_PAL_CS },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_CS },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_CS },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_CS },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_CS },
         { "raw",                  OPTION_VAL_RAW_CS },
         { "custom",               OPTION_VAL_CUSTOM_CS },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_CS,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_CS,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_CS },
         { "2x", OPTION_VAL_2X_CS },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_CS,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_CS,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_CS },
         { "ntsc",    OPTION_VAL_NTSC_CS },
         { "famicom", OPTION_VAL_FAMICOM_CS },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_CS,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_CS,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_CS,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_CS,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_CS,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_CS,
      NULL,
      NESTOPIA_ASPECT_INFO_0_CS,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CS },
         { "ntsc", OPTION_VAL_NTSC_CS },
         { "pal",  OPTION_VAL_PAL_CS },
         { "4:3",  OPTION_VAL_4_3_CS },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_CS,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_CS,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_CS,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_CS,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_CS },
         { "ntsc",    OPTION_VAL_NTSC_CS },
         { "pal",     OPTION_VAL_PAL_CS },
         { "famicom", OPTION_VAL_FAMICOM_CS },
         { "dendy",   OPTION_VAL_DENDY_CS },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_CS,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_CS,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_CS },
         { "0xFF",   OPTION_VAL_0XFF_CS },
         { "random", OPTION_VAL_RANDOM_CS },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_CS,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_CS, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_CS,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_CS,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_CS },
         { "pointer", OPTION_VAL_POINTER_CS },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_CS,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_CS,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_CS },
         { "mouse", OPTION_VAL_MOUSE_CS },
         { "pointer", OPTION_VAL_POINTER_CS },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_CS,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_CS,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_CS,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_CS,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CS,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CS,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_CS,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CS,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cs = {
   option_cats_cs,
   option_defs_cs
};

/* RETRO_LANGUAGE_CY */

#define CATEGORY_VIDEO_LABEL_CY NULL
#define CATEGORY_VIDEO_INFO_0_CY NULL
#define CATEGORY_AUDIO_LABEL_CY NULL
#define CATEGORY_AUDIO_INFO_0_CY NULL
#define CATEGORY_INPUT_LABEL_CY NULL
#define CATEGORY_INPUT_INFO_0_CY NULL
#define CATEGORY_HACKS_LABEL_CY NULL
#define CATEGORY_HACKS_INFO_0_CY NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CY NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CY NULL
#define OPTION_VAL_COMPOSITE_CY NULL
#define OPTION_VAL_SVIDEO_CY NULL
#define OPTION_VAL_RGB_CY NULL
#define OPTION_VAL_MONOCHROME_CY NULL
#define NESTOPIA_PALETTE_LABEL_CY NULL
#define NESTOPIA_PALETTE_INFO_0_CY NULL
#define OPTION_VAL_CXA2025AS_CY NULL
#define OPTION_VAL_CONSUMER_CY NULL
#define OPTION_VAL_CANONICAL_CY NULL
#define OPTION_VAL_ALTERNATIVE_CY NULL
#define OPTION_VAL_RGB_O1_CY NULL
#define OPTION_VAL_PAL_CY NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_CY NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_CY NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_CY NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_CY NULL
#define OPTION_VAL_RAW_CY NULL
#define OPTION_VAL_CUSTOM_CY NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_CY NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_CY NULL
#define NESTOPIA_OVERCLOCK_LABEL_CY NULL
#define NESTOPIA_OVERCLOCK_INFO_0_CY NULL
#define OPTION_VAL_1X_CY NULL
#define OPTION_VAL_2X_CY NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_CY NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_CY NULL
#define OPTION_VAL_AUTO_CY NULL
#define OPTION_VAL_NTSC_CY NULL
#define OPTION_VAL_FAMICOM_CY NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_CY NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_CY NULL
#define NESTOPIA_OVERSCAN_V_LABEL_CY NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_CY NULL
#define NESTOPIA_OVERSCAN_H_LABEL_CY NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_CY NULL
#define NESTOPIA_ASPECT_LABEL_CY NULL
#define NESTOPIA_ASPECT_INFO_0_CY NULL
#define OPTION_VAL_4_3_CY NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_CY NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_CY NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_CY NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_CY NULL
#define OPTION_VAL_DENDY_CY NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_CY NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_CY NULL
#define OPTION_VAL_0X00_CY NULL
#define OPTION_VAL_0XFF_CY NULL
#define OPTION_VAL_RANDOM_CY NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_CY NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_CY NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_CY NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_CY NULL
#define OPTION_VAL_MOUSE_CY NULL
#define OPTION_VAL_POINTER_CY NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_CY NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_CY NULL
#define OPTION_VAL_LIGHTGUN_CY NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_CY NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_CY NULL
#define NESTOPIA_TURBO_PULSE_LABEL_CY NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_CY NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CY NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_CY NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_CY NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_CY NULL

struct retro_core_option_v2_category option_cats_cy[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_CY,
      CATEGORY_VIDEO_INFO_0_CY
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_CY,
      CATEGORY_AUDIO_INFO_0_CY
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_CY,
      CATEGORY_INPUT_INFO_0_CY
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_CY,
      CATEGORY_HACKS_INFO_0_CY
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_cy[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_CY,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_CY,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_CY },
         { "svideo",     OPTION_VAL_SVIDEO_CY },
         { "rgb",        OPTION_VAL_RGB_CY },
         { "monochrome", OPTION_VAL_MONOCHROME_CY },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_CY,
      NULL,
      NESTOPIA_PALETTE_INFO_0_CY,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_CY },
         { "consumer",             OPTION_VAL_CONSUMER_CY },
         { "canonical",            OPTION_VAL_CANONICAL_CY },
         { "alternative",          OPTION_VAL_ALTERNATIVE_CY },
         { "rgb",                  OPTION_VAL_RGB_O1_CY },
         { "pal",                  OPTION_VAL_PAL_CY },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_CY },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_CY },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_CY },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_CY },
         { "raw",                  OPTION_VAL_RAW_CY },
         { "custom",               OPTION_VAL_CUSTOM_CY },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_CY,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_CY,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_CY },
         { "2x", OPTION_VAL_2X_CY },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_CY,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_CY,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_CY },
         { "ntsc",    OPTION_VAL_NTSC_CY },
         { "famicom", OPTION_VAL_FAMICOM_CY },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_CY,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_CY,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_CY,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_CY,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_CY,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_CY,
      NULL,
      NESTOPIA_ASPECT_INFO_0_CY,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_CY },
         { "ntsc", OPTION_VAL_NTSC_CY },
         { "pal",  OPTION_VAL_PAL_CY },
         { "4:3",  OPTION_VAL_4_3_CY },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_CY,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_CY,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_CY,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_CY,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_CY },
         { "ntsc",    OPTION_VAL_NTSC_CY },
         { "pal",     OPTION_VAL_PAL_CY },
         { "famicom", OPTION_VAL_FAMICOM_CY },
         { "dendy",   OPTION_VAL_DENDY_CY },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_CY,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_CY,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_CY },
         { "0xFF",   OPTION_VAL_0XFF_CY },
         { "random", OPTION_VAL_RANDOM_CY },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_CY,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_CY, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_CY,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_CY,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_CY },
         { "pointer", OPTION_VAL_POINTER_CY },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_CY,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_CY,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_CY },
         { "mouse", OPTION_VAL_MOUSE_CY },
         { "pointer", OPTION_VAL_POINTER_CY },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_CY,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_CY,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_CY,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_CY,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_CY,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_CY,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_CY,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_CY,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_cy = {
   option_cats_cy,
   option_defs_cy
};

/* RETRO_LANGUAGE_DA */

#define CATEGORY_VIDEO_LABEL_DA NULL
#define CATEGORY_VIDEO_INFO_0_DA NULL
#define CATEGORY_AUDIO_LABEL_DA NULL
#define CATEGORY_AUDIO_INFO_0_DA NULL
#define CATEGORY_INPUT_LABEL_DA NULL
#define CATEGORY_INPUT_INFO_0_DA NULL
#define CATEGORY_HACKS_LABEL_DA NULL
#define CATEGORY_HACKS_INFO_0_DA NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_DA NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_DA NULL
#define OPTION_VAL_COMPOSITE_DA NULL
#define OPTION_VAL_SVIDEO_DA NULL
#define OPTION_VAL_RGB_DA NULL
#define OPTION_VAL_MONOCHROME_DA NULL
#define NESTOPIA_PALETTE_LABEL_DA NULL
#define NESTOPIA_PALETTE_INFO_0_DA NULL
#define OPTION_VAL_CXA2025AS_DA NULL
#define OPTION_VAL_CONSUMER_DA NULL
#define OPTION_VAL_CANONICAL_DA NULL
#define OPTION_VAL_ALTERNATIVE_DA NULL
#define OPTION_VAL_RGB_O1_DA NULL
#define OPTION_VAL_PAL_DA NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_DA NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_DA NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_DA NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_DA NULL
#define OPTION_VAL_RAW_DA NULL
#define OPTION_VAL_CUSTOM_DA NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_DA NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_DA NULL
#define NESTOPIA_OVERCLOCK_LABEL_DA NULL
#define NESTOPIA_OVERCLOCK_INFO_0_DA NULL
#define OPTION_VAL_1X_DA NULL
#define OPTION_VAL_2X_DA NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_DA NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_DA NULL
#define OPTION_VAL_AUTO_DA NULL
#define OPTION_VAL_NTSC_DA NULL
#define OPTION_VAL_FAMICOM_DA NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_DA NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_DA NULL
#define NESTOPIA_OVERSCAN_V_LABEL_DA NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_DA NULL
#define NESTOPIA_OVERSCAN_H_LABEL_DA NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_DA NULL
#define NESTOPIA_ASPECT_LABEL_DA NULL
#define NESTOPIA_ASPECT_INFO_0_DA NULL
#define OPTION_VAL_4_3_DA NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_DA NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_DA NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_DA NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_DA NULL
#define OPTION_VAL_DENDY_DA NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_DA NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_DA NULL
#define OPTION_VAL_0X00_DA NULL
#define OPTION_VAL_0XFF_DA NULL
#define OPTION_VAL_RANDOM_DA NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_DA NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_DA NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_DA NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_DA NULL
#define OPTION_VAL_MOUSE_DA NULL
#define OPTION_VAL_POINTER_DA NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_DA NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_DA NULL
#define OPTION_VAL_LIGHTGUN_DA NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_DA NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_DA NULL
#define NESTOPIA_TURBO_PULSE_LABEL_DA NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_DA NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_DA NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_DA NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_DA NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_DA NULL

struct retro_core_option_v2_category option_cats_da[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DA,
      CATEGORY_VIDEO_INFO_0_DA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DA,
      CATEGORY_AUDIO_INFO_0_DA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DA,
      CATEGORY_INPUT_INFO_0_DA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DA,
      CATEGORY_HACKS_INFO_0_DA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_da[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_DA,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_DA,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_DA },
         { "svideo",     OPTION_VAL_SVIDEO_DA },
         { "rgb",        OPTION_VAL_RGB_DA },
         { "monochrome", OPTION_VAL_MONOCHROME_DA },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_DA,
      NULL,
      NESTOPIA_PALETTE_INFO_0_DA,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_DA },
         { "consumer",             OPTION_VAL_CONSUMER_DA },
         { "canonical",            OPTION_VAL_CANONICAL_DA },
         { "alternative",          OPTION_VAL_ALTERNATIVE_DA },
         { "rgb",                  OPTION_VAL_RGB_O1_DA },
         { "pal",                  OPTION_VAL_PAL_DA },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_DA },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_DA },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_DA },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_DA },
         { "raw",                  OPTION_VAL_RAW_DA },
         { "custom",               OPTION_VAL_CUSTOM_DA },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_DA,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_DA,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_DA },
         { "2x", OPTION_VAL_2X_DA },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_DA,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_DA,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_DA },
         { "ntsc",    OPTION_VAL_NTSC_DA },
         { "famicom", OPTION_VAL_FAMICOM_DA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_DA,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_DA,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_DA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_DA,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_DA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_DA,
      NULL,
      NESTOPIA_ASPECT_INFO_0_DA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DA },
         { "ntsc", OPTION_VAL_NTSC_DA },
         { "pal",  OPTION_VAL_PAL_DA },
         { "4:3",  OPTION_VAL_4_3_DA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_DA,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_DA,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_DA,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_DA,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_DA },
         { "ntsc",    OPTION_VAL_NTSC_DA },
         { "pal",     OPTION_VAL_PAL_DA },
         { "famicom", OPTION_VAL_FAMICOM_DA },
         { "dendy",   OPTION_VAL_DENDY_DA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_DA,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_DA,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_DA },
         { "0xFF",   OPTION_VAL_0XFF_DA },
         { "random", OPTION_VAL_RANDOM_DA },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_DA,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_DA, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_DA,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_DA,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_DA },
         { "pointer", OPTION_VAL_POINTER_DA },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_DA,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_DA,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_DA },
         { "mouse", OPTION_VAL_MOUSE_DA },
         { "pointer", OPTION_VAL_POINTER_DA },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_DA,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_DA,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_DA,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_DA,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_DA,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_DA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_DA,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_DA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_da = {
   option_cats_da,
   option_defs_da
};

/* RETRO_LANGUAGE_DE */

#define CATEGORY_VIDEO_LABEL_DE NULL
#define CATEGORY_VIDEO_INFO_0_DE NULL
#define CATEGORY_AUDIO_LABEL_DE NULL
#define CATEGORY_AUDIO_INFO_0_DE NULL
#define CATEGORY_INPUT_LABEL_DE NULL
#define CATEGORY_INPUT_INFO_0_DE NULL
#define CATEGORY_HACKS_LABEL_DE NULL
#define CATEGORY_HACKS_INFO_0_DE NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_DE NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_DE NULL
#define OPTION_VAL_COMPOSITE_DE NULL
#define OPTION_VAL_SVIDEO_DE NULL
#define OPTION_VAL_RGB_DE NULL
#define OPTION_VAL_MONOCHROME_DE NULL
#define NESTOPIA_PALETTE_LABEL_DE NULL
#define NESTOPIA_PALETTE_INFO_0_DE NULL
#define OPTION_VAL_CXA2025AS_DE NULL
#define OPTION_VAL_CONSUMER_DE NULL
#define OPTION_VAL_CANONICAL_DE NULL
#define OPTION_VAL_ALTERNATIVE_DE NULL
#define OPTION_VAL_RGB_O1_DE NULL
#define OPTION_VAL_PAL_DE NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_DE NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_DE NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_DE NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_DE NULL
#define OPTION_VAL_RAW_DE NULL
#define OPTION_VAL_CUSTOM_DE NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_DE NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_DE NULL
#define NESTOPIA_OVERCLOCK_LABEL_DE NULL
#define NESTOPIA_OVERCLOCK_INFO_0_DE NULL
#define OPTION_VAL_1X_DE NULL
#define OPTION_VAL_2X_DE NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_DE NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_DE NULL
#define OPTION_VAL_AUTO_DE NULL
#define OPTION_VAL_NTSC_DE NULL
#define OPTION_VAL_FAMICOM_DE NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_DE NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_DE NULL
#define NESTOPIA_OVERSCAN_V_LABEL_DE NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_DE NULL
#define NESTOPIA_OVERSCAN_H_LABEL_DE NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_DE NULL
#define NESTOPIA_ASPECT_LABEL_DE NULL
#define NESTOPIA_ASPECT_INFO_0_DE NULL
#define OPTION_VAL_4_3_DE NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_DE NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_DE NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_DE NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_DE NULL
#define OPTION_VAL_DENDY_DE NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_DE NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_DE NULL
#define OPTION_VAL_0X00_DE NULL
#define OPTION_VAL_0XFF_DE NULL
#define OPTION_VAL_RANDOM_DE NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_DE NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_DE NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_DE NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_DE NULL
#define OPTION_VAL_MOUSE_DE NULL
#define OPTION_VAL_POINTER_DE NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_DE NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_DE NULL
#define OPTION_VAL_LIGHTGUN_DE NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_DE NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_DE NULL
#define NESTOPIA_TURBO_PULSE_LABEL_DE NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_DE NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_DE NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_DE NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_DE NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_DE NULL

struct retro_core_option_v2_category option_cats_de[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_DE,
      CATEGORY_VIDEO_INFO_0_DE
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_DE,
      CATEGORY_AUDIO_INFO_0_DE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_DE,
      CATEGORY_INPUT_INFO_0_DE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_DE,
      CATEGORY_HACKS_INFO_0_DE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_de[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_DE,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_DE,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_DE },
         { "svideo",     OPTION_VAL_SVIDEO_DE },
         { "rgb",        OPTION_VAL_RGB_DE },
         { "monochrome", OPTION_VAL_MONOCHROME_DE },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_DE,
      NULL,
      NESTOPIA_PALETTE_INFO_0_DE,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_DE },
         { "consumer",             OPTION_VAL_CONSUMER_DE },
         { "canonical",            OPTION_VAL_CANONICAL_DE },
         { "alternative",          OPTION_VAL_ALTERNATIVE_DE },
         { "rgb",                  OPTION_VAL_RGB_O1_DE },
         { "pal",                  OPTION_VAL_PAL_DE },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_DE },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_DE },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_DE },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_DE },
         { "raw",                  OPTION_VAL_RAW_DE },
         { "custom",               OPTION_VAL_CUSTOM_DE },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_DE,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_DE,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_DE },
         { "2x", OPTION_VAL_2X_DE },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_DE,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_DE,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_DE },
         { "ntsc",    OPTION_VAL_NTSC_DE },
         { "famicom", OPTION_VAL_FAMICOM_DE },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_DE,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_DE,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_DE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_DE,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_DE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_DE,
      NULL,
      NESTOPIA_ASPECT_INFO_0_DE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_DE },
         { "ntsc", OPTION_VAL_NTSC_DE },
         { "pal",  OPTION_VAL_PAL_DE },
         { "4:3",  OPTION_VAL_4_3_DE },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_DE,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_DE,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_DE,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_DE,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_DE },
         { "ntsc",    OPTION_VAL_NTSC_DE },
         { "pal",     OPTION_VAL_PAL_DE },
         { "famicom", OPTION_VAL_FAMICOM_DE },
         { "dendy",   OPTION_VAL_DENDY_DE },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_DE,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_DE,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_DE },
         { "0xFF",   OPTION_VAL_0XFF_DE },
         { "random", OPTION_VAL_RANDOM_DE },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_DE,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_DE, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_DE,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_DE,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_DE },
         { "pointer", OPTION_VAL_POINTER_DE },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_DE,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_DE,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_DE },
         { "mouse", OPTION_VAL_MOUSE_DE },
         { "pointer", OPTION_VAL_POINTER_DE },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_DE,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_DE,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_DE,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_DE,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_DE,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_DE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_DE,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_DE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_de = {
   option_cats_de,
   option_defs_de
};

/* RETRO_LANGUAGE_EL */

#define CATEGORY_VIDEO_LABEL_EL NULL
#define CATEGORY_VIDEO_INFO_0_EL NULL
#define CATEGORY_AUDIO_LABEL_EL NULL
#define CATEGORY_AUDIO_INFO_0_EL NULL
#define CATEGORY_INPUT_LABEL_EL NULL
#define CATEGORY_INPUT_INFO_0_EL NULL
#define CATEGORY_HACKS_LABEL_EL NULL
#define CATEGORY_HACKS_INFO_0_EL NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_EL NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_EL NULL
#define OPTION_VAL_COMPOSITE_EL NULL
#define OPTION_VAL_SVIDEO_EL NULL
#define OPTION_VAL_RGB_EL NULL
#define OPTION_VAL_MONOCHROME_EL NULL
#define NESTOPIA_PALETTE_LABEL_EL NULL
#define NESTOPIA_PALETTE_INFO_0_EL NULL
#define OPTION_VAL_CXA2025AS_EL NULL
#define OPTION_VAL_CONSUMER_EL NULL
#define OPTION_VAL_CANONICAL_EL NULL
#define OPTION_VAL_ALTERNATIVE_EL NULL
#define OPTION_VAL_RGB_O1_EL NULL
#define OPTION_VAL_PAL_EL NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_EL NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_EL NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_EL NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_EL NULL
#define OPTION_VAL_RAW_EL NULL
#define OPTION_VAL_CUSTOM_EL NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_EL NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_EL NULL
#define NESTOPIA_OVERCLOCK_LABEL_EL NULL
#define NESTOPIA_OVERCLOCK_INFO_0_EL NULL
#define OPTION_VAL_1X_EL NULL
#define OPTION_VAL_2X_EL NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_EL NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_EL NULL
#define OPTION_VAL_AUTO_EL NULL
#define OPTION_VAL_NTSC_EL NULL
#define OPTION_VAL_FAMICOM_EL NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_EL NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_EL NULL
#define NESTOPIA_OVERSCAN_V_LABEL_EL NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_EL NULL
#define NESTOPIA_OVERSCAN_H_LABEL_EL NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_EL NULL
#define NESTOPIA_ASPECT_LABEL_EL NULL
#define NESTOPIA_ASPECT_INFO_0_EL NULL
#define OPTION_VAL_4_3_EL NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_EL NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_EL NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_EL NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_EL NULL
#define OPTION_VAL_DENDY_EL NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_EL NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_EL NULL
#define OPTION_VAL_0X00_EL NULL
#define OPTION_VAL_0XFF_EL NULL
#define OPTION_VAL_RANDOM_EL NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_EL NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_EL NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_EL NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_EL NULL
#define OPTION_VAL_MOUSE_EL NULL
#define OPTION_VAL_POINTER_EL NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_EL NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_EL NULL
#define OPTION_VAL_LIGHTGUN_EL NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_EL NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_EL NULL
#define NESTOPIA_TURBO_PULSE_LABEL_EL NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_EL NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_EL NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_EL NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_EL NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_EL NULL

struct retro_core_option_v2_category option_cats_el[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EL,
      CATEGORY_VIDEO_INFO_0_EL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EL,
      CATEGORY_AUDIO_INFO_0_EL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EL,
      CATEGORY_INPUT_INFO_0_EL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EL,
      CATEGORY_HACKS_INFO_0_EL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_el[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_EL,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_EL,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_EL },
         { "svideo",     OPTION_VAL_SVIDEO_EL },
         { "rgb",        OPTION_VAL_RGB_EL },
         { "monochrome", OPTION_VAL_MONOCHROME_EL },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_EL,
      NULL,
      NESTOPIA_PALETTE_INFO_0_EL,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_EL },
         { "consumer",             OPTION_VAL_CONSUMER_EL },
         { "canonical",            OPTION_VAL_CANONICAL_EL },
         { "alternative",          OPTION_VAL_ALTERNATIVE_EL },
         { "rgb",                  OPTION_VAL_RGB_O1_EL },
         { "pal",                  OPTION_VAL_PAL_EL },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_EL },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_EL },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_EL },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_EL },
         { "raw",                  OPTION_VAL_RAW_EL },
         { "custom",               OPTION_VAL_CUSTOM_EL },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_EL,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_EL,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_EL },
         { "2x", OPTION_VAL_2X_EL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_EL,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_EL,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_EL },
         { "ntsc",    OPTION_VAL_NTSC_EL },
         { "famicom", OPTION_VAL_FAMICOM_EL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_EL,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_EL,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_EL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_EL,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_EL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_EL,
      NULL,
      NESTOPIA_ASPECT_INFO_0_EL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EL },
         { "ntsc", OPTION_VAL_NTSC_EL },
         { "pal",  OPTION_VAL_PAL_EL },
         { "4:3",  OPTION_VAL_4_3_EL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_EL,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_EL,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_EL,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_EL,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_EL },
         { "ntsc",    OPTION_VAL_NTSC_EL },
         { "pal",     OPTION_VAL_PAL_EL },
         { "famicom", OPTION_VAL_FAMICOM_EL },
         { "dendy",   OPTION_VAL_DENDY_EL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_EL,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_EL,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_EL },
         { "0xFF",   OPTION_VAL_0XFF_EL },
         { "random", OPTION_VAL_RANDOM_EL },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_EL,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_EL, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_EL,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_EL,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_EL },
         { "pointer", OPTION_VAL_POINTER_EL },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_EL,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_EL,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_EL },
         { "mouse", OPTION_VAL_MOUSE_EL },
         { "pointer", OPTION_VAL_POINTER_EL },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_EL,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_EL,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_EL,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_EL,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_EL,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_EL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_EL,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_EL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_el = {
   option_cats_el,
   option_defs_el
};

/* RETRO_LANGUAGE_EO */

#define CATEGORY_VIDEO_LABEL_EO NULL
#define CATEGORY_VIDEO_INFO_0_EO NULL
#define CATEGORY_AUDIO_LABEL_EO NULL
#define CATEGORY_AUDIO_INFO_0_EO NULL
#define CATEGORY_INPUT_LABEL_EO NULL
#define CATEGORY_INPUT_INFO_0_EO NULL
#define CATEGORY_HACKS_LABEL_EO NULL
#define CATEGORY_HACKS_INFO_0_EO NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_EO NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_EO NULL
#define OPTION_VAL_COMPOSITE_EO NULL
#define OPTION_VAL_SVIDEO_EO NULL
#define OPTION_VAL_RGB_EO NULL
#define OPTION_VAL_MONOCHROME_EO NULL
#define NESTOPIA_PALETTE_LABEL_EO NULL
#define NESTOPIA_PALETTE_INFO_0_EO NULL
#define OPTION_VAL_CXA2025AS_EO NULL
#define OPTION_VAL_CONSUMER_EO NULL
#define OPTION_VAL_CANONICAL_EO NULL
#define OPTION_VAL_ALTERNATIVE_EO NULL
#define OPTION_VAL_RGB_O1_EO NULL
#define OPTION_VAL_PAL_EO NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_EO NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_EO NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_EO NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_EO NULL
#define OPTION_VAL_RAW_EO NULL
#define OPTION_VAL_CUSTOM_EO NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_EO NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_EO NULL
#define NESTOPIA_OVERCLOCK_LABEL_EO NULL
#define NESTOPIA_OVERCLOCK_INFO_0_EO NULL
#define OPTION_VAL_1X_EO NULL
#define OPTION_VAL_2X_EO NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_EO NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_EO NULL
#define OPTION_VAL_AUTO_EO NULL
#define OPTION_VAL_NTSC_EO NULL
#define OPTION_VAL_FAMICOM_EO NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_EO NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_EO NULL
#define NESTOPIA_OVERSCAN_V_LABEL_EO NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_EO NULL
#define NESTOPIA_OVERSCAN_H_LABEL_EO NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_EO NULL
#define NESTOPIA_ASPECT_LABEL_EO NULL
#define NESTOPIA_ASPECT_INFO_0_EO NULL
#define OPTION_VAL_4_3_EO NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_EO NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_EO NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_EO NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_EO NULL
#define OPTION_VAL_DENDY_EO NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_EO NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_EO NULL
#define OPTION_VAL_0X00_EO NULL
#define OPTION_VAL_0XFF_EO NULL
#define OPTION_VAL_RANDOM_EO NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_EO NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_EO NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_EO NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_EO NULL
#define OPTION_VAL_MOUSE_EO NULL
#define OPTION_VAL_POINTER_EO NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_EO NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_EO NULL
#define OPTION_VAL_LIGHTGUN_EO NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_EO NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_EO NULL
#define NESTOPIA_TURBO_PULSE_LABEL_EO NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_EO NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_EO NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_EO NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_EO NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_EO NULL

struct retro_core_option_v2_category option_cats_eo[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_EO,
      CATEGORY_VIDEO_INFO_0_EO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_EO,
      CATEGORY_AUDIO_INFO_0_EO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_EO,
      CATEGORY_INPUT_INFO_0_EO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_EO,
      CATEGORY_HACKS_INFO_0_EO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_eo[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_EO,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_EO,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_EO },
         { "svideo",     OPTION_VAL_SVIDEO_EO },
         { "rgb",        OPTION_VAL_RGB_EO },
         { "monochrome", OPTION_VAL_MONOCHROME_EO },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_EO,
      NULL,
      NESTOPIA_PALETTE_INFO_0_EO,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_EO },
         { "consumer",             OPTION_VAL_CONSUMER_EO },
         { "canonical",            OPTION_VAL_CANONICAL_EO },
         { "alternative",          OPTION_VAL_ALTERNATIVE_EO },
         { "rgb",                  OPTION_VAL_RGB_O1_EO },
         { "pal",                  OPTION_VAL_PAL_EO },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_EO },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_EO },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_EO },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_EO },
         { "raw",                  OPTION_VAL_RAW_EO },
         { "custom",               OPTION_VAL_CUSTOM_EO },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_EO,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_EO,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_EO },
         { "2x", OPTION_VAL_2X_EO },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_EO,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_EO,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_EO },
         { "ntsc",    OPTION_VAL_NTSC_EO },
         { "famicom", OPTION_VAL_FAMICOM_EO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_EO,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_EO,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_EO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_EO,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_EO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_EO,
      NULL,
      NESTOPIA_ASPECT_INFO_0_EO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_EO },
         { "ntsc", OPTION_VAL_NTSC_EO },
         { "pal",  OPTION_VAL_PAL_EO },
         { "4:3",  OPTION_VAL_4_3_EO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_EO,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_EO,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_EO,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_EO,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_EO },
         { "ntsc",    OPTION_VAL_NTSC_EO },
         { "pal",     OPTION_VAL_PAL_EO },
         { "famicom", OPTION_VAL_FAMICOM_EO },
         { "dendy",   OPTION_VAL_DENDY_EO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_EO,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_EO,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_EO },
         { "0xFF",   OPTION_VAL_0XFF_EO },
         { "random", OPTION_VAL_RANDOM_EO },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_EO,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_EO, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_EO,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_EO,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_EO },
         { "pointer", OPTION_VAL_POINTER_EO },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_EO,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_EO,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_EO },
         { "mouse", OPTION_VAL_MOUSE_EO },
         { "pointer", OPTION_VAL_POINTER_EO },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_EO,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_EO,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_EO,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_EO,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_EO,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_EO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_EO,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_EO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_eo = {
   option_cats_eo,
   option_defs_eo
};

/* RETRO_LANGUAGE_ES */

#define CATEGORY_VIDEO_LABEL_ES NULL
#define CATEGORY_VIDEO_INFO_0_ES NULL
#define CATEGORY_AUDIO_LABEL_ES NULL
#define CATEGORY_AUDIO_INFO_0_ES NULL
#define CATEGORY_INPUT_LABEL_ES NULL
#define CATEGORY_INPUT_INFO_0_ES NULL
#define CATEGORY_HACKS_LABEL_ES NULL
#define CATEGORY_HACKS_INFO_0_ES NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_ES NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_ES NULL
#define OPTION_VAL_COMPOSITE_ES NULL
#define OPTION_VAL_SVIDEO_ES NULL
#define OPTION_VAL_RGB_ES NULL
#define OPTION_VAL_MONOCHROME_ES NULL
#define NESTOPIA_PALETTE_LABEL_ES NULL
#define NESTOPIA_PALETTE_INFO_0_ES NULL
#define OPTION_VAL_CXA2025AS_ES NULL
#define OPTION_VAL_CONSUMER_ES NULL
#define OPTION_VAL_CANONICAL_ES NULL
#define OPTION_VAL_ALTERNATIVE_ES NULL
#define OPTION_VAL_RGB_O1_ES NULL
#define OPTION_VAL_PAL_ES NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_ES NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_ES NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_ES NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_ES NULL
#define OPTION_VAL_RAW_ES NULL
#define OPTION_VAL_CUSTOM_ES NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_ES NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_ES NULL
#define NESTOPIA_OVERCLOCK_LABEL_ES NULL
#define NESTOPIA_OVERCLOCK_INFO_0_ES NULL
#define OPTION_VAL_1X_ES NULL
#define OPTION_VAL_2X_ES NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_ES NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_ES NULL
#define OPTION_VAL_AUTO_ES NULL
#define OPTION_VAL_NTSC_ES NULL
#define OPTION_VAL_FAMICOM_ES NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_ES NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_ES NULL
#define NESTOPIA_OVERSCAN_V_LABEL_ES NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_ES NULL
#define NESTOPIA_OVERSCAN_H_LABEL_ES NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_ES NULL
#define NESTOPIA_ASPECT_LABEL_ES NULL
#define NESTOPIA_ASPECT_INFO_0_ES NULL
#define OPTION_VAL_4_3_ES NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_ES NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_ES NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_ES NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_ES NULL
#define OPTION_VAL_DENDY_ES NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_ES NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_ES NULL
#define OPTION_VAL_0X00_ES NULL
#define OPTION_VAL_0XFF_ES NULL
#define OPTION_VAL_RANDOM_ES NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_ES NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_ES NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_ES NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_ES NULL
#define OPTION_VAL_MOUSE_ES NULL
#define OPTION_VAL_POINTER_ES NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_ES NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_ES NULL
#define OPTION_VAL_LIGHTGUN_ES NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_ES NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_ES NULL
#define NESTOPIA_TURBO_PULSE_LABEL_ES NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_ES NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_ES NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_ES NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_ES NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_ES NULL

struct retro_core_option_v2_category option_cats_es[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ES,
      CATEGORY_VIDEO_INFO_0_ES
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ES,
      CATEGORY_AUDIO_INFO_0_ES
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ES,
      CATEGORY_INPUT_INFO_0_ES
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ES,
      CATEGORY_HACKS_INFO_0_ES
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_es[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_ES,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_ES,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_ES },
         { "svideo",     OPTION_VAL_SVIDEO_ES },
         { "rgb",        OPTION_VAL_RGB_ES },
         { "monochrome", OPTION_VAL_MONOCHROME_ES },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_ES,
      NULL,
      NESTOPIA_PALETTE_INFO_0_ES,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_ES },
         { "consumer",             OPTION_VAL_CONSUMER_ES },
         { "canonical",            OPTION_VAL_CANONICAL_ES },
         { "alternative",          OPTION_VAL_ALTERNATIVE_ES },
         { "rgb",                  OPTION_VAL_RGB_O1_ES },
         { "pal",                  OPTION_VAL_PAL_ES },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_ES },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_ES },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_ES },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_ES },
         { "raw",                  OPTION_VAL_RAW_ES },
         { "custom",               OPTION_VAL_CUSTOM_ES },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_ES,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_ES,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_ES },
         { "2x", OPTION_VAL_2X_ES },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_ES,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_ES,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_ES },
         { "ntsc",    OPTION_VAL_NTSC_ES },
         { "famicom", OPTION_VAL_FAMICOM_ES },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_ES,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_ES,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_ES,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_ES,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_ES,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_ES,
      NULL,
      NESTOPIA_ASPECT_INFO_0_ES,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ES },
         { "ntsc", OPTION_VAL_NTSC_ES },
         { "pal",  OPTION_VAL_PAL_ES },
         { "4:3",  OPTION_VAL_4_3_ES },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_ES,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_ES,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_ES,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_ES,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_ES },
         { "ntsc",    OPTION_VAL_NTSC_ES },
         { "pal",     OPTION_VAL_PAL_ES },
         { "famicom", OPTION_VAL_FAMICOM_ES },
         { "dendy",   OPTION_VAL_DENDY_ES },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_ES,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_ES,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_ES },
         { "0xFF",   OPTION_VAL_0XFF_ES },
         { "random", OPTION_VAL_RANDOM_ES },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_ES,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_ES, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_ES,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_ES,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_ES },
         { "pointer", OPTION_VAL_POINTER_ES },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_ES,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_ES,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_ES },
         { "mouse", OPTION_VAL_MOUSE_ES },
         { "pointer", OPTION_VAL_POINTER_ES },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_ES,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_ES,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_ES,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_ES,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_ES,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_ES,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_ES,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_ES,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_es = {
   option_cats_es,
   option_defs_es
};

/* RETRO_LANGUAGE_FA */

#define CATEGORY_VIDEO_LABEL_FA NULL
#define CATEGORY_VIDEO_INFO_0_FA NULL
#define CATEGORY_AUDIO_LABEL_FA NULL
#define CATEGORY_AUDIO_INFO_0_FA NULL
#define CATEGORY_INPUT_LABEL_FA NULL
#define CATEGORY_INPUT_INFO_0_FA NULL
#define CATEGORY_HACKS_LABEL_FA NULL
#define CATEGORY_HACKS_INFO_0_FA NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_FA NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_FA NULL
#define OPTION_VAL_COMPOSITE_FA NULL
#define OPTION_VAL_SVIDEO_FA NULL
#define OPTION_VAL_RGB_FA NULL
#define OPTION_VAL_MONOCHROME_FA NULL
#define NESTOPIA_PALETTE_LABEL_FA NULL
#define NESTOPIA_PALETTE_INFO_0_FA NULL
#define OPTION_VAL_CXA2025AS_FA NULL
#define OPTION_VAL_CONSUMER_FA NULL
#define OPTION_VAL_CANONICAL_FA NULL
#define OPTION_VAL_ALTERNATIVE_FA NULL
#define OPTION_VAL_RGB_O1_FA NULL
#define OPTION_VAL_PAL_FA NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_FA NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_FA NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_FA NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_FA NULL
#define OPTION_VAL_RAW_FA NULL
#define OPTION_VAL_CUSTOM_FA NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_FA NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_FA NULL
#define NESTOPIA_OVERCLOCK_LABEL_FA NULL
#define NESTOPIA_OVERCLOCK_INFO_0_FA NULL
#define OPTION_VAL_1X_FA NULL
#define OPTION_VAL_2X_FA NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_FA NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_FA NULL
#define OPTION_VAL_AUTO_FA NULL
#define OPTION_VAL_NTSC_FA NULL
#define OPTION_VAL_FAMICOM_FA NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_FA NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_FA NULL
#define NESTOPIA_OVERSCAN_V_LABEL_FA NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_FA NULL
#define NESTOPIA_OVERSCAN_H_LABEL_FA NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_FA NULL
#define NESTOPIA_ASPECT_LABEL_FA NULL
#define NESTOPIA_ASPECT_INFO_0_FA NULL
#define OPTION_VAL_4_3_FA NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_FA NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_FA NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_FA NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_FA NULL
#define OPTION_VAL_DENDY_FA NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_FA NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_FA NULL
#define OPTION_VAL_0X00_FA NULL
#define OPTION_VAL_0XFF_FA NULL
#define OPTION_VAL_RANDOM_FA NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_FA NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_FA NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_FA NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_FA NULL
#define OPTION_VAL_MOUSE_FA NULL
#define OPTION_VAL_POINTER_FA NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_FA NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_FA NULL
#define OPTION_VAL_LIGHTGUN_FA NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_FA NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_FA NULL
#define NESTOPIA_TURBO_PULSE_LABEL_FA NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_FA NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_FA NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_FA NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_FA NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_FA NULL

struct retro_core_option_v2_category option_cats_fa[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FA,
      CATEGORY_VIDEO_INFO_0_FA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FA,
      CATEGORY_AUDIO_INFO_0_FA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FA,
      CATEGORY_INPUT_INFO_0_FA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FA,
      CATEGORY_HACKS_INFO_0_FA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fa[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_FA,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_FA,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_FA },
         { "svideo",     OPTION_VAL_SVIDEO_FA },
         { "rgb",        OPTION_VAL_RGB_FA },
         { "monochrome", OPTION_VAL_MONOCHROME_FA },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_FA,
      NULL,
      NESTOPIA_PALETTE_INFO_0_FA,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_FA },
         { "consumer",             OPTION_VAL_CONSUMER_FA },
         { "canonical",            OPTION_VAL_CANONICAL_FA },
         { "alternative",          OPTION_VAL_ALTERNATIVE_FA },
         { "rgb",                  OPTION_VAL_RGB_O1_FA },
         { "pal",                  OPTION_VAL_PAL_FA },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_FA },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_FA },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_FA },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_FA },
         { "raw",                  OPTION_VAL_RAW_FA },
         { "custom",               OPTION_VAL_CUSTOM_FA },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_FA,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_FA,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_FA },
         { "2x", OPTION_VAL_2X_FA },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_FA,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_FA,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_FA },
         { "ntsc",    OPTION_VAL_NTSC_FA },
         { "famicom", OPTION_VAL_FAMICOM_FA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_FA,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_FA,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_FA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_FA,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_FA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_FA,
      NULL,
      NESTOPIA_ASPECT_INFO_0_FA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FA },
         { "ntsc", OPTION_VAL_NTSC_FA },
         { "pal",  OPTION_VAL_PAL_FA },
         { "4:3",  OPTION_VAL_4_3_FA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_FA,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_FA,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_FA,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_FA,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_FA },
         { "ntsc",    OPTION_VAL_NTSC_FA },
         { "pal",     OPTION_VAL_PAL_FA },
         { "famicom", OPTION_VAL_FAMICOM_FA },
         { "dendy",   OPTION_VAL_DENDY_FA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_FA,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_FA,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_FA },
         { "0xFF",   OPTION_VAL_0XFF_FA },
         { "random", OPTION_VAL_RANDOM_FA },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_FA,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_FA, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_FA,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_FA,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_FA },
         { "pointer", OPTION_VAL_POINTER_FA },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_FA,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_FA,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_FA },
         { "mouse", OPTION_VAL_MOUSE_FA },
         { "pointer", OPTION_VAL_POINTER_FA },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_FA,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_FA,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_FA,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_FA,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_FA,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_FA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_FA,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_FA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fa = {
   option_cats_fa,
   option_defs_fa
};

/* RETRO_LANGUAGE_FI */

#define CATEGORY_VIDEO_LABEL_FI NULL
#define CATEGORY_VIDEO_INFO_0_FI NULL
#define CATEGORY_AUDIO_LABEL_FI NULL
#define CATEGORY_AUDIO_INFO_0_FI NULL
#define CATEGORY_INPUT_LABEL_FI NULL
#define CATEGORY_INPUT_INFO_0_FI NULL
#define CATEGORY_HACKS_LABEL_FI NULL
#define CATEGORY_HACKS_INFO_0_FI NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_FI NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_FI NULL
#define OPTION_VAL_COMPOSITE_FI NULL
#define OPTION_VAL_SVIDEO_FI NULL
#define OPTION_VAL_RGB_FI NULL
#define OPTION_VAL_MONOCHROME_FI NULL
#define NESTOPIA_PALETTE_LABEL_FI NULL
#define NESTOPIA_PALETTE_INFO_0_FI NULL
#define OPTION_VAL_CXA2025AS_FI NULL
#define OPTION_VAL_CONSUMER_FI NULL
#define OPTION_VAL_CANONICAL_FI NULL
#define OPTION_VAL_ALTERNATIVE_FI NULL
#define OPTION_VAL_RGB_O1_FI NULL
#define OPTION_VAL_PAL_FI NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_FI NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_FI NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_FI NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_FI NULL
#define OPTION_VAL_RAW_FI NULL
#define OPTION_VAL_CUSTOM_FI NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_FI NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_FI NULL
#define NESTOPIA_OVERCLOCK_LABEL_FI NULL
#define NESTOPIA_OVERCLOCK_INFO_0_FI NULL
#define OPTION_VAL_1X_FI NULL
#define OPTION_VAL_2X_FI NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_FI NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_FI NULL
#define OPTION_VAL_AUTO_FI NULL
#define OPTION_VAL_NTSC_FI NULL
#define OPTION_VAL_FAMICOM_FI NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_FI NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_FI NULL
#define NESTOPIA_OVERSCAN_V_LABEL_FI NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_FI NULL
#define NESTOPIA_OVERSCAN_H_LABEL_FI NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_FI NULL
#define NESTOPIA_ASPECT_LABEL_FI NULL
#define NESTOPIA_ASPECT_INFO_0_FI NULL
#define OPTION_VAL_4_3_FI NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_FI NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_FI NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_FI NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_FI NULL
#define OPTION_VAL_DENDY_FI NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_FI NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_FI NULL
#define OPTION_VAL_0X00_FI NULL
#define OPTION_VAL_0XFF_FI NULL
#define OPTION_VAL_RANDOM_FI NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_FI NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_FI NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_FI NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_FI NULL
#define OPTION_VAL_MOUSE_FI NULL
#define OPTION_VAL_POINTER_FI NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_FI NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_FI NULL
#define OPTION_VAL_LIGHTGUN_FI NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_FI NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_FI NULL
#define NESTOPIA_TURBO_PULSE_LABEL_FI NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_FI NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_FI NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_FI NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_FI NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_FI NULL

struct retro_core_option_v2_category option_cats_fi[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FI,
      CATEGORY_VIDEO_INFO_0_FI
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FI,
      CATEGORY_AUDIO_INFO_0_FI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FI,
      CATEGORY_INPUT_INFO_0_FI
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FI,
      CATEGORY_HACKS_INFO_0_FI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fi[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_FI,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_FI,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_FI },
         { "svideo",     OPTION_VAL_SVIDEO_FI },
         { "rgb",        OPTION_VAL_RGB_FI },
         { "monochrome", OPTION_VAL_MONOCHROME_FI },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_FI,
      NULL,
      NESTOPIA_PALETTE_INFO_0_FI,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_FI },
         { "consumer",             OPTION_VAL_CONSUMER_FI },
         { "canonical",            OPTION_VAL_CANONICAL_FI },
         { "alternative",          OPTION_VAL_ALTERNATIVE_FI },
         { "rgb",                  OPTION_VAL_RGB_O1_FI },
         { "pal",                  OPTION_VAL_PAL_FI },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_FI },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_FI },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_FI },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_FI },
         { "raw",                  OPTION_VAL_RAW_FI },
         { "custom",               OPTION_VAL_CUSTOM_FI },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_FI,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_FI,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_FI },
         { "2x", OPTION_VAL_2X_FI },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_FI,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_FI,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_FI },
         { "ntsc",    OPTION_VAL_NTSC_FI },
         { "famicom", OPTION_VAL_FAMICOM_FI },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_FI,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_FI,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_FI,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_FI,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_FI,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_FI,
      NULL,
      NESTOPIA_ASPECT_INFO_0_FI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FI },
         { "ntsc", OPTION_VAL_NTSC_FI },
         { "pal",  OPTION_VAL_PAL_FI },
         { "4:3",  OPTION_VAL_4_3_FI },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_FI,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_FI,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_FI,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_FI,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_FI },
         { "ntsc",    OPTION_VAL_NTSC_FI },
         { "pal",     OPTION_VAL_PAL_FI },
         { "famicom", OPTION_VAL_FAMICOM_FI },
         { "dendy",   OPTION_VAL_DENDY_FI },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_FI,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_FI,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_FI },
         { "0xFF",   OPTION_VAL_0XFF_FI },
         { "random", OPTION_VAL_RANDOM_FI },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_FI,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_FI, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_FI,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_FI,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_FI },
         { "pointer", OPTION_VAL_POINTER_FI },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_FI,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_FI,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_FI },
         { "mouse", OPTION_VAL_MOUSE_FI },
         { "pointer", OPTION_VAL_POINTER_FI },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_FI,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_FI,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_FI,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_FI,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_FI,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_FI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_FI,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_FI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fi = {
   option_cats_fi,
   option_defs_fi
};

/* RETRO_LANGUAGE_FR */

#define CATEGORY_VIDEO_LABEL_FR NULL
#define CATEGORY_VIDEO_INFO_0_FR NULL
#define CATEGORY_AUDIO_LABEL_FR NULL
#define CATEGORY_AUDIO_INFO_0_FR NULL
#define CATEGORY_INPUT_LABEL_FR NULL
#define CATEGORY_INPUT_INFO_0_FR NULL
#define CATEGORY_HACKS_LABEL_FR NULL
#define CATEGORY_HACKS_INFO_0_FR NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_FR NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_FR NULL
#define OPTION_VAL_COMPOSITE_FR NULL
#define OPTION_VAL_SVIDEO_FR NULL
#define OPTION_VAL_RGB_FR NULL
#define OPTION_VAL_MONOCHROME_FR NULL
#define NESTOPIA_PALETTE_LABEL_FR NULL
#define NESTOPIA_PALETTE_INFO_0_FR NULL
#define OPTION_VAL_CXA2025AS_FR NULL
#define OPTION_VAL_CONSUMER_FR NULL
#define OPTION_VAL_CANONICAL_FR NULL
#define OPTION_VAL_ALTERNATIVE_FR NULL
#define OPTION_VAL_RGB_O1_FR NULL
#define OPTION_VAL_PAL_FR NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_FR NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_FR NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_FR NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_FR NULL
#define OPTION_VAL_RAW_FR NULL
#define OPTION_VAL_CUSTOM_FR NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_FR NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_FR NULL
#define NESTOPIA_OVERCLOCK_LABEL_FR NULL
#define NESTOPIA_OVERCLOCK_INFO_0_FR NULL
#define OPTION_VAL_1X_FR NULL
#define OPTION_VAL_2X_FR NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_FR NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_FR NULL
#define OPTION_VAL_AUTO_FR NULL
#define OPTION_VAL_NTSC_FR NULL
#define OPTION_VAL_FAMICOM_FR NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_FR NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_FR NULL
#define NESTOPIA_OVERSCAN_V_LABEL_FR NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_FR NULL
#define NESTOPIA_OVERSCAN_H_LABEL_FR NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_FR NULL
#define NESTOPIA_ASPECT_LABEL_FR NULL
#define NESTOPIA_ASPECT_INFO_0_FR NULL
#define OPTION_VAL_4_3_FR NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_FR NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_FR NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_FR NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_FR NULL
#define OPTION_VAL_DENDY_FR NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_FR NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_FR NULL
#define OPTION_VAL_0X00_FR NULL
#define OPTION_VAL_0XFF_FR NULL
#define OPTION_VAL_RANDOM_FR NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_FR NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_FR NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_FR NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_FR NULL
#define OPTION_VAL_MOUSE_FR NULL
#define OPTION_VAL_POINTER_FR NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_FR NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_FR NULL
#define OPTION_VAL_LIGHTGUN_FR NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_FR NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_FR NULL
#define NESTOPIA_TURBO_PULSE_LABEL_FR NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_FR NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_FR NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_FR NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_FR NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_FR NULL

struct retro_core_option_v2_category option_cats_fr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_FR,
      CATEGORY_VIDEO_INFO_0_FR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_FR,
      CATEGORY_AUDIO_INFO_0_FR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_FR,
      CATEGORY_INPUT_INFO_0_FR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_FR,
      CATEGORY_HACKS_INFO_0_FR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_fr[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_FR,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_FR,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_FR },
         { "svideo",     OPTION_VAL_SVIDEO_FR },
         { "rgb",        OPTION_VAL_RGB_FR },
         { "monochrome", OPTION_VAL_MONOCHROME_FR },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_FR,
      NULL,
      NESTOPIA_PALETTE_INFO_0_FR,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_FR },
         { "consumer",             OPTION_VAL_CONSUMER_FR },
         { "canonical",            OPTION_VAL_CANONICAL_FR },
         { "alternative",          OPTION_VAL_ALTERNATIVE_FR },
         { "rgb",                  OPTION_VAL_RGB_O1_FR },
         { "pal",                  OPTION_VAL_PAL_FR },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_FR },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_FR },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_FR },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_FR },
         { "raw",                  OPTION_VAL_RAW_FR },
         { "custom",               OPTION_VAL_CUSTOM_FR },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_FR,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_FR,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_FR },
         { "2x", OPTION_VAL_2X_FR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_FR,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_FR,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_FR },
         { "ntsc",    OPTION_VAL_NTSC_FR },
         { "famicom", OPTION_VAL_FAMICOM_FR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_FR,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_FR,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_FR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_FR,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_FR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_FR,
      NULL,
      NESTOPIA_ASPECT_INFO_0_FR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_FR },
         { "ntsc", OPTION_VAL_NTSC_FR },
         { "pal",  OPTION_VAL_PAL_FR },
         { "4:3",  OPTION_VAL_4_3_FR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_FR,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_FR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_FR,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_FR,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_FR },
         { "ntsc",    OPTION_VAL_NTSC_FR },
         { "pal",     OPTION_VAL_PAL_FR },
         { "famicom", OPTION_VAL_FAMICOM_FR },
         { "dendy",   OPTION_VAL_DENDY_FR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_FR,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_FR,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_FR },
         { "0xFF",   OPTION_VAL_0XFF_FR },
         { "random", OPTION_VAL_RANDOM_FR },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_FR,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_FR, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_FR,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_FR,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_FR },
         { "pointer", OPTION_VAL_POINTER_FR },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_FR,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_FR,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_FR },
         { "mouse", OPTION_VAL_MOUSE_FR },
         { "pointer", OPTION_VAL_POINTER_FR },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_FR,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_FR,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_FR,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_FR,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_FR,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_FR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_FR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_FR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_fr = {
   option_cats_fr,
   option_defs_fr
};

/* RETRO_LANGUAGE_GL */

#define CATEGORY_VIDEO_LABEL_GL NULL
#define CATEGORY_VIDEO_INFO_0_GL NULL
#define CATEGORY_AUDIO_LABEL_GL NULL
#define CATEGORY_AUDIO_INFO_0_GL NULL
#define CATEGORY_INPUT_LABEL_GL NULL
#define CATEGORY_INPUT_INFO_0_GL NULL
#define CATEGORY_HACKS_LABEL_GL NULL
#define CATEGORY_HACKS_INFO_0_GL NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_GL NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_GL NULL
#define OPTION_VAL_COMPOSITE_GL NULL
#define OPTION_VAL_SVIDEO_GL NULL
#define OPTION_VAL_RGB_GL NULL
#define OPTION_VAL_MONOCHROME_GL NULL
#define NESTOPIA_PALETTE_LABEL_GL NULL
#define NESTOPIA_PALETTE_INFO_0_GL NULL
#define OPTION_VAL_CXA2025AS_GL NULL
#define OPTION_VAL_CONSUMER_GL NULL
#define OPTION_VAL_CANONICAL_GL NULL
#define OPTION_VAL_ALTERNATIVE_GL NULL
#define OPTION_VAL_RGB_O1_GL NULL
#define OPTION_VAL_PAL_GL NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_GL NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_GL NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_GL NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_GL NULL
#define OPTION_VAL_RAW_GL NULL
#define OPTION_VAL_CUSTOM_GL NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_GL NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_GL NULL
#define NESTOPIA_OVERCLOCK_LABEL_GL NULL
#define NESTOPIA_OVERCLOCK_INFO_0_GL NULL
#define OPTION_VAL_1X_GL NULL
#define OPTION_VAL_2X_GL NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_GL NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_GL NULL
#define OPTION_VAL_AUTO_GL NULL
#define OPTION_VAL_NTSC_GL NULL
#define OPTION_VAL_FAMICOM_GL NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_GL NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_GL NULL
#define NESTOPIA_OVERSCAN_V_LABEL_GL NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_GL NULL
#define NESTOPIA_OVERSCAN_H_LABEL_GL NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_GL NULL
#define NESTOPIA_ASPECT_LABEL_GL NULL
#define NESTOPIA_ASPECT_INFO_0_GL NULL
#define OPTION_VAL_4_3_GL NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_GL NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_GL NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_GL NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_GL NULL
#define OPTION_VAL_DENDY_GL NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_GL NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_GL NULL
#define OPTION_VAL_0X00_GL NULL
#define OPTION_VAL_0XFF_GL NULL
#define OPTION_VAL_RANDOM_GL NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_GL NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_GL NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_GL NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_GL NULL
#define OPTION_VAL_MOUSE_GL NULL
#define OPTION_VAL_POINTER_GL NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_GL NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_GL NULL
#define OPTION_VAL_LIGHTGUN_GL NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_GL NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_GL NULL
#define NESTOPIA_TURBO_PULSE_LABEL_GL NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_GL NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_GL NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_GL NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_GL NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_GL NULL

struct retro_core_option_v2_category option_cats_gl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_GL,
      CATEGORY_VIDEO_INFO_0_GL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_GL,
      CATEGORY_AUDIO_INFO_0_GL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_GL,
      CATEGORY_INPUT_INFO_0_GL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_GL,
      CATEGORY_HACKS_INFO_0_GL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_gl[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_GL,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_GL,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_GL },
         { "svideo",     OPTION_VAL_SVIDEO_GL },
         { "rgb",        OPTION_VAL_RGB_GL },
         { "monochrome", OPTION_VAL_MONOCHROME_GL },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_GL,
      NULL,
      NESTOPIA_PALETTE_INFO_0_GL,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_GL },
         { "consumer",             OPTION_VAL_CONSUMER_GL },
         { "canonical",            OPTION_VAL_CANONICAL_GL },
         { "alternative",          OPTION_VAL_ALTERNATIVE_GL },
         { "rgb",                  OPTION_VAL_RGB_O1_GL },
         { "pal",                  OPTION_VAL_PAL_GL },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_GL },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_GL },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_GL },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_GL },
         { "raw",                  OPTION_VAL_RAW_GL },
         { "custom",               OPTION_VAL_CUSTOM_GL },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_GL,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_GL,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_GL },
         { "2x", OPTION_VAL_2X_GL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_GL,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_GL,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_GL },
         { "ntsc",    OPTION_VAL_NTSC_GL },
         { "famicom", OPTION_VAL_FAMICOM_GL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_GL,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_GL,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_GL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_GL,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_GL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_GL,
      NULL,
      NESTOPIA_ASPECT_INFO_0_GL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_GL },
         { "ntsc", OPTION_VAL_NTSC_GL },
         { "pal",  OPTION_VAL_PAL_GL },
         { "4:3",  OPTION_VAL_4_3_GL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_GL,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_GL,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_GL,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_GL,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_GL },
         { "ntsc",    OPTION_VAL_NTSC_GL },
         { "pal",     OPTION_VAL_PAL_GL },
         { "famicom", OPTION_VAL_FAMICOM_GL },
         { "dendy",   OPTION_VAL_DENDY_GL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_GL,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_GL,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_GL },
         { "0xFF",   OPTION_VAL_0XFF_GL },
         { "random", OPTION_VAL_RANDOM_GL },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_GL,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_GL, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_GL,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_GL,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_GL },
         { "pointer", OPTION_VAL_POINTER_GL },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_GL,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_GL,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_GL },
         { "mouse", OPTION_VAL_MOUSE_GL },
         { "pointer", OPTION_VAL_POINTER_GL },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_GL,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_GL,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_GL,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_GL,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_GL,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_GL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_GL,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_GL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_gl = {
   option_cats_gl,
   option_defs_gl
};

/* RETRO_LANGUAGE_HE */

#define CATEGORY_VIDEO_LABEL_HE NULL
#define CATEGORY_VIDEO_INFO_0_HE NULL
#define CATEGORY_AUDIO_LABEL_HE NULL
#define CATEGORY_AUDIO_INFO_0_HE NULL
#define CATEGORY_INPUT_LABEL_HE NULL
#define CATEGORY_INPUT_INFO_0_HE NULL
#define CATEGORY_HACKS_LABEL_HE NULL
#define CATEGORY_HACKS_INFO_0_HE NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_HE NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_HE NULL
#define OPTION_VAL_COMPOSITE_HE NULL
#define OPTION_VAL_SVIDEO_HE NULL
#define OPTION_VAL_RGB_HE NULL
#define OPTION_VAL_MONOCHROME_HE NULL
#define NESTOPIA_PALETTE_LABEL_HE NULL
#define NESTOPIA_PALETTE_INFO_0_HE NULL
#define OPTION_VAL_CXA2025AS_HE NULL
#define OPTION_VAL_CONSUMER_HE NULL
#define OPTION_VAL_CANONICAL_HE NULL
#define OPTION_VAL_ALTERNATIVE_HE NULL
#define OPTION_VAL_RGB_O1_HE NULL
#define OPTION_VAL_PAL_HE NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_HE NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_HE NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_HE NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_HE NULL
#define OPTION_VAL_RAW_HE NULL
#define OPTION_VAL_CUSTOM_HE NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_HE NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_HE NULL
#define NESTOPIA_OVERCLOCK_LABEL_HE NULL
#define NESTOPIA_OVERCLOCK_INFO_0_HE NULL
#define OPTION_VAL_1X_HE NULL
#define OPTION_VAL_2X_HE NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_HE NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_HE NULL
#define OPTION_VAL_AUTO_HE NULL
#define OPTION_VAL_NTSC_HE NULL
#define OPTION_VAL_FAMICOM_HE NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_HE NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_HE NULL
#define NESTOPIA_OVERSCAN_V_LABEL_HE NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_HE NULL
#define NESTOPIA_OVERSCAN_H_LABEL_HE NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_HE NULL
#define NESTOPIA_ASPECT_LABEL_HE NULL
#define NESTOPIA_ASPECT_INFO_0_HE NULL
#define OPTION_VAL_4_3_HE NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_HE NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_HE NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_HE NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_HE NULL
#define OPTION_VAL_DENDY_HE NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_HE NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_HE NULL
#define OPTION_VAL_0X00_HE NULL
#define OPTION_VAL_0XFF_HE NULL
#define OPTION_VAL_RANDOM_HE NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_HE NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_HE NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_HE NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_HE NULL
#define OPTION_VAL_MOUSE_HE NULL
#define OPTION_VAL_POINTER_HE NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_HE NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_HE NULL
#define OPTION_VAL_LIGHTGUN_HE NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_HE NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_HE NULL
#define NESTOPIA_TURBO_PULSE_LABEL_HE NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_HE NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_HE NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_HE NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_HE NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_HE NULL

struct retro_core_option_v2_category option_cats_he[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HE,
      CATEGORY_VIDEO_INFO_0_HE
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HE,
      CATEGORY_AUDIO_INFO_0_HE
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HE,
      CATEGORY_INPUT_INFO_0_HE
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HE,
      CATEGORY_HACKS_INFO_0_HE
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_he[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_HE,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_HE,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_HE },
         { "svideo",     OPTION_VAL_SVIDEO_HE },
         { "rgb",        OPTION_VAL_RGB_HE },
         { "monochrome", OPTION_VAL_MONOCHROME_HE },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_HE,
      NULL,
      NESTOPIA_PALETTE_INFO_0_HE,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_HE },
         { "consumer",             OPTION_VAL_CONSUMER_HE },
         { "canonical",            OPTION_VAL_CANONICAL_HE },
         { "alternative",          OPTION_VAL_ALTERNATIVE_HE },
         { "rgb",                  OPTION_VAL_RGB_O1_HE },
         { "pal",                  OPTION_VAL_PAL_HE },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_HE },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_HE },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_HE },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_HE },
         { "raw",                  OPTION_VAL_RAW_HE },
         { "custom",               OPTION_VAL_CUSTOM_HE },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_HE,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_HE,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_HE },
         { "2x", OPTION_VAL_2X_HE },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_HE,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_HE,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_HE },
         { "ntsc",    OPTION_VAL_NTSC_HE },
         { "famicom", OPTION_VAL_FAMICOM_HE },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_HE,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_HE,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_HE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_HE,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_HE,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_HE,
      NULL,
      NESTOPIA_ASPECT_INFO_0_HE,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HE },
         { "ntsc", OPTION_VAL_NTSC_HE },
         { "pal",  OPTION_VAL_PAL_HE },
         { "4:3",  OPTION_VAL_4_3_HE },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_HE,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_HE,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_HE,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_HE,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_HE },
         { "ntsc",    OPTION_VAL_NTSC_HE },
         { "pal",     OPTION_VAL_PAL_HE },
         { "famicom", OPTION_VAL_FAMICOM_HE },
         { "dendy",   OPTION_VAL_DENDY_HE },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_HE,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_HE,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_HE },
         { "0xFF",   OPTION_VAL_0XFF_HE },
         { "random", OPTION_VAL_RANDOM_HE },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_HE,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_HE, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_HE,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_HE,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_HE },
         { "pointer", OPTION_VAL_POINTER_HE },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_HE,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_HE,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_HE },
         { "mouse", OPTION_VAL_MOUSE_HE },
         { "pointer", OPTION_VAL_POINTER_HE },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_HE,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_HE,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_HE,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_HE,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_HE,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_HE,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_HE,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_HE,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_he = {
   option_cats_he,
   option_defs_he
};

/* RETRO_LANGUAGE_HU */

#define CATEGORY_VIDEO_LABEL_HU NULL
#define CATEGORY_VIDEO_INFO_0_HU NULL
#define CATEGORY_AUDIO_LABEL_HU NULL
#define CATEGORY_AUDIO_INFO_0_HU NULL
#define CATEGORY_INPUT_LABEL_HU NULL
#define CATEGORY_INPUT_INFO_0_HU NULL
#define CATEGORY_HACKS_LABEL_HU NULL
#define CATEGORY_HACKS_INFO_0_HU NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_HU NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_HU NULL
#define OPTION_VAL_COMPOSITE_HU NULL
#define OPTION_VAL_SVIDEO_HU NULL
#define OPTION_VAL_RGB_HU NULL
#define OPTION_VAL_MONOCHROME_HU NULL
#define NESTOPIA_PALETTE_LABEL_HU NULL
#define NESTOPIA_PALETTE_INFO_0_HU NULL
#define OPTION_VAL_CXA2025AS_HU NULL
#define OPTION_VAL_CONSUMER_HU NULL
#define OPTION_VAL_CANONICAL_HU NULL
#define OPTION_VAL_ALTERNATIVE_HU NULL
#define OPTION_VAL_RGB_O1_HU NULL
#define OPTION_VAL_PAL_HU NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_HU NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_HU NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_HU NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_HU NULL
#define OPTION_VAL_RAW_HU NULL
#define OPTION_VAL_CUSTOM_HU NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_HU NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_HU NULL
#define NESTOPIA_OVERCLOCK_LABEL_HU NULL
#define NESTOPIA_OVERCLOCK_INFO_0_HU NULL
#define OPTION_VAL_1X_HU NULL
#define OPTION_VAL_2X_HU NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_HU NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_HU NULL
#define OPTION_VAL_AUTO_HU NULL
#define OPTION_VAL_NTSC_HU NULL
#define OPTION_VAL_FAMICOM_HU NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_HU NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_HU NULL
#define NESTOPIA_OVERSCAN_V_LABEL_HU NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_HU NULL
#define NESTOPIA_OVERSCAN_H_LABEL_HU NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_HU NULL
#define NESTOPIA_ASPECT_LABEL_HU NULL
#define NESTOPIA_ASPECT_INFO_0_HU NULL
#define OPTION_VAL_4_3_HU NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_HU NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_HU NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_HU NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_HU NULL
#define OPTION_VAL_DENDY_HU NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_HU NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_HU NULL
#define OPTION_VAL_0X00_HU NULL
#define OPTION_VAL_0XFF_HU NULL
#define OPTION_VAL_RANDOM_HU NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_HU NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_HU NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_HU NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_HU NULL
#define OPTION_VAL_MOUSE_HU NULL
#define OPTION_VAL_POINTER_HU NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_HU NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_HU NULL
#define OPTION_VAL_LIGHTGUN_HU NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_HU NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_HU NULL
#define NESTOPIA_TURBO_PULSE_LABEL_HU NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_HU NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_HU NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_HU NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_HU NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_HU NULL

struct retro_core_option_v2_category option_cats_hu[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_HU,
      CATEGORY_VIDEO_INFO_0_HU
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_HU,
      CATEGORY_AUDIO_INFO_0_HU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_HU,
      CATEGORY_INPUT_INFO_0_HU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_HU,
      CATEGORY_HACKS_INFO_0_HU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_hu[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_HU,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_HU,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_HU },
         { "svideo",     OPTION_VAL_SVIDEO_HU },
         { "rgb",        OPTION_VAL_RGB_HU },
         { "monochrome", OPTION_VAL_MONOCHROME_HU },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_HU,
      NULL,
      NESTOPIA_PALETTE_INFO_0_HU,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_HU },
         { "consumer",             OPTION_VAL_CONSUMER_HU },
         { "canonical",            OPTION_VAL_CANONICAL_HU },
         { "alternative",          OPTION_VAL_ALTERNATIVE_HU },
         { "rgb",                  OPTION_VAL_RGB_O1_HU },
         { "pal",                  OPTION_VAL_PAL_HU },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_HU },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_HU },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_HU },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_HU },
         { "raw",                  OPTION_VAL_RAW_HU },
         { "custom",               OPTION_VAL_CUSTOM_HU },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_HU,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_HU,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_HU },
         { "2x", OPTION_VAL_2X_HU },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_HU,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_HU,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_HU },
         { "ntsc",    OPTION_VAL_NTSC_HU },
         { "famicom", OPTION_VAL_FAMICOM_HU },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_HU,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_HU,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_HU,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_HU,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_HU,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_HU,
      NULL,
      NESTOPIA_ASPECT_INFO_0_HU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_HU },
         { "ntsc", OPTION_VAL_NTSC_HU },
         { "pal",  OPTION_VAL_PAL_HU },
         { "4:3",  OPTION_VAL_4_3_HU },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_HU,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_HU,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_HU,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_HU,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_HU },
         { "ntsc",    OPTION_VAL_NTSC_HU },
         { "pal",     OPTION_VAL_PAL_HU },
         { "famicom", OPTION_VAL_FAMICOM_HU },
         { "dendy",   OPTION_VAL_DENDY_HU },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_HU,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_HU,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_HU },
         { "0xFF",   OPTION_VAL_0XFF_HU },
         { "random", OPTION_VAL_RANDOM_HU },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_HU,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_HU, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_HU,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_HU,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_HU },
         { "pointer", OPTION_VAL_POINTER_HU },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_HU,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_HU,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_HU },
         { "mouse", OPTION_VAL_MOUSE_HU },
         { "pointer", OPTION_VAL_POINTER_HU },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_HU,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_HU,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_HU,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_HU,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_HU,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_HU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_HU,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_HU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_hu = {
   option_cats_hu,
   option_defs_hu
};

/* RETRO_LANGUAGE_ID */

#define CATEGORY_VIDEO_LABEL_ID NULL
#define CATEGORY_VIDEO_INFO_0_ID NULL
#define CATEGORY_AUDIO_LABEL_ID NULL
#define CATEGORY_AUDIO_INFO_0_ID NULL
#define CATEGORY_INPUT_LABEL_ID NULL
#define CATEGORY_INPUT_INFO_0_ID NULL
#define CATEGORY_HACKS_LABEL_ID NULL
#define CATEGORY_HACKS_INFO_0_ID NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_ID NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_ID NULL
#define OPTION_VAL_COMPOSITE_ID NULL
#define OPTION_VAL_SVIDEO_ID NULL
#define OPTION_VAL_RGB_ID NULL
#define OPTION_VAL_MONOCHROME_ID NULL
#define NESTOPIA_PALETTE_LABEL_ID NULL
#define NESTOPIA_PALETTE_INFO_0_ID NULL
#define OPTION_VAL_CXA2025AS_ID NULL
#define OPTION_VAL_CONSUMER_ID NULL
#define OPTION_VAL_CANONICAL_ID NULL
#define OPTION_VAL_ALTERNATIVE_ID NULL
#define OPTION_VAL_RGB_O1_ID NULL
#define OPTION_VAL_PAL_ID NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_ID NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_ID NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_ID NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_ID NULL
#define OPTION_VAL_RAW_ID NULL
#define OPTION_VAL_CUSTOM_ID NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_ID NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_ID NULL
#define NESTOPIA_OVERCLOCK_LABEL_ID NULL
#define NESTOPIA_OVERCLOCK_INFO_0_ID NULL
#define OPTION_VAL_1X_ID NULL
#define OPTION_VAL_2X_ID NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_ID NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_ID NULL
#define OPTION_VAL_AUTO_ID NULL
#define OPTION_VAL_NTSC_ID NULL
#define OPTION_VAL_FAMICOM_ID NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_ID NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_ID NULL
#define NESTOPIA_OVERSCAN_V_LABEL_ID NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_ID NULL
#define NESTOPIA_OVERSCAN_H_LABEL_ID NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_ID NULL
#define NESTOPIA_ASPECT_LABEL_ID NULL
#define NESTOPIA_ASPECT_INFO_0_ID NULL
#define OPTION_VAL_4_3_ID NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_ID NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_ID NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_ID NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_ID NULL
#define OPTION_VAL_DENDY_ID NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_ID NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_ID NULL
#define OPTION_VAL_0X00_ID NULL
#define OPTION_VAL_0XFF_ID NULL
#define OPTION_VAL_RANDOM_ID NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_ID NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_ID NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_ID NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_ID NULL
#define OPTION_VAL_MOUSE_ID NULL
#define OPTION_VAL_POINTER_ID NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_ID NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_ID NULL
#define OPTION_VAL_LIGHTGUN_ID NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_ID NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_ID NULL
#define NESTOPIA_TURBO_PULSE_LABEL_ID NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_ID NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_ID NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_ID NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_ID NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_ID NULL

struct retro_core_option_v2_category option_cats_id[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_ID,
      CATEGORY_VIDEO_INFO_0_ID
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_ID,
      CATEGORY_AUDIO_INFO_0_ID
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_ID,
      CATEGORY_INPUT_INFO_0_ID
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_ID,
      CATEGORY_HACKS_INFO_0_ID
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_id[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_ID,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_ID,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_ID },
         { "svideo",     OPTION_VAL_SVIDEO_ID },
         { "rgb",        OPTION_VAL_RGB_ID },
         { "monochrome", OPTION_VAL_MONOCHROME_ID },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_ID,
      NULL,
      NESTOPIA_PALETTE_INFO_0_ID,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_ID },
         { "consumer",             OPTION_VAL_CONSUMER_ID },
         { "canonical",            OPTION_VAL_CANONICAL_ID },
         { "alternative",          OPTION_VAL_ALTERNATIVE_ID },
         { "rgb",                  OPTION_VAL_RGB_O1_ID },
         { "pal",                  OPTION_VAL_PAL_ID },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_ID },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_ID },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_ID },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_ID },
         { "raw",                  OPTION_VAL_RAW_ID },
         { "custom",               OPTION_VAL_CUSTOM_ID },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_ID,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_ID,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_ID },
         { "2x", OPTION_VAL_2X_ID },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_ID,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_ID,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_ID },
         { "ntsc",    OPTION_VAL_NTSC_ID },
         { "famicom", OPTION_VAL_FAMICOM_ID },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_ID,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_ID,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_ID,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_ID,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_ID,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_ID,
      NULL,
      NESTOPIA_ASPECT_INFO_0_ID,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_ID },
         { "ntsc", OPTION_VAL_NTSC_ID },
         { "pal",  OPTION_VAL_PAL_ID },
         { "4:3",  OPTION_VAL_4_3_ID },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_ID,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_ID,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_ID,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_ID,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_ID },
         { "ntsc",    OPTION_VAL_NTSC_ID },
         { "pal",     OPTION_VAL_PAL_ID },
         { "famicom", OPTION_VAL_FAMICOM_ID },
         { "dendy",   OPTION_VAL_DENDY_ID },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_ID,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_ID,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_ID },
         { "0xFF",   OPTION_VAL_0XFF_ID },
         { "random", OPTION_VAL_RANDOM_ID },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_ID,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_ID, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_ID,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_ID,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_ID },
         { "pointer", OPTION_VAL_POINTER_ID },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_ID,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_ID,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_ID },
         { "mouse", OPTION_VAL_MOUSE_ID },
         { "pointer", OPTION_VAL_POINTER_ID },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_ID,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_ID,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_ID,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_ID,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_ID,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_ID,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_ID,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_ID,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_id = {
   option_cats_id,
   option_defs_id
};

/* RETRO_LANGUAGE_IT */

#define CATEGORY_VIDEO_LABEL_IT NULL
#define CATEGORY_VIDEO_INFO_0_IT NULL
#define CATEGORY_AUDIO_LABEL_IT NULL
#define CATEGORY_AUDIO_INFO_0_IT NULL
#define CATEGORY_INPUT_LABEL_IT NULL
#define CATEGORY_INPUT_INFO_0_IT NULL
#define CATEGORY_HACKS_LABEL_IT NULL
#define CATEGORY_HACKS_INFO_0_IT NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_IT NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_IT NULL
#define OPTION_VAL_COMPOSITE_IT NULL
#define OPTION_VAL_SVIDEO_IT NULL
#define OPTION_VAL_RGB_IT NULL
#define OPTION_VAL_MONOCHROME_IT NULL
#define NESTOPIA_PALETTE_LABEL_IT NULL
#define NESTOPIA_PALETTE_INFO_0_IT NULL
#define OPTION_VAL_CXA2025AS_IT NULL
#define OPTION_VAL_CONSUMER_IT NULL
#define OPTION_VAL_CANONICAL_IT NULL
#define OPTION_VAL_ALTERNATIVE_IT NULL
#define OPTION_VAL_RGB_O1_IT NULL
#define OPTION_VAL_PAL_IT NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_IT NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_IT NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_IT NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_IT NULL
#define OPTION_VAL_RAW_IT NULL
#define OPTION_VAL_CUSTOM_IT NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_IT NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_IT NULL
#define NESTOPIA_OVERCLOCK_LABEL_IT NULL
#define NESTOPIA_OVERCLOCK_INFO_0_IT NULL
#define OPTION_VAL_1X_IT NULL
#define OPTION_VAL_2X_IT NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_IT NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_IT NULL
#define OPTION_VAL_AUTO_IT NULL
#define OPTION_VAL_NTSC_IT NULL
#define OPTION_VAL_FAMICOM_IT NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_IT NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_IT NULL
#define NESTOPIA_OVERSCAN_V_LABEL_IT NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_IT NULL
#define NESTOPIA_OVERSCAN_H_LABEL_IT NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_IT NULL
#define NESTOPIA_ASPECT_LABEL_IT NULL
#define NESTOPIA_ASPECT_INFO_0_IT NULL
#define OPTION_VAL_4_3_IT NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_IT NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_IT NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_IT NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_IT NULL
#define OPTION_VAL_DENDY_IT NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_IT NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_IT NULL
#define OPTION_VAL_0X00_IT NULL
#define OPTION_VAL_0XFF_IT NULL
#define OPTION_VAL_RANDOM_IT NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_IT NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_IT NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_IT NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_IT NULL
#define OPTION_VAL_MOUSE_IT NULL
#define OPTION_VAL_POINTER_IT NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_IT NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_IT NULL
#define OPTION_VAL_LIGHTGUN_IT NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_IT NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_IT NULL
#define NESTOPIA_TURBO_PULSE_LABEL_IT NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_IT NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_IT NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_IT NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_IT NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_IT NULL

struct retro_core_option_v2_category option_cats_it[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_IT,
      CATEGORY_VIDEO_INFO_0_IT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_IT,
      CATEGORY_AUDIO_INFO_0_IT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_IT,
      CATEGORY_INPUT_INFO_0_IT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_IT,
      CATEGORY_HACKS_INFO_0_IT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_it[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_IT,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_IT,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_IT },
         { "svideo",     OPTION_VAL_SVIDEO_IT },
         { "rgb",        OPTION_VAL_RGB_IT },
         { "monochrome", OPTION_VAL_MONOCHROME_IT },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_IT,
      NULL,
      NESTOPIA_PALETTE_INFO_0_IT,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_IT },
         { "consumer",             OPTION_VAL_CONSUMER_IT },
         { "canonical",            OPTION_VAL_CANONICAL_IT },
         { "alternative",          OPTION_VAL_ALTERNATIVE_IT },
         { "rgb",                  OPTION_VAL_RGB_O1_IT },
         { "pal",                  OPTION_VAL_PAL_IT },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_IT },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_IT },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_IT },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_IT },
         { "raw",                  OPTION_VAL_RAW_IT },
         { "custom",               OPTION_VAL_CUSTOM_IT },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_IT,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_IT,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_IT },
         { "2x", OPTION_VAL_2X_IT },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_IT,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_IT,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_IT },
         { "ntsc",    OPTION_VAL_NTSC_IT },
         { "famicom", OPTION_VAL_FAMICOM_IT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_IT,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_IT,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_IT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_IT,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_IT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_IT,
      NULL,
      NESTOPIA_ASPECT_INFO_0_IT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_IT },
         { "ntsc", OPTION_VAL_NTSC_IT },
         { "pal",  OPTION_VAL_PAL_IT },
         { "4:3",  OPTION_VAL_4_3_IT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_IT,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_IT,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_IT,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_IT,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_IT },
         { "ntsc",    OPTION_VAL_NTSC_IT },
         { "pal",     OPTION_VAL_PAL_IT },
         { "famicom", OPTION_VAL_FAMICOM_IT },
         { "dendy",   OPTION_VAL_DENDY_IT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_IT,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_IT,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_IT },
         { "0xFF",   OPTION_VAL_0XFF_IT },
         { "random", OPTION_VAL_RANDOM_IT },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_IT,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_IT, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_IT,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_IT,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_IT },
         { "pointer", OPTION_VAL_POINTER_IT },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_IT,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_IT,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_IT },
         { "mouse", OPTION_VAL_MOUSE_IT },
         { "pointer", OPTION_VAL_POINTER_IT },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_IT,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_IT,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_IT,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_IT,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_IT,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_IT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_IT,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_IT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_it = {
   option_cats_it,
   option_defs_it
};

/* RETRO_LANGUAGE_JA */

#define CATEGORY_VIDEO_LABEL_JA NULL
#define CATEGORY_VIDEO_INFO_0_JA NULL
#define CATEGORY_AUDIO_LABEL_JA NULL
#define CATEGORY_AUDIO_INFO_0_JA NULL
#define CATEGORY_INPUT_LABEL_JA NULL
#define CATEGORY_INPUT_INFO_0_JA NULL
#define CATEGORY_HACKS_LABEL_JA NULL
#define CATEGORY_HACKS_INFO_0_JA NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_JA NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_JA NULL
#define OPTION_VAL_COMPOSITE_JA NULL
#define OPTION_VAL_SVIDEO_JA NULL
#define OPTION_VAL_RGB_JA NULL
#define OPTION_VAL_MONOCHROME_JA NULL
#define NESTOPIA_PALETTE_LABEL_JA NULL
#define NESTOPIA_PALETTE_INFO_0_JA NULL
#define OPTION_VAL_CXA2025AS_JA NULL
#define OPTION_VAL_CONSUMER_JA NULL
#define OPTION_VAL_CANONICAL_JA NULL
#define OPTION_VAL_ALTERNATIVE_JA NULL
#define OPTION_VAL_RGB_O1_JA NULL
#define OPTION_VAL_PAL_JA NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_JA NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_JA NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_JA NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_JA NULL
#define OPTION_VAL_RAW_JA NULL
#define OPTION_VAL_CUSTOM_JA NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_JA NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_JA NULL
#define NESTOPIA_OVERCLOCK_LABEL_JA NULL
#define NESTOPIA_OVERCLOCK_INFO_0_JA NULL
#define OPTION_VAL_1X_JA NULL
#define OPTION_VAL_2X_JA NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_JA NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_JA NULL
#define OPTION_VAL_AUTO_JA NULL
#define OPTION_VAL_NTSC_JA NULL
#define OPTION_VAL_FAMICOM_JA NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_JA NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_JA NULL
#define NESTOPIA_OVERSCAN_V_LABEL_JA NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_JA NULL
#define NESTOPIA_OVERSCAN_H_LABEL_JA NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_JA NULL
#define NESTOPIA_ASPECT_LABEL_JA NULL
#define NESTOPIA_ASPECT_INFO_0_JA NULL
#define OPTION_VAL_4_3_JA NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_JA NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_JA NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_JA NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_JA NULL
#define OPTION_VAL_DENDY_JA NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_JA NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_JA NULL
#define OPTION_VAL_0X00_JA NULL
#define OPTION_VAL_0XFF_JA NULL
#define OPTION_VAL_RANDOM_JA NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_JA NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_JA NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_JA NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_JA NULL
#define OPTION_VAL_MOUSE_JA NULL
#define OPTION_VAL_POINTER_JA NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_JA NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_JA NULL
#define OPTION_VAL_LIGHTGUN_JA NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_JA NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_JA NULL
#define NESTOPIA_TURBO_PULSE_LABEL_JA NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_JA NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_JA NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_JA NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_JA NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_JA NULL

struct retro_core_option_v2_category option_cats_ja[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_JA,
      CATEGORY_VIDEO_INFO_0_JA
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_JA,
      CATEGORY_AUDIO_INFO_0_JA
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_JA,
      CATEGORY_INPUT_INFO_0_JA
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_JA,
      CATEGORY_HACKS_INFO_0_JA
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ja[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_JA,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_JA,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_JA },
         { "svideo",     OPTION_VAL_SVIDEO_JA },
         { "rgb",        OPTION_VAL_RGB_JA },
         { "monochrome", OPTION_VAL_MONOCHROME_JA },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_JA,
      NULL,
      NESTOPIA_PALETTE_INFO_0_JA,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_JA },
         { "consumer",             OPTION_VAL_CONSUMER_JA },
         { "canonical",            OPTION_VAL_CANONICAL_JA },
         { "alternative",          OPTION_VAL_ALTERNATIVE_JA },
         { "rgb",                  OPTION_VAL_RGB_O1_JA },
         { "pal",                  OPTION_VAL_PAL_JA },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_JA },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_JA },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_JA },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_JA },
         { "raw",                  OPTION_VAL_RAW_JA },
         { "custom",               OPTION_VAL_CUSTOM_JA },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_JA,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_JA,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_JA },
         { "2x", OPTION_VAL_2X_JA },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_JA,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_JA,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_JA },
         { "ntsc",    OPTION_VAL_NTSC_JA },
         { "famicom", OPTION_VAL_FAMICOM_JA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_JA,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_JA,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_JA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_JA,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_JA,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_JA,
      NULL,
      NESTOPIA_ASPECT_INFO_0_JA,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_JA },
         { "ntsc", OPTION_VAL_NTSC_JA },
         { "pal",  OPTION_VAL_PAL_JA },
         { "4:3",  OPTION_VAL_4_3_JA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_JA,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_JA,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_JA,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_JA,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_JA },
         { "ntsc",    OPTION_VAL_NTSC_JA },
         { "pal",     OPTION_VAL_PAL_JA },
         { "famicom", OPTION_VAL_FAMICOM_JA },
         { "dendy",   OPTION_VAL_DENDY_JA },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_JA,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_JA,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_JA },
         { "0xFF",   OPTION_VAL_0XFF_JA },
         { "random", OPTION_VAL_RANDOM_JA },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_JA,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_JA, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_JA,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_JA,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_JA },
         { "pointer", OPTION_VAL_POINTER_JA },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_JA,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_JA,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_JA },
         { "mouse", OPTION_VAL_MOUSE_JA },
         { "pointer", OPTION_VAL_POINTER_JA },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_JA,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_JA,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_JA,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_JA,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_JA,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_JA,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_JA,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_JA,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ja = {
   option_cats_ja,
   option_defs_ja
};

/* RETRO_LANGUAGE_KO */

#define CATEGORY_VIDEO_LABEL_KO NULL
#define CATEGORY_VIDEO_INFO_0_KO NULL
#define CATEGORY_AUDIO_LABEL_KO NULL
#define CATEGORY_AUDIO_INFO_0_KO NULL
#define CATEGORY_INPUT_LABEL_KO NULL
#define CATEGORY_INPUT_INFO_0_KO NULL
#define CATEGORY_HACKS_LABEL_KO NULL
#define CATEGORY_HACKS_INFO_0_KO NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_KO NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_KO NULL
#define OPTION_VAL_COMPOSITE_KO NULL
#define OPTION_VAL_SVIDEO_KO NULL
#define OPTION_VAL_RGB_KO NULL
#define OPTION_VAL_MONOCHROME_KO NULL
#define NESTOPIA_PALETTE_LABEL_KO NULL
#define NESTOPIA_PALETTE_INFO_0_KO NULL
#define OPTION_VAL_CXA2025AS_KO NULL
#define OPTION_VAL_CONSUMER_KO NULL
#define OPTION_VAL_CANONICAL_KO NULL
#define OPTION_VAL_ALTERNATIVE_KO NULL
#define OPTION_VAL_RGB_O1_KO NULL
#define OPTION_VAL_PAL_KO NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_KO NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_KO NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_KO NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_KO NULL
#define OPTION_VAL_RAW_KO NULL
#define OPTION_VAL_CUSTOM_KO NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_KO NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_KO NULL
#define NESTOPIA_OVERCLOCK_LABEL_KO NULL
#define NESTOPIA_OVERCLOCK_INFO_0_KO NULL
#define OPTION_VAL_1X_KO NULL
#define OPTION_VAL_2X_KO NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_KO NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_KO NULL
#define OPTION_VAL_AUTO_KO NULL
#define OPTION_VAL_NTSC_KO NULL
#define OPTION_VAL_FAMICOM_KO NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_KO NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_KO NULL
#define NESTOPIA_OVERSCAN_V_LABEL_KO NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_KO NULL
#define NESTOPIA_OVERSCAN_H_LABEL_KO NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_KO NULL
#define NESTOPIA_ASPECT_LABEL_KO NULL
#define NESTOPIA_ASPECT_INFO_0_KO NULL
#define OPTION_VAL_4_3_KO NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_KO NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_KO NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_KO NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_KO NULL
#define OPTION_VAL_DENDY_KO NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_KO NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_KO NULL
#define OPTION_VAL_0X00_KO NULL
#define OPTION_VAL_0XFF_KO NULL
#define OPTION_VAL_RANDOM_KO NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_KO NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_KO NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_KO NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_KO NULL
#define OPTION_VAL_MOUSE_KO NULL
#define OPTION_VAL_POINTER_KO NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_KO NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_KO NULL
#define OPTION_VAL_LIGHTGUN_KO NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_KO NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_KO NULL
#define NESTOPIA_TURBO_PULSE_LABEL_KO NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_KO NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_KO NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_KO NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_KO NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_KO NULL

struct retro_core_option_v2_category option_cats_ko[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_KO,
      CATEGORY_VIDEO_INFO_0_KO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_KO,
      CATEGORY_AUDIO_INFO_0_KO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_KO,
      CATEGORY_INPUT_INFO_0_KO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_KO,
      CATEGORY_HACKS_INFO_0_KO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ko[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_KO,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_KO,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_KO },
         { "svideo",     OPTION_VAL_SVIDEO_KO },
         { "rgb",        OPTION_VAL_RGB_KO },
         { "monochrome", OPTION_VAL_MONOCHROME_KO },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_KO,
      NULL,
      NESTOPIA_PALETTE_INFO_0_KO,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_KO },
         { "consumer",             OPTION_VAL_CONSUMER_KO },
         { "canonical",            OPTION_VAL_CANONICAL_KO },
         { "alternative",          OPTION_VAL_ALTERNATIVE_KO },
         { "rgb",                  OPTION_VAL_RGB_O1_KO },
         { "pal",                  OPTION_VAL_PAL_KO },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_KO },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_KO },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_KO },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_KO },
         { "raw",                  OPTION_VAL_RAW_KO },
         { "custom",               OPTION_VAL_CUSTOM_KO },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_KO,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_KO,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_KO },
         { "2x", OPTION_VAL_2X_KO },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_KO,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_KO,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_KO },
         { "ntsc",    OPTION_VAL_NTSC_KO },
         { "famicom", OPTION_VAL_FAMICOM_KO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_KO,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_KO,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_KO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_KO,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_KO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_KO,
      NULL,
      NESTOPIA_ASPECT_INFO_0_KO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_KO },
         { "ntsc", OPTION_VAL_NTSC_KO },
         { "pal",  OPTION_VAL_PAL_KO },
         { "4:3",  OPTION_VAL_4_3_KO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_KO,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_KO,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_KO,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_KO,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_KO },
         { "ntsc",    OPTION_VAL_NTSC_KO },
         { "pal",     OPTION_VAL_PAL_KO },
         { "famicom", OPTION_VAL_FAMICOM_KO },
         { "dendy",   OPTION_VAL_DENDY_KO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_KO,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_KO,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_KO },
         { "0xFF",   OPTION_VAL_0XFF_KO },
         { "random", OPTION_VAL_RANDOM_KO },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_KO,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_KO, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_KO,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_KO,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_KO },
         { "pointer", OPTION_VAL_POINTER_KO },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_KO,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_KO,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_KO },
         { "mouse", OPTION_VAL_MOUSE_KO },
         { "pointer", OPTION_VAL_POINTER_KO },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_KO,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_KO,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_KO,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_KO,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_KO,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_KO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_KO,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_KO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ko = {
   option_cats_ko,
   option_defs_ko
};

/* RETRO_LANGUAGE_MT */

#define CATEGORY_VIDEO_LABEL_MT NULL
#define CATEGORY_VIDEO_INFO_0_MT NULL
#define CATEGORY_AUDIO_LABEL_MT NULL
#define CATEGORY_AUDIO_INFO_0_MT NULL
#define CATEGORY_INPUT_LABEL_MT NULL
#define CATEGORY_INPUT_INFO_0_MT NULL
#define CATEGORY_HACKS_LABEL_MT NULL
#define CATEGORY_HACKS_INFO_0_MT NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_MT NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_MT NULL
#define OPTION_VAL_COMPOSITE_MT NULL
#define OPTION_VAL_SVIDEO_MT NULL
#define OPTION_VAL_RGB_MT NULL
#define OPTION_VAL_MONOCHROME_MT NULL
#define NESTOPIA_PALETTE_LABEL_MT NULL
#define NESTOPIA_PALETTE_INFO_0_MT NULL
#define OPTION_VAL_CXA2025AS_MT NULL
#define OPTION_VAL_CONSUMER_MT NULL
#define OPTION_VAL_CANONICAL_MT NULL
#define OPTION_VAL_ALTERNATIVE_MT NULL
#define OPTION_VAL_RGB_O1_MT NULL
#define OPTION_VAL_PAL_MT NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_MT NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_MT NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_MT NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_MT NULL
#define OPTION_VAL_RAW_MT NULL
#define OPTION_VAL_CUSTOM_MT NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_MT NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_MT NULL
#define NESTOPIA_OVERCLOCK_LABEL_MT NULL
#define NESTOPIA_OVERCLOCK_INFO_0_MT NULL
#define OPTION_VAL_1X_MT NULL
#define OPTION_VAL_2X_MT NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_MT NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_MT NULL
#define OPTION_VAL_AUTO_MT NULL
#define OPTION_VAL_NTSC_MT NULL
#define OPTION_VAL_FAMICOM_MT NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_MT NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_MT NULL
#define NESTOPIA_OVERSCAN_V_LABEL_MT NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_MT NULL
#define NESTOPIA_OVERSCAN_H_LABEL_MT NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_MT NULL
#define NESTOPIA_ASPECT_LABEL_MT NULL
#define NESTOPIA_ASPECT_INFO_0_MT NULL
#define OPTION_VAL_4_3_MT NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_MT NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_MT NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_MT NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_MT NULL
#define OPTION_VAL_DENDY_MT NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_MT NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_MT NULL
#define OPTION_VAL_0X00_MT NULL
#define OPTION_VAL_0XFF_MT NULL
#define OPTION_VAL_RANDOM_MT NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_MT NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_MT NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_MT NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_MT NULL
#define OPTION_VAL_MOUSE_MT NULL
#define OPTION_VAL_POINTER_MT NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_MT NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_MT NULL
#define OPTION_VAL_LIGHTGUN_MT NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_MT NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_MT NULL
#define NESTOPIA_TURBO_PULSE_LABEL_MT NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_MT NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_MT NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_MT NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_MT NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_MT NULL

struct retro_core_option_v2_category option_cats_mt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_MT,
      CATEGORY_VIDEO_INFO_0_MT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_MT,
      CATEGORY_AUDIO_INFO_0_MT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_MT,
      CATEGORY_INPUT_INFO_0_MT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_MT,
      CATEGORY_HACKS_INFO_0_MT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_mt[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_MT,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_MT,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_MT },
         { "svideo",     OPTION_VAL_SVIDEO_MT },
         { "rgb",        OPTION_VAL_RGB_MT },
         { "monochrome", OPTION_VAL_MONOCHROME_MT },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_MT,
      NULL,
      NESTOPIA_PALETTE_INFO_0_MT,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_MT },
         { "consumer",             OPTION_VAL_CONSUMER_MT },
         { "canonical",            OPTION_VAL_CANONICAL_MT },
         { "alternative",          OPTION_VAL_ALTERNATIVE_MT },
         { "rgb",                  OPTION_VAL_RGB_O1_MT },
         { "pal",                  OPTION_VAL_PAL_MT },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_MT },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_MT },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_MT },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_MT },
         { "raw",                  OPTION_VAL_RAW_MT },
         { "custom",               OPTION_VAL_CUSTOM_MT },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_MT,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_MT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_MT,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_MT,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_MT },
         { "2x", OPTION_VAL_2X_MT },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_MT,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_MT,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_MT },
         { "ntsc",    OPTION_VAL_NTSC_MT },
         { "famicom", OPTION_VAL_FAMICOM_MT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_MT,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_MT,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_MT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_MT,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_MT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_MT,
      NULL,
      NESTOPIA_ASPECT_INFO_0_MT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_MT },
         { "ntsc", OPTION_VAL_NTSC_MT },
         { "pal",  OPTION_VAL_PAL_MT },
         { "4:3",  OPTION_VAL_4_3_MT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_MT,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_MT,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_MT,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_MT,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_MT },
         { "ntsc",    OPTION_VAL_NTSC_MT },
         { "pal",     OPTION_VAL_PAL_MT },
         { "famicom", OPTION_VAL_FAMICOM_MT },
         { "dendy",   OPTION_VAL_DENDY_MT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_MT,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_MT,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_MT },
         { "0xFF",   OPTION_VAL_0XFF_MT },
         { "random", OPTION_VAL_RANDOM_MT },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_MT,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_MT, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_MT,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_MT,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_MT },
         { "pointer", OPTION_VAL_POINTER_MT },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_MT,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_MT,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_MT },
         { "mouse", OPTION_VAL_MOUSE_MT },
         { "pointer", OPTION_VAL_POINTER_MT },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_MT,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_MT,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_MT,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_MT,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_MT,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_MT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_MT,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_MT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_mt = {
   option_cats_mt,
   option_defs_mt
};

/* RETRO_LANGUAGE_NL */

#define CATEGORY_VIDEO_LABEL_NL NULL
#define CATEGORY_VIDEO_INFO_0_NL NULL
#define CATEGORY_AUDIO_LABEL_NL NULL
#define CATEGORY_AUDIO_INFO_0_NL NULL
#define CATEGORY_INPUT_LABEL_NL NULL
#define CATEGORY_INPUT_INFO_0_NL NULL
#define CATEGORY_HACKS_LABEL_NL NULL
#define CATEGORY_HACKS_INFO_0_NL NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_NL NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_NL NULL
#define OPTION_VAL_COMPOSITE_NL NULL
#define OPTION_VAL_SVIDEO_NL NULL
#define OPTION_VAL_RGB_NL NULL
#define OPTION_VAL_MONOCHROME_NL NULL
#define NESTOPIA_PALETTE_LABEL_NL NULL
#define NESTOPIA_PALETTE_INFO_0_NL NULL
#define OPTION_VAL_CXA2025AS_NL NULL
#define OPTION_VAL_CONSUMER_NL NULL
#define OPTION_VAL_CANONICAL_NL NULL
#define OPTION_VAL_ALTERNATIVE_NL NULL
#define OPTION_VAL_RGB_O1_NL NULL
#define OPTION_VAL_PAL_NL NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_NL NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_NL NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_NL NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_NL NULL
#define OPTION_VAL_RAW_NL NULL
#define OPTION_VAL_CUSTOM_NL NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_NL NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_NL NULL
#define NESTOPIA_OVERCLOCK_LABEL_NL NULL
#define NESTOPIA_OVERCLOCK_INFO_0_NL NULL
#define OPTION_VAL_1X_NL NULL
#define OPTION_VAL_2X_NL NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_NL NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_NL NULL
#define OPTION_VAL_AUTO_NL NULL
#define OPTION_VAL_NTSC_NL NULL
#define OPTION_VAL_FAMICOM_NL NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_NL NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_NL NULL
#define NESTOPIA_OVERSCAN_V_LABEL_NL NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_NL NULL
#define NESTOPIA_OVERSCAN_H_LABEL_NL NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_NL NULL
#define NESTOPIA_ASPECT_LABEL_NL NULL
#define NESTOPIA_ASPECT_INFO_0_NL NULL
#define OPTION_VAL_4_3_NL NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_NL NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_NL NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_NL NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_NL NULL
#define OPTION_VAL_DENDY_NL NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_NL NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_NL NULL
#define OPTION_VAL_0X00_NL NULL
#define OPTION_VAL_0XFF_NL NULL
#define OPTION_VAL_RANDOM_NL NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_NL NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_NL NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_NL NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_NL NULL
#define OPTION_VAL_MOUSE_NL NULL
#define OPTION_VAL_POINTER_NL NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_NL NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_NL NULL
#define OPTION_VAL_LIGHTGUN_NL NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_NL NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_NL NULL
#define NESTOPIA_TURBO_PULSE_LABEL_NL NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_NL NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_NL NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_NL NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_NL NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_NL NULL

struct retro_core_option_v2_category option_cats_nl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_NL,
      CATEGORY_VIDEO_INFO_0_NL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_NL,
      CATEGORY_AUDIO_INFO_0_NL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_NL,
      CATEGORY_INPUT_INFO_0_NL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_NL,
      CATEGORY_HACKS_INFO_0_NL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_nl[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_NL,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_NL,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_NL },
         { "svideo",     OPTION_VAL_SVIDEO_NL },
         { "rgb",        OPTION_VAL_RGB_NL },
         { "monochrome", OPTION_VAL_MONOCHROME_NL },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_NL,
      NULL,
      NESTOPIA_PALETTE_INFO_0_NL,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_NL },
         { "consumer",             OPTION_VAL_CONSUMER_NL },
         { "canonical",            OPTION_VAL_CANONICAL_NL },
         { "alternative",          OPTION_VAL_ALTERNATIVE_NL },
         { "rgb",                  OPTION_VAL_RGB_O1_NL },
         { "pal",                  OPTION_VAL_PAL_NL },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_NL },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_NL },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_NL },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_NL },
         { "raw",                  OPTION_VAL_RAW_NL },
         { "custom",               OPTION_VAL_CUSTOM_NL },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_NL,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_NL,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_NL },
         { "2x", OPTION_VAL_2X_NL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_NL,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_NL,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_NL },
         { "ntsc",    OPTION_VAL_NTSC_NL },
         { "famicom", OPTION_VAL_FAMICOM_NL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_NL,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_NL,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_NL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_NL,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_NL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_NL,
      NULL,
      NESTOPIA_ASPECT_INFO_0_NL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_NL },
         { "ntsc", OPTION_VAL_NTSC_NL },
         { "pal",  OPTION_VAL_PAL_NL },
         { "4:3",  OPTION_VAL_4_3_NL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_NL,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_NL,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_NL,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_NL,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_NL },
         { "ntsc",    OPTION_VAL_NTSC_NL },
         { "pal",     OPTION_VAL_PAL_NL },
         { "famicom", OPTION_VAL_FAMICOM_NL },
         { "dendy",   OPTION_VAL_DENDY_NL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_NL,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_NL,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_NL },
         { "0xFF",   OPTION_VAL_0XFF_NL },
         { "random", OPTION_VAL_RANDOM_NL },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_NL,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_NL, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_NL,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_NL,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_NL },
         { "pointer", OPTION_VAL_POINTER_NL },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_NL,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_NL,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_NL },
         { "mouse", OPTION_VAL_MOUSE_NL },
         { "pointer", OPTION_VAL_POINTER_NL },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_NL,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_NL,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_NL,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_NL,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_NL,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_NL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_NL,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_NL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_nl = {
   option_cats_nl,
   option_defs_nl
};

/* RETRO_LANGUAGE_OC */

#define CATEGORY_VIDEO_LABEL_OC NULL
#define CATEGORY_VIDEO_INFO_0_OC NULL
#define CATEGORY_AUDIO_LABEL_OC NULL
#define CATEGORY_AUDIO_INFO_0_OC NULL
#define CATEGORY_INPUT_LABEL_OC NULL
#define CATEGORY_INPUT_INFO_0_OC NULL
#define CATEGORY_HACKS_LABEL_OC NULL
#define CATEGORY_HACKS_INFO_0_OC NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_OC NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_OC NULL
#define OPTION_VAL_COMPOSITE_OC NULL
#define OPTION_VAL_SVIDEO_OC NULL
#define OPTION_VAL_RGB_OC NULL
#define OPTION_VAL_MONOCHROME_OC NULL
#define NESTOPIA_PALETTE_LABEL_OC NULL
#define NESTOPIA_PALETTE_INFO_0_OC NULL
#define OPTION_VAL_CXA2025AS_OC NULL
#define OPTION_VAL_CONSUMER_OC NULL
#define OPTION_VAL_CANONICAL_OC NULL
#define OPTION_VAL_ALTERNATIVE_OC NULL
#define OPTION_VAL_RGB_O1_OC NULL
#define OPTION_VAL_PAL_OC NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_OC NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_OC NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_OC NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_OC NULL
#define OPTION_VAL_RAW_OC NULL
#define OPTION_VAL_CUSTOM_OC NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_OC NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_OC NULL
#define NESTOPIA_OVERCLOCK_LABEL_OC NULL
#define NESTOPIA_OVERCLOCK_INFO_0_OC NULL
#define OPTION_VAL_1X_OC NULL
#define OPTION_VAL_2X_OC NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_OC NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_OC NULL
#define OPTION_VAL_AUTO_OC NULL
#define OPTION_VAL_NTSC_OC NULL
#define OPTION_VAL_FAMICOM_OC NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_OC NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_OC NULL
#define NESTOPIA_OVERSCAN_V_LABEL_OC NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_OC NULL
#define NESTOPIA_OVERSCAN_H_LABEL_OC NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_OC NULL
#define NESTOPIA_ASPECT_LABEL_OC NULL
#define NESTOPIA_ASPECT_INFO_0_OC NULL
#define OPTION_VAL_4_3_OC NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_OC NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_OC NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_OC NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_OC NULL
#define OPTION_VAL_DENDY_OC NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_OC NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_OC NULL
#define OPTION_VAL_0X00_OC NULL
#define OPTION_VAL_0XFF_OC NULL
#define OPTION_VAL_RANDOM_OC NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_OC NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_OC NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_OC NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_OC NULL
#define OPTION_VAL_MOUSE_OC NULL
#define OPTION_VAL_POINTER_OC NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_OC NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_OC NULL
#define OPTION_VAL_LIGHTGUN_OC NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_OC NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_OC NULL
#define NESTOPIA_TURBO_PULSE_LABEL_OC NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_OC NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_OC NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_OC NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_OC NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_OC NULL

struct retro_core_option_v2_category option_cats_oc[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_OC,
      CATEGORY_VIDEO_INFO_0_OC
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_OC,
      CATEGORY_AUDIO_INFO_0_OC
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_OC,
      CATEGORY_INPUT_INFO_0_OC
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_OC,
      CATEGORY_HACKS_INFO_0_OC
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_oc[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_OC,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_OC,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_OC },
         { "svideo",     OPTION_VAL_SVIDEO_OC },
         { "rgb",        OPTION_VAL_RGB_OC },
         { "monochrome", OPTION_VAL_MONOCHROME_OC },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_OC,
      NULL,
      NESTOPIA_PALETTE_INFO_0_OC,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_OC },
         { "consumer",             OPTION_VAL_CONSUMER_OC },
         { "canonical",            OPTION_VAL_CANONICAL_OC },
         { "alternative",          OPTION_VAL_ALTERNATIVE_OC },
         { "rgb",                  OPTION_VAL_RGB_O1_OC },
         { "pal",                  OPTION_VAL_PAL_OC },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_OC },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_OC },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_OC },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_OC },
         { "raw",                  OPTION_VAL_RAW_OC },
         { "custom",               OPTION_VAL_CUSTOM_OC },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_OC,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_OC,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_OC,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_OC,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_OC },
         { "2x", OPTION_VAL_2X_OC },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_OC,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_OC,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_OC },
         { "ntsc",    OPTION_VAL_NTSC_OC },
         { "famicom", OPTION_VAL_FAMICOM_OC },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_OC,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_OC,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_OC,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_OC,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_OC,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_OC,
      NULL,
      NESTOPIA_ASPECT_INFO_0_OC,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_OC },
         { "ntsc", OPTION_VAL_NTSC_OC },
         { "pal",  OPTION_VAL_PAL_OC },
         { "4:3",  OPTION_VAL_4_3_OC },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_OC,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_OC,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_OC,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_OC,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_OC },
         { "ntsc",    OPTION_VAL_NTSC_OC },
         { "pal",     OPTION_VAL_PAL_OC },
         { "famicom", OPTION_VAL_FAMICOM_OC },
         { "dendy",   OPTION_VAL_DENDY_OC },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_OC,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_OC,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_OC },
         { "0xFF",   OPTION_VAL_0XFF_OC },
         { "random", OPTION_VAL_RANDOM_OC },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_OC,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_OC, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_OC,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_OC,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_OC },
         { "pointer", OPTION_VAL_POINTER_OC },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_OC,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_OC,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_OC },
         { "mouse", OPTION_VAL_MOUSE_OC },
         { "pointer", OPTION_VAL_POINTER_OC },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_OC,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_OC,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_OC,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_OC,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_OC,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_OC,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_OC,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_OC,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_oc = {
   option_cats_oc,
   option_defs_oc
};

/* RETRO_LANGUAGE_PL */

#define CATEGORY_VIDEO_LABEL_PL NULL
#define CATEGORY_VIDEO_INFO_0_PL NULL
#define CATEGORY_AUDIO_LABEL_PL NULL
#define CATEGORY_AUDIO_INFO_0_PL NULL
#define CATEGORY_INPUT_LABEL_PL NULL
#define CATEGORY_INPUT_INFO_0_PL NULL
#define CATEGORY_HACKS_LABEL_PL NULL
#define CATEGORY_HACKS_INFO_0_PL NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_PL NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_PL NULL
#define OPTION_VAL_COMPOSITE_PL NULL
#define OPTION_VAL_SVIDEO_PL NULL
#define OPTION_VAL_RGB_PL NULL
#define OPTION_VAL_MONOCHROME_PL NULL
#define NESTOPIA_PALETTE_LABEL_PL NULL
#define NESTOPIA_PALETTE_INFO_0_PL NULL
#define OPTION_VAL_CXA2025AS_PL NULL
#define OPTION_VAL_CONSUMER_PL NULL
#define OPTION_VAL_CANONICAL_PL NULL
#define OPTION_VAL_ALTERNATIVE_PL NULL
#define OPTION_VAL_RGB_O1_PL NULL
#define OPTION_VAL_PAL_PL NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_PL NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_PL NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_PL NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_PL NULL
#define OPTION_VAL_RAW_PL NULL
#define OPTION_VAL_CUSTOM_PL NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_PL NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_PL NULL
#define NESTOPIA_OVERCLOCK_LABEL_PL NULL
#define NESTOPIA_OVERCLOCK_INFO_0_PL NULL
#define OPTION_VAL_1X_PL NULL
#define OPTION_VAL_2X_PL NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_PL NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_PL NULL
#define OPTION_VAL_AUTO_PL NULL
#define OPTION_VAL_NTSC_PL NULL
#define OPTION_VAL_FAMICOM_PL NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_PL NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_PL NULL
#define NESTOPIA_OVERSCAN_V_LABEL_PL NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_PL NULL
#define NESTOPIA_OVERSCAN_H_LABEL_PL NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_PL NULL
#define NESTOPIA_ASPECT_LABEL_PL NULL
#define NESTOPIA_ASPECT_INFO_0_PL NULL
#define OPTION_VAL_4_3_PL NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_PL NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_PL NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_PL NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_PL NULL
#define OPTION_VAL_DENDY_PL NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_PL NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_PL NULL
#define OPTION_VAL_0X00_PL NULL
#define OPTION_VAL_0XFF_PL NULL
#define OPTION_VAL_RANDOM_PL NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_PL NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_PL NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_PL NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_PL NULL
#define OPTION_VAL_MOUSE_PL NULL
#define OPTION_VAL_POINTER_PL NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_PL NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_PL NULL
#define OPTION_VAL_LIGHTGUN_PL NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_PL NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_PL NULL
#define NESTOPIA_TURBO_PULSE_LABEL_PL NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_PL NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_PL NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_PL NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_PL NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_PL NULL

struct retro_core_option_v2_category option_cats_pl[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PL,
      CATEGORY_VIDEO_INFO_0_PL
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PL,
      CATEGORY_AUDIO_INFO_0_PL
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PL,
      CATEGORY_INPUT_INFO_0_PL
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PL,
      CATEGORY_HACKS_INFO_0_PL
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pl[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_PL,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_PL,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_PL },
         { "svideo",     OPTION_VAL_SVIDEO_PL },
         { "rgb",        OPTION_VAL_RGB_PL },
         { "monochrome", OPTION_VAL_MONOCHROME_PL },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_PL,
      NULL,
      NESTOPIA_PALETTE_INFO_0_PL,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_PL },
         { "consumer",             OPTION_VAL_CONSUMER_PL },
         { "canonical",            OPTION_VAL_CANONICAL_PL },
         { "alternative",          OPTION_VAL_ALTERNATIVE_PL },
         { "rgb",                  OPTION_VAL_RGB_O1_PL },
         { "pal",                  OPTION_VAL_PAL_PL },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_PL },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_PL },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_PL },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_PL },
         { "raw",                  OPTION_VAL_RAW_PL },
         { "custom",               OPTION_VAL_CUSTOM_PL },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_PL,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_PL,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_PL },
         { "2x", OPTION_VAL_2X_PL },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_PL,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_PL,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_PL },
         { "ntsc",    OPTION_VAL_NTSC_PL },
         { "famicom", OPTION_VAL_FAMICOM_PL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_PL,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_PL,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_PL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_PL,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_PL,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_PL,
      NULL,
      NESTOPIA_ASPECT_INFO_0_PL,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PL },
         { "ntsc", OPTION_VAL_NTSC_PL },
         { "pal",  OPTION_VAL_PAL_PL },
         { "4:3",  OPTION_VAL_4_3_PL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_PL,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_PL,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_PL,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_PL,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_PL },
         { "ntsc",    OPTION_VAL_NTSC_PL },
         { "pal",     OPTION_VAL_PAL_PL },
         { "famicom", OPTION_VAL_FAMICOM_PL },
         { "dendy",   OPTION_VAL_DENDY_PL },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_PL,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_PL,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_PL },
         { "0xFF",   OPTION_VAL_0XFF_PL },
         { "random", OPTION_VAL_RANDOM_PL },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_PL,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_PL, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_PL,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_PL,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_PL },
         { "pointer", OPTION_VAL_POINTER_PL },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_PL,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_PL,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_PL },
         { "mouse", OPTION_VAL_MOUSE_PL },
         { "pointer", OPTION_VAL_POINTER_PL },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_PL,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_PL,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_PL,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_PL,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_PL,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_PL,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_PL,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_PL,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pl = {
   option_cats_pl,
   option_defs_pl
};

/* RETRO_LANGUAGE_PT_BR */

#define CATEGORY_VIDEO_LABEL_PT_BR NULL
#define CATEGORY_VIDEO_INFO_0_PT_BR NULL
#define CATEGORY_AUDIO_LABEL_PT_BR NULL
#define CATEGORY_AUDIO_INFO_0_PT_BR NULL
#define CATEGORY_INPUT_LABEL_PT_BR NULL
#define CATEGORY_INPUT_INFO_0_PT_BR NULL
#define CATEGORY_HACKS_LABEL_PT_BR NULL
#define CATEGORY_HACKS_INFO_0_PT_BR NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_PT_BR NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_PT_BR NULL
#define OPTION_VAL_COMPOSITE_PT_BR NULL
#define OPTION_VAL_SVIDEO_PT_BR NULL
#define OPTION_VAL_RGB_PT_BR NULL
#define OPTION_VAL_MONOCHROME_PT_BR NULL
#define NESTOPIA_PALETTE_LABEL_PT_BR NULL
#define NESTOPIA_PALETTE_INFO_0_PT_BR NULL
#define OPTION_VAL_CXA2025AS_PT_BR NULL
#define OPTION_VAL_CONSUMER_PT_BR NULL
#define OPTION_VAL_CANONICAL_PT_BR NULL
#define OPTION_VAL_ALTERNATIVE_PT_BR NULL
#define OPTION_VAL_RGB_O1_PT_BR NULL
#define OPTION_VAL_PAL_PT_BR NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_PT_BR NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_PT_BR NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_PT_BR NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_PT_BR NULL
#define OPTION_VAL_RAW_PT_BR NULL
#define OPTION_VAL_CUSTOM_PT_BR NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_PT_BR NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_PT_BR NULL
#define NESTOPIA_OVERCLOCK_LABEL_PT_BR NULL
#define NESTOPIA_OVERCLOCK_INFO_0_PT_BR NULL
#define OPTION_VAL_1X_PT_BR NULL
#define OPTION_VAL_2X_PT_BR NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_PT_BR NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_PT_BR NULL
#define OPTION_VAL_AUTO_PT_BR NULL
#define OPTION_VAL_NTSC_PT_BR NULL
#define OPTION_VAL_FAMICOM_PT_BR NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_PT_BR NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_PT_BR NULL
#define NESTOPIA_OVERSCAN_V_LABEL_PT_BR NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_PT_BR NULL
#define NESTOPIA_OVERSCAN_H_LABEL_PT_BR NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_PT_BR NULL
#define NESTOPIA_ASPECT_LABEL_PT_BR NULL
#define NESTOPIA_ASPECT_INFO_0_PT_BR NULL
#define OPTION_VAL_4_3_PT_BR NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_PT_BR NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_PT_BR NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_PT_BR NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_PT_BR NULL
#define OPTION_VAL_DENDY_PT_BR NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_PT_BR NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_PT_BR NULL
#define OPTION_VAL_0X00_PT_BR NULL
#define OPTION_VAL_0XFF_PT_BR NULL
#define OPTION_VAL_RANDOM_PT_BR NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_PT_BR NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_PT_BR NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_PT_BR NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_PT_BR NULL
#define OPTION_VAL_MOUSE_PT_BR NULL
#define OPTION_VAL_POINTER_PT_BR NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_PT_BR NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_PT_BR NULL
#define OPTION_VAL_LIGHTGUN_PT_BR NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_PT_BR NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_PT_BR NULL
#define NESTOPIA_TURBO_PULSE_LABEL_PT_BR NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_PT_BR NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_PT_BR NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_PT_BR NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_PT_BR NULL

struct retro_core_option_v2_category option_cats_pt_br[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_BR,
      CATEGORY_VIDEO_INFO_0_PT_BR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_BR,
      CATEGORY_AUDIO_INFO_0_PT_BR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_BR,
      CATEGORY_INPUT_INFO_0_PT_BR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_BR,
      CATEGORY_HACKS_INFO_0_PT_BR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_br[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_PT_BR,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_PT_BR },
         { "svideo",     OPTION_VAL_SVIDEO_PT_BR },
         { "rgb",        OPTION_VAL_RGB_PT_BR },
         { "monochrome", OPTION_VAL_MONOCHROME_PT_BR },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_PT_BR,
      NULL,
      NESTOPIA_PALETTE_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_PT_BR },
         { "consumer",             OPTION_VAL_CONSUMER_PT_BR },
         { "canonical",            OPTION_VAL_CANONICAL_PT_BR },
         { "alternative",          OPTION_VAL_ALTERNATIVE_PT_BR },
         { "rgb",                  OPTION_VAL_RGB_O1_PT_BR },
         { "pal",                  OPTION_VAL_PAL_PT_BR },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_PT_BR },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_PT_BR },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_PT_BR },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_PT_BR },
         { "raw",                  OPTION_VAL_RAW_PT_BR },
         { "custom",               OPTION_VAL_CUSTOM_PT_BR },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_PT_BR,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_PT_BR,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_PT_BR },
         { "2x", OPTION_VAL_2X_PT_BR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_PT_BR,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_PT_BR },
         { "ntsc",    OPTION_VAL_NTSC_PT_BR },
         { "famicom", OPTION_VAL_FAMICOM_PT_BR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_PT_BR,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_PT_BR,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_PT_BR,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_PT_BR,
      NULL,
      NESTOPIA_ASPECT_INFO_0_PT_BR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_BR },
         { "ntsc", OPTION_VAL_NTSC_PT_BR },
         { "pal",  OPTION_VAL_PAL_PT_BR },
         { "4:3",  OPTION_VAL_4_3_PT_BR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_PT_BR,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_PT_BR,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_PT_BR },
         { "ntsc",    OPTION_VAL_NTSC_PT_BR },
         { "pal",     OPTION_VAL_PAL_PT_BR },
         { "famicom", OPTION_VAL_FAMICOM_PT_BR },
         { "dendy",   OPTION_VAL_DENDY_PT_BR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_PT_BR,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_PT_BR,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_PT_BR },
         { "0xFF",   OPTION_VAL_0XFF_PT_BR },
         { "random", OPTION_VAL_RANDOM_PT_BR },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_PT_BR,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_PT_BR, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_PT_BR,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_PT_BR },
         { "pointer", OPTION_VAL_POINTER_PT_BR },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_PT_BR,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_PT_BR },
         { "mouse", OPTION_VAL_MOUSE_PT_BR },
         { "pointer", OPTION_VAL_POINTER_PT_BR },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_PT_BR,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_PT_BR,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_PT_BR,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_PT_BR,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_PT_BR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_PT_BR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_PT_BR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_br = {
   option_cats_pt_br,
   option_defs_pt_br
};

/* RETRO_LANGUAGE_PT_PT */

#define CATEGORY_VIDEO_LABEL_PT_PT NULL
#define CATEGORY_VIDEO_INFO_0_PT_PT NULL
#define CATEGORY_AUDIO_LABEL_PT_PT NULL
#define CATEGORY_AUDIO_INFO_0_PT_PT NULL
#define CATEGORY_INPUT_LABEL_PT_PT NULL
#define CATEGORY_INPUT_INFO_0_PT_PT NULL
#define CATEGORY_HACKS_LABEL_PT_PT NULL
#define CATEGORY_HACKS_INFO_0_PT_PT NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_PT_PT NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_PT_PT NULL
#define OPTION_VAL_COMPOSITE_PT_PT NULL
#define OPTION_VAL_SVIDEO_PT_PT NULL
#define OPTION_VAL_RGB_PT_PT NULL
#define OPTION_VAL_MONOCHROME_PT_PT NULL
#define NESTOPIA_PALETTE_LABEL_PT_PT NULL
#define NESTOPIA_PALETTE_INFO_0_PT_PT NULL
#define OPTION_VAL_CXA2025AS_PT_PT NULL
#define OPTION_VAL_CONSUMER_PT_PT NULL
#define OPTION_VAL_CANONICAL_PT_PT NULL
#define OPTION_VAL_ALTERNATIVE_PT_PT NULL
#define OPTION_VAL_RGB_O1_PT_PT NULL
#define OPTION_VAL_PAL_PT_PT NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_PT_PT NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_PT_PT NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_PT_PT NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_PT_PT NULL
#define OPTION_VAL_RAW_PT_PT NULL
#define OPTION_VAL_CUSTOM_PT_PT NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_PT_PT NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_PT_PT NULL
#define NESTOPIA_OVERCLOCK_LABEL_PT_PT NULL
#define NESTOPIA_OVERCLOCK_INFO_0_PT_PT NULL
#define OPTION_VAL_1X_PT_PT NULL
#define OPTION_VAL_2X_PT_PT NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_PT_PT NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_PT_PT NULL
#define OPTION_VAL_AUTO_PT_PT NULL
#define OPTION_VAL_NTSC_PT_PT NULL
#define OPTION_VAL_FAMICOM_PT_PT NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_PT_PT NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_PT_PT NULL
#define NESTOPIA_OVERSCAN_V_LABEL_PT_PT NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_PT_PT NULL
#define NESTOPIA_OVERSCAN_H_LABEL_PT_PT NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_PT_PT NULL
#define NESTOPIA_ASPECT_LABEL_PT_PT NULL
#define NESTOPIA_ASPECT_INFO_0_PT_PT NULL
#define OPTION_VAL_4_3_PT_PT NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_PT_PT NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_PT_PT NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_PT_PT NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_PT_PT NULL
#define OPTION_VAL_DENDY_PT_PT NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_PT_PT NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_PT_PT NULL
#define OPTION_VAL_0X00_PT_PT NULL
#define OPTION_VAL_0XFF_PT_PT NULL
#define OPTION_VAL_RANDOM_PT_PT NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_PT_PT NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_PT_PT NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_PT_PT NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_PT_PT NULL
#define OPTION_VAL_MOUSE_PT_PT NULL
#define OPTION_VAL_POINTER_PT_PT NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_PT_PT NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_PT_PT NULL
#define OPTION_VAL_LIGHTGUN_PT_PT NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_PT_PT NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_PT_PT NULL
#define NESTOPIA_TURBO_PULSE_LABEL_PT_PT NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_PT_PT NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_PT_PT NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_PT_PT NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_PT_PT NULL

struct retro_core_option_v2_category option_cats_pt_pt[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_PT_PT,
      CATEGORY_VIDEO_INFO_0_PT_PT
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_PT_PT,
      CATEGORY_AUDIO_INFO_0_PT_PT
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_PT_PT,
      CATEGORY_INPUT_INFO_0_PT_PT
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_PT_PT,
      CATEGORY_HACKS_INFO_0_PT_PT
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_pt_pt[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_PT_PT,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_PT_PT },
         { "svideo",     OPTION_VAL_SVIDEO_PT_PT },
         { "rgb",        OPTION_VAL_RGB_PT_PT },
         { "monochrome", OPTION_VAL_MONOCHROME_PT_PT },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_PT_PT,
      NULL,
      NESTOPIA_PALETTE_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_PT_PT },
         { "consumer",             OPTION_VAL_CONSUMER_PT_PT },
         { "canonical",            OPTION_VAL_CANONICAL_PT_PT },
         { "alternative",          OPTION_VAL_ALTERNATIVE_PT_PT },
         { "rgb",                  OPTION_VAL_RGB_O1_PT_PT },
         { "pal",                  OPTION_VAL_PAL_PT_PT },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_PT_PT },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_PT_PT },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_PT_PT },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_PT_PT },
         { "raw",                  OPTION_VAL_RAW_PT_PT },
         { "custom",               OPTION_VAL_CUSTOM_PT_PT },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_PT_PT,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_PT_PT,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_PT_PT },
         { "2x", OPTION_VAL_2X_PT_PT },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_PT_PT,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_PT_PT },
         { "ntsc",    OPTION_VAL_NTSC_PT_PT },
         { "famicom", OPTION_VAL_FAMICOM_PT_PT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_PT_PT,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_PT_PT,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_PT_PT,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_PT_PT,
      NULL,
      NESTOPIA_ASPECT_INFO_0_PT_PT,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_PT_PT },
         { "ntsc", OPTION_VAL_NTSC_PT_PT },
         { "pal",  OPTION_VAL_PAL_PT_PT },
         { "4:3",  OPTION_VAL_4_3_PT_PT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_PT_PT,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_PT_PT,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_PT_PT },
         { "ntsc",    OPTION_VAL_NTSC_PT_PT },
         { "pal",     OPTION_VAL_PAL_PT_PT },
         { "famicom", OPTION_VAL_FAMICOM_PT_PT },
         { "dendy",   OPTION_VAL_DENDY_PT_PT },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_PT_PT,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_PT_PT,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_PT_PT },
         { "0xFF",   OPTION_VAL_0XFF_PT_PT },
         { "random", OPTION_VAL_RANDOM_PT_PT },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_PT_PT,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_PT_PT, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_PT_PT,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_PT_PT },
         { "pointer", OPTION_VAL_POINTER_PT_PT },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_PT_PT,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_PT_PT },
         { "mouse", OPTION_VAL_MOUSE_PT_PT },
         { "pointer", OPTION_VAL_POINTER_PT_PT },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_PT_PT,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_PT_PT,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_PT_PT,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_PT_PT,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_PT_PT,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_PT_PT,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_PT_PT,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_pt_pt = {
   option_cats_pt_pt,
   option_defs_pt_pt
};

/* RETRO_LANGUAGE_RO */

#define CATEGORY_VIDEO_LABEL_RO NULL
#define CATEGORY_VIDEO_INFO_0_RO NULL
#define CATEGORY_AUDIO_LABEL_RO NULL
#define CATEGORY_AUDIO_INFO_0_RO NULL
#define CATEGORY_INPUT_LABEL_RO NULL
#define CATEGORY_INPUT_INFO_0_RO NULL
#define CATEGORY_HACKS_LABEL_RO NULL
#define CATEGORY_HACKS_INFO_0_RO NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_RO NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_RO NULL
#define OPTION_VAL_COMPOSITE_RO NULL
#define OPTION_VAL_SVIDEO_RO NULL
#define OPTION_VAL_RGB_RO NULL
#define OPTION_VAL_MONOCHROME_RO NULL
#define NESTOPIA_PALETTE_LABEL_RO NULL
#define NESTOPIA_PALETTE_INFO_0_RO NULL
#define OPTION_VAL_CXA2025AS_RO NULL
#define OPTION_VAL_CONSUMER_RO NULL
#define OPTION_VAL_CANONICAL_RO NULL
#define OPTION_VAL_ALTERNATIVE_RO NULL
#define OPTION_VAL_RGB_O1_RO NULL
#define OPTION_VAL_PAL_RO NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_RO NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_RO NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_RO NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_RO NULL
#define OPTION_VAL_RAW_RO NULL
#define OPTION_VAL_CUSTOM_RO NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_RO NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_RO NULL
#define NESTOPIA_OVERCLOCK_LABEL_RO NULL
#define NESTOPIA_OVERCLOCK_INFO_0_RO NULL
#define OPTION_VAL_1X_RO NULL
#define OPTION_VAL_2X_RO NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_RO NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_RO NULL
#define OPTION_VAL_AUTO_RO NULL
#define OPTION_VAL_NTSC_RO NULL
#define OPTION_VAL_FAMICOM_RO NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_RO NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_RO NULL
#define NESTOPIA_OVERSCAN_V_LABEL_RO NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_RO NULL
#define NESTOPIA_OVERSCAN_H_LABEL_RO NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_RO NULL
#define NESTOPIA_ASPECT_LABEL_RO NULL
#define NESTOPIA_ASPECT_INFO_0_RO NULL
#define OPTION_VAL_4_3_RO NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_RO NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_RO NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_RO NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_RO NULL
#define OPTION_VAL_DENDY_RO NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_RO NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_RO NULL
#define OPTION_VAL_0X00_RO NULL
#define OPTION_VAL_0XFF_RO NULL
#define OPTION_VAL_RANDOM_RO NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_RO NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_RO NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_RO NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_RO NULL
#define OPTION_VAL_MOUSE_RO NULL
#define OPTION_VAL_POINTER_RO NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_RO NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_RO NULL
#define OPTION_VAL_LIGHTGUN_RO NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_RO NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_RO NULL
#define NESTOPIA_TURBO_PULSE_LABEL_RO NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_RO NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_RO NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_RO NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_RO NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_RO NULL

struct retro_core_option_v2_category option_cats_ro[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RO,
      CATEGORY_VIDEO_INFO_0_RO
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_RO,
      CATEGORY_AUDIO_INFO_0_RO
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RO,
      CATEGORY_INPUT_INFO_0_RO
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_RO,
      CATEGORY_HACKS_INFO_0_RO
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ro[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_RO,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_RO,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_RO },
         { "svideo",     OPTION_VAL_SVIDEO_RO },
         { "rgb",        OPTION_VAL_RGB_RO },
         { "monochrome", OPTION_VAL_MONOCHROME_RO },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_RO,
      NULL,
      NESTOPIA_PALETTE_INFO_0_RO,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_RO },
         { "consumer",             OPTION_VAL_CONSUMER_RO },
         { "canonical",            OPTION_VAL_CANONICAL_RO },
         { "alternative",          OPTION_VAL_ALTERNATIVE_RO },
         { "rgb",                  OPTION_VAL_RGB_O1_RO },
         { "pal",                  OPTION_VAL_PAL_RO },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_RO },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_RO },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_RO },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_RO },
         { "raw",                  OPTION_VAL_RAW_RO },
         { "custom",               OPTION_VAL_CUSTOM_RO },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_RO,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_RO,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_RO,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_RO,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_RO },
         { "2x", OPTION_VAL_2X_RO },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_RO,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_RO,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_RO },
         { "ntsc",    OPTION_VAL_NTSC_RO },
         { "famicom", OPTION_VAL_FAMICOM_RO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_RO,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_RO,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_RO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_RO,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_RO,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_RO,
      NULL,
      NESTOPIA_ASPECT_INFO_0_RO,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RO },
         { "ntsc", OPTION_VAL_NTSC_RO },
         { "pal",  OPTION_VAL_PAL_RO },
         { "4:3",  OPTION_VAL_4_3_RO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_RO,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_RO,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_RO,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_RO,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_RO },
         { "ntsc",    OPTION_VAL_NTSC_RO },
         { "pal",     OPTION_VAL_PAL_RO },
         { "famicom", OPTION_VAL_FAMICOM_RO },
         { "dendy",   OPTION_VAL_DENDY_RO },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_RO,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_RO,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_RO },
         { "0xFF",   OPTION_VAL_0XFF_RO },
         { "random", OPTION_VAL_RANDOM_RO },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_RO,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_RO, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_RO,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_RO,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_RO },
         { "pointer", OPTION_VAL_POINTER_RO },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_RO,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_RO,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_RO },
         { "mouse", OPTION_VAL_MOUSE_RO },
         { "pointer", OPTION_VAL_POINTER_RO },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_RO,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_RO,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_RO,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_RO,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_RO,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_RO,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_RO,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_RO,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ro = {
   option_cats_ro,
   option_defs_ro
};

/* RETRO_LANGUAGE_RU */

#define CATEGORY_VIDEO_LABEL_RU NULL
#define CATEGORY_VIDEO_INFO_0_RU NULL
#define CATEGORY_AUDIO_LABEL_RU NULL
#define CATEGORY_AUDIO_INFO_0_RU NULL
#define CATEGORY_INPUT_LABEL_RU NULL
#define CATEGORY_INPUT_INFO_0_RU NULL
#define CATEGORY_HACKS_LABEL_RU NULL
#define CATEGORY_HACKS_INFO_0_RU NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_RU NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_RU NULL
#define OPTION_VAL_COMPOSITE_RU NULL
#define OPTION_VAL_SVIDEO_RU NULL
#define OPTION_VAL_RGB_RU NULL
#define OPTION_VAL_MONOCHROME_RU NULL
#define NESTOPIA_PALETTE_LABEL_RU NULL
#define NESTOPIA_PALETTE_INFO_0_RU NULL
#define OPTION_VAL_CXA2025AS_RU NULL
#define OPTION_VAL_CONSUMER_RU NULL
#define OPTION_VAL_CANONICAL_RU NULL
#define OPTION_VAL_ALTERNATIVE_RU NULL
#define OPTION_VAL_RGB_O1_RU NULL
#define OPTION_VAL_PAL_RU NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_RU NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_RU NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_RU NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_RU NULL
#define OPTION_VAL_RAW_RU NULL
#define OPTION_VAL_CUSTOM_RU NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_RU NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_RU NULL
#define NESTOPIA_OVERCLOCK_LABEL_RU NULL
#define NESTOPIA_OVERCLOCK_INFO_0_RU NULL
#define OPTION_VAL_1X_RU NULL
#define OPTION_VAL_2X_RU NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_RU NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_RU NULL
#define OPTION_VAL_AUTO_RU NULL
#define OPTION_VAL_NTSC_RU NULL
#define OPTION_VAL_FAMICOM_RU NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_RU NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_RU NULL
#define NESTOPIA_OVERSCAN_V_LABEL_RU NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_RU NULL
#define NESTOPIA_OVERSCAN_H_LABEL_RU NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_RU NULL
#define NESTOPIA_ASPECT_LABEL_RU NULL
#define NESTOPIA_ASPECT_INFO_0_RU NULL
#define OPTION_VAL_4_3_RU NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_RU NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_RU NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_RU NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_RU NULL
#define OPTION_VAL_DENDY_RU NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_RU NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_RU NULL
#define OPTION_VAL_0X00_RU NULL
#define OPTION_VAL_0XFF_RU NULL
#define OPTION_VAL_RANDOM_RU NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_RU NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_RU NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_RU NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_RU NULL
#define OPTION_VAL_MOUSE_RU NULL
#define OPTION_VAL_POINTER_RU NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_RU NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_RU NULL
#define OPTION_VAL_LIGHTGUN_RU NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_RU NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_RU NULL
#define NESTOPIA_TURBO_PULSE_LABEL_RU NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_RU NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_RU NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_RU NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_RU NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_RU NULL

struct retro_core_option_v2_category option_cats_ru[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_RU,
      CATEGORY_VIDEO_INFO_0_RU
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_RU,
      CATEGORY_AUDIO_INFO_0_RU
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_RU,
      CATEGORY_INPUT_INFO_0_RU
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_RU,
      CATEGORY_HACKS_INFO_0_RU
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_ru[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_RU,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_RU,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_RU },
         { "svideo",     OPTION_VAL_SVIDEO_RU },
         { "rgb",        OPTION_VAL_RGB_RU },
         { "monochrome", OPTION_VAL_MONOCHROME_RU },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_RU,
      NULL,
      NESTOPIA_PALETTE_INFO_0_RU,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_RU },
         { "consumer",             OPTION_VAL_CONSUMER_RU },
         { "canonical",            OPTION_VAL_CANONICAL_RU },
         { "alternative",          OPTION_VAL_ALTERNATIVE_RU },
         { "rgb",                  OPTION_VAL_RGB_O1_RU },
         { "pal",                  OPTION_VAL_PAL_RU },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_RU },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_RU },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_RU },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_RU },
         { "raw",                  OPTION_VAL_RAW_RU },
         { "custom",               OPTION_VAL_CUSTOM_RU },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_RU,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_RU,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_RU },
         { "2x", OPTION_VAL_2X_RU },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_RU,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_RU,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_RU },
         { "ntsc",    OPTION_VAL_NTSC_RU },
         { "famicom", OPTION_VAL_FAMICOM_RU },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_RU,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_RU,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_RU,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_RU,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_RU,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_RU,
      NULL,
      NESTOPIA_ASPECT_INFO_0_RU,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_RU },
         { "ntsc", OPTION_VAL_NTSC_RU },
         { "pal",  OPTION_VAL_PAL_RU },
         { "4:3",  OPTION_VAL_4_3_RU },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_RU,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_RU,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_RU,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_RU,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_RU },
         { "ntsc",    OPTION_VAL_NTSC_RU },
         { "pal",     OPTION_VAL_PAL_RU },
         { "famicom", OPTION_VAL_FAMICOM_RU },
         { "dendy",   OPTION_VAL_DENDY_RU },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_RU,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_RU,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_RU },
         { "0xFF",   OPTION_VAL_0XFF_RU },
         { "random", OPTION_VAL_RANDOM_RU },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_RU,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_RU, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_RU,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_RU,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_RU },
         { "pointer", OPTION_VAL_POINTER_RU },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_RU,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_RU,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_RU },
         { "mouse", OPTION_VAL_MOUSE_RU },
         { "pointer", OPTION_VAL_POINTER_RU },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_RU,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_RU,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_RU,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_RU,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_RU,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_RU,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_RU,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_RU,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_ru = {
   option_cats_ru,
   option_defs_ru
};

/* RETRO_LANGUAGE_SI */

#define CATEGORY_VIDEO_LABEL_SI NULL
#define CATEGORY_VIDEO_INFO_0_SI NULL
#define CATEGORY_AUDIO_LABEL_SI NULL
#define CATEGORY_AUDIO_INFO_0_SI NULL
#define CATEGORY_INPUT_LABEL_SI NULL
#define CATEGORY_INPUT_INFO_0_SI NULL
#define CATEGORY_HACKS_LABEL_SI NULL
#define CATEGORY_HACKS_INFO_0_SI NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_SI NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_SI NULL
#define OPTION_VAL_COMPOSITE_SI NULL
#define OPTION_VAL_SVIDEO_SI NULL
#define OPTION_VAL_RGB_SI NULL
#define OPTION_VAL_MONOCHROME_SI NULL
#define NESTOPIA_PALETTE_LABEL_SI NULL
#define NESTOPIA_PALETTE_INFO_0_SI NULL
#define OPTION_VAL_CXA2025AS_SI NULL
#define OPTION_VAL_CONSUMER_SI NULL
#define OPTION_VAL_CANONICAL_SI NULL
#define OPTION_VAL_ALTERNATIVE_SI NULL
#define OPTION_VAL_RGB_O1_SI NULL
#define OPTION_VAL_PAL_SI NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_SI NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_SI NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_SI NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_SI NULL
#define OPTION_VAL_RAW_SI NULL
#define OPTION_VAL_CUSTOM_SI NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_SI NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_SI NULL
#define NESTOPIA_OVERCLOCK_LABEL_SI NULL
#define NESTOPIA_OVERCLOCK_INFO_0_SI NULL
#define OPTION_VAL_1X_SI NULL
#define OPTION_VAL_2X_SI NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_SI NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_SI NULL
#define OPTION_VAL_AUTO_SI NULL
#define OPTION_VAL_NTSC_SI NULL
#define OPTION_VAL_FAMICOM_SI NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_SI NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_SI NULL
#define NESTOPIA_OVERSCAN_V_LABEL_SI NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_SI NULL
#define NESTOPIA_OVERSCAN_H_LABEL_SI NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_SI NULL
#define NESTOPIA_ASPECT_LABEL_SI NULL
#define NESTOPIA_ASPECT_INFO_0_SI NULL
#define OPTION_VAL_4_3_SI NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_SI NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_SI NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_SI NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_SI NULL
#define OPTION_VAL_DENDY_SI NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_SI NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_SI NULL
#define OPTION_VAL_0X00_SI NULL
#define OPTION_VAL_0XFF_SI NULL
#define OPTION_VAL_RANDOM_SI NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_SI NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_SI NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_SI NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_SI NULL
#define OPTION_VAL_MOUSE_SI NULL
#define OPTION_VAL_POINTER_SI NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_SI NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_SI NULL
#define OPTION_VAL_LIGHTGUN_SI NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_SI NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_SI NULL
#define NESTOPIA_TURBO_PULSE_LABEL_SI NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_SI NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_SI NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_SI NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_SI NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_SI NULL

struct retro_core_option_v2_category option_cats_si[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SI,
      CATEGORY_VIDEO_INFO_0_SI
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SI,
      CATEGORY_AUDIO_INFO_0_SI
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SI,
      CATEGORY_INPUT_INFO_0_SI
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SI,
      CATEGORY_HACKS_INFO_0_SI
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_si[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_SI,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_SI,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_SI },
         { "svideo",     OPTION_VAL_SVIDEO_SI },
         { "rgb",        OPTION_VAL_RGB_SI },
         { "monochrome", OPTION_VAL_MONOCHROME_SI },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_SI,
      NULL,
      NESTOPIA_PALETTE_INFO_0_SI,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_SI },
         { "consumer",             OPTION_VAL_CONSUMER_SI },
         { "canonical",            OPTION_VAL_CANONICAL_SI },
         { "alternative",          OPTION_VAL_ALTERNATIVE_SI },
         { "rgb",                  OPTION_VAL_RGB_O1_SI },
         { "pal",                  OPTION_VAL_PAL_SI },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_SI },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_SI },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_SI },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_SI },
         { "raw",                  OPTION_VAL_RAW_SI },
         { "custom",               OPTION_VAL_CUSTOM_SI },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_SI,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_SI,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_SI,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_SI,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_SI },
         { "2x", OPTION_VAL_2X_SI },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_SI,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_SI,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_SI },
         { "ntsc",    OPTION_VAL_NTSC_SI },
         { "famicom", OPTION_VAL_FAMICOM_SI },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_SI,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_SI,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_SI,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_SI,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_SI,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_SI,
      NULL,
      NESTOPIA_ASPECT_INFO_0_SI,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SI },
         { "ntsc", OPTION_VAL_NTSC_SI },
         { "pal",  OPTION_VAL_PAL_SI },
         { "4:3",  OPTION_VAL_4_3_SI },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_SI,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_SI,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_SI,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_SI,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_SI },
         { "ntsc",    OPTION_VAL_NTSC_SI },
         { "pal",     OPTION_VAL_PAL_SI },
         { "famicom", OPTION_VAL_FAMICOM_SI },
         { "dendy",   OPTION_VAL_DENDY_SI },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_SI,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_SI,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_SI },
         { "0xFF",   OPTION_VAL_0XFF_SI },
         { "random", OPTION_VAL_RANDOM_SI },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_SI,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_SI, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_SI,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_SI,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_SI },
         { "pointer", OPTION_VAL_POINTER_SI },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_SI,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_SI,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_SI },
         { "mouse", OPTION_VAL_MOUSE_SI },
         { "pointer", OPTION_VAL_POINTER_SI },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_SI,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_SI,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_SI,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_SI,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_SI,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_SI,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_SI,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_SI,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_si = {
   option_cats_si,
   option_defs_si
};

/* RETRO_LANGUAGE_SK */

#define CATEGORY_VIDEO_LABEL_SK NULL
#define CATEGORY_VIDEO_INFO_0_SK NULL
#define CATEGORY_AUDIO_LABEL_SK NULL
#define CATEGORY_AUDIO_INFO_0_SK NULL
#define CATEGORY_INPUT_LABEL_SK NULL
#define CATEGORY_INPUT_INFO_0_SK NULL
#define CATEGORY_HACKS_LABEL_SK NULL
#define CATEGORY_HACKS_INFO_0_SK NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_SK NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_SK NULL
#define OPTION_VAL_COMPOSITE_SK NULL
#define OPTION_VAL_SVIDEO_SK NULL
#define OPTION_VAL_RGB_SK NULL
#define OPTION_VAL_MONOCHROME_SK NULL
#define NESTOPIA_PALETTE_LABEL_SK NULL
#define NESTOPIA_PALETTE_INFO_0_SK NULL
#define OPTION_VAL_CXA2025AS_SK NULL
#define OPTION_VAL_CONSUMER_SK NULL
#define OPTION_VAL_CANONICAL_SK NULL
#define OPTION_VAL_ALTERNATIVE_SK NULL
#define OPTION_VAL_RGB_O1_SK NULL
#define OPTION_VAL_PAL_SK NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_SK NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_SK NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_SK NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_SK NULL
#define OPTION_VAL_RAW_SK NULL
#define OPTION_VAL_CUSTOM_SK NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_SK NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_SK NULL
#define NESTOPIA_OVERCLOCK_LABEL_SK NULL
#define NESTOPIA_OVERCLOCK_INFO_0_SK NULL
#define OPTION_VAL_1X_SK NULL
#define OPTION_VAL_2X_SK NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_SK NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_SK NULL
#define OPTION_VAL_AUTO_SK NULL
#define OPTION_VAL_NTSC_SK NULL
#define OPTION_VAL_FAMICOM_SK NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_SK NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_SK NULL
#define NESTOPIA_OVERSCAN_V_LABEL_SK NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_SK NULL
#define NESTOPIA_OVERSCAN_H_LABEL_SK NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_SK NULL
#define NESTOPIA_ASPECT_LABEL_SK NULL
#define NESTOPIA_ASPECT_INFO_0_SK NULL
#define OPTION_VAL_4_3_SK NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_SK NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_SK NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_SK NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_SK NULL
#define OPTION_VAL_DENDY_SK NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_SK NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_SK NULL
#define OPTION_VAL_0X00_SK NULL
#define OPTION_VAL_0XFF_SK NULL
#define OPTION_VAL_RANDOM_SK NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_SK NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_SK NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_SK NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_SK NULL
#define OPTION_VAL_MOUSE_SK NULL
#define OPTION_VAL_POINTER_SK NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_SK NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_SK NULL
#define OPTION_VAL_LIGHTGUN_SK NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_SK NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_SK NULL
#define NESTOPIA_TURBO_PULSE_LABEL_SK NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_SK NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_SK NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_SK NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_SK NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_SK NULL

struct retro_core_option_v2_category option_cats_sk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SK,
      CATEGORY_VIDEO_INFO_0_SK
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SK,
      CATEGORY_AUDIO_INFO_0_SK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SK,
      CATEGORY_INPUT_INFO_0_SK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SK,
      CATEGORY_HACKS_INFO_0_SK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sk[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_SK,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_SK,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_SK },
         { "svideo",     OPTION_VAL_SVIDEO_SK },
         { "rgb",        OPTION_VAL_RGB_SK },
         { "monochrome", OPTION_VAL_MONOCHROME_SK },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_SK,
      NULL,
      NESTOPIA_PALETTE_INFO_0_SK,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_SK },
         { "consumer",             OPTION_VAL_CONSUMER_SK },
         { "canonical",            OPTION_VAL_CANONICAL_SK },
         { "alternative",          OPTION_VAL_ALTERNATIVE_SK },
         { "rgb",                  OPTION_VAL_RGB_O1_SK },
         { "pal",                  OPTION_VAL_PAL_SK },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_SK },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_SK },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_SK },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_SK },
         { "raw",                  OPTION_VAL_RAW_SK },
         { "custom",               OPTION_VAL_CUSTOM_SK },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_SK,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_SK,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_SK },
         { "2x", OPTION_VAL_2X_SK },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_SK,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_SK,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_SK },
         { "ntsc",    OPTION_VAL_NTSC_SK },
         { "famicom", OPTION_VAL_FAMICOM_SK },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_SK,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_SK,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_SK,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_SK,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_SK,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_SK,
      NULL,
      NESTOPIA_ASPECT_INFO_0_SK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SK },
         { "ntsc", OPTION_VAL_NTSC_SK },
         { "pal",  OPTION_VAL_PAL_SK },
         { "4:3",  OPTION_VAL_4_3_SK },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_SK,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_SK,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_SK,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_SK,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_SK },
         { "ntsc",    OPTION_VAL_NTSC_SK },
         { "pal",     OPTION_VAL_PAL_SK },
         { "famicom", OPTION_VAL_FAMICOM_SK },
         { "dendy",   OPTION_VAL_DENDY_SK },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_SK,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_SK,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_SK },
         { "0xFF",   OPTION_VAL_0XFF_SK },
         { "random", OPTION_VAL_RANDOM_SK },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_SK,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_SK, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_SK,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_SK,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_SK },
         { "pointer", OPTION_VAL_POINTER_SK },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_SK,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_SK,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_SK },
         { "mouse", OPTION_VAL_MOUSE_SK },
         { "pointer", OPTION_VAL_POINTER_SK },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_SK,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_SK,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_SK,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_SK,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_SK,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_SK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_SK,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_SK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sk = {
   option_cats_sk,
   option_defs_sk
};

/* RETRO_LANGUAGE_SR */

#define CATEGORY_VIDEO_LABEL_SR NULL
#define CATEGORY_VIDEO_INFO_0_SR NULL
#define CATEGORY_AUDIO_LABEL_SR NULL
#define CATEGORY_AUDIO_INFO_0_SR NULL
#define CATEGORY_INPUT_LABEL_SR NULL
#define CATEGORY_INPUT_INFO_0_SR NULL
#define CATEGORY_HACKS_LABEL_SR NULL
#define CATEGORY_HACKS_INFO_0_SR NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_SR NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_SR NULL
#define OPTION_VAL_COMPOSITE_SR NULL
#define OPTION_VAL_SVIDEO_SR NULL
#define OPTION_VAL_RGB_SR NULL
#define OPTION_VAL_MONOCHROME_SR NULL
#define NESTOPIA_PALETTE_LABEL_SR NULL
#define NESTOPIA_PALETTE_INFO_0_SR NULL
#define OPTION_VAL_CXA2025AS_SR NULL
#define OPTION_VAL_CONSUMER_SR NULL
#define OPTION_VAL_CANONICAL_SR NULL
#define OPTION_VAL_ALTERNATIVE_SR NULL
#define OPTION_VAL_RGB_O1_SR NULL
#define OPTION_VAL_PAL_SR NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_SR NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_SR NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_SR NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_SR NULL
#define OPTION_VAL_RAW_SR NULL
#define OPTION_VAL_CUSTOM_SR NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_SR NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_SR NULL
#define NESTOPIA_OVERCLOCK_LABEL_SR NULL
#define NESTOPIA_OVERCLOCK_INFO_0_SR NULL
#define OPTION_VAL_1X_SR NULL
#define OPTION_VAL_2X_SR NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_SR NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_SR NULL
#define OPTION_VAL_AUTO_SR NULL
#define OPTION_VAL_NTSC_SR NULL
#define OPTION_VAL_FAMICOM_SR NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_SR NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_SR NULL
#define NESTOPIA_OVERSCAN_V_LABEL_SR NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_SR NULL
#define NESTOPIA_OVERSCAN_H_LABEL_SR NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_SR NULL
#define NESTOPIA_ASPECT_LABEL_SR NULL
#define NESTOPIA_ASPECT_INFO_0_SR NULL
#define OPTION_VAL_4_3_SR NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_SR NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_SR NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_SR NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_SR NULL
#define OPTION_VAL_DENDY_SR NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_SR NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_SR NULL
#define OPTION_VAL_0X00_SR NULL
#define OPTION_VAL_0XFF_SR NULL
#define OPTION_VAL_RANDOM_SR NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_SR NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_SR NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_SR NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_SR NULL
#define OPTION_VAL_MOUSE_SR NULL
#define OPTION_VAL_POINTER_SR NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_SR NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_SR NULL
#define OPTION_VAL_LIGHTGUN_SR NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_SR NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_SR NULL
#define NESTOPIA_TURBO_PULSE_LABEL_SR NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_SR NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_SR NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_SR NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_SR NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_SR NULL

struct retro_core_option_v2_category option_cats_sr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SR,
      CATEGORY_VIDEO_INFO_0_SR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SR,
      CATEGORY_AUDIO_INFO_0_SR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SR,
      CATEGORY_INPUT_INFO_0_SR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SR,
      CATEGORY_HACKS_INFO_0_SR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sr[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_SR,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_SR,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_SR },
         { "svideo",     OPTION_VAL_SVIDEO_SR },
         { "rgb",        OPTION_VAL_RGB_SR },
         { "monochrome", OPTION_VAL_MONOCHROME_SR },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_SR,
      NULL,
      NESTOPIA_PALETTE_INFO_0_SR,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_SR },
         { "consumer",             OPTION_VAL_CONSUMER_SR },
         { "canonical",            OPTION_VAL_CANONICAL_SR },
         { "alternative",          OPTION_VAL_ALTERNATIVE_SR },
         { "rgb",                  OPTION_VAL_RGB_O1_SR },
         { "pal",                  OPTION_VAL_PAL_SR },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_SR },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_SR },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_SR },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_SR },
         { "raw",                  OPTION_VAL_RAW_SR },
         { "custom",               OPTION_VAL_CUSTOM_SR },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_SR,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_SR,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_SR },
         { "2x", OPTION_VAL_2X_SR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_SR,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_SR,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_SR },
         { "ntsc",    OPTION_VAL_NTSC_SR },
         { "famicom", OPTION_VAL_FAMICOM_SR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_SR,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_SR,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_SR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_SR,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_SR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_SR,
      NULL,
      NESTOPIA_ASPECT_INFO_0_SR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SR },
         { "ntsc", OPTION_VAL_NTSC_SR },
         { "pal",  OPTION_VAL_PAL_SR },
         { "4:3",  OPTION_VAL_4_3_SR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_SR,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_SR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_SR,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_SR,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_SR },
         { "ntsc",    OPTION_VAL_NTSC_SR },
         { "pal",     OPTION_VAL_PAL_SR },
         { "famicom", OPTION_VAL_FAMICOM_SR },
         { "dendy",   OPTION_VAL_DENDY_SR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_SR,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_SR,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_SR },
         { "0xFF",   OPTION_VAL_0XFF_SR },
         { "random", OPTION_VAL_RANDOM_SR },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_SR,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_SR, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_SR,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_SR,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_SR },
         { "pointer", OPTION_VAL_POINTER_SR },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_SR,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_SR,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_SR },
         { "mouse", OPTION_VAL_MOUSE_SR },
         { "pointer", OPTION_VAL_POINTER_SR },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_SR,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_SR,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_SR,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_SR,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_SR,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_SR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_SR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_SR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sr = {
   option_cats_sr,
   option_defs_sr
};

/* RETRO_LANGUAGE_SV */

#define CATEGORY_VIDEO_LABEL_SV NULL
#define CATEGORY_VIDEO_INFO_0_SV NULL
#define CATEGORY_AUDIO_LABEL_SV NULL
#define CATEGORY_AUDIO_INFO_0_SV NULL
#define CATEGORY_INPUT_LABEL_SV NULL
#define CATEGORY_INPUT_INFO_0_SV NULL
#define CATEGORY_HACKS_LABEL_SV NULL
#define CATEGORY_HACKS_INFO_0_SV NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_SV NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_SV NULL
#define OPTION_VAL_COMPOSITE_SV NULL
#define OPTION_VAL_SVIDEO_SV NULL
#define OPTION_VAL_RGB_SV NULL
#define OPTION_VAL_MONOCHROME_SV NULL
#define NESTOPIA_PALETTE_LABEL_SV NULL
#define NESTOPIA_PALETTE_INFO_0_SV NULL
#define OPTION_VAL_CXA2025AS_SV NULL
#define OPTION_VAL_CONSUMER_SV NULL
#define OPTION_VAL_CANONICAL_SV NULL
#define OPTION_VAL_ALTERNATIVE_SV NULL
#define OPTION_VAL_RGB_O1_SV NULL
#define OPTION_VAL_PAL_SV NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_SV NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_SV NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_SV NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_SV NULL
#define OPTION_VAL_RAW_SV NULL
#define OPTION_VAL_CUSTOM_SV NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_SV NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_SV NULL
#define NESTOPIA_OVERCLOCK_LABEL_SV NULL
#define NESTOPIA_OVERCLOCK_INFO_0_SV NULL
#define OPTION_VAL_1X_SV NULL
#define OPTION_VAL_2X_SV NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_SV NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_SV NULL
#define OPTION_VAL_AUTO_SV NULL
#define OPTION_VAL_NTSC_SV NULL
#define OPTION_VAL_FAMICOM_SV NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_SV NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_SV NULL
#define NESTOPIA_OVERSCAN_V_LABEL_SV NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_SV NULL
#define NESTOPIA_OVERSCAN_H_LABEL_SV NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_SV NULL
#define NESTOPIA_ASPECT_LABEL_SV NULL
#define NESTOPIA_ASPECT_INFO_0_SV NULL
#define OPTION_VAL_4_3_SV NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_SV NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_SV NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_SV NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_SV NULL
#define OPTION_VAL_DENDY_SV NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_SV NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_SV NULL
#define OPTION_VAL_0X00_SV NULL
#define OPTION_VAL_0XFF_SV NULL
#define OPTION_VAL_RANDOM_SV NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_SV NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_SV NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_SV NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_SV NULL
#define OPTION_VAL_MOUSE_SV NULL
#define OPTION_VAL_POINTER_SV NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_SV NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_SV NULL
#define OPTION_VAL_LIGHTGUN_SV NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_SV NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_SV NULL
#define NESTOPIA_TURBO_PULSE_LABEL_SV NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_SV NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_SV NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_SV NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_SV NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_SV NULL

struct retro_core_option_v2_category option_cats_sv[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_SV,
      CATEGORY_VIDEO_INFO_0_SV
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_SV,
      CATEGORY_AUDIO_INFO_0_SV
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_SV,
      CATEGORY_INPUT_INFO_0_SV
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_SV,
      CATEGORY_HACKS_INFO_0_SV
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_sv[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_SV,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_SV,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_SV },
         { "svideo",     OPTION_VAL_SVIDEO_SV },
         { "rgb",        OPTION_VAL_RGB_SV },
         { "monochrome", OPTION_VAL_MONOCHROME_SV },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_SV,
      NULL,
      NESTOPIA_PALETTE_INFO_0_SV,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_SV },
         { "consumer",             OPTION_VAL_CONSUMER_SV },
         { "canonical",            OPTION_VAL_CANONICAL_SV },
         { "alternative",          OPTION_VAL_ALTERNATIVE_SV },
         { "rgb",                  OPTION_VAL_RGB_O1_SV },
         { "pal",                  OPTION_VAL_PAL_SV },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_SV },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_SV },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_SV },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_SV },
         { "raw",                  OPTION_VAL_RAW_SV },
         { "custom",               OPTION_VAL_CUSTOM_SV },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_SV,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_SV,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_SV },
         { "2x", OPTION_VAL_2X_SV },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_SV,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_SV,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_SV },
         { "ntsc",    OPTION_VAL_NTSC_SV },
         { "famicom", OPTION_VAL_FAMICOM_SV },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_SV,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_SV,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_SV,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_SV,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_SV,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_SV,
      NULL,
      NESTOPIA_ASPECT_INFO_0_SV,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_SV },
         { "ntsc", OPTION_VAL_NTSC_SV },
         { "pal",  OPTION_VAL_PAL_SV },
         { "4:3",  OPTION_VAL_4_3_SV },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_SV,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_SV,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_SV,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_SV,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_SV },
         { "ntsc",    OPTION_VAL_NTSC_SV },
         { "pal",     OPTION_VAL_PAL_SV },
         { "famicom", OPTION_VAL_FAMICOM_SV },
         { "dendy",   OPTION_VAL_DENDY_SV },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_SV,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_SV,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_SV },
         { "0xFF",   OPTION_VAL_0XFF_SV },
         { "random", OPTION_VAL_RANDOM_SV },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_SV,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_SV, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_SV,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_SV,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_SV },
         { "pointer", OPTION_VAL_POINTER_SV },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_SV,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_SV,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_SV },
         { "mouse", OPTION_VAL_MOUSE_SV },
         { "pointer", OPTION_VAL_POINTER_SV },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_SV,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_SV,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_SV,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_SV,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_SV,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_SV,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_SV,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_SV,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_sv = {
   option_cats_sv,
   option_defs_sv
};

/* RETRO_LANGUAGE_TR */

#define CATEGORY_VIDEO_LABEL_TR NULL
#define CATEGORY_VIDEO_INFO_0_TR NULL
#define CATEGORY_AUDIO_LABEL_TR NULL
#define CATEGORY_AUDIO_INFO_0_TR NULL
#define CATEGORY_INPUT_LABEL_TR NULL
#define CATEGORY_INPUT_INFO_0_TR NULL
#define CATEGORY_HACKS_LABEL_TR NULL
#define CATEGORY_HACKS_INFO_0_TR NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_TR "Blargg NTSC Filtresi"
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_TR "Blargg NTSC filtrelerini etkinleştirin."
#define OPTION_VAL_COMPOSITE_TR "Kompozit Video"
#define OPTION_VAL_SVIDEO_TR NULL
#define OPTION_VAL_RGB_TR NULL
#define OPTION_VAL_MONOCHROME_TR "Tek renkli"
#define NESTOPIA_PALETTE_LABEL_TR "Palet"
#define NESTOPIA_PALETTE_INFO_0_TR "Hangi renk paletinin kullanılacağını seçin."
#define OPTION_VAL_CXA2025AS_TR NULL
#define OPTION_VAL_CONSUMER_TR NULL
#define OPTION_VAL_CANONICAL_TR "Standart"
#define OPTION_VAL_ALTERNATIVE_TR "Alternatif"
#define OPTION_VAL_RGB_O1_TR NULL
#define OPTION_VAL_PAL_TR NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_TR "Doğrudan Kompozit FBx"
#define OPTION_VAL_PVM_STYLE_D93_FBX_TR NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_TR "NTSC donanım FBx"
#define OPTION_VAL_NES_CLASSIC_FBX_FS_TR "NES Klasik FBx FS"
#define OPTION_VAL_RAW_TR NULL
#define OPTION_VAL_CUSTOM_TR "Özel"
#define NESTOPIA_NOSPRITELIMIT_LABEL_TR "Sprite Limitini Kaldır"
#define NESTOPIA_NOSPRITELIMIT_INFO_0_TR "Tarama başına 8 sprite donanım sınırını kaldır."
#define NESTOPIA_OVERCLOCK_LABEL_TR "CPU Hızı (Hız aşırtma)"
#define NESTOPIA_OVERCLOCK_INFO_0_TR "Öykünülmüş CPU'ya hız aşırtma uygula."
#define OPTION_VAL_1X_TR NULL
#define OPTION_VAL_2X_TR NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_TR "4 Oyuncu Adaptörü"
#define NESTOPIA_SELECT_ADAPTER_INFO_0_TR "Gerekirse manuel olarak bir 4 Oyuncu Adaptörü seçin. Bazı oyunlar bağdaştırıcıyı NstDatabase.xml veritabanıyla doğru bir şekilde tanıyamayabilir, bu seçenek bunu düzeltmeye yardımcı olur."
#define OPTION_VAL_AUTO_TR "Otomatik"
#define OPTION_VAL_NTSC_TR NULL
#define OPTION_VAL_FAMICOM_TR NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_TR "FDS Otomatik Ekleme"
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_TR "Yeniden başlatmada ilk FDS diskini otomatik olarak yerleştirir."
#define NESTOPIA_OVERSCAN_V_LABEL_TR "Aşırı Taşmayı Maskele (Dikey)"
#define NESTOPIA_OVERSCAN_V_INFO_0_TR "Standart tanımlı bir televizyon ekranının kenarı çevresinde çerçeve tarafından gizlenmiş olabilecek potansiyel olarak rastgele aksaklık video çıkışını maskeleyin (dikey olarak)."
#define NESTOPIA_OVERSCAN_H_LABEL_TR "Aşırı Taşmayı Maskele (Yatay)"
#define NESTOPIA_OVERSCAN_H_INFO_0_TR "Standart tanımlı bir televizyon ekranının kenarı çevresinde çerçeve tarafından gizlenmiş olabilecek rastgele aksaklıklı video çıkışını maskeleyin (yatay olarak)."
#define NESTOPIA_ASPECT_LABEL_TR "Tercih Edilen En Boy Oranı"
#define NESTOPIA_ASPECT_INFO_0_TR "Tercih edilen en boy oranını seçin. RetroArch'ın en boy oranı, Video ayarlarında 'Çekirdek Tarafından Sağlanan'  olarak ayarlanmalıdır. 'Otomatik', en-boy oranı otomatik belirlemesi için NstDatabase.xml veritabanını kullanır. Eğer mevcut bir veritabanı yoksa, 'Otomatik' için NTSC'ye varsayılan olacaktır."
#define OPTION_VAL_4_3_TR NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_TR "Game Genie Ses Bozulma"
#define NESTOPIA_GENIE_DISTORTION_INFO_0_TR "Game Genie hile cihazı yanlışlıkla oyunlarda ses bozulmalarına neden olabilir. Bunu etkinleştirerek, oyun sesine ekleyeceği bozulmayı taklit edebilirsiniz."
#define NESTOPIA_FAVORED_SYSTEM_LABEL_TR "Sistem Bölgesi"
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_TR "Sistemin hangi bölgeden olacağını seçin. 'Otomatik' bölgenin otomatik belirlenmesi için NstDatabase.xml veritabanı dosyasını kullanır. Eğer mevcut bir veritabanı yoksa, 'Otomatik' için NTSC'ye varsayılan olacaktır."
#define OPTION_VAL_DENDY_TR NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_TR "Açılıştaki RAM Durumu"
#define NESTOPIA_RAM_POWER_STATE_INFO_0_TR NULL
#define OPTION_VAL_0X00_TR NULL
#define OPTION_VAL_0XFF_TR NULL
#define OPTION_VAL_RANDOM_TR "Rastgele"
#define NESTOPIA_BUTTON_SHIFT_LABEL_TR "A/B/X/Y Saat Yönünde Kaydırma"
#define NESTOPIA_BUTTON_SHIFT_INFO_0_TR "A/B/X/Y tuşlarını saat yönünde çevirir."
#define NESTOPIA_ARKANOID_DEVICE_LABEL_TR NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_TR NULL
#define OPTION_VAL_MOUSE_TR NULL
#define OPTION_VAL_POINTER_TR NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_TR NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_TR NULL
#define OPTION_VAL_LIGHTGUN_TR NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_TR NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_TR NULL
#define NESTOPIA_TURBO_PULSE_LABEL_TR NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_TR "Turbo B ve Turbo A düğmeleri için turbo hızını ayarlayın."
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_TR NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_TR NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_TR NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_TR NULL

struct retro_core_option_v2_category option_cats_tr[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_TR,
      CATEGORY_VIDEO_INFO_0_TR
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_TR,
      CATEGORY_AUDIO_INFO_0_TR
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_TR,
      CATEGORY_INPUT_INFO_0_TR
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_TR,
      CATEGORY_HACKS_INFO_0_TR
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_tr[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_TR,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_TR,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_TR },
         { "svideo",     OPTION_VAL_SVIDEO_TR },
         { "rgb",        OPTION_VAL_RGB_TR },
         { "monochrome", OPTION_VAL_MONOCHROME_TR },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_TR,
      NULL,
      NESTOPIA_PALETTE_INFO_0_TR,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_TR },
         { "consumer",             OPTION_VAL_CONSUMER_TR },
         { "canonical",            OPTION_VAL_CANONICAL_TR },
         { "alternative",          OPTION_VAL_ALTERNATIVE_TR },
         { "rgb",                  OPTION_VAL_RGB_O1_TR },
         { "pal",                  OPTION_VAL_PAL_TR },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_TR },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_TR },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_TR },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_TR },
         { "raw",                  OPTION_VAL_RAW_TR },
         { "custom",               OPTION_VAL_CUSTOM_TR },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_TR,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_TR,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_TR },
         { "2x", OPTION_VAL_2X_TR },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_TR,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_TR,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_TR },
         { "ntsc",    OPTION_VAL_NTSC_TR },
         { "famicom", OPTION_VAL_FAMICOM_TR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_TR,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_TR,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_TR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_TR,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_TR,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_TR,
      NULL,
      NESTOPIA_ASPECT_INFO_0_TR,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_TR },
         { "ntsc", OPTION_VAL_NTSC_TR },
         { "pal",  OPTION_VAL_PAL_TR },
         { "4:3",  OPTION_VAL_4_3_TR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_TR,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_TR,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_TR,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_TR,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_TR },
         { "ntsc",    OPTION_VAL_NTSC_TR },
         { "pal",     OPTION_VAL_PAL_TR },
         { "famicom", OPTION_VAL_FAMICOM_TR },
         { "dendy",   OPTION_VAL_DENDY_TR },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_TR,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_TR,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_TR },
         { "0xFF",   OPTION_VAL_0XFF_TR },
         { "random", OPTION_VAL_RANDOM_TR },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_TR,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_TR, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_TR,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_TR,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_TR },
         { "pointer", OPTION_VAL_POINTER_TR },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_TR,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_TR,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_TR },
         { "mouse", OPTION_VAL_MOUSE_TR },
         { "pointer", OPTION_VAL_POINTER_TR },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_TR,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_TR,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_TR,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_TR,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_TR,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_TR,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_TR,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_TR,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_tr = {
   option_cats_tr,
   option_defs_tr
};

/* RETRO_LANGUAGE_UK */

#define CATEGORY_VIDEO_LABEL_UK NULL
#define CATEGORY_VIDEO_INFO_0_UK NULL
#define CATEGORY_AUDIO_LABEL_UK NULL
#define CATEGORY_AUDIO_INFO_0_UK NULL
#define CATEGORY_INPUT_LABEL_UK NULL
#define CATEGORY_INPUT_INFO_0_UK NULL
#define CATEGORY_HACKS_LABEL_UK NULL
#define CATEGORY_HACKS_INFO_0_UK NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_UK NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_UK NULL
#define OPTION_VAL_COMPOSITE_UK NULL
#define OPTION_VAL_SVIDEO_UK NULL
#define OPTION_VAL_RGB_UK NULL
#define OPTION_VAL_MONOCHROME_UK NULL
#define NESTOPIA_PALETTE_LABEL_UK NULL
#define NESTOPIA_PALETTE_INFO_0_UK NULL
#define OPTION_VAL_CXA2025AS_UK NULL
#define OPTION_VAL_CONSUMER_UK NULL
#define OPTION_VAL_CANONICAL_UK NULL
#define OPTION_VAL_ALTERNATIVE_UK NULL
#define OPTION_VAL_RGB_O1_UK NULL
#define OPTION_VAL_PAL_UK NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_UK NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_UK NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_UK NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_UK NULL
#define OPTION_VAL_RAW_UK NULL
#define OPTION_VAL_CUSTOM_UK NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_UK NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_UK NULL
#define NESTOPIA_OVERCLOCK_LABEL_UK NULL
#define NESTOPIA_OVERCLOCK_INFO_0_UK NULL
#define OPTION_VAL_1X_UK NULL
#define OPTION_VAL_2X_UK NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_UK NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_UK NULL
#define OPTION_VAL_AUTO_UK NULL
#define OPTION_VAL_NTSC_UK NULL
#define OPTION_VAL_FAMICOM_UK NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_UK NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_UK NULL
#define NESTOPIA_OVERSCAN_V_LABEL_UK NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_UK NULL
#define NESTOPIA_OVERSCAN_H_LABEL_UK NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_UK NULL
#define NESTOPIA_ASPECT_LABEL_UK NULL
#define NESTOPIA_ASPECT_INFO_0_UK NULL
#define OPTION_VAL_4_3_UK NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_UK NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_UK NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_UK NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_UK NULL
#define OPTION_VAL_DENDY_UK NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_UK NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_UK NULL
#define OPTION_VAL_0X00_UK NULL
#define OPTION_VAL_0XFF_UK NULL
#define OPTION_VAL_RANDOM_UK NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_UK NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_UK NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_UK NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_UK NULL
#define OPTION_VAL_MOUSE_UK NULL
#define OPTION_VAL_POINTER_UK NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_UK NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_UK NULL
#define OPTION_VAL_LIGHTGUN_UK NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_UK NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_UK NULL
#define NESTOPIA_TURBO_PULSE_LABEL_UK NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_UK NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_UK NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_UK NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_UK NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_UK NULL

struct retro_core_option_v2_category option_cats_uk[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_UK,
      CATEGORY_VIDEO_INFO_0_UK
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_UK,
      CATEGORY_AUDIO_INFO_0_UK
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_UK,
      CATEGORY_INPUT_INFO_0_UK
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_UK,
      CATEGORY_HACKS_INFO_0_UK
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_uk[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_UK,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_UK,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_UK },
         { "svideo",     OPTION_VAL_SVIDEO_UK },
         { "rgb",        OPTION_VAL_RGB_UK },
         { "monochrome", OPTION_VAL_MONOCHROME_UK },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_UK,
      NULL,
      NESTOPIA_PALETTE_INFO_0_UK,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_UK },
         { "consumer",             OPTION_VAL_CONSUMER_UK },
         { "canonical",            OPTION_VAL_CANONICAL_UK },
         { "alternative",          OPTION_VAL_ALTERNATIVE_UK },
         { "rgb",                  OPTION_VAL_RGB_O1_UK },
         { "pal",                  OPTION_VAL_PAL_UK },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_UK },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_UK },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_UK },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_UK },
         { "raw",                  OPTION_VAL_RAW_UK },
         { "custom",               OPTION_VAL_CUSTOM_UK },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_UK,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_UK,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_UK },
         { "2x", OPTION_VAL_2X_UK },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_UK,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_UK,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_UK },
         { "ntsc",    OPTION_VAL_NTSC_UK },
         { "famicom", OPTION_VAL_FAMICOM_UK },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_UK,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_UK,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_UK,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_UK,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_UK,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_UK,
      NULL,
      NESTOPIA_ASPECT_INFO_0_UK,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_UK },
         { "ntsc", OPTION_VAL_NTSC_UK },
         { "pal",  OPTION_VAL_PAL_UK },
         { "4:3",  OPTION_VAL_4_3_UK },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_UK,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_UK,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_UK,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_UK,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_UK },
         { "ntsc",    OPTION_VAL_NTSC_UK },
         { "pal",     OPTION_VAL_PAL_UK },
         { "famicom", OPTION_VAL_FAMICOM_UK },
         { "dendy",   OPTION_VAL_DENDY_UK },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_UK,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_UK,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_UK },
         { "0xFF",   OPTION_VAL_0XFF_UK },
         { "random", OPTION_VAL_RANDOM_UK },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_UK,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_UK, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_UK,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_UK,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_UK },
         { "pointer", OPTION_VAL_POINTER_UK },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_UK,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_UK,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_UK },
         { "mouse", OPTION_VAL_MOUSE_UK },
         { "pointer", OPTION_VAL_POINTER_UK },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_UK,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_UK,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_UK,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_UK,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_UK,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_UK,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_UK,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_UK,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_uk = {
   option_cats_uk,
   option_defs_uk
};

/* RETRO_LANGUAGE_VN */

#define CATEGORY_VIDEO_LABEL_VN NULL
#define CATEGORY_VIDEO_INFO_0_VN NULL
#define CATEGORY_AUDIO_LABEL_VN NULL
#define CATEGORY_AUDIO_INFO_0_VN NULL
#define CATEGORY_INPUT_LABEL_VN NULL
#define CATEGORY_INPUT_INFO_0_VN NULL
#define CATEGORY_HACKS_LABEL_VN NULL
#define CATEGORY_HACKS_INFO_0_VN NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_LABEL_VN NULL
#define NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_VN NULL
#define OPTION_VAL_COMPOSITE_VN NULL
#define OPTION_VAL_SVIDEO_VN NULL
#define OPTION_VAL_RGB_VN NULL
#define OPTION_VAL_MONOCHROME_VN NULL
#define NESTOPIA_PALETTE_LABEL_VN NULL
#define NESTOPIA_PALETTE_INFO_0_VN NULL
#define OPTION_VAL_CXA2025AS_VN NULL
#define OPTION_VAL_CONSUMER_VN NULL
#define OPTION_VAL_CANONICAL_VN NULL
#define OPTION_VAL_ALTERNATIVE_VN NULL
#define OPTION_VAL_RGB_O1_VN NULL
#define OPTION_VAL_PAL_VN NULL
#define OPTION_VAL_COMPOSITE_DIRECT_FBX_VN NULL
#define OPTION_VAL_PVM_STYLE_D93_FBX_VN NULL
#define OPTION_VAL_NTSC_HARDWARE_FBX_VN NULL
#define OPTION_VAL_NES_CLASSIC_FBX_FS_VN NULL
#define OPTION_VAL_RAW_VN NULL
#define OPTION_VAL_CUSTOM_VN NULL
#define NESTOPIA_NOSPRITELIMIT_LABEL_VN NULL
#define NESTOPIA_NOSPRITELIMIT_INFO_0_VN NULL
#define NESTOPIA_OVERCLOCK_LABEL_VN NULL
#define NESTOPIA_OVERCLOCK_INFO_0_VN NULL
#define OPTION_VAL_1X_VN NULL
#define OPTION_VAL_2X_VN NULL
#define NESTOPIA_SELECT_ADAPTER_LABEL_VN NULL
#define NESTOPIA_SELECT_ADAPTER_INFO_0_VN NULL
#define OPTION_VAL_AUTO_VN NULL
#define OPTION_VAL_NTSC_VN NULL
#define OPTION_VAL_FAMICOM_VN NULL
#define NESTOPIA_FDS_AUTO_INSERT_LABEL_VN NULL
#define NESTOPIA_FDS_AUTO_INSERT_INFO_0_VN NULL
#define NESTOPIA_OVERSCAN_V_LABEL_VN NULL
#define NESTOPIA_OVERSCAN_V_INFO_0_VN NULL
#define NESTOPIA_OVERSCAN_H_LABEL_VN NULL
#define NESTOPIA_OVERSCAN_H_INFO_0_VN NULL
#define NESTOPIA_ASPECT_LABEL_VN NULL
#define NESTOPIA_ASPECT_INFO_0_VN NULL
#define OPTION_VAL_4_3_VN NULL
#define NESTOPIA_GENIE_DISTORTION_LABEL_VN NULL
#define NESTOPIA_GENIE_DISTORTION_INFO_0_VN NULL
#define NESTOPIA_FAVORED_SYSTEM_LABEL_VN NULL
#define NESTOPIA_FAVORED_SYSTEM_INFO_0_VN NULL
#define OPTION_VAL_DENDY_VN NULL
#define NESTOPIA_RAM_POWER_STATE_LABEL_VN NULL
#define NESTOPIA_RAM_POWER_STATE_INFO_0_VN NULL
#define OPTION_VAL_0X00_VN NULL
#define OPTION_VAL_0XFF_VN NULL
#define OPTION_VAL_RANDOM_VN NULL
#define NESTOPIA_BUTTON_SHIFT_LABEL_VN NULL
#define NESTOPIA_BUTTON_SHIFT_INFO_0_VN NULL
#define NESTOPIA_ARKANOID_DEVICE_LABEL_VN NULL
#define NESTOPIA_ARKANOID_DEVICE_INFO_0_VN NULL
#define OPTION_VAL_MOUSE_VN NULL
#define OPTION_VAL_POINTER_VN NULL
#define NESTOPIA_ZAPPER_DEVICE_LABEL_VN NULL
#define NESTOPIA_ZAPPER_DEVICE_INFO_0_VN NULL
#define OPTION_VAL_LIGHTGUN_VN NULL
#define NESTOPIA_SHOW_CROSSHAIR_LABEL_VN NULL
#define NESTOPIA_SHOW_CROSSHAIR_INFO_0_VN NULL
#define NESTOPIA_TURBO_PULSE_LABEL_VN NULL
#define NESTOPIA_TURBO_PULSE_INFO_0_VN NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_VN NULL
#define NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_SQ1_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_SQ1_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_SQ2_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_SQ2_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_TRI_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_TRI_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_NOISE_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_NOISE_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_DPCM_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_DPCM_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_FDS_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_FDS_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_MMC5_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_MMC5_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_VRC6_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_VRC6_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_VRC7_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_VRC7_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_N163_LABEL_VN NULL
#define NESTOPIA_AUDIO_VOL_N163_INFO_0_VN NULL
#define NESTOPIA_AUDIO_VOL_S5B_LABEL_VN NULL

struct retro_core_option_v2_category option_cats_vn[] = {
   {
      "video",
      CATEGORY_VIDEO_LABEL_VN,
      CATEGORY_VIDEO_INFO_0_VN
   },
   {
      "audio",
      CATEGORY_AUDIO_LABEL_VN,
      CATEGORY_AUDIO_INFO_0_VN
   },
   {
      "input",
      CATEGORY_INPUT_LABEL_VN,
      CATEGORY_INPUT_INFO_0_VN
   },
   {
      "hacks",
      CATEGORY_HACKS_LABEL_VN,
      CATEGORY_HACKS_INFO_0_VN
   },
   { NULL, NULL, NULL },
};
struct retro_core_option_v2_definition option_defs_vn[] = {
   {
      "nestopia_blargg_ntsc_filter",
      NESTOPIA_BLARGG_NTSC_FILTER_LABEL_VN,
      NULL,
      NESTOPIA_BLARGG_NTSC_FILTER_INFO_0_VN,
      NULL,
      "video",
      {
         { "disabled",   NULL },
         { "composite",  OPTION_VAL_COMPOSITE_VN },
         { "svideo",     OPTION_VAL_SVIDEO_VN },
         { "rgb",        OPTION_VAL_RGB_VN },
         { "monochrome", OPTION_VAL_MONOCHROME_VN },
         { NULL, NULL },
      },
      "disabled"
   },
   {/* TODO explain the custom option */
      "nestopia_palette",
      NESTOPIA_PALETTE_LABEL_VN,
      NULL,
      NESTOPIA_PALETTE_INFO_0_VN,
      NULL,
      "video",
      {
         { "cxa2025as",            OPTION_VAL_CXA2025AS_VN },
         { "consumer",             OPTION_VAL_CONSUMER_VN },
         { "canonical",            OPTION_VAL_CANONICAL_VN },
         { "alternative",          OPTION_VAL_ALTERNATIVE_VN },
         { "rgb",                  OPTION_VAL_RGB_O1_VN },
         { "pal",                  OPTION_VAL_PAL_VN },
         { "composite-direct-fbx", OPTION_VAL_COMPOSITE_DIRECT_FBX_VN },
         { "pvm-style-d93-fbx",    OPTION_VAL_PVM_STYLE_D93_FBX_VN },
         { "ntsc-hardware-fbx",    OPTION_VAL_NTSC_HARDWARE_FBX_VN },
         { "nes-classic-fbx-fs",   OPTION_VAL_NES_CLASSIC_FBX_FS_VN },
         { "raw",                  OPTION_VAL_RAW_VN },
         { "custom",               OPTION_VAL_CUSTOM_VN },
         { NULL, NULL },
      },
      "cxa2025as" /* TODO/FIXME - is this correct ? */
   },
   {
      "nestopia_nospritelimit",
      NESTOPIA_NOSPRITELIMIT_LABEL_VN,
      NULL,
      NESTOPIA_NOSPRITELIMIT_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_overclock",
      NESTOPIA_OVERCLOCK_LABEL_VN,
      NULL,
      NESTOPIA_OVERCLOCK_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "1x", OPTION_VAL_1X_VN },
         { "2x", OPTION_VAL_2X_VN },
         { NULL, NULL },
      },
      "1x"
   },
   {
      "nestopia_select_adapter",
      NESTOPIA_SELECT_ADAPTER_LABEL_VN,
      NULL,
      NESTOPIA_SELECT_ADAPTER_INFO_0_VN,
      NULL,
      "input",
      {
         { "auto",    OPTION_VAL_AUTO_VN },
         { "ntsc",    OPTION_VAL_NTSC_VN },
         { "famicom", OPTION_VAL_FAMICOM_VN },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_fds_auto_insert",
      NESTOPIA_FDS_AUTO_INSERT_LABEL_VN,
      NULL,
      NESTOPIA_FDS_AUTO_INSERT_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_v",
      NESTOPIA_OVERSCAN_V_LABEL_VN,
      NULL,
      NESTOPIA_OVERSCAN_V_INFO_0_VN,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "enabled"
   },
   {
      "nestopia_overscan_h",
      NESTOPIA_OVERSCAN_H_LABEL_VN,
      NULL,
      NESTOPIA_OVERSCAN_H_INFO_0_VN,
      NULL,
      "video",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_aspect",
      NESTOPIA_ASPECT_LABEL_VN,
      NULL,
      NESTOPIA_ASPECT_INFO_0_VN,
      NULL,
      "video",
      {
         { "auto", OPTION_VAL_AUTO_VN },
         { "ntsc", OPTION_VAL_NTSC_VN },
         { "pal",  OPTION_VAL_PAL_VN },
         { "4:3",  OPTION_VAL_4_3_VN },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_genie_distortion",
      NESTOPIA_GENIE_DISTORTION_LABEL_VN,
      NULL,
      NESTOPIA_GENIE_DISTORTION_INFO_0_VN,
      NULL,
      "audio",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_favored_system",
      NESTOPIA_FAVORED_SYSTEM_LABEL_VN,
      NULL,
      NESTOPIA_FAVORED_SYSTEM_INFO_0_VN,
      NULL,
      NULL,
      {
         { "auto",    OPTION_VAL_AUTO_VN },
         { "ntsc",    OPTION_VAL_NTSC_VN },
         { "pal",     OPTION_VAL_PAL_VN },
         { "famicom", OPTION_VAL_FAMICOM_VN },
         { "dendy",   OPTION_VAL_DENDY_VN },
         { NULL, NULL },
      },
      "auto"
   },
   {
      "nestopia_ram_power_state",
      NESTOPIA_RAM_POWER_STATE_LABEL_VN,
      NULL,
      NESTOPIA_RAM_POWER_STATE_INFO_0_VN,
      NULL,
      "hacks",
      {
         { "0x00",   OPTION_VAL_0X00_VN },
         { "0xFF",   OPTION_VAL_0XFF_VN },
         { "random", OPTION_VAL_RANDOM_VN },
         { NULL, NULL },
      },
      "0x00"
   },
   {
      "nestopia_button_shift",
      NESTOPIA_BUTTON_SHIFT_LABEL_VN,
      NULL,
      NESTOPIA_BUTTON_SHIFT_INFO_0_VN, /* is this right? @gadsby */
      NULL,
      "input",
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL },
      },
      "disabled"
   },
   {
      "nestopia_arkanoid_device",
      NESTOPIA_ARKANOID_DEVICE_LABEL_VN,
      NULL,
      NESTOPIA_ARKANOID_DEVICE_INFO_0_VN,
      NULL,
      "input",
      {
         { "mouse", OPTION_VAL_MOUSE_VN },
         { "pointer", OPTION_VAL_POINTER_VN },
      },
      "mouse"
   },
   {
      "nestopia_zapper_device",
      NESTOPIA_ZAPPER_DEVICE_LABEL_VN,
      NULL,
      NESTOPIA_ZAPPER_DEVICE_INFO_0_VN,
      NULL,
      "input",
      {
         { "lightgun", OPTION_VAL_LIGHTGUN_VN },
         { "mouse", OPTION_VAL_MOUSE_VN },
         { "pointer", OPTION_VAL_POINTER_VN },
         { NULL, NULL },
      },
      "lightgun",
   },
   {
      "nestopia_show_crosshair",
      NESTOPIA_SHOW_CROSSHAIR_LABEL_VN,
      NULL,
      NESTOPIA_SHOW_CROSSHAIR_INFO_0_VN,
      NULL,
      "input",
      {
         { "disabled", NULL},
         { "enabled", NULL },
      },
      "enabled"
   },
   {
      "nestopia_turbo_pulse",
      NESTOPIA_TURBO_PULSE_LABEL_VN,
      NULL,
      NESTOPIA_TURBO_PULSE_INFO_0_VN,
      NULL,
      "input",
      {
         { "2", NULL },
         { "3", NULL },
         { "4", NULL },
         { "5", NULL },
         { "6", NULL },
         { "7", NULL },
         { "8", NULL },
         { "9", NULL },
         { NULL, NULL },
      },
      "2"
   },
   {
      "nestopia_show_advanced_av_settings",
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_LABEL_VN,
      NULL,
      NESTOPIA_SHOW_ADVANCED_AV_SETTINGS_INFO_0_VN,
      NULL,
      NULL,
      {
         { "disabled", NULL },
         { "enabled",  NULL },
         { NULL, NULL},
      },
      "disabled"
   },
   {
      "nestopia_audio_vol_sq1",
      NESTOPIA_AUDIO_VOL_SQ1_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ1_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_sq2",
      NESTOPIA_AUDIO_VOL_SQ2_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_SQ2_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_tri",
      NESTOPIA_AUDIO_VOL_TRI_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_TRI_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_noise",
      NESTOPIA_AUDIO_VOL_NOISE_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_NOISE_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_dpcm",
      NESTOPIA_AUDIO_VOL_DPCM_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_DPCM_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_fds",
      NESTOPIA_AUDIO_VOL_FDS_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_FDS_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_mmc5",
      NESTOPIA_AUDIO_VOL_MMC5_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_MMC5_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc6",
      NESTOPIA_AUDIO_VOL_VRC6_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC6_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_vrc7",
      NESTOPIA_AUDIO_VOL_VRC7_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_VRC7_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_n163",
      NESTOPIA_AUDIO_VOL_N163_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   {
      "nestopia_audio_vol_s5b",
      NESTOPIA_AUDIO_VOL_S5B_LABEL_VN,
      NULL,
      NESTOPIA_AUDIO_VOL_N163_INFO_0_VN,
      NULL,
      "audio",
      {
         { "0", NULL },
         { "10", NULL },
         { "20", NULL },
         { "30", NULL },
         { "40", NULL },
         { "50", NULL },
         { "60", NULL },
         { "70", NULL },
         { "80", NULL },
         { "85", NULL },
         { "90", NULL },
         { "95", NULL },
         { "100", NULL },
         { NULL, NULL },
      },
      "100"
   },
   { NULL, NULL, NULL, NULL, NULL, NULL, {{0}}, NULL },
};
struct retro_core_options_v2 options_vn = {
   option_cats_vn,
   option_defs_vn
};


#ifdef __cplusplus
}
#endif

#endif
