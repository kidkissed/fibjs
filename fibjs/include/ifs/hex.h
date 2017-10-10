/***************************************************************************
 *                                                                         *
 *   This file was automatically generated using idlc.js                   *
 *   PLEASE DO NOT EDIT!!!!                                                *
 *                                                                         *
 ***************************************************************************/

#ifndef _hex_base_H_
#define _hex_base_H_

/**
 @author Leo Hoo <lion@9465.net>
 */

#include "../object.h"

namespace fibjs {

class Buffer_base;

class hex_base : public object_base {
    DECLARE_CLASS(hex_base);

public:
    // hex_base
    static result_t encode(Buffer_base* data, exlib::string& retVal);
    static result_t decode(exlib::string data, obj_ptr<Buffer_base>& retVal);

public:
    static void s__new(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
        CONSTRUCT_INIT();

        Isolate* isolate = Isolate::current();

        isolate->m_isolate->ThrowException(
            isolate->NewString("not a constructor"));
    }

public:
    static void s_encode(const v8::FunctionCallbackInfo<v8::Value>& args);
    static void s_decode(const v8::FunctionCallbackInfo<v8::Value>& args);
};
}

#include "Buffer.h"

namespace fibjs {
inline ClassInfo& hex_base::class_info()
{
    static ClassData::ClassMethod s_method[] = {
        { "encode", s_encode, true },
        { "decode", s_decode, true }
    };

    static ClassData s_cd = {
        "hex", true, s__new, NULL,
        ARRAYSIZE(s_method), s_method, 0, NULL, 0, NULL, NULL, NULL,
        &object_base::class_info()
    };

    static ClassInfo s_ci(s_cd);
    return s_ci;
}

inline void hex_base::s_encode(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    exlib::string vr;

    METHOD_ENTER("hex.encode");

    METHOD_OVER(1, 1);

    ARG(obj_ptr<Buffer_base>, 0);

    hr = encode(v0, vr);

    METHOD_RETURN();
}

inline void hex_base::s_decode(const v8::FunctionCallbackInfo<v8::Value>& args)
{
    obj_ptr<Buffer_base> vr;

    METHOD_ENTER("hex.decode");

    METHOD_OVER(1, 1);

    ARG(exlib::string, 0);

    hr = decode(v0, vr);

    METHOD_RETURN();
}
}

#endif
