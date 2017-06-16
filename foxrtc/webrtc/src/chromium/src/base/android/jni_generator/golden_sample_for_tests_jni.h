// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/example/jni_generator/SampleForTests

#ifndef org_chromium_example_jni_generator_SampleForTests_JNI
#define org_chromium_example_jni_generator_SampleForTests_JNI

#include <jni.h>

#include "base/android/jni_generator/jni_generator_helper.h"

#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.
namespace {
const char kInnerStructAClassPath[] =
    "org/chromium/example/jni_generator/SampleForTests$InnerStructA";
const char kInnerClassClassPath[] =
    "org/chromium/example/jni_generator/SampleForTests$InnerClass";
const char kSampleForTestsClassPath[] =
    "org/chromium/example/jni_generator/SampleForTests";
const char kInnerStructBClassPath[] =
    "org/chromium/example/jni_generator/SampleForTests$InnerStructB";
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_InnerStructA_clazz __attribute__((unused)) = 0;
#define InnerStructA_clazz(env) base::android::LazyGetClass(env, kInnerStructAClassPath, &g_InnerStructA_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_InnerClass_clazz __attribute__((unused)) = 0;
#define InnerClass_clazz(env) base::android::LazyGetClass(env, kInnerClassClassPath, &g_InnerClass_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_SampleForTests_clazz __attribute__((unused)) = 0;
#define SampleForTests_clazz(env) base::android::LazyGetClass(env, kSampleForTestsClassPath, &g_SampleForTests_clazz)
// Leaking this jclass as we cannot use LazyInstance from some threads.
base::subtle::AtomicWord g_InnerStructB_clazz __attribute__((unused)) = 0;
#define InnerStructB_clazz(env) base::android::LazyGetClass(env, kInnerStructBClassPath, &g_InnerStructB_clazz)

}  // namespace

namespace base {
namespace android {

// Step 2: method stubs.

static jlong Init(JNIEnv* env, const base::android::JavaParamRef<jobject>&
    jcaller,
    const base::android::JavaParamRef<jstring>& param);

extern "C" __attribute__((visibility("default")))
jlong Java_org_chromium_example_jni_1generator_SampleForTests_nativeInit(JNIEnv*
    env, jobject jcaller,
    jstring param) {
  return Init(env, base::android::JavaParamRef<jobject>(env, jcaller),
      base::android::JavaParamRef<jstring>(env, param));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeDestroy(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCPPClass) {
  CPPClass* native = reinterpret_cast<CPPClass*>(nativeCPPClass);
  CHECK_NATIVE_PTR(env, jcaller, native, "Destroy");
  return native->Destroy(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static jdouble GetDoubleFunction(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller);

extern "C" __attribute__((visibility("default")))
jdouble
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeGetDoubleFunction(JNIEnv*
    env, jobject jcaller) {
  return GetDoubleFunction(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

static jfloat GetFloatFunction(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jfloat
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeGetFloatFunction(JNIEnv*
    env, jclass jcaller) {
  return GetFloatFunction(env, base::android::JavaParamRef<jclass>(env,
      jcaller));
}

static void SetNonPODDatatype(JNIEnv* env, const
    base::android::JavaParamRef<jobject>& jcaller,
    const base::android::JavaParamRef<jobject>& rect);

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeSetNonPODDatatype(JNIEnv*
    env, jobject jcaller,
    jobject rect) {
  return SetNonPODDatatype(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, rect));
}

static base::android::ScopedJavaLocalRef<jobject> GetNonPODDatatype(JNIEnv* env,
    const base::android::JavaParamRef<jobject>& jcaller);

extern "C" __attribute__((visibility("default")))
jobject
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeGetNonPODDatatype(JNIEnv*
    env, jobject jcaller) {
  return GetNonPODDatatype(env, base::android::JavaParamRef<jobject>(env,
      jcaller)).Release();
}

extern "C" __attribute__((visibility("default")))
jint
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeMethod(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCPPClass) {
  CPPClass* native = reinterpret_cast<CPPClass*>(nativeCPPClass);
  CHECK_NATIVE_PTR(env, jcaller, native, "Method", 0);
  return native->Method(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
jdouble
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeMethodOtherP0(JNIEnv*
    env,
    jobject jcaller,
    jlong nativePtr) {
  CPPClass::InnerClass* native =
      reinterpret_cast<CPPClass::InnerClass*>(nativePtr);
  CHECK_NATIVE_PTR(env, jcaller, native, "MethodOtherP0", 0);
  return native->MethodOtherP0(env, base::android::JavaParamRef<jobject>(env,
      jcaller));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeAddStructB(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCPPClass,
    jobject b) {
  CPPClass* native = reinterpret_cast<CPPClass*>(nativeCPPClass);
  CHECK_NATIVE_PTR(env, jcaller, native, "AddStructB");
  return native->AddStructB(env, base::android::JavaParamRef<jobject>(env,
      jcaller), base::android::JavaParamRef<jobject>(env, b));
}

extern "C" __attribute__((visibility("default")))
void
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeIterateAndDoSomethingWithStructB(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCPPClass) {
  CPPClass* native = reinterpret_cast<CPPClass*>(nativeCPPClass);
  CHECK_NATIVE_PTR(env, jcaller, native, "IterateAndDoSomethingWithStructB");
  return native->IterateAndDoSomethingWithStructB(env,
      base::android::JavaParamRef<jobject>(env, jcaller));
}

extern "C" __attribute__((visibility("default")))
jstring
    Java_org_chromium_example_jni_1generator_SampleForTests_nativeReturnAString(JNIEnv*
    env,
    jobject jcaller,
    jlong nativeCPPClass) {
  CPPClass* native = reinterpret_cast<CPPClass*>(nativeCPPClass);
  CHECK_NATIVE_PTR(env, jcaller, native, "ReturnAString", NULL);
  return native->ReturnAString(env, base::android::JavaParamRef<jobject>(env,
      jcaller)).Release();
}

static jint GetInnerIntFunction(JNIEnv* env, const
    base::android::JavaParamRef<jclass>& jcaller);

extern "C" __attribute__((visibility("default")))
jint
    Java_org_chromium_example_jni_1generator_SampleForTests_00024InnerClass_nativeGetInnerIntFunction(JNIEnv*
    env, jclass jcaller) {
  return GetInnerIntFunction(env, base::android::JavaParamRef<jclass>(env,
      jcaller));
}

static base::subtle::AtomicWord g_SampleForTests_javaMethod = 0;
static jint Java_SampleForTests_javaMethod(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper foo,
    JniIntWrapper bar) {
  CHECK_CLAZZ(env, obj.obj(),
      SampleForTests_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SampleForTests_clazz(env),
      "javaMethod",

"("
"I"
"I"
")"
"I",
      &g_SampleForTests_javaMethod);

  jint ret =
      env->CallIntMethod(obj.obj(),
          method_id, as_jint(foo), as_jint(bar));
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_SampleForTests_staticJavaMethod = 0;
static jboolean Java_SampleForTests_staticJavaMethod(JNIEnv* env) {
  CHECK_CLAZZ(env, SampleForTests_clazz(env),
      SampleForTests_clazz(env), false);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, SampleForTests_clazz(env),
      "staticJavaMethod",

"("
")"
"Z",
      &g_SampleForTests_staticJavaMethod);

  jboolean ret =
      env->CallStaticBooleanMethod(SampleForTests_clazz(env),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_SampleForTests_packagePrivateJavaMethod = 0;
static void Java_SampleForTests_packagePrivateJavaMethod(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      SampleForTests_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SampleForTests_clazz(env),
      "packagePrivateJavaMethod",

"("
")"
"V",
      &g_SampleForTests_packagePrivateJavaMethod);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_SampleForTests_methodThatThrowsException = 0;
static void Java_SampleForTests_methodThatThrowsException(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      SampleForTests_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SampleForTests_clazz(env),
      "methodThatThrowsException",

"("
")"
"V",
      &g_SampleForTests_methodThatThrowsException);

     env->CallVoidMethod(obj.obj(),
          method_id);

}

static base::subtle::AtomicWord g_SampleForTests_javaMethodWithAnnotatedParam =
    0;
static void Java_SampleForTests_javaMethodWithAnnotatedParam(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, JniIntWrapper foo) {
  CHECK_CLAZZ(env, obj.obj(),
      SampleForTests_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SampleForTests_clazz(env),
      "javaMethodWithAnnotatedParam",

"("
"I"
")"
"V",
      &g_SampleForTests_javaMethodWithAnnotatedParam);

     env->CallVoidMethod(obj.obj(),
          method_id, as_jint(foo));
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_InnerStructA_create = 0;
static base::android::ScopedJavaLocalRef<jobject>
    Java_InnerStructA_create(JNIEnv* env, jlong l,
    JniIntWrapper i,
    const base::android::JavaRefOrBare<jstring>& s) {
  CHECK_CLAZZ(env, InnerStructA_clazz(env),
      InnerStructA_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, InnerStructA_clazz(env),
      "create",

"("
"J"
"I"
"Ljava/lang/String;"
")"
"Lorg/chromium/example/jni_generator/SampleForTests$InnerStructA;",
      &g_InnerStructA_create);

  jobject ret =
      env->CallStaticObjectMethod(InnerStructA_clazz(env),
          method_id, l, as_jint(i), s.obj());
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jobject>(env, ret);
}

static base::subtle::AtomicWord g_SampleForTests_addStructA = 0;
static void Java_SampleForTests_addStructA(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj, const
    base::android::JavaRefOrBare<jobject>& a) {
  CHECK_CLAZZ(env, obj.obj(),
      SampleForTests_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SampleForTests_clazz(env),
      "addStructA",

"("
"Lorg/chromium/example/jni_generator/SampleForTests$InnerStructA;"
")"
"V",
      &g_SampleForTests_addStructA);

     env->CallVoidMethod(obj.obj(),
          method_id, a.obj());
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_SampleForTests_iterateAndDoSomething = 0;
static void Java_SampleForTests_iterateAndDoSomething(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      SampleForTests_clazz(env));
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, SampleForTests_clazz(env),
      "iterateAndDoSomething",

"("
")"
"V",
      &g_SampleForTests_iterateAndDoSomething);

     env->CallVoidMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);

}

static base::subtle::AtomicWord g_InnerStructB_getKey = 0;
static jlong Java_InnerStructB_getKey(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      InnerStructB_clazz(env), 0);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, InnerStructB_clazz(env),
      "getKey",

"("
")"
"J",
      &g_InnerStructB_getKey);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          method_id);
  jni_generator::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_InnerStructB_getValue = 0;
static base::android::ScopedJavaLocalRef<jstring>
    Java_InnerStructB_getValue(JNIEnv* env, const
    base::android::JavaRefOrBare<jobject>& obj) {
  CHECK_CLAZZ(env, obj.obj(),
      InnerStructB_clazz(env), NULL);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, InnerStructB_clazz(env),
      "getValue",

"("
")"
"Ljava/lang/String;",
      &g_InnerStructB_getValue);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          method_id));
  jni_generator::CheckException(env);
  return base::android::ScopedJavaLocalRef<jstring>(env, ret);
}

// Step 3: RegisterNatives.

static const JNINativeMethod kMethodsInnerClass[] = {
    { "nativeGetInnerIntFunction",
"("
")"
"I",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_00024InnerClass_nativeGetInnerIntFunction)
    },
};

static const JNINativeMethod kMethodsSampleForTests[] = {
    { "nativeInit",
"("
"Ljava/lang/String;"
")"
"J",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeInit)
    },
    { "nativeDestroy",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeDestroy)
    },
    { "nativeGetDoubleFunction",
"("
")"
"D",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeGetDoubleFunction)
    },
    { "nativeGetFloatFunction",
"("
")"
"F",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeGetFloatFunction)
    },
    { "nativeSetNonPODDatatype",
"("
"Landroid/graphics/Rect;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeSetNonPODDatatype)
    },
    { "nativeGetNonPODDatatype",
"("
")"
"Ljava/lang/Object;",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeGetNonPODDatatype)
    },
    { "nativeMethod",
"("
"J"
")"
"I",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeMethod)
    },
    { "nativeMethodOtherP0",
"("
"J"
")"
"D",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeMethodOtherP0)
    },
    { "nativeAddStructB",
"("
"J"
"Lorg/chromium/example/jni_generator/SampleForTests$InnerStructB;"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeAddStructB)
    },
    { "nativeIterateAndDoSomethingWithStructB",
"("
"J"
")"
"V",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeIterateAndDoSomethingWithStructB)
    },
    { "nativeReturnAString",
"("
"J"
")"
"Ljava/lang/String;",
    reinterpret_cast<void*>(Java_org_chromium_example_jni_1generator_SampleForTests_nativeReturnAString)
    },
};

static bool RegisterNativesImpl(JNIEnv* env) {
  if (base::android::IsManualJniRegistrationDisabled()) return true;

  const int kMethodsInnerClassSize = arraysize(kMethodsInnerClass);

  if (env->RegisterNatives(InnerClass_clazz(env),
                           kMethodsInnerClass,
                           kMethodsInnerClassSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, InnerClass_clazz(env), __FILE__);
    return false;
  }

  const int kMethodsSampleForTestsSize = arraysize(kMethodsSampleForTests);

  if (env->RegisterNatives(SampleForTests_clazz(env),
                           kMethodsSampleForTests,
                           kMethodsSampleForTestsSize) < 0) {
    jni_generator::HandleRegistrationError(
        env, SampleForTests_clazz(env), __FILE__);
    return false;
  }

  return true;
}

}  // namespace android
}  // namespace base

#endif  // org_chromium_example_jni_generator_SampleForTests_JNI
