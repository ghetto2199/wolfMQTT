#ifndef WOLFMQTT_ZEPHYR_SAMPLE_SETTINGS_H
#define WOLFMQTT_ZEPHYR_SAMPLE_SETTINGS_H

#ifdef __cplusplus
extern "C" {
#endif

#ifdef CONFIG_WOLFSSL_SETTINGS_FILE
#include CONFIG_WOLFSSL_SETTINGS_FILE
#endif

#undef NO_FILESYSTEM
#define NO_FILESYSTEM

#define WOLFMQTT_TOPIC_NAME "sensors"
#define WOLFMQTT_DEFAULT_TLS 1
#define DEFAULT_MQTT_HOST "192.0.2.2"
#define ENABLE_MQTT_TLS
#define NO_MAIN_DRIVER

const static unsigned char root_ca[] = {
    0x30, 0x82, 0x04, 0xe9, 0x30, 0x82, 0x03, 0xd1, 0xa0, 0x03, 0x02, 0x01,
    0x02, 0x02, 0x09, 0x00, 0xaa, 0xd3, 0x3f, 0xac, 0x18, 0x0a, 0x37, 0x4d,
    0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01,
    0x0b, 0x05, 0x00, 0x30, 0x81, 0x94, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03,
    0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x10, 0x30, 0x0e, 0x06,
    0x03, 0x55, 0x04, 0x08, 0x0c, 0x07, 0x4d, 0x6f, 0x6e, 0x74, 0x61, 0x6e,
    0x61, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x07,
    0x42, 0x6f, 0x7a, 0x65, 0x6d, 0x61, 0x6e, 0x31, 0x11, 0x30, 0x0f, 0x06,
    0x03, 0x55, 0x04, 0x0a, 0x0c, 0x08, 0x53, 0x61, 0x77, 0x74, 0x6f, 0x6f,
    0x74, 0x68, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x0c,
    0x0a, 0x43, 0x6f, 0x6e, 0x73, 0x75, 0x6c, 0x74, 0x69, 0x6e, 0x67, 0x31,
    0x18, 0x30, 0x16, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0f, 0x77, 0x77,
    0x77, 0x2e, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f,
    0x6d, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7,
    0x0d, 0x01, 0x09, 0x01, 0x16, 0x10, 0x69, 0x6e, 0x66, 0x6f, 0x40, 0x77,
    0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x1e,
    0x17, 0x0d, 0x32, 0x31, 0x30, 0x32, 0x31, 0x30, 0x31, 0x39, 0x34, 0x39,
    0x35, 0x32, 0x5a, 0x17, 0x0d, 0x32, 0x33, 0x31, 0x31, 0x30, 0x37, 0x31,
    0x39, 0x34, 0x39, 0x35, 0x32, 0x5a, 0x30, 0x81, 0x94, 0x31, 0x0b, 0x30,
    0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x10,
    0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x08, 0x0c, 0x07, 0x4d, 0x6f, 0x6e,
    0x74, 0x61, 0x6e, 0x61, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04,
    0x07, 0x0c, 0x07, 0x42, 0x6f, 0x7a, 0x65, 0x6d, 0x61, 0x6e, 0x31, 0x11,
    0x30, 0x0f, 0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x08, 0x53, 0x61, 0x77,
    0x74, 0x6f, 0x6f, 0x74, 0x68, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55,
    0x04, 0x0b, 0x0c, 0x0a, 0x43, 0x6f, 0x6e, 0x73, 0x75, 0x6c, 0x74, 0x69,
    0x6e, 0x67, 0x31, 0x18, 0x30, 0x16, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c,
    0x0f, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c,
    0x2e, 0x63, 0x6f, 0x6d, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x09, 0x2a, 0x86,
    0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x10, 0x69, 0x6e, 0x66,
    0x6f, 0x40, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f,
    0x6d, 0x30, 0x82, 0x01, 0x22, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48,
    0x86, 0xf7, 0x0d, 0x01, 0x01, 0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f,
    0x00, 0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01, 0x00, 0xbf, 0x0c,
    0xca, 0x2d, 0x14, 0xb2, 0x1e, 0x84, 0x42, 0x5b, 0xcd, 0x38, 0x1f, 0x4a,
    0xf2, 0x4d, 0x75, 0x10, 0xf1, 0xb6, 0x35, 0x9f, 0xdf, 0xca, 0x7d, 0x03,
    0x98, 0xd3, 0xac, 0xde, 0x03, 0x66, 0xee, 0x2a, 0xf1, 0xd8, 0xb0, 0x7d,
    0x6e, 0x07, 0x54, 0x0b, 0x10, 0x98, 0x21, 0x4d, 0x80, 0xcb, 0x12, 0x20,
    0xe7, 0xcc, 0x4f, 0xde, 0x45, 0x7d, 0xc9, 0x72, 0x77, 0x32, 0xea, 0xca,
    0x90, 0xbb, 0x69, 0x52, 0x10, 0x03, 0x2f, 0xa8, 0xf3, 0x95, 0xc5, 0xf1,
    0x8b, 0x62, 0x56, 0x1b, 0xef, 0x67, 0x6f, 0xa4, 0x10, 0x41, 0x95, 0xad,
    0x0a, 0x9b, 0xe3, 0xa5, 0xc0, 0xb0, 0xd2, 0x70, 0x76, 0x50, 0x30, 0x5b,
    0xa8, 0xe8, 0x08, 0x2c, 0x7c, 0xed, 0xa7, 0xa2, 0x7a, 0x8d, 0x38, 0x29,
    0x1c, 0xac, 0xc7, 0xed, 0xf2, 0x7c, 0x95, 0xb0, 0x95, 0x82, 0x7d, 0x49,
    0x5c, 0x38, 0xcd, 0x77, 0x25, 0xef, 0xbd, 0x80, 0x75, 0x53, 0x94, 0x3c,
    0x3d, 0xca, 0x63, 0x5b, 0x9f, 0x15, 0xb5, 0xd3, 0x1d, 0x13, 0x2f, 0x19,
    0xd1, 0x3c, 0xdb, 0x76, 0x3a, 0xcc, 0xb8, 0x7d, 0xc9, 0xe5, 0xc2, 0xd7,
    0xda, 0x40, 0x6f, 0xd8, 0x21, 0xdc, 0x73, 0x1b, 0x42, 0x2d, 0x53, 0x9c,
    0xfe, 0x1a, 0xfc, 0x7d, 0xab, 0x7a, 0x36, 0x3f, 0x98, 0xde, 0x84, 0x7c,
    0x05, 0x67, 0xce, 0x6a, 0x14, 0x38, 0x87, 0xa9, 0xf1, 0x8c, 0xb5, 0x68,
    0xcb, 0x68, 0x7f, 0x71, 0x20, 0x2b, 0xf5, 0xa0, 0x63, 0xf5, 0x56, 0x2f,
    0xa3, 0x26, 0xd2, 0xb7, 0x6f, 0xb1, 0x5a, 0x17, 0xd7, 0x38, 0x99, 0x08,
    0xfe, 0x93, 0x58, 0x6f, 0xfe, 0xc3, 0x13, 0x49, 0x08, 0x16, 0x0b, 0xa7,
    0x4d, 0x67, 0x00, 0x52, 0x31, 0x67, 0x23, 0x4e, 0x98, 0xed, 0x51, 0x45,
    0x1d, 0xb9, 0x04, 0xd9, 0x0b, 0xec, 0xd8, 0x28, 0xb3, 0x4b, 0xbd, 0xed,
    0x36, 0x79, 0x02, 0x03, 0x01, 0x00, 0x01, 0xa3, 0x82, 0x01, 0x3a, 0x30,
    0x82, 0x01, 0x36, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16,
    0x04, 0x14, 0x27, 0x8e, 0x67, 0x11, 0x74, 0xc3, 0x26, 0x1d, 0x3f, 0xed,
    0x33, 0x63, 0xb3, 0xa4, 0xd8, 0x1d, 0x30, 0xe5, 0xe8, 0xd5, 0x30, 0x81,
    0xc9, 0x06, 0x03, 0x55, 0x1d, 0x23, 0x04, 0x81, 0xc1, 0x30, 0x81, 0xbe,
    0x80, 0x14, 0x27, 0x8e, 0x67, 0x11, 0x74, 0xc3, 0x26, 0x1d, 0x3f, 0xed,
    0x33, 0x63, 0xb3, 0xa4, 0xd8, 0x1d, 0x30, 0xe5, 0xe8, 0xd5, 0xa1, 0x81,
    0x9a, 0xa4, 0x81, 0x97, 0x30, 0x81, 0x94, 0x31, 0x0b, 0x30, 0x09, 0x06,
    0x03, 0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x10, 0x30, 0x0e,
    0x06, 0x03, 0x55, 0x04, 0x08, 0x0c, 0x07, 0x4d, 0x6f, 0x6e, 0x74, 0x61,
    0x6e, 0x61, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c,
    0x07, 0x42, 0x6f, 0x7a, 0x65, 0x6d, 0x61, 0x6e, 0x31, 0x11, 0x30, 0x0f,
    0x06, 0x03, 0x55, 0x04, 0x0a, 0x0c, 0x08, 0x53, 0x61, 0x77, 0x74, 0x6f,
    0x6f, 0x74, 0x68, 0x31, 0x13, 0x30, 0x11, 0x06, 0x03, 0x55, 0x04, 0x0b,
    0x0c, 0x0a, 0x43, 0x6f, 0x6e, 0x73, 0x75, 0x6c, 0x74, 0x69, 0x6e, 0x67,
    0x31, 0x18, 0x30, 0x16, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0f, 0x77,
    0x77, 0x77, 0x2e, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63,
    0x6f, 0x6d, 0x31, 0x1f, 0x30, 0x1d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86,
    0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x10, 0x69, 0x6e, 0x66, 0x6f, 0x40,
    0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x82,
    0x09, 0x00, 0xaa, 0xd3, 0x3f, 0xac, 0x18, 0x0a, 0x37, 0x4d, 0x30, 0x0c,
    0x06, 0x03, 0x55, 0x1d, 0x13, 0x04, 0x05, 0x30, 0x03, 0x01, 0x01, 0xff,
    0x30, 0x1c, 0x06, 0x03, 0x55, 0x1d, 0x11, 0x04, 0x15, 0x30, 0x13, 0x82,
    0x0b, 0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x2e, 0x63, 0x6f, 0x6d,
    0x87, 0x04, 0x7f, 0x00, 0x00, 0x01, 0x30, 0x1d, 0x06, 0x03, 0x55, 0x1d,
    0x25, 0x04, 0x16, 0x30, 0x14, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05,
    0x07, 0x03, 0x01, 0x06, 0x08, 0x2b, 0x06, 0x01, 0x05, 0x05, 0x07, 0x03,
    0x02, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01,
    0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01, 0x00, 0x62, 0x98, 0xc8,
    0x58, 0xcf, 0x56, 0x03, 0x86, 0x5b, 0x1b, 0x71, 0x49, 0x7d, 0x05, 0x03,
    0x5d, 0xe0, 0x08, 0x86, 0xad, 0xdb, 0x4a, 0xde, 0xab, 0x22, 0x96, 0xa8,
    0xc3, 0x59, 0x68, 0xc1, 0x37, 0x90, 0x40, 0xdf, 0xbd, 0x89, 0xd0, 0xbc,
    0xda, 0x8e, 0xef, 0x87, 0xb2, 0xc2, 0x62, 0x52, 0xe1, 0x1a, 0x29, 0x17,
    0x6a, 0x96, 0x99, 0xc8, 0x4e, 0xd8, 0x32, 0xfe, 0xb8, 0xd1, 0x5c, 0x3b,
    0x0a, 0xc2, 0x3c, 0x5f, 0xa1, 0x1e, 0x98, 0x7f, 0xce, 0x89, 0x26, 0x21,
    0x1f, 0x64, 0x9c, 0x15, 0x7a, 0x9c, 0xef, 0xfb, 0x1d, 0x85, 0x6a, 0xfa,
    0x98, 0xce, 0xa8, 0xa9, 0xab, 0xc3, 0xa2, 0xc0, 0xeb, 0x87, 0xed, 0xbc,
    0x21, 0xdf, 0xf3, 0x07, 0x5b, 0xae, 0xfd, 0x40, 0xd4, 0xae, 0x20, 0xd0,
    0x76, 0x8a, 0x31, 0x0a, 0xa2, 0x62, 0x7c, 0x61, 0x0d, 0xce, 0x5d, 0x9a,
    0x1e, 0xe4, 0x20, 0x88, 0x51, 0x49, 0xfb, 0x77, 0xa9, 0xcd, 0x4d, 0xc6,
    0xbf, 0x54, 0x99, 0x33, 0xef, 0x4b, 0xa0, 0x73, 0x70, 0x6d, 0x2e, 0xd9,
    0x3d, 0x08, 0xf6, 0x12, 0x39, 0x31, 0x68, 0xc6, 0x61, 0x5c, 0x41, 0xb5,
    0x1b, 0xf4, 0x38, 0x7d, 0xfc, 0xbe, 0x73, 0x66, 0x2d, 0xf7, 0xca, 0x5b,
    0x2c, 0x5b, 0x31, 0xaa, 0xcf, 0xf6, 0x7f, 0x30, 0xe4, 0x12, 0x2c, 0x8e,
    0xd6, 0x38, 0x51, 0xe6, 0x45, 0xee, 0xd5, 0xda, 0xc3, 0x83, 0xd6, 0xed,
    0x5e, 0xec, 0xd6, 0xb6, 0x14, 0xb3, 0x93, 0x59, 0xe1, 0x55, 0x4a, 0x7f,
    0x04, 0xdf, 0xce, 0x65, 0xd4, 0xdf, 0x18, 0x4f, 0xdd, 0xb4, 0x45, 0x7f,
    0xa6, 0x56, 0x30, 0xc4, 0x05, 0x44, 0x98, 0x9d, 0x4f, 0x26, 0x6d, 0x84,
    0x80, 0xa0, 0x5e, 0xed, 0x23, 0xd1, 0x48, 0x87, 0x0e, 0x05, 0x06, 0x91,
    0x3b, 0xb0, 0x3c, 0xbb, 0x8c, 0x8f, 0x3c, 0x7b, 0x4c, 0x4f, 0xa1, 0xca,
    0x98
};

const static unsigned char device_cert[] = {
    0x30, 0x82, 0x05, 0x1d, 0x30, 0x82, 0x04, 0x05, 0xa0, 0x03, 0x02, 0x01,
    0x02, 0x02, 0x14, 0x73, 0xfb, 0x54, 0xd6, 0x03, 0x7d, 0x4c, 0x07, 0x84,
    0xe2, 0x00, 0x11, 0x8c, 0xdd, 0x90, 0xdc, 0x48, 0x8d, 0xea, 0x53, 0x30,
    0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b,
    0x05, 0x00, 0x30, 0x81, 0x9e, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55,
    0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03,
    0x55, 0x04, 0x08, 0x0c, 0x07, 0x4d, 0x6f, 0x6e, 0x74, 0x61, 0x6e, 0x61,
    0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x07, 0x42,
    0x6f, 0x7a, 0x65, 0x6d, 0x61, 0x6e, 0x31, 0x15, 0x30, 0x13, 0x06, 0x03,
    0x55, 0x04, 0x0a, 0x0c, 0x0c, 0x77, 0x6f, 0x6c, 0x66, 0x53, 0x53, 0x4c,
    0x5f, 0x32, 0x30, 0x34, 0x38, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55,
    0x04, 0x0b, 0x0c, 0x10, 0x50, 0x72, 0x6f, 0x67, 0x72, 0x61, 0x6d, 0x6d,
    0x69, 0x6e, 0x67, 0x2d, 0x32, 0x30, 0x34, 0x38, 0x31, 0x18, 0x30, 0x16,
    0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0f, 0x77, 0x77, 0x77, 0x2e, 0x77,
    0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x31, 0x1f,
    0x30, 0x1d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09,
    0x01, 0x16, 0x10, 0x69, 0x6e, 0x66, 0x6f, 0x40, 0x77, 0x6f, 0x6c, 0x66,
    0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x1e, 0x17, 0x0d, 0x32,
    0x32, 0x31, 0x32, 0x31, 0x36, 0x32, 0x31, 0x31, 0x37, 0x34, 0x39, 0x5a,
    0x17, 0x0d, 0x32, 0x35, 0x30, 0x39, 0x31, 0x31, 0x32, 0x31, 0x31, 0x37,
    0x34, 0x39, 0x5a, 0x30, 0x81, 0x9e, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03,
    0x55, 0x04, 0x06, 0x13, 0x02, 0x55, 0x53, 0x31, 0x10, 0x30, 0x0e, 0x06,
    0x03, 0x55, 0x04, 0x08, 0x0c, 0x07, 0x4d, 0x6f, 0x6e, 0x74, 0x61, 0x6e,
    0x61, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x07,
    0x42, 0x6f, 0x7a, 0x65, 0x6d, 0x61, 0x6e, 0x31, 0x15, 0x30, 0x13, 0x06,
    0x03, 0x55, 0x04, 0x0a, 0x0c, 0x0c, 0x77, 0x6f, 0x6c, 0x66, 0x53, 0x53,
    0x4c, 0x5f, 0x32, 0x30, 0x34, 0x38, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03,
    0x55, 0x04, 0x0b, 0x0c, 0x10, 0x50, 0x72, 0x6f, 0x67, 0x72, 0x61, 0x6d,
    0x6d, 0x69, 0x6e, 0x67, 0x2d, 0x32, 0x30, 0x34, 0x38, 0x31, 0x18, 0x30,
    0x16, 0x06, 0x03, 0x55, 0x04, 0x03, 0x0c, 0x0f, 0x77, 0x77, 0x77, 0x2e,
    0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x31,
    0x1f, 0x30, 0x1d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01,
    0x09, 0x01, 0x16, 0x10, 0x69, 0x6e, 0x66, 0x6f, 0x40, 0x77, 0x6f, 0x6c,
    0x66, 0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x30, 0x82, 0x01, 0x22,
    0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x01,
    0x01, 0x05, 0x00, 0x03, 0x82, 0x01, 0x0f, 0x00, 0x30, 0x82, 0x01, 0x0a,
    0x02, 0x82, 0x01, 0x01, 0x00, 0xc3, 0x03, 0xd1, 0x2b, 0xfe, 0x39, 0xa4,
    0x32, 0x45, 0x3b, 0x53, 0xc8, 0x84, 0x2b, 0x2a, 0x7c, 0x74, 0x9a, 0xbd,
    0xaa, 0x2a, 0x52, 0x07, 0x47, 0xd6, 0xa6, 0x36, 0xb2, 0x07, 0x32, 0x8e,
    0xd0, 0xba, 0x69, 0x7b, 0xc6, 0xc3, 0x44, 0x9e, 0xd4, 0x81, 0x48, 0xfd,
    0x2d, 0x68, 0xa2, 0x8b, 0x67, 0xbb, 0xa1, 0x75, 0xc8, 0x36, 0x2c, 0x4a,
    0xd2, 0x1b, 0xf7, 0x8b, 0xba, 0xcf, 0x0d, 0xf9, 0xef, 0xec, 0xf1, 0x81,
    0x1e, 0x7b, 0x9b, 0x03, 0x47, 0x9a, 0xbf, 0x65, 0xcc, 0x7f, 0x65, 0x24,
    0x69, 0xa6, 0xe8, 0x14, 0x89, 0x5b, 0xe4, 0x34, 0xf7, 0xc5, 0xb0, 0x14,
    0x93, 0xf5, 0x67, 0x7b, 0x3a, 0x7a, 0x78, 0xe1, 0x01, 0x56, 0x56, 0x91,
    0xa6, 0x13, 0x42, 0x8d, 0xd2, 0x3c, 0x40, 0x9c, 0x4c, 0xef, 0xd1, 0x86,
    0xdf, 0x37, 0x51, 0x1b, 0x0c, 0xa1, 0x3b, 0xf5, 0xf1, 0xa3, 0x4a, 0x35,
    0xe4, 0xe1, 0xce, 0x96, 0xdf, 0x1b, 0x7e, 0xbf, 0x4e, 0x97, 0xd0, 0x10,
    0xe8, 0xa8, 0x08, 0x30, 0x81, 0xaf, 0x20, 0x0b, 0x43, 0x14, 0xc5, 0x74,
    0x67, 0xb4, 0x32, 0x82, 0x6f, 0x8d, 0x86, 0xc2, 0x88, 0x40, 0x99, 0x36,
    0x83, 0xba, 0x1e, 0x40, 0x72, 0x22, 0x17, 0xd7, 0x52, 0x65, 0x24, 0x73,
    0xb0, 0xce, 0xef, 0x19, 0xcd, 0xae, 0xff, 0x78, 0x6c, 0x7b, 0xc0, 0x12,
    0x03, 0xd4, 0x4e, 0x72, 0x0d, 0x50, 0x6d, 0x3b, 0xa3, 0x3b, 0xa3, 0x99,
    0x5e, 0x9d, 0xc8, 0xd9, 0x0c, 0x85, 0xb3, 0xd9, 0x8a, 0xd9, 0x54, 0x26,
    0xdb, 0x6d, 0xfa, 0xac, 0xbb, 0xff, 0x25, 0x4c, 0xc4, 0xd1, 0x79, 0xf4,
    0x71, 0xd3, 0x86, 0x40, 0x18, 0x13, 0xb0, 0x63, 0xb5, 0x72, 0x4e, 0x30,
    0xc4, 0x97, 0x84, 0x86, 0x2d, 0x56, 0x2f, 0xd7, 0x15, 0xf7, 0x7f, 0xc0,
    0xae, 0xf5, 0xfc, 0x5b, 0xe5, 0xfb, 0xa1, 0xba, 0xd3, 0x02, 0x03, 0x01,
    0x00, 0x01, 0xa3, 0x82, 0x01, 0x4f, 0x30, 0x82, 0x01, 0x4b, 0x30, 0x1d,
    0x06, 0x03, 0x55, 0x1d, 0x0e, 0x04, 0x16, 0x04, 0x14, 0x33, 0xd8, 0x45,
    0x66, 0xd7, 0x68, 0x87, 0x18, 0x7e, 0x54, 0x0d, 0x70, 0x27, 0x91, 0xc7,
    0x26, 0xd7, 0x85, 0x65, 0xc0, 0x30, 0x81, 0xde, 0x06, 0x03, 0x55, 0x1d,
    0x23, 0x04, 0x81, 0xd6, 0x30, 0x81, 0xd3, 0x80, 0x14, 0x33, 0xd8, 0x45,
    0x66, 0xd7, 0x68, 0x87, 0x18, 0x7e, 0x54, 0x0d, 0x70, 0x27, 0x91, 0xc7,
    0x26, 0xd7, 0x85, 0x65, 0xc0, 0xa1, 0x81, 0xa4, 0xa4, 0x81, 0xa1, 0x30,
    0x81, 0x9e, 0x31, 0x0b, 0x30, 0x09, 0x06, 0x03, 0x55, 0x04, 0x06, 0x13,
    0x02, 0x55, 0x53, 0x31, 0x10, 0x30, 0x0e, 0x06, 0x03, 0x55, 0x04, 0x08,
    0x0c, 0x07, 0x4d, 0x6f, 0x6e, 0x74, 0x61, 0x6e, 0x61, 0x31, 0x10, 0x30,
    0x0e, 0x06, 0x03, 0x55, 0x04, 0x07, 0x0c, 0x07, 0x42, 0x6f, 0x7a, 0x65,
    0x6d, 0x61, 0x6e, 0x31, 0x15, 0x30, 0x13, 0x06, 0x03, 0x55, 0x04, 0x0a,
    0x0c, 0x0c, 0x77, 0x6f, 0x6c, 0x66, 0x53, 0x53, 0x4c, 0x5f, 0x32, 0x30,
    0x34, 0x38, 0x31, 0x19, 0x30, 0x17, 0x06, 0x03, 0x55, 0x04, 0x0b, 0x0c,
    0x10, 0x50, 0x72, 0x6f, 0x67, 0x72, 0x61, 0x6d, 0x6d, 0x69, 0x6e, 0x67,
    0x2d, 0x32, 0x30, 0x34, 0x38, 0x31, 0x18, 0x30, 0x16, 0x06, 0x03, 0x55,
    0x04, 0x03, 0x0c, 0x0f, 0x77, 0x77, 0x77, 0x2e, 0x77, 0x6f, 0x6c, 0x66,
    0x73, 0x73, 0x6c, 0x2e, 0x63, 0x6f, 0x6d, 0x31, 0x1f, 0x30, 0x1d, 0x06,
    0x09, 0x2a, 0x86, 0x48, 0x86, 0xf7, 0x0d, 0x01, 0x09, 0x01, 0x16, 0x10,
    0x69, 0x6e, 0x66, 0x6f, 0x40, 0x77, 0x6f, 0x6c, 0x66, 0x73, 0x73, 0x6c,
    0x2e, 0x63, 0x6f, 0x6d, 0x82, 0x14, 0x73, 0xfb, 0x54, 0xd6, 0x03, 0x7d,
    0x4c, 0x07, 0x84, 0xe2, 0x00, 0x11, 0x8c, 0xdd, 0x90, 0xdc, 0x48, 0x8d,
    0xea, 0x53, 0x30, 0x0c, 0x06, 0x03, 0x55, 0x1d, 0x13, 0x04, 0x05, 0x30,
    0x03, 0x01, 0x01, 0xff, 0x30, 0x1c, 0x06, 0x03, 0x55, 0x1d, 0x11, 0x04,
    0x15, 0x30, 0x13, 0x82, 0x0b, 0x65, 0x78, 0x61, 0x6d, 0x70, 0x6c, 0x65,
    0x2e, 0x63, 0x6f, 0x6d, 0x87, 0x04, 0x7f, 0x00, 0x00, 0x01, 0x30, 0x1d,
    0x06, 0x03, 0x55, 0x1d, 0x25, 0x04, 0x16, 0x30, 0x14, 0x06, 0x08, 0x2b,
    0x06, 0x01, 0x05, 0x05, 0x07, 0x03, 0x01, 0x06, 0x08, 0x2b, 0x06, 0x01,
    0x05, 0x05, 0x07, 0x03, 0x02, 0x30, 0x0d, 0x06, 0x09, 0x2a, 0x86, 0x48,
    0x86, 0xf7, 0x0d, 0x01, 0x01, 0x0b, 0x05, 0x00, 0x03, 0x82, 0x01, 0x01,
    0x00, 0x36, 0xcb, 0xbc, 0xc5, 0x52, 0x9a, 0x66, 0xcd, 0x91, 0x4d, 0x8f,
    0x27, 0x9f, 0xb3, 0x64, 0x80, 0x0e, 0x64, 0xb4, 0xcb, 0x1a, 0xcd, 0x75,
    0x9e, 0x82, 0x7c, 0x55, 0x67, 0xd8, 0x9f, 0x90, 0xa3, 0x34, 0x96, 0x99,
    0x43, 0xf7, 0x49, 0x53, 0xa2, 0x58, 0x85, 0xa0, 0xb3, 0x83, 0x4f, 0xaf,
    0xb8, 0x15, 0x8a, 0x88, 0x1e, 0xf3, 0x60, 0xf4, 0x7c, 0x94, 0xb5, 0x58,
    0x68, 0xf1, 0x2a, 0x13, 0x80, 0x34, 0xc2, 0x6f, 0xa5, 0xf8, 0x7e, 0x76,
    0x16, 0x81, 0x4f, 0x36, 0x8b, 0xc3, 0x59, 0xbd, 0x51, 0xdd, 0x60, 0x87,
    0xd7, 0x1d, 0x96, 0x44, 0x69, 0x07, 0x3c, 0x8f, 0x28, 0x56, 0xb1, 0x11,
    0x5c, 0x4e, 0x81, 0x3f, 0x57, 0x25, 0xfd, 0x65, 0xdd, 0x07, 0xcf, 0x17,
    0x0a, 0x01, 0x7e, 0x4e, 0x3f, 0x8e, 0x73, 0xdb, 0xfe, 0xf4, 0xf2, 0xc5,
    0xff, 0xa3, 0x76, 0xa8, 0x74, 0x46, 0x2e, 0x47, 0x0d, 0xb0, 0xed, 0x0a,
    0xc0, 0xc5, 0x0a, 0x65, 0xd3, 0xdc, 0x62, 0xb2, 0xe0, 0x1e, 0x8e, 0xbd,
    0xf3, 0xbd, 0xaf, 0xaf, 0x66, 0x84, 0x36, 0x92, 0xe2, 0x3b, 0x80, 0xd0,
    0x57, 0xa6, 0x41, 0xa3, 0x62, 0xd1, 0xa6, 0x6d, 0x14, 0x6c, 0xcd, 0x82,
    0xb1, 0xc1, 0xc1, 0x35, 0x55, 0xae, 0x59, 0x49, 0xa8, 0x26, 0x52, 0xbd,
    0xef, 0x1b, 0x2c, 0x1f, 0x9d, 0x39, 0x04, 0xd2, 0x82, 0xa0, 0x6b, 0x39,
    0x71, 0x59, 0x33, 0x82, 0xba, 0x55, 0x6c, 0x97, 0xf2, 0x1b, 0x5b, 0xe0,
    0x4d, 0xe2, 0xcf, 0x89, 0xe7, 0x26, 0xb8, 0x2c, 0x6c, 0x9f, 0x83, 0xd6,
    0xed, 0x4e, 0x2f, 0x75, 0xa9, 0x30, 0x4e, 0x01, 0x95, 0x0d, 0x4f, 0x83,
    0x5e, 0xc8, 0xaf, 0x7f, 0x67, 0xea, 0x53, 0xbf, 0xca, 0x9b, 0x1f, 0xd4,
    0xff, 0x36, 0x97, 0x02, 0x71, 0x8e, 0x33, 0xde, 0xe2, 0x58, 0x27, 0xaa,
    0x70, 0x0c, 0x5b, 0xde, 0x0e
};

const static unsigned char device_priv_key[] = {
    0x30, 0x82, 0x04, 0xa4, 0x02, 0x01, 0x00, 0x02, 0x82, 0x01, 0x01, 0x00,
    0xc3, 0x03, 0xd1, 0x2b, 0xfe, 0x39, 0xa4, 0x32, 0x45, 0x3b, 0x53, 0xc8,
    0x84, 0x2b, 0x2a, 0x7c, 0x74, 0x9a, 0xbd, 0xaa, 0x2a, 0x52, 0x07, 0x47,
    0xd6, 0xa6, 0x36, 0xb2, 0x07, 0x32, 0x8e, 0xd0, 0xba, 0x69, 0x7b, 0xc6,
    0xc3, 0x44, 0x9e, 0xd4, 0x81, 0x48, 0xfd, 0x2d, 0x68, 0xa2, 0x8b, 0x67,
    0xbb, 0xa1, 0x75, 0xc8, 0x36, 0x2c, 0x4a, 0xd2, 0x1b, 0xf7, 0x8b, 0xba,
    0xcf, 0x0d, 0xf9, 0xef, 0xec, 0xf1, 0x81, 0x1e, 0x7b, 0x9b, 0x03, 0x47,
    0x9a, 0xbf, 0x65, 0xcc, 0x7f, 0x65, 0x24, 0x69, 0xa6, 0xe8, 0x14, 0x89,
    0x5b, 0xe4, 0x34, 0xf7, 0xc5, 0xb0, 0x14, 0x93, 0xf5, 0x67, 0x7b, 0x3a,
    0x7a, 0x78, 0xe1, 0x01, 0x56, 0x56, 0x91, 0xa6, 0x13, 0x42, 0x8d, 0xd2,
    0x3c, 0x40, 0x9c, 0x4c, 0xef, 0xd1, 0x86, 0xdf, 0x37, 0x51, 0x1b, 0x0c,
    0xa1, 0x3b, 0xf5, 0xf1, 0xa3, 0x4a, 0x35, 0xe4, 0xe1, 0xce, 0x96, 0xdf,
    0x1b, 0x7e, 0xbf, 0x4e, 0x97, 0xd0, 0x10, 0xe8, 0xa8, 0x08, 0x30, 0x81,
    0xaf, 0x20, 0x0b, 0x43, 0x14, 0xc5, 0x74, 0x67, 0xb4, 0x32, 0x82, 0x6f,
    0x8d, 0x86, 0xc2, 0x88, 0x40, 0x99, 0x36, 0x83, 0xba, 0x1e, 0x40, 0x72,
    0x22, 0x17, 0xd7, 0x52, 0x65, 0x24, 0x73, 0xb0, 0xce, 0xef, 0x19, 0xcd,
    0xae, 0xff, 0x78, 0x6c, 0x7b, 0xc0, 0x12, 0x03, 0xd4, 0x4e, 0x72, 0x0d,
    0x50, 0x6d, 0x3b, 0xa3, 0x3b, 0xa3, 0x99, 0x5e, 0x9d, 0xc8, 0xd9, 0x0c,
    0x85, 0xb3, 0xd9, 0x8a, 0xd9, 0x54, 0x26, 0xdb, 0x6d, 0xfa, 0xac, 0xbb,
    0xff, 0x25, 0x4c, 0xc4, 0xd1, 0x79, 0xf4, 0x71, 0xd3, 0x86, 0x40, 0x18,
    0x13, 0xb0, 0x63, 0xb5, 0x72, 0x4e, 0x30, 0xc4, 0x97, 0x84, 0x86, 0x2d,
    0x56, 0x2f, 0xd7, 0x15, 0xf7, 0x7f, 0xc0, 0xae, 0xf5, 0xfc, 0x5b, 0xe5,
    0xfb, 0xa1, 0xba, 0xd3, 0x02, 0x03, 0x01, 0x00, 0x01, 0x02, 0x82, 0x01,
    0x01, 0x00, 0xa2, 0xe6, 0xd8, 0x5f, 0x10, 0x71, 0x64, 0x08, 0x9e, 0x2e,
    0x6d, 0xd1, 0x6d, 0x1e, 0x85, 0xd2, 0x0a, 0xb1, 0x8c, 0x47, 0xce, 0x2c,
    0x51, 0x6a, 0xa0, 0x12, 0x9e, 0x53, 0xde, 0x91, 0x4c, 0x1d, 0x6d, 0xea,
    0x59, 0x7b, 0xf2, 0x77, 0xaa, 0xd9, 0xc6, 0xd9, 0x8a, 0xab, 0xd8, 0xe1,
    0x16, 0xe4, 0x63, 0x26, 0xff, 0xb5, 0x6c, 0x13, 0x59, 0xb8, 0xe3, 0xa5,
    0xc8, 0x72, 0x17, 0x2e, 0x0c, 0x9f, 0x6f, 0xe5, 0x59, 0x3f, 0x76, 0x6f,
    0x49, 0xb1, 0x11, 0xc2, 0x5a, 0x2e, 0x16, 0x29, 0x0d, 0xde, 0xb7, 0x8e,
    0xdc, 0x40, 0xd5, 0xa2, 0xee, 0xe0, 0x1e, 0xa1, 0xf4, 0xbe, 0x97, 0xdb,
    0x86, 0x63, 0x96, 0x14, 0xcd, 0x98, 0x09, 0x60, 0x2d, 0x30, 0x76, 0x9c,
    0x3c, 0xcd, 0xe6, 0x88, 0xee, 0x47, 0x92, 0x79, 0x0b, 0x5a, 0x00, 0xe2,
    0x5e, 0x5f, 0x11, 0x7c, 0x7d, 0xf9, 0x08, 0xb7, 0x20, 0x06, 0x89, 0x2a,
    0x5d, 0xfd, 0x00, 0xab, 0x22, 0xe1, 0xf0, 0xb3, 0xbc, 0x24, 0xa9, 0x5e,
    0x26, 0x0e, 0x1f, 0x00, 0x2d, 0xfe, 0x21, 0x9a, 0x53, 0x5b, 0x6d, 0xd3,
    0x2b, 0xab, 0x94, 0x82, 0x68, 0x43, 0x36, 0xd8, 0xf6, 0x2f, 0xc6, 0x22,
    0xfc, 0xb5, 0x41, 0x5d, 0x0d, 0x33, 0x60, 0xea, 0xa4, 0x7d, 0x7e, 0xe8,
    0x4b, 0x55, 0x91, 0x56, 0xd3, 0x5c, 0x57, 0x8f, 0x1f, 0x94, 0x17, 0x2f,
    0xaa, 0xde, 0xe9, 0x9e, 0xa8, 0xf4, 0xcf, 0x8a, 0x4c, 0x8e, 0xa0, 0xe4,
    0x56, 0x73, 0xb2, 0xcf, 0x4f, 0x86, 0xc5, 0x69, 0x3c, 0xf3, 0x24, 0x20,
    0x8b, 0x5c, 0x96, 0x0c, 0xfa, 0x6b, 0x12, 0x3b, 0x9a, 0x67, 0xc1, 0xdf,
    0xc6, 0x96, 0xb2, 0xa5, 0xd5, 0x92, 0x0d, 0x9b, 0x09, 0x42, 0x68, 0x24,
    0x10, 0x45, 0xd4, 0x50, 0xe4, 0x17, 0x39, 0x48, 0xd0, 0x35, 0x8b, 0x94,
    0x6d, 0x11, 0xde, 0x8f, 0xca, 0x59, 0x02, 0x81, 0x81, 0x00, 0xea, 0x24,
    0xa7, 0xf9, 0x69, 0x33, 0xe9, 0x71, 0xdc, 0x52, 0x7d, 0x88, 0x21, 0x28,
    0x2f, 0x49, 0xde, 0xba, 0x72, 0x16, 0xe9, 0xcc, 0x47, 0x7a, 0x88, 0x0d,
    0x94, 0x57, 0x84, 0x58, 0x16, 0x3a, 0x81, 0xb0, 0x3f, 0xa2, 0xcf, 0xa6,
    0x6c, 0x1e, 0xb0, 0x06, 0x29, 0x00, 0x8f, 0xe7, 0x77, 0x76, 0xac, 0xdb,
    0xca, 0xc7, 0xd9, 0x5e, 0x9b, 0x3f, 0x26, 0x90, 0x52, 0xae, 0xfc, 0x38,
    0x90, 0x00, 0x14, 0xbb, 0xb4, 0x0f, 0x58, 0x94, 0xe7, 0x2f, 0x6a, 0x7e,
    0x1c, 0x4f, 0x41, 0x21, 0xd4, 0x31, 0x59, 0x1f, 0x4e, 0x8a, 0x1a, 0x8d,
    0xa7, 0x57, 0x6c, 0x22, 0xd8, 0xe5, 0xf4, 0x7e, 0x32, 0xa6, 0x10, 0xcb,
    0x64, 0xa5, 0x55, 0x03, 0x87, 0xa6, 0x27, 0x05, 0x8c, 0xc3, 0xd7, 0xb6,
    0x27, 0xb2, 0x4d, 0xba, 0x30, 0xda, 0x47, 0x8f, 0x54, 0xd3, 0x3d, 0x8b,
    0x84, 0x8d, 0x94, 0x98, 0x58, 0xa5, 0x02, 0x81, 0x81, 0x00, 0xd5, 0x38,
    0x1b, 0xc3, 0x8f, 0xc5, 0x93, 0x0c, 0x47, 0x0b, 0x6f, 0x35, 0x92, 0xc5,
    0xb0, 0x8d, 0x46, 0xc8, 0x92, 0x18, 0x8f, 0xf5, 0x80, 0x0a, 0xf7, 0xef,
    0xa1, 0xfe, 0x80, 0xb9, 0xb5, 0x2a, 0xba, 0xca, 0x18, 0xb0, 0x5d, 0xa5,
    0x07, 0xd0, 0x93, 0x8d, 0xd8, 0x9c, 0x04, 0x1c, 0xd4, 0x62, 0x8e, 0xa6,
    0x26, 0x81, 0x01, 0xff, 0xce, 0x8a, 0x2a, 0x63, 0x34, 0x35, 0x40, 0xaa,
    0x6d, 0x80, 0xde, 0x89, 0x23, 0x6a, 0x57, 0x4d, 0x9e, 0x6e, 0xad, 0x93,
    0x4e, 0x56, 0x90, 0x0b, 0x6d, 0x9d, 0x73, 0x8b, 0x0c, 0xae, 0x27, 0x3d,
    0xde, 0x4e, 0xf0, 0xaa, 0xc5, 0x6c, 0x78, 0x67, 0x6c, 0x94, 0x52, 0x9c,
    0x37, 0x67, 0x6c, 0x2d, 0xef, 0xbb, 0xaf, 0xdf, 0xa6, 0x90, 0x3c, 0xc4,
    0x47, 0xcf, 0x8d, 0x96, 0x9e, 0x98, 0xa9, 0xb4, 0x9f, 0xc5, 0xa6, 0x50,
    0xdc, 0xb3, 0xf0, 0xfb, 0x74, 0x17, 0x02, 0x81, 0x80, 0x5e, 0x83, 0x09,
    0x62, 0xbd, 0xba, 0x7c, 0xa2, 0xbf, 0x42, 0x74, 0xf5, 0x7c, 0x1c, 0xd2,
    0x69, 0xc9, 0x04, 0x0d, 0x85, 0x7e, 0x3e, 0x3d, 0x24, 0x12, 0xc3, 0x18,
    0x7b, 0xf3, 0x29, 0xf3, 0x5f, 0x0e, 0x76, 0x6c, 0x59, 0x75, 0xe4, 0x41,
    0x84, 0x69, 0x9d, 0x32, 0xf3, 0xcd, 0x22, 0xab, 0xb0, 0x35, 0xba, 0x4a,
    0xb2, 0x3c, 0xe5, 0xd9, 0x58, 0xb6, 0x62, 0x4f, 0x5d, 0xde, 0xe5, 0x9e,
    0x0a, 0xca, 0x53, 0xb2, 0x2c, 0xf7, 0x9e, 0xb3, 0x6b, 0x0a, 0x5b, 0x79,
    0x65, 0xec, 0x6e, 0x91, 0x4e, 0x92, 0x20, 0xf6, 0xfc, 0xfc, 0x16, 0xed,
    0xd3, 0x76, 0x0c, 0xe2, 0xec, 0x7f, 0xb2, 0x69, 0x13, 0x6b, 0x78, 0x0e,
    0x5a, 0x46, 0x64, 0xb4, 0x5e, 0xb7, 0x25, 0xa0, 0x5a, 0x75, 0x3a, 0x4b,
    0xef, 0xc7, 0x3c, 0x3e, 0xf7, 0xfd, 0x26, 0xb8, 0x20, 0xc4, 0x99, 0x0a,
    0x9a, 0x73, 0xbe, 0xc3, 0x19, 0x02, 0x81, 0x81, 0x00, 0xba, 0x44, 0x93,
    0x14, 0xac, 0x34, 0x19, 0x3b, 0x5f, 0x91, 0x60, 0xac, 0xf7, 0xb4, 0xd6,
    0x81, 0x05, 0x36, 0x51, 0x53, 0x3d, 0xe8, 0x65, 0xdc, 0xaf, 0x2e, 0xdc,
    0x61, 0x3e, 0xc9, 0x7d, 0xb8, 0x7f, 0x87, 0xf0, 0x3b, 0x9b, 0x03, 0x82,
    0x29, 0x37, 0xce, 0x72, 0x4e, 0x11, 0xd5, 0xb1, 0xc1, 0x0c, 0x07, 0xa0,
    0x99, 0x91, 0x4a, 0x8d, 0x7f, 0xec, 0x79, 0xcf, 0xf1, 0x39, 0xb5, 0xe9,
    0x85, 0xec, 0x62, 0xf7, 0xda, 0x7d, 0xbc, 0x64, 0x4d, 0x22, 0x3c, 0x0e,
    0xf2, 0xd6, 0x51, 0xf5, 0x87, 0xd8, 0x99, 0xc0, 0x11, 0x20, 0x5d, 0x0f,
    0x29, 0xfd, 0x5b, 0xe2, 0xae, 0xd9, 0x1c, 0xd9, 0x21, 0x56, 0x6d, 0xfc,
    0x84, 0xd0, 0x5f, 0xed, 0x10, 0x15, 0x1c, 0x18, 0x21, 0xe7, 0xc4, 0x3d,
    0x4b, 0xd7, 0xd0, 0x9e, 0x6a, 0x95, 0xcf, 0x22, 0xc9, 0x03, 0x7b, 0x9e,
    0xe3, 0x60, 0x01, 0xfc, 0x2f, 0x02, 0x81, 0x80, 0x11, 0xd0, 0x4b, 0xcf,
    0x1b, 0x67, 0xb9, 0x9f, 0x10, 0x75, 0x47, 0x86, 0x65, 0xae, 0x31, 0xc2,
    0xc6, 0x30, 0xac, 0x59, 0x06, 0x50, 0xd9, 0x0f, 0xb5, 0x70, 0x06, 0xf7,
    0xf0, 0xd3, 0xc8, 0x62, 0x7c, 0xa8, 0xda, 0x6e, 0xf6, 0x21, 0x3f, 0xd3,
    0x7f, 0x5f, 0xea, 0x8a, 0xab, 0x3f, 0xd9, 0x2a, 0x5e, 0xf3, 0x51, 0xd2,
    0xc2, 0x30, 0x37, 0xe3, 0x2d, 0xa3, 0x75, 0x0d, 0x1e, 0x4d, 0x21, 0x34,
    0xd5, 0x57, 0x70, 0x5c, 0x89, 0xbf, 0x72, 0xec, 0x4a, 0x6e, 0x68, 0xd5,
    0xcd, 0x18, 0x74, 0x33, 0x4e, 0x8c, 0x3a, 0x45, 0x8f, 0xe6, 0x96, 0x40,
    0xeb, 0x63, 0xf9, 0x19, 0x86, 0x3a, 0x51, 0xdd, 0x89, 0x4b, 0xb0, 0xf3,
    0xf9, 0x9f, 0x5d, 0x28, 0x95, 0x38, 0xbe, 0x35, 0xab, 0xca, 0x5c, 0xe7,
    0x93, 0x53, 0x34, 0xa1, 0x45, 0x5d, 0x13, 0x39, 0x65, 0x42, 0x46, 0xa1,
    0x9f, 0xcd, 0xf5, 0xbf
};

#if defined(CONFIG_WOLFSSL_DEBUG)
#undef  DEBUG_WOLFSSL
#define DEBUG_WOLFSSL
#endif

#ifdef __cplusplus
}
#endif

#endif /* WOLFMQTT_ZEPHYR_SAMPLE_SETTINGS_H */

