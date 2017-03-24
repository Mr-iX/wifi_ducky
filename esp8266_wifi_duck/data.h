#ifndef data_h
#define data_h

static uint8_t data_macBuffer;
static char data_vendorBuffer;
static String data_vendorStrBuffer = "";

static char data_websiteBuffer[6000];

const uint8_t data_error404[] PROGMEM = "<html><head><meta charset='utf-8'></head><body><h1>ERROR 404</h1><p>¯\\_(ツ)_/¯ </p></body></html>";
const uint8_t data_styleCSS[] PROGMEM = {0x2f,0x2a,0x20,0x47,0x6c,0x6f,0x62,0x61,0x6c,0x20,0x2a,0x2f,0x20,0x2a,0x2c,0x62,0x6f,0x64,0x79,0x7b,0x20,0x6d,0x61,0x72,0x67,0x69,0x6e,0x3a,0x20,0x30,0x3b,0x20,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3a,0x20,0x30,0x3b,0x20,0x66,0x6f,0x6e,0x74,0x2d,0x66,0x61,0x6d,0x69,0x6c,0x79,0x3a,0x20,0x61,0x72,0x69,0x61,0x6c,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x34,0x33,0x32,0x39,0x32,0x39,0x3b,0x20,0x7d,0x20,0x68,0x31,0x7b,0x20,0x66,0x6f,0x6e,0x74,0x2d,0x73,0x69,0x7a,0x65,0x3a,0x20,0x32,0x32,0x70,0x78,0x3b,0x20,0x6d,0x61,0x72,0x67,0x69,0x6e,0x2d,0x62,0x6f,0x74,0x74,0x6f,0x6d,0x3a,0x20,0x30,0x2e,0x36,0x65,0x6d,0x3b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x30,0x30,0x42,0x30,0x46,0x46,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x66,0x66,0x66,0x3b,0x20,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3a,0x30,0x2e,0x32,0x65,0x6d,0x3b,0x20,0x62,0x6f,0x72,0x64,0x65,0x72,0x2d,0x72,0x61,0x64,0x69,0x75,0x73,0x3a,0x34,0x70,0x78,0x3b,0x20,0x7d,0x20,0x69,0x6e,0x70,0x75,0x74,0x5b,0x74,0x79,0x70,0x65,0x3d,0x22,0x74,0x65,0x78,0x74,0x22,0x5d,0x7b,0x20,0x68,0x65,0x69,0x67,0x68,0x74,0x3a,0x20,0x32,0x34,0x70,0x78,0x3b,0x20,0x77,0x69,0x64,0x74,0x68,0x3a,0x20,0x31,0x32,0x30,0x70,0x78,0x3b,0x20,0x62,0x6f,0x72,0x64,0x65,0x72,0x3a,0x20,0x31,0x70,0x78,0x20,0x73,0x6f,0x6c,0x69,0x64,0x20,0x23,0x41,0x39,0x39,0x44,0x39,0x44,0x3b,0x20,0x62,0x6f,0x72,0x64,0x65,0x72,0x2d,0x72,0x61,0x64,0x69,0x75,0x73,0x3a,0x20,0x35,0x70,0x78,0x3b,0x20,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3a,0x20,0x30,0x2e,0x32,0x65,0x6d,0x3b,0x20,0x6d,0x61,0x72,0x67,0x69,0x6e,0x3a,0x20,0x32,0x70,0x78,0x3b,0x20,0x7d,0x20,0x69,0x6e,0x70,0x75,0x74,0x5b,0x74,0x79,0x70,0x65,0x3d,0x22,0x63,0x68,0x65,0x63,0x6b,0x62,0x6f,0x78,0x22,0x5d,0x7b,0x20,0x68,0x65,0x69,0x67,0x68,0x74,0x3a,0x20,0x31,0x35,0x70,0x78,0x3b,0x20,0x77,0x69,0x64,0x74,0x68,0x3a,0x20,0x61,0x75,0x74,0x6f,0x3b,0x20,0x7d,0x20,0x2e,0x62,0x75,0x74,0x74,0x6f,0x6e,0x7b,0x20,0x74,0x65,0x78,0x74,0x2d,0x64,0x65,0x63,0x6f,0x72,0x61,0x74,0x69,0x6f,0x6e,0x3a,0x20,0x6e,0x6f,0x6e,0x65,0x3b,0x20,0x64,0x69,0x73,0x70,0x6c,0x61,0x79,0x3a,0x20,0x69,0x6e,0x6c,0x69,0x6e,0x65,0x2d,0x62,0x6c,0x6f,0x63,0x6b,0x3b,0x20,0x7d,0x20,0x62,0x75,0x74,0x74,0x6f,0x6e,0x2c,0x20,0x2e,0x62,0x75,0x74,0x74,0x6f,0x6e,0x2c,0x20,0x69,0x6e,0x70,0x75,0x74,0x5b,0x74,0x79,0x70,0x65,0x3d,0x22,0x73,0x75,0x62,0x6d,0x69,0x74,0x22,0x5d,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x30,0x30,0x42,0x30,0x46,0x46,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x66,0x66,0x66,0x3b,0x20,0x62,0x6f,0x72,0x64,0x65,0x72,0x3a,0x20,0x31,0x70,0x78,0x20,0x73,0x6f,0x6c,0x69,0x64,0x20,0x23,0x38,0x46,0x38,0x46,0x38,0x46,0x3b,0x20,0x62,0x6f,0x72,0x64,0x65,0x72,0x2d,0x72,0x61,0x64,0x69,0x75,0x73,0x3a,0x20,0x31,0x34,0x70,0x78,0x3b,0x20,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3a,0x20,0x30,0x2e,0x33,0x34,0x65,0x6d,0x20,0x30,0x2e,0x33,0x65,0x6d,0x3b,0x20,0x6d,0x61,0x72,0x67,0x69,0x6e,0x2d,0x62,0x6f,0x74,0x74,0x6f,0x6d,0x3a,0x20,0x30,0x2e,0x36,0x65,0x6d,0x3b,0x20,0x6d,0x61,0x72,0x67,0x69,0x6e,0x2d,0x74,0x6f,0x70,0x3a,0x20,0x30,0x2e,0x36,0x65,0x6d,0x3b,0x20,0x7d,0x20,0x62,0x75,0x74,0x74,0x6f,0x6e,0x3a,0x68,0x6f,0x76,0x65,0x72,0x2c,0x20,0x2e,0x62,0x75,0x74,0x74,0x6f,0x6e,0x3a,0x68,0x6f,0x76,0x65,0x72,0x2c,0x20,0x69,0x6e,0x70,0x75,0x74,0x5b,0x74,0x79,0x70,0x65,0x3d,0x22,0x73,0x75,0x62,0x6d,0x69,0x74,0x22,0x5d,0x3a,0x68,0x6f,0x76,0x65,0x72,0x7b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x30,0x30,0x30,0x3b,0x20,0x7d,0x20,0x2e,0x77,0x61,0x72,0x6e,0x7b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x63,0x32,0x30,0x30,0x30,0x30,0x3b,0x20,0x7d,0x20,0x2e,0x77,0x61,0x72,0x6e,0x42,0x74,0x6e,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x63,0x32,0x30,0x30,0x30,0x30,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x66,0x66,0x66,0x3b,0x20,0x7d,0x20,0x2e,0x77,0x61,0x72,0x6e,0x42,0x74,0x6e,0x3a,0x68,0x6f,0x76,0x65,0x72,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x66,0x30,0x30,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x30,0x30,0x30,0x3b,0x20,0x7d,0x20,0x2e,0x73,0x65,0x6c,0x65,0x63,0x74,0x65,0x64,0x42,0x74,0x6e,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x66,0x66,0x66,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x30,0x30,0x30,0x3b,0x20,0x7d,0x20,0x2e,0x73,0x65,0x6c,0x65,0x63,0x74,0x65,0x64,0x42,0x74,0x6e,0x3a,0x68,0x6f,0x76,0x65,0x72,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x30,0x30,0x42,0x30,0x46,0x46,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x66,0x66,0x66,0x3b,0x20,0x7d,0x20,0x2e,0x72,0x69,0x67,0x68,0x74,0x7b,0x20,0x66,0x6c,0x6f,0x61,0x74,0x3a,0x20,0x72,0x69,0x67,0x68,0x74,0x3b,0x20,0x7d,0x20,0x2e,0x62,0x6f,0x6c,0x64,0x7b,0x20,0x66,0x6f,0x6e,0x74,0x2d,0x77,0x65,0x69,0x67,0x68,0x74,0x3a,0x20,0x62,0x6f,0x6c,0x64,0x3b,0x20,0x7d,0x20,0x2e,0x62,0x6c,0x6f,0x63,0x6b,0x7b,0x20,0x64,0x69,0x73,0x70,0x6c,0x61,0x79,0x3a,0x20,0x62,0x6c,0x6f,0x63,0x6b,0x3b,0x20,0x7d,0x20,0x2e,0x6d,0x61,0x72,0x67,0x69,0x6e,0x4e,0x75,0x6c,0x6c,0x7b,0x20,0x6d,0x61,0x72,0x67,0x69,0x6e,0x3a,0x20,0x30,0x7d,0x20,0x2e,0x62,0x6c,0x75,0x65,0x7b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x30,0x30,0x42,0x30,0x46,0x46,0x20,0x7d,0x20,0x2e,0x73,0x6d,0x61,0x6c,0x6c,0x7b,0x20,0x66,0x6f,0x6e,0x74,0x2d,0x73,0x69,0x7a,0x65,0x3a,0x20,0x31,0x34,0x70,0x78,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x37,0x32,0x37,0x32,0x37,0x32,0x20,0x7d,0x20,0x2f,0x2a,0x20,0x4e,0x61,0x76,0x69,0x67,0x61,0x74,0x69,0x6f,0x6e,0x20,0x2a,0x2f,0x20,0x6e,0x61,0x76,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x32,0x32,0x32,0x3b,0x20,0x7d,0x20,0x6e,0x61,0x76,0x20,0x61,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x32,0x32,0x32,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x39,0x39,0x39,0x3b,0x20,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3a,0x20,0x30,0x2e,0x35,0x65,0x6d,0x3b,0x20,0x64,0x69,0x73,0x70,0x6c,0x61,0x79,0x3a,0x20,0x69,0x6e,0x6c,0x69,0x6e,0x65,0x2d,0x62,0x6c,0x6f,0x63,0x6b,0x3b,0x20,0x74,0x65,0x78,0x74,0x2d,0x64,0x65,0x63,0x6f,0x72,0x61,0x74,0x69,0x6f,0x6e,0x3a,0x20,0x6e,0x6f,0x6e,0x65,0x3b,0x20,0x7d,0x20,0x6e,0x61,0x76,0x20,0x61,0x3a,0x68,0x6f,0x76,0x65,0x72,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x30,0x30,0x30,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x23,0x66,0x30,0x66,0x30,0x66,0x30,0x3b,0x20,0x7d,0x20,0x2f,0x2a,0x20,0x43,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x20,0x2a,0x2f,0x20,0x23,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x7b,0x20,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3a,0x20,0x30,0x2e,0x33,0x34,0x65,0x6d,0x3b,0x20,0x7d,0x20,0x74,0x61,0x62,0x6c,0x65,0x7b,0x20,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3a,0x20,0x30,0x3b,0x20,0x77,0x69,0x64,0x74,0x68,0x3a,0x20,0x31,0x30,0x30,0x25,0x3b,0x20,0x6d,0x61,0x78,0x2d,0x77,0x69,0x64,0x74,0x68,0x3a,0x20,0x39,0x36,0x30,0x70,0x78,0x3b,0x20,0x6d,0x61,0x72,0x67,0x69,0x6e,0x3a,0x20,0x30,0x20,0x61,0x75,0x74,0x6f,0x3b,0x20,0x62,0x6f,0x72,0x64,0x65,0x72,0x2d,0x73,0x70,0x61,0x63,0x69,0x6e,0x67,0x3a,0x20,0x30,0x3b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x32,0x32,0x32,0x32,0x32,0x32,0x3b,0x20,0x7d,0x20,0x74,0x61,0x62,0x6c,0x65,0x20,0x74,0x68,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x32,0x32,0x32,0x32,0x32,0x32,0x3b,0x20,0x63,0x6f,0x6c,0x6f,0x72,0x3a,0x20,0x23,0x66,0x30,0x66,0x30,0x66,0x30,0x3b,0x20,0x7d,0x20,0x74,0x61,0x62,0x6c,0x65,0x20,0x74,0x64,0x7b,0x20,0x66,0x6f,0x6e,0x74,0x2d,0x73,0x69,0x7a,0x65,0x3a,0x20,0x31,0x34,0x70,0x78,0x3b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x66,0x30,0x66,0x30,0x66,0x30,0x3b,0x20,0x7d,0x20,0x74,0x61,0x62,0x6c,0x65,0x20,0x74,0x68,0x2c,0x20,0x74,0x61,0x62,0x6c,0x65,0x20,0x74,0x64,0x7b,0x20,0x74,0x65,0x78,0x74,0x2d,0x61,0x6c,0x69,0x67,0x6e,0x3a,0x20,0x63,0x65,0x6e,0x74,0x65,0x72,0x3b,0x20,0x70,0x61,0x64,0x64,0x69,0x6e,0x67,0x3a,0x20,0x30,0x2e,0x31,0x65,0x6d,0x20,0x30,0x3b,0x20,0x7d,0x20,0x74,0x61,0x62,0x6c,0x65,0x20,0x2e,0x73,0x65,0x6c,0x65,0x63,0x74,0x65,0x64,0x20,0x74,0x64,0x7b,0x20,0x62,0x61,0x63,0x6b,0x67,0x72,0x6f,0x75,0x6e,0x64,0x3a,0x20,0x23,0x31,0x31,0x61,0x34,0x63,0x63,0x3b,0x20,0x7d};
const uint8_t data_functionsJS[] PROGMEM = {0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x20,0x67,0x65,0x74,0x52,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x28,0x61,0x64,0x72,0x2c,0x20,0x63,0x61,0x6c,0x6c,0x62,0x61,0x63,0x6b,0x2c,0x20,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x43,0x61,0x6c,0x6c,0x62,0x61,0x63,0x6b,0x2c,0x20,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x29,0x7b,0x20,0x69,0x66,0x28,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x43,0x61,0x6c,0x6c,0x62,0x61,0x63,0x6b,0x20,0x3d,0x3d,0x3d,0x20,0x75,0x6e,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0x29,0x20,0x7b,0x20,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x43,0x61,0x6c,0x6c,0x62,0x61,0x63,0x6b,0x20,0x3d,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,0x29,0x7b,0x20,0x61,0x6c,0x65,0x72,0x74,0x28,0x22,0x65,0x72,0x72,0x6f,0x72,0x20,0x6c,0x6f,0x61,0x64,0x69,0x6e,0x67,0x20,0x22,0x2b,0x61,0x64,0x72,0x29,0x3b,0x20,0x7d,0x3b,0x20,0x7d,0x20,0x69,0x66,0x28,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x20,0x3d,0x3d,0x3d,0x20,0x75,0x6e,0x64,0x65,0x66,0x69,0x6e,0x65,0x64,0x29,0x20,0x7b,0x20,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x20,0x3d,0x20,0x38,0x30,0x30,0x30,0x3b,0x20,0x7d,0x20,0x76,0x61,0x72,0x20,0x78,0x6d,0x6c,0x68,0x74,0x74,0x70,0x20,0x3d,0x20,0x6e,0x65,0x77,0x20,0x58,0x4d,0x4c,0x48,0x74,0x74,0x70,0x52,0x65,0x71,0x75,0x65,0x73,0x74,0x28,0x29,0x3b,0x20,0x78,0x6d,0x6c,0x68,0x74,0x74,0x70,0x2e,0x6f,0x6e,0x72,0x65,0x61,0x64,0x79,0x73,0x74,0x61,0x74,0x65,0x63,0x68,0x61,0x6e,0x67,0x65,0x20,0x3d,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,0x29,0x20,0x7b,0x20,0x69,0x66,0x28,0x78,0x6d,0x6c,0x68,0x74,0x74,0x70,0x2e,0x72,0x65,0x61,0x64,0x79,0x53,0x74,0x61,0x74,0x65,0x20,0x3d,0x3d,0x20,0x34,0x29,0x7b,0x20,0x69,0x66,0x28,0x78,0x6d,0x6c,0x68,0x74,0x74,0x70,0x2e,0x73,0x74,0x61,0x74,0x75,0x73,0x20,0x3d,0x3d,0x20,0x32,0x30,0x30,0x29,0x20,0x63,0x61,0x6c,0x6c,0x62,0x61,0x63,0x6b,0x28,0x78,0x6d,0x6c,0x68,0x74,0x74,0x70,0x2e,0x72,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x54,0x65,0x78,0x74,0x29,0x3b,0x20,0x65,0x6c,0x73,0x65,0x20,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x43,0x61,0x6c,0x6c,0x62,0x61,0x63,0x6b,0x28,0x29,0x3b,0x20,0x7d,0x20,0x7d,0x3b,0x20,0x78,0x6d,0x6c,0x68,0x74,0x74,0x70,0x2e,0x6f,0x70,0x65,0x6e,0x28,0x22,0x47,0x45,0x54,0x22,0x2c,0x20,0x61,0x64,0x72,0x2c,0x20,0x74,0x72,0x75,0x65,0x29,0x3b,0x20,0x78,0x6d,0x6c,0x68,0x74,0x74,0x70,0x2e,0x73,0x65,0x6e,0x64,0x28,0x29,0x3b,0x20,0x78,0x6d,0x6c,0x68,0x74,0x74,0x70,0x2e,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x20,0x3d,0x20,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x3b,0x20,0x78,0x6d,0x6c,0x68,0x74,0x74,0x70,0x2e,0x6f,0x6e,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x20,0x3d,0x20,0x74,0x69,0x6d,0x65,0x6f,0x75,0x74,0x43,0x61,0x6c,0x6c,0x62,0x61,0x63,0x6b,0x3b,0x20,0x7d};

const uint8_t data_indexHTML[] PROGMEM = {0x3c,0x21,0x44,0x6f,0x63,0x74,0x79,0x70,0x65,0x20,0x68,0x74,0x6d,0x6c,0x3e,0x20,0x3c,0x68,0x74,0x6d,0x6c,0x3e,0x20,0x3c,0x68,0x65,0x61,0x64,0x3e,0x20,0x3c,0x6d,0x65,0x74,0x61,0x20,0x63,0x68,0x61,0x72,0x73,0x65,0x74,0x3d,0x22,0x75,0x74,0x66,0x2d,0x38,0x22,0x3e,0x20,0x3c,0x6c,0x69,0x6e,0x6b,0x20,0x72,0x65,0x6c,0x3d,0x22,0x73,0x74,0x79,0x6c,0x65,0x73,0x68,0x65,0x65,0x74,0x22,0x20,0x68,0x72,0x65,0x66,0x3d,0x22,0x73,0x74,0x79,0x6c,0x65,0x2e,0x63,0x73,0x73,0x22,0x3e,0x20,0x3c,0x73,0x63,0x72,0x69,0x70,0x74,0x20,0x73,0x72,0x63,0x3d,0x22,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x73,0x2e,0x6a,0x73,0x22,0x3e,0x3c,0x2f,0x73,0x63,0x72,0x69,0x70,0x74,0x3e,0x20,0x3c,0x6d,0x65,0x74,0x61,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,0x76,0x69,0x65,0x77,0x70,0x6f,0x72,0x74,0x22,0x20,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x3d,0x22,0x77,0x69,0x64,0x74,0x68,0x3d,0x64,0x65,0x76,0x69,0x63,0x65,0x2d,0x77,0x69,0x64,0x74,0x68,0x2c,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x2d,0x73,0x63,0x61,0x6c,0x65,0x3d,0x30,0x2e,0x38,0x22,0x3e,0x20,0x3c,0x2f,0x68,0x65,0x61,0x64,0x3e,0x20,0x3c,0x62,0x6f,0x64,0x79,0x3e,0x20,0x3c,0x64,0x69,0x76,0x20,0x69,0x64,0x3d,0x22,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x22,0x3e,0x20,0x3c,0x68,0x31,0x3e,0x53,0x63,0x72,0x69,0x70,0x74,0x73,0x3c,0x2f,0x68,0x31,0x3e,0x20,0x3c,0x70,0x20,0x69,0x64,0x3d,0x22,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x22,0x3e,0x3c,0x62,0x75,0x74,0x74,0x6f,0x6e,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x22,0x77,0x61,0x72,0x6e,0x42,0x74,0x6e,0x22,0x20,0x6f,0x6e,0x63,0x6c,0x69,0x63,0x6b,0x3d,0x22,0x66,0x6f,0x72,0x6d,0x61,0x74,0x28,0x29,0x22,0x3e,0x66,0x6f,0x72,0x6d,0x61,0x74,0x3c,0x2f,0x62,0x75,0x74,0x74,0x6f,0x6e,0x3e,0x20,0x3c,0x6d,0x65,0x74,0x65,0x72,0x20,0x69,0x64,0x3d,0x22,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x47,0x72,0x61,0x70,0x68,0x22,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x22,0x22,0x20,0x6d,0x61,0x78,0x3d,0x22,0x31,0x22,0x20,0x6d,0x69,0x6e,0x3d,0x22,0x30,0x22,0x3e,0x3c,0x2f,0x6d,0x65,0x74,0x65,0x72,0x3e,0x20,0x3c,0x73,0x70,0x61,0x6e,0x20,0x69,0x64,0x3d,0x22,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x53,0x69,0x7a,0x65,0x22,0x3e,0x3c,0x2f,0x73,0x70,0x61,0x6e,0x3e,0x3c,0x2f,0x70,0x3e,0x20,0x3c,0x74,0x61,0x62,0x6c,0x65,0x20,0x69,0x64,0x3d,0x22,0x73,0x63,0x72,0x69,0x70,0x74,0x6c,0x69,0x73,0x74,0x22,0x3e,0x20,0x3c,0x2f,0x74,0x61,0x62,0x6c,0x65,0x3e,0x20,0x3c,0x66,0x6f,0x72,0x6d,0x20,0x61,0x63,0x74,0x69,0x6f,0x6e,0x3d,0x22,0x2f,0x75,0x70,0x6c,0x6f,0x61,0x64,0x22,0x20,0x6d,0x65,0x74,0x68,0x6f,0x64,0x3d,0x22,0x50,0x4f,0x53,0x54,0x22,0x20,0x65,0x6e,0x63,0x74,0x79,0x70,0x65,0x3d,0x22,0x6d,0x75,0x6c,0x74,0x69,0x70,0x61,0x72,0x74,0x2f,0x66,0x6f,0x72,0x6d,0x2d,0x64,0x61,0x74,0x61,0x22,0x3e,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x74,0x79,0x70,0x65,0x3d,0x27,0x66,0x69,0x6c,0x65,0x27,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x27,0x75,0x70,0x64,0x61,0x74,0x65,0x27,0x3e,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x74,0x79,0x70,0x65,0x3d,0x27,0x73,0x75,0x62,0x6d,0x69,0x74,0x27,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x27,0x75,0x70,0x6c,0x6f,0x61,0x64,0x20,0x6e,0x65,0x77,0x20,0x73,0x63,0x72,0x69,0x70,0x74,0x27,0x3e,0x20,0x3c,0x2f,0x66,0x6f,0x72,0x6d,0x3e,0x20,0x3c,0x62,0x72,0x3e,0x20,0x3c,0x62,0x72,0x3e,0x20,0x3c,0x66,0x6f,0x72,0x6d,0x20,0x61,0x63,0x74,0x69,0x6f,0x6e,0x3d,0x22,0x2f,0x72,0x75,0x6e,0x22,0x20,0x6d,0x65,0x74,0x68,0x6f,0x64,0x3d,0x22,0x47,0x45,0x54,0x22,0x3e,0x20,0x3c,0x74,0x65,0x78,0x74,0x61,0x72,0x65,0x61,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x27,0x73,0x63,0x72,0x69,0x70,0x74,0x27,0x20,0x6d,0x61,0x78,0x6c,0x65,0x6e,0x67,0x74,0x68,0x3d,0x22,0x36,0x30,0x30,0x22,0x3e,0x3c,0x2f,0x74,0x65,0x78,0x74,0x61,0x72,0x65,0x61,0x3e,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x74,0x79,0x70,0x65,0x3d,0x27,0x73,0x75,0x62,0x6d,0x69,0x74,0x27,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x27,0x72,0x75,0x6e,0x20,0x73,0x63,0x72,0x69,0x70,0x74,0x27,0x3e,0x20,0x3c,0x2f,0x66,0x6f,0x72,0x6d,0x3e,0x20,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x20,0x3c,0x73,0x63,0x72,0x69,0x70,0x74,0x3e,0x20,0x76,0x61,0x72,0x20,0x72,0x65,0x73,0x3b,0x20,0x76,0x61,0x72,0x20,0x74,0x61,0x62,0x6c,0x65,0x20,0x3d,0x20,0x64,0x6f,0x63,0x75,0x6d,0x65,0x6e,0x74,0x2e,0x67,0x65,0x74,0x45,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x42,0x79,0x49,0x64,0x28,0x22,0x73,0x63,0x72,0x69,0x70,0x74,0x6c,0x69,0x73,0x74,0x22,0x29,0x3b,0x20,0x76,0x61,0x72,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x47,0x72,0x61,0x70,0x68,0x20,0x3d,0x20,0x64,0x6f,0x63,0x75,0x6d,0x65,0x6e,0x74,0x2e,0x67,0x65,0x74,0x45,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x42,0x79,0x49,0x64,0x28,0x22,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x47,0x72,0x61,0x70,0x68,0x22,0x29,0x3b,0x20,0x76,0x61,0x72,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x53,0x69,0x7a,0x65,0x20,0x3d,0x20,0x64,0x6f,0x63,0x75,0x6d,0x65,0x6e,0x74,0x2e,0x67,0x65,0x74,0x45,0x6c,0x65,0x6d,0x65,0x6e,0x74,0x42,0x79,0x49,0x64,0x28,0x22,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x53,0x69,0x7a,0x65,0x22,0x29,0x3b,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x20,0x6c,0x6f,0x61,0x64,0x6c,0x69,0x73,0x74,0x28,0x29,0x7b,0x20,0x67,0x65,0x74,0x52,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x28,0x22,0x6c,0x69,0x73,0x74,0x2e,0x6a,0x73,0x6f,0x6e,0x22,0x2c,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,0x72,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x54,0x65,0x78,0x74,0x29,0x7b,0x20,0x72,0x65,0x73,0x20,0x3d,0x20,0x4a,0x53,0x4f,0x4e,0x2e,0x70,0x61,0x72,0x73,0x65,0x28,0x72,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x54,0x65,0x78,0x74,0x29,0x3b,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x47,0x72,0x61,0x70,0x68,0x2e,0x76,0x61,0x6c,0x75,0x65,0x20,0x3d,0x20,0x72,0x65,0x73,0x2e,0x75,0x73,0x65,0x64,0x42,0x79,0x74,0x65,0x73,0x3b,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x47,0x72,0x61,0x70,0x68,0x2e,0x6d,0x61,0x78,0x20,0x3d,0x20,0x72,0x65,0x73,0x2e,0x74,0x6f,0x74,0x61,0x6c,0x42,0x79,0x74,0x65,0x73,0x3b,0x20,0x72,0x65,0x73,0x2e,0x75,0x73,0x65,0x64,0x42,0x79,0x74,0x65,0x73,0x20,0x3d,0x20,0x70,0x61,0x72,0x73,0x65,0x49,0x6e,0x74,0x28,0x72,0x65,0x73,0x2e,0x75,0x73,0x65,0x64,0x42,0x79,0x74,0x65,0x73,0x2f,0x31,0x30,0x30,0x30,0x29,0x3b,0x20,0x72,0x65,0x73,0x2e,0x74,0x6f,0x74,0x61,0x6c,0x42,0x79,0x74,0x65,0x73,0x20,0x3d,0x20,0x70,0x61,0x72,0x73,0x65,0x49,0x6e,0x74,0x28,0x72,0x65,0x73,0x2e,0x74,0x6f,0x74,0x61,0x6c,0x42,0x79,0x74,0x65,0x73,0x2f,0x31,0x30,0x30,0x30,0x29,0x3b,0x20,0x6d,0x65,0x6d,0x6f,0x72,0x79,0x53,0x69,0x7a,0x65,0x2e,0x69,0x6e,0x6e,0x65,0x72,0x48,0x54,0x4d,0x4c,0x20,0x3d,0x20,0x72,0x65,0x73,0x2e,0x75,0x73,0x65,0x64,0x42,0x79,0x74,0x65,0x73,0x2b,0x22,0x4b,0x42,0x20,0x2f,0x20,0x22,0x2b,0x72,0x65,0x73,0x2e,0x74,0x6f,0x74,0x61,0x6c,0x42,0x79,0x74,0x65,0x73,0x2b,0x22,0x4b,0x42,0x20,0x28,0x22,0x2b,0x28,0x72,0x65,0x73,0x2e,0x74,0x6f,0x74,0x61,0x6c,0x42,0x79,0x74,0x65,0x73,0x2d,0x72,0x65,0x73,0x2e,0x75,0x73,0x65,0x64,0x42,0x79,0x74,0x65,0x73,0x29,0x2b,0x22,0x4b,0x42,0x20,0x61,0x76,0x61,0x69,0x6c,0x61,0x62,0x6c,0x65,0x29,0x22,0x3b,0x20,0x76,0x61,0x72,0x20,0x74,0x61,0x62,0x6c,0x65,0x48,0x54,0x4d,0x4c,0x20,0x3d,0x20,0x22,0x22,0x3b,0x20,0x66,0x6f,0x72,0x28,0x76,0x61,0x72,0x20,0x69,0x3d,0x30,0x3b,0x69,0x3c,0x72,0x65,0x73,0x2e,0x6c,0x69,0x73,0x74,0x2e,0x6c,0x65,0x6e,0x67,0x74,0x68,0x3b,0x69,0x2b,0x2b,0x29,0x7b,0x20,0x74,0x61,0x62,0x6c,0x65,0x48,0x54,0x4d,0x4c,0x20,0x2b,0x3d,0x20,0x22,0x3c,0x74,0x72,0x3e,0x22,0x3b,0x20,0x74,0x61,0x62,0x6c,0x65,0x48,0x54,0x4d,0x4c,0x20,0x2b,0x3d,0x20,0x22,0x3c,0x74,0x64,0x3e,0x3c,0x61,0x20,0x68,0x72,0x65,0x66,0x3d,0x27,0x76,0x69,0x65,0x77,0x3f,0x6e,0x3d,0x22,0x2b,0x72,0x65,0x73,0x2e,0x6c,0x69,0x73,0x74,0x5b,0x69,0x5d,0x2e,0x6e,0x2b,0x22,0x27,0x3e,0x22,0x2b,0x72,0x65,0x73,0x2e,0x6c,0x69,0x73,0x74,0x5b,0x69,0x5d,0x2e,0x6e,0x2b,0x22,0x3c,0x2f,0x61,0x3e,0x3c,0x2f,0x74,0x64,0x3e,0x22,0x3b,0x20,0x74,0x61,0x62,0x6c,0x65,0x48,0x54,0x4d,0x4c,0x20,0x2b,0x3d,0x20,0x22,0x3c,0x74,0x64,0x3e,0x22,0x2b,0x72,0x65,0x73,0x2e,0x6c,0x69,0x73,0x74,0x5b,0x69,0x5d,0x2e,0x73,0x2b,0x22,0x3c,0x2f,0x74,0x64,0x3e,0x22,0x3b,0x20,0x74,0x61,0x62,0x6c,0x65,0x48,0x54,0x4d,0x4c,0x20,0x2b,0x3d,0x20,0x22,0x3c,0x74,0x64,0x3e,0x3c,0x62,0x75,0x74,0x74,0x6f,0x6e,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x27,0x77,0x61,0x72,0x6e,0x42,0x74,0x6e,0x27,0x20,0x6f,0x6e,0x63,0x6c,0x69,0x63,0x6b,0x3d,0x27,0x5f,0x64,0x65,0x6c,0x65,0x74,0x65,0x28,0x22,0x2b,0x69,0x2b,0x22,0x29,0x27,0x3e,0x64,0x65,0x6c,0x65,0x74,0x65,0x3c,0x2f,0x62,0x75,0x74,0x74,0x6f,0x6e,0x3e,0x3c,0x2f,0x74,0x64,0x3e,0x22,0x3b,0x20,0x74,0x61,0x62,0x6c,0x65,0x48,0x54,0x4d,0x4c,0x20,0x2b,0x3d,0x20,0x22,0x3c,0x74,0x64,0x3e,0x3c,0x62,0x75,0x74,0x74,0x6f,0x6e,0x20,0x63,0x6c,0x61,0x73,0x73,0x3d,0x27,0x73,0x65,0x6c,0x65,0x63,0x74,0x42,0x74,0x6e,0x27,0x20,0x6f,0x6e,0x63,0x6c,0x69,0x63,0x6b,0x3d,0x27,0x72,0x75,0x6e,0x28,0x22,0x2b,0x69,0x2b,0x22,0x29,0x27,0x3e,0x72,0x75,0x6e,0x3c,0x2f,0x62,0x75,0x74,0x74,0x6f,0x6e,0x3e,0x3c,0x2f,0x74,0x64,0x3e,0x22,0x3b,0x20,0x74,0x61,0x62,0x6c,0x65,0x48,0x54,0x4d,0x4c,0x20,0x2b,0x3d,0x20,0x22,0x3c,0x2f,0x74,0x72,0x3e,0x22,0x3b,0x20,0x7d,0x20,0x74,0x61,0x62,0x6c,0x65,0x2e,0x69,0x6e,0x6e,0x65,0x72,0x48,0x54,0x4d,0x4c,0x20,0x3d,0x20,0x74,0x61,0x62,0x6c,0x65,0x48,0x54,0x4d,0x4c,0x3b,0x20,0x7d,0x29,0x3b,0x20,0x7d,0x20,0x6c,0x6f,0x61,0x64,0x6c,0x69,0x73,0x74,0x28,0x29,0x3b,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x20,0x5f,0x64,0x65,0x6c,0x65,0x74,0x65,0x28,0x69,0x29,0x7b,0x20,0x67,0x65,0x74,0x52,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x28,0x22,0x64,0x65,0x6c,0x65,0x74,0x65,0x3f,0x6e,0x3d,0x22,0x2b,0x72,0x65,0x73,0x2e,0x6c,0x69,0x73,0x74,0x5b,0x69,0x5d,0x2e,0x6e,0x2c,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,0x72,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x54,0x65,0x78,0x74,0x29,0x7b,0x20,0x6c,0x6f,0x61,0x64,0x6c,0x69,0x73,0x74,0x28,0x29,0x3b,0x20,0x7d,0x29,0x3b,0x20,0x7d,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x20,0x72,0x75,0x6e,0x28,0x69,0x29,0x7b,0x20,0x67,0x65,0x74,0x52,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x28,0x22,0x72,0x75,0x6e,0x3f,0x6e,0x3d,0x22,0x2b,0x72,0x65,0x73,0x2e,0x6c,0x69,0x73,0x74,0x5b,0x69,0x5d,0x2e,0x6e,0x2c,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,0x72,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x54,0x65,0x78,0x74,0x29,0x7b,0x20,0x7d,0x29,0x3b,0x20,0x7d,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x20,0x66,0x6f,0x72,0x6d,0x61,0x74,0x28,0x29,0x7b,0x20,0x67,0x65,0x74,0x52,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x28,0x22,0x66,0x6f,0x72,0x6d,0x61,0x74,0x22,0x2c,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x28,0x72,0x65,0x73,0x70,0x6f,0x6e,0x73,0x65,0x54,0x65,0x78,0x74,0x29,0x7b,0x20,0x6c,0x6f,0x61,0x64,0x6c,0x69,0x73,0x74,0x28,0x29,0x3b,0x20,0x7d,0x29,0x3b,0x20,0x7d,0x20,0x3c,0x2f,0x73,0x63,0x72,0x69,0x70,0x74,0x3e,0x20,0x3c,0x2f,0x62,0x6f,0x64,0x79,0x3e,0x20,0x3c,0x2f,0x68,0x74,0x6d,0x6c,0x3e};
const uint8_t data_updateHTML[] PROGMEM = {0x3c,0x21,0x44,0x6f,0x63,0x74,0x79,0x70,0x65,0x20,0x68,0x74,0x6d,0x6c,0x3e,0x20,0x3c,0x68,0x74,0x6d,0x6c,0x3e,0x20,0x3c,0x68,0x65,0x61,0x64,0x3e,0x20,0x3c,0x6d,0x65,0x74,0x61,0x20,0x63,0x68,0x61,0x72,0x73,0x65,0x74,0x3d,0x22,0x75,0x74,0x66,0x2d,0x38,0x22,0x3e,0x20,0x3c,0x6c,0x69,0x6e,0x6b,0x20,0x72,0x65,0x6c,0x3d,0x22,0x73,0x74,0x79,0x6c,0x65,0x73,0x68,0x65,0x65,0x74,0x22,0x20,0x68,0x72,0x65,0x66,0x3d,0x22,0x73,0x74,0x79,0x6c,0x65,0x2e,0x63,0x73,0x73,0x22,0x3e,0x20,0x3c,0x6d,0x65,0x74,0x61,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x22,0x76,0x69,0x65,0x77,0x70,0x6f,0x72,0x74,0x22,0x20,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x3d,0x22,0x77,0x69,0x64,0x74,0x68,0x3d,0x64,0x65,0x76,0x69,0x63,0x65,0x2d,0x77,0x69,0x64,0x74,0x68,0x2c,0x20,0x69,0x6e,0x69,0x74,0x69,0x61,0x6c,0x2d,0x73,0x63,0x61,0x6c,0x65,0x3d,0x30,0x2e,0x38,0x22,0x3e,0x20,0x3c,0x2f,0x68,0x65,0x61,0x64,0x3e,0x20,0x3c,0x62,0x6f,0x64,0x79,0x3e,0x20,0x3c,0x64,0x69,0x76,0x20,0x69,0x64,0x3d,0x22,0x63,0x6f,0x6e,0x74,0x65,0x6e,0x74,0x22,0x3e,0x20,0x3c,0x68,0x31,0x3e,0x46,0x6c,0x61,0x73,0x68,0x20,0x4e,0x65,0x77,0x20,0x46,0x69,0x72,0x6d,0x77,0x61,0x72,0x65,0x3c,0x2f,0x68,0x31,0x3e,0x20,0x3c,0x66,0x6f,0x72,0x6d,0x20,0x6d,0x65,0x74,0x68,0x6f,0x64,0x3d,0x27,0x50,0x4f,0x53,0x54,0x27,0x20,0x61,0x63,0x74,0x69,0x6f,0x6e,0x3d,0x27,0x2f,0x75,0x70,0x64,0x61,0x74,0x65,0x27,0x20,0x65,0x6e,0x63,0x74,0x79,0x70,0x65,0x3d,0x27,0x6d,0x75,0x6c,0x74,0x69,0x70,0x61,0x72,0x74,0x2f,0x66,0x6f,0x72,0x6d,0x2d,0x64,0x61,0x74,0x61,0x27,0x3e,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x74,0x79,0x70,0x65,0x3d,0x27,0x66,0x69,0x6c,0x65,0x27,0x20,0x6e,0x61,0x6d,0x65,0x3d,0x27,0x75,0x70,0x64,0x61,0x74,0x65,0x27,0x3e,0x20,0x3c,0x62,0x72,0x20,0x2f,0x3e,0x20,0x3c,0x69,0x6e,0x70,0x75,0x74,0x20,0x74,0x79,0x70,0x65,0x3d,0x27,0x73,0x75,0x62,0x6d,0x69,0x74,0x27,0x20,0x76,0x61,0x6c,0x75,0x65,0x3d,0x27,0x55,0x70,0x64,0x61,0x74,0x65,0x27,0x3e,0x20,0x3c,0x2f,0x66,0x6f,0x72,0x6d,0x3e,0x20,0x3c,0x2f,0x64,0x69,0x76,0x3e,0x20,0x3c,0x2f,0x62,0x6f,0x64,0x79,0x3e,0x20,0x3c,0x2f,0x68,0x74,0x6d,0x6c,0x3e,0x20};

//format bytes
String formatBytes(size_t bytes){
  if (bytes < 1024){
    return String(bytes)+" B";
  } else if(bytes < (1024 * 1024)){
    return String(bytes/1024.0)+" KB";
  } else if(bytes < (1024 * 1024 * 1024)){
    return String(bytes/1024.0/1024.0)+" MB";
  } else {
    return String(bytes/1024.0/1024.0/1024.0)+" GB";
  }
}

//source: https://forum.arduino.cc/index.php?topic=38107.0
void PrintHex8(uint8_t *data, uint8_t length){
  Serial.print("0x");
  for (int i=0; i<length; i++) {
    if (data[i]<0x10) {Serial.print("0");}
    Serial.print(data[i],HEX);
    Serial.print(" ");
  }
}

//source: http://shelvin.de/eine-integer-zahl-in-das-arduiono-eeprom-schreiben/
void eepromWriteInt(int adr, int val) {
  byte low, high;
  low = val & 0xFF;
  high = (val >> 8) & 0xFF;
  EEPROM.write(adr, low);
  EEPROM.write(adr+1, high);
  return;
}

int eepromReadInt(int adr) {
  byte low, high;
  low = EEPROM.read(adr);
  high = EEPROM.read(adr+1);
  return low + ((high << 8) & 0xFF00);
}

#endif
