/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: com.tencent.mm.algorithm.MD5
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_ALGORITHM_MD5_HPP_DECL
#define J2CPP_COM_TENCENT_MM_ALGORITHM_MD5_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class FileInputStream; } } }


#include <java/io/File.hpp>
#include <java/io/FileInputStream.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace com { namespace tencent { namespace mm { namespace algorithm {

	class MD5;
	class MD5
		: public object<MD5>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)

		explicit MD5(jobject jobj)
		: object<MD5>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		static local_ref< java::lang::String > getMessageDigest(local_ref< array<jbyte,1> >  const&);
		static local_ref< array<jbyte,1> > getRawDigest(local_ref< array<jbyte,1> >  const&);
		static local_ref< java::lang::String > getMD5(local_ref< java::io::FileInputStream >  const&, jint, jint, jint);
		static local_ref< java::lang::String > getMD5(local_ref< java::io::FileInputStream >  const&, jint);
		static local_ref< java::lang::String > getMD5(local_ref< java::lang::String >  const&);
		static local_ref< java::lang::String > getMD5(local_ref< java::io::File >  const&);
		static local_ref< java::lang::String > getMD5(local_ref< java::io::File >  const&, jint);
		static local_ref< java::lang::String > getMD5(local_ref< java::lang::String >  const&, jint, jint);
		static local_ref< java::lang::String > getMD5(local_ref< java::io::File >  const&, jint, jint);
	}; //class MD5

} //namespace algorithm
} //namespace mm
} //namespace tencent
} //namespace com

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_ALGORITHM_MD5_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_COM_TENCENT_MM_ALGORITHM_MD5_HPP_IMPL
#define J2CPP_COM_TENCENT_MM_ALGORITHM_MD5_HPP_IMPL

namespace j2cpp {



com::tencent::mm::algorithm::MD5::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


local_ref< java::lang::String > com::tencent::mm::algorithm::MD5::getMessageDigest(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::MD5::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_NAME(1),
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::lang::String >
	>(a0);
}

local_ref< array<jbyte,1> > com::tencent::mm::algorithm::MD5::getRawDigest(local_ref< array<jbyte,1> > const &a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::MD5::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_NAME(2),
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_SIGNATURE(2), 
		local_ref< array<jbyte,1> >
	>(a0);
}

local_ref< java::lang::String > com::tencent::mm::algorithm::MD5::getMD5(local_ref< java::io::FileInputStream > const &a0, jint a1, jint a2, jint a3)
{
	return call_static_method<
		com::tencent::mm::algorithm::MD5::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_NAME(3),
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< java::lang::String >
	>(a0, a1, a2, a3);
}

local_ref< java::lang::String > com::tencent::mm::algorithm::MD5::getMD5(local_ref< java::io::FileInputStream > const &a0, jint a1)
{
	return call_static_method<
		com::tencent::mm::algorithm::MD5::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_NAME(4),
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_SIGNATURE(4), 
		local_ref< java::lang::String >
	>(a0, a1);
}

local_ref< java::lang::String > com::tencent::mm::algorithm::MD5::getMD5(local_ref< java::lang::String > const &a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::MD5::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_NAME(5),
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_SIGNATURE(5), 
		local_ref< java::lang::String >
	>(a0);
}

local_ref< java::lang::String > com::tencent::mm::algorithm::MD5::getMD5(local_ref< java::io::File > const &a0)
{
	return call_static_method<
		com::tencent::mm::algorithm::MD5::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_NAME(6),
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_SIGNATURE(6), 
		local_ref< java::lang::String >
	>(a0);
}

local_ref< java::lang::String > com::tencent::mm::algorithm::MD5::getMD5(local_ref< java::io::File > const &a0, jint a1)
{
	return call_static_method<
		com::tencent::mm::algorithm::MD5::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_NAME(7),
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_SIGNATURE(7), 
		local_ref< java::lang::String >
	>(a0, a1);
}

local_ref< java::lang::String > com::tencent::mm::algorithm::MD5::getMD5(local_ref< java::lang::String > const &a0, jint a1, jint a2)
{
	return call_static_method<
		com::tencent::mm::algorithm::MD5::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_NAME(8),
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::lang::String >
	>(a0, a1, a2);
}

local_ref< java::lang::String > com::tencent::mm::algorithm::MD5::getMD5(local_ref< java::io::File > const &a0, jint a1, jint a2)
{
	return call_static_method<
		com::tencent::mm::algorithm::MD5::J2CPP_CLASS_NAME,
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_NAME(9),
		com::tencent::mm::algorithm::MD5::J2CPP_METHOD_SIGNATURE(9), 
		local_ref< java::lang::String >
	>(a0, a1, a2);
}


J2CPP_DEFINE_CLASS(com::tencent::mm::algorithm::MD5,"com/tencent/mm/algorithm/MD5")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,0,"<init>","()V")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,1,"getMessageDigest","([B)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,2,"getRawDigest","([B)[B")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,3,"getMD5","(Ljava/io/FileInputStream;III)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,4,"getMD5","(Ljava/io/FileInputStream;I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,5,"getMD5","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,6,"getMD5","(Ljava/io/File;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,7,"getMD5","(Ljava/io/File;I)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,8,"getMD5","(Ljava/lang/String;II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(com::tencent::mm::algorithm::MD5,9,"getMD5","(Ljava/io/File;II)Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_COM_TENCENT_MM_ALGORITHM_MD5_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
