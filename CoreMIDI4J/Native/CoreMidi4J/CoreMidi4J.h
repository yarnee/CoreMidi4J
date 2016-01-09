/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jni.h"
/* Header for class uk_co_xfactorylibrarians_coremidi4j_CoreMidiClient */

#ifndef _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiClient
#define _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiClient
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiClient
 * Method:    createClient
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiClient_createClient
  (JNIEnv *, jobject, jstring);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiClient
 * Method:    disposeClient
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiClient_disposeClient
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class uk_co_xfactorylibrarians_coremidi4j_CoreMidiDestination */

#ifndef _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDestination
#define _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDestination
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDestination
 * Method:    getMicroSecondTime
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDestination_getMicroSecondTime
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider */

#ifndef _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
#define _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
#ifdef __cplusplus
extern "C" {
#endif
#undef uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_DEVICE_MAP_SIZE
#define uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_DEVICE_MAP_SIZE 20L
/* Inaccessible static: midiProperties */
/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getNumberOfSources
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getNumberOfSources
  (JNIEnv *, jobject);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getNumberOfDestinations
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getNumberOfDestinations
  (JNIEnv *, jobject);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getSource
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getSource
  (JNIEnv *, jobject, jint);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getDestination
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getDestination
  (JNIEnv *, jobject, jint);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getUniqueID
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getUniqueID
  (JNIEnv *, jobject, jint);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider
 * Method:    getMidiDeviceInfo
 * Signature: (I)Luk/co/xfactorylibrarians/coremidi4j/CoreMidiDeviceInfo;
 */
JNIEXPORT jobject JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiDeviceProvider_getMidiDeviceInfo
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class uk_co_xfactorylibrarians_coremidi4j_CoreMidiInputPort */

#ifndef _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiInputPort
#define _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiInputPort
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiInputPort
 * Method:    createInputPort
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiInputPort_createInputPort
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiInputPort
 * Method:    midiPortConnectSource
 * Signature: (ILuk/co/xfactorylibrarians/coremidi4j/CoreMidiSource;)J
 */
JNIEXPORT jlong JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiInputPort_midiPortConnectSource
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiInputPort
 * Method:    midiPortDisconnectSource
 * Signature: (IJLuk/co/xfactorylibrarians/coremidi4j/CoreMidiSource;)V
 */
JNIEXPORT void JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiInputPort_midiPortDisconnectSource
  (JNIEnv *, jobject, jint, jlong, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class uk_co_xfactorylibrarians_coremidi4j_CoreMidiOutputPort */

#ifndef _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiOutputPort
#define _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiOutputPort
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiOutputPort
 * Method:    createOutputPort
 * Signature: (ILjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiOutputPort_createOutputPort
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiOutputPort
 * Method:    sendMidiMessage
 * Signature: (IILjavax/sound/midi/MidiMessage;)V
 */
JNIEXPORT void JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiOutputPort_sendMidiMessage
  (JNIEnv *, jobject, jint, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class uk_co_xfactorylibrarians_coremidi4j_CoreMidiSource */

#ifndef _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiSource
#define _Included_uk_co_xfactorylibrarians_coremidi4j_CoreMidiSource
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     uk_co_xfactorylibrarians_coremidi4j_CoreMidiSource
 * Method:    getMicroSecondTime
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_uk_co_xfactorylibrarians_coremidi4j_CoreMidiSource_getMicroSecondTime
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif