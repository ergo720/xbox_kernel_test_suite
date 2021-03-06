#ifndef XC_TESTS_H
#define XC_TESTS_H

void test_XcSHAInit();
void test_XcSHAUpdate();
void test_XcSHAFinal();
void test_XcRC4Key();
void test_XcRC4Crypt();
void test_XcHMAC();
void test_XcPKEncPublic();
void test_XcPKDecPrivate();
void test_XcPKGetKeyLen();
void test_XcVerifyPKCS1Signature();
void test_XcModExp();
void test_XcDESKeyParity();
void test_XcKeyTable();
void test_XcBlockCrypt();
void test_XcBlockCryptCBC();
void test_XcCryptService();
void test_XcUpdateCrypto();


#endif
