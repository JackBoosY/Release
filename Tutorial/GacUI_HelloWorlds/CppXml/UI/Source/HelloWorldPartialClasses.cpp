/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "HelloWorld.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::HelloWorld::
#define GLOBAL_NAME ::vl_workflow_global::HelloWorld::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::HelloWorld::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_HelloWorld)
	vl_workflow_global::HelloWorld instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_HelloWorld)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	HelloWorld& HelloWorld::Instance()
	{
		return Getvl_workflow_global_HelloWorld().instance;
	}
}

/***********************************************************************
Class (::helloworld::MainWindowConstructor)
***********************************************************************/

namespace helloworld
{
	void MainWindowConstructor::__vwsn_initialize_instance_(::helloworld::MainWindow* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_)
	{
		(::vl::__vwsn::This(this)->__vwsn_precompile_0 = __vwsn_this_);
		(::vl::__vwsn::This(this)->__vwsn_precompile_2 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_2)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 480; __vwsn_temp__.y = 320; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 480; __vwsn_temp__.y = 320; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetText(::vl::WString(L"Hello, world!", false));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateLabelStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_1 = new ::vl::presentation::controls::GuiLabel(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetFont([&](){ ::vl::presentation::FontProperties __vwsn_temp__; __vwsn_temp__.fontFamily = ::vl::WString(L"Segoe UI", false); __vwsn_temp__.size = 32; __vwsn_temp__.antialias = true; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetText(::vl::WString(L"Welcome to GacUI Library!", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->AddChild(::vl::__vwsn::Ensure(static_cast<::vl::presentation::controls::GuiControl*>(::vl::__vwsn::This(this)->__vwsn_precompile_1)));
		}
	}

	MainWindowConstructor::MainWindowConstructor()
	{
	}

/***********************************************************************
Class (::helloworld::MainWindow)
***********************************************************************/

	MainWindow::MainWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateWindowStyle())
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString(L"helloworld::MainWindow", false));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->__vwsn_initialize_instance_(this, ::vl::__vwsn::Ensure(static_cast<::vl::presentation::GuiResourcePathResolver*>(__vwsn_resolver_.Obj())));
	}

	MainWindow::~MainWindow()
	{
		::vl::__vwsn::This(this)->ClearSubscriptions();
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(::helloworld::MainWindow)
			IMPL_CPP_TYPE_INFO(::helloworld::MainWindowConstructor)

#define _ ,
			BEGIN_CLASS_MEMBER(::helloworld::MainWindow)
			END_CLASS_MEMBER(::helloworld::MainWindow)

			BEGIN_CLASS_MEMBER(::helloworld::MainWindowConstructor)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" _ L"__vwsn_resolver_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
			END_CLASS_MEMBER(::helloworld::MainWindowConstructor)

#undef _
			class HelloWorldTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::helloworld::MainWindow)
					ADD_TYPE_INFO(::helloworld::MainWindowConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadHelloWorldTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<HelloWorldTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
