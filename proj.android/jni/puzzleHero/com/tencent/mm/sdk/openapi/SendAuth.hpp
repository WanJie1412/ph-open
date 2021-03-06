/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.sdk.openapi.SendAuth
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_OPENAPI_SENDAUTH_HPP_DECL
#define J2CPP_COM_TENCENT_MM_SDK_OPENAPI_SENDAUTH_HPP_DECL


namespace j2cpp { namespace android { namespace os { class Bundle; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace sdk { namespace openapi { class BaseReq; } } } } } }
namespace j2cpp { namespace com { namespace tencent { namespace mm { namespace sdk { namespace openapi { class BaseResp; } } } } } }


#include <android/os/Bundle.hpp>
#include <com/tencent/mm/sdk/openapi/BaseReq.hpp>
#include <com/tencent/mm/sdk/openapi/BaseResp.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace sdk { namespace openapi {

	class SendAuth;
	namespace SendAuth_ {

		class Req;
		class Req
			: public object<Req>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_METHOD(5)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)

			explicit Req(jobject jobj)
			: object<Req>(jobj)
			, scope(jobj)
			, state(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<com::tencent::mm::sdk::openapi::BaseReq>() const;


			Req();
			Req(local_ref< android::os::Bundle > const&);
			jint getType();
			void fromBundle(local_ref< android::os::Bundle >  const&);
			void toBundle(local_ref< android::os::Bundle >  const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > scope;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > state;
		}; //class Req

		class Resp;
		class Resp
			: public object<Resp>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)
			J2CPP_DECLARE_METHOD(1)
			J2CPP_DECLARE_METHOD(2)
			J2CPP_DECLARE_METHOD(3)
			J2CPP_DECLARE_METHOD(4)
			J2CPP_DECLARE_METHOD(5)
			J2CPP_DECLARE_FIELD(0)
			J2CPP_DECLARE_FIELD(1)
			J2CPP_DECLARE_FIELD(2)
			J2CPP_DECLARE_FIELD(3)
			J2CPP_DECLARE_FIELD(4)

			explicit Resp(jobject jobj)
			: object<Resp>(jobj)
			, userName(jobj)
			, token(jobj)
			, expireDate(jobj)
			, state(jobj)
			, resultUrl(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;
			operator local_ref<com::tencent::mm::sdk::openapi::BaseResp>() const;


			Resp();
			Resp(local_ref< android::os::Bundle > const&);
			jint getType();
			void fromBundle(local_ref< android::os::Bundle >  const&);
			void toBundle(local_ref< android::os::Bundle >  const&);

			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > userName;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), local_ref< java::lang::String > > token;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > expireDate;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), local_ref< java::lang::String > > state;
			field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), local_ref< java::lang::String > > resultUrl;
		}; //class Resp

	} //namespace SendAuth_

	class SendAuth
		: public object<SendAuth>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		typedef SendAuth_::Req Req;
		typedef SendAuth_::Resp Resp;

		explicit SendAuth(jobject jobj)
		: object<SendAuth>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


	}; //class SendAuth

} //namespace openapi
} //namespace sdk
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_OPENAPI_SENDAUTH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_SDK_OPENAPI_SENDAUTH_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_SDK_OPENAPI_SENDAUTH_HPP_IMPL

namespace j2cpp {




com::tencent::mm::sdk::openapi::SendAuth_::Req::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

com::tencent::mm::sdk::openapi::SendAuth_::Req::operator local_ref<com::tencent::mm::sdk::openapi::BaseReq>() const
{
	return local_ref<com::tencent::mm::sdk::openapi::BaseReq>(get_jobject());
}


com::tencent::mm::sdk::openapi::SendAuth_::Req::Req()
: object<com::tencent::mm::sdk::openapi::SendAuth_::Req>(
	call_new_object<
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, scope(get_jobject())
, state(get_jobject())
{
}



com::tencent::mm::sdk::openapi::SendAuth_::Req::Req(local_ref< android::os::Bundle > const &a0)
: object<com::tencent::mm::sdk::openapi::SendAuth_::Req>(
	call_new_object<
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
, scope(get_jobject())
, state(get_jobject())
{
}


jint com::tencent::mm::sdk::openapi::SendAuth_::Req::getType()
{
	return call_method<
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void com::tencent::mm::sdk::openapi::SendAuth_::Req::fromBundle(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void com::tencent::mm::sdk::openapi::SendAuth_::Req::toBundle(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::openapi::SendAuth_::Req::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}




J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::openapi::SendAuth_::Req,"com/tencent/mm/sdk/openapi/SendAuth$Req")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Req,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Req,1,"<init>","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Req,2,"getType","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Req,3,"fromBundle","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Req,4,"toBundle","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Req,5,"checkArgs","()Z")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::openapi::SendAuth_::Req,0,"scope","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::openapi::SendAuth_::Req,1,"state","Ljava/lang/String;")


com::tencent::mm::sdk::openapi::SendAuth_::Resp::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

com::tencent::mm::sdk::openapi::SendAuth_::Resp::operator local_ref<com::tencent::mm::sdk::openapi::BaseResp>() const
{
	return local_ref<com::tencent::mm::sdk::openapi::BaseResp>(get_jobject());
}


com::tencent::mm::sdk::openapi::SendAuth_::Resp::Resp()
: object<com::tencent::mm::sdk::openapi::SendAuth_::Resp>(
	call_new_object<
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_NAME(0),
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_SIGNATURE(0)
	>()
)
, userName(get_jobject())
, token(get_jobject())
, expireDate(get_jobject())
, state(get_jobject())
, resultUrl(get_jobject())
{
}



com::tencent::mm::sdk::openapi::SendAuth_::Resp::Resp(local_ref< android::os::Bundle > const &a0)
: object<com::tencent::mm::sdk::openapi::SendAuth_::Resp>(
	call_new_object<
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_NAME(1),
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
, userName(get_jobject())
, token(get_jobject())
, expireDate(get_jobject())
, state(get_jobject())
, resultUrl(get_jobject())
{
}


jint com::tencent::mm::sdk::openapi::SendAuth_::Resp::getType()
{
	return call_method<
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_NAME(2),
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_SIGNATURE(2), 
		jint
	>(get_jobject());
}

void com::tencent::mm::sdk::openapi::SendAuth_::Resp::fromBundle(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_NAME(3),
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}

void com::tencent::mm::sdk::openapi::SendAuth_::Resp::toBundle(local_ref< android::os::Bundle > const &a0)
{
	return call_method<
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_CLASS_NAME,
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_NAME(4),
		com::tencent::mm::sdk::openapi::SendAuth_::Resp::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject(), a0);
}




J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::openapi::SendAuth_::Resp,"com/tencent/mm/sdk/openapi/SendAuth$Resp")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,1,"<init>","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,2,"getType","()I")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,3,"fromBundle","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,4,"toBundle","(Landroid/os/Bundle;)V")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,5,"checkArgs","()Z")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,0,"userName","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,1,"token","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,2,"expireDate","I")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,3,"state","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(com::tencent::mm::sdk::openapi::SendAuth_::Resp,4,"resultUrl","Ljava/lang/String;")



com::tencent::mm::sdk::openapi::SendAuth::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}



J2CPP_DEFINE_CLASS(com::tencent::mm::sdk::openapi::SendAuth,"com/tencent/mm/sdk/openapi/SendAuth")
J2CPP_DEFINE_METHOD(com::tencent::mm::sdk::openapi::SendAuth,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_SDK_OPENAPI_SENDAUTH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
