﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "DemoReflection.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#endif

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
			IMPL_CPP_TYPE_INFO(demo::ColorBomboItemTemplate)
			IMPL_CPP_TYPE_INFO(demo::ColorBomboItemTemplateConstructor)
			IMPL_CPP_TYPE_INFO(demo::ColorListItemTemplate)
			IMPL_CPP_TYPE_INFO(demo::ColorListItemTemplateConstructor)
			IMPL_CPP_TYPE_INFO(demo::IColorItem)
			IMPL_CPP_TYPE_INFO(demo::IViewModel)
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)

#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
#define _ ,
			BEGIN_CLASS_MEMBER(::demo::ColorBomboItemTemplate)
				CLASS_MEMBER_BASE(::vl::presentation::templates::GuiControlTemplate)
				CLASS_MEMBER_BASE(::demo::ColorBomboItemTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::ColorBomboItemTemplate*(::vl::Ptr<::demo::IColorItem>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetTextColor, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_METHOD(SetTextColor, { L"__vwsn_value_" })
				CLASS_MEMBER_EVENT(TextColorChanged)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_FIELD(__vwsn_prop_TextColor)
				CLASS_MEMBER_PROPERTY_EVENT(TextColor, GetTextColor, SetTextColor, TextColorChanged)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::demo::ColorBomboItemTemplate)

			BEGIN_CLASS_MEMBER(::demo::ColorBomboItemTemplateConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::ColorBomboItemTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_ColorBomboItemTemplate_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::ColorBomboItemTemplateConstructor)

			BEGIN_CLASS_MEMBER(::demo::ColorListItemTemplate)
				CLASS_MEMBER_BASE(::vl::presentation::templates::GuiTextListItemTemplate)
				CLASS_MEMBER_BASE(::demo::ColorListItemTemplateConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::ColorListItemTemplate*(::vl::Ptr<::demo::IColorItem>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::demo::ColorListItemTemplate)

			BEGIN_CLASS_MEMBER(::demo::ColorListItemTemplateConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::ColorListItemTemplateConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_ColorListItemTemplate_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(ViewModel)
				CLASS_MEMBER_FIELD(self)
			END_CLASS_MEMBER(::demo::ColorListItemTemplateConstructor)

			BEGIN_INTERFACE_MEMBER(::demo::IColorItem)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(GetItemColor, NO_PARAMETER)
				CLASS_MEMBER_METHOD(GetItemName, NO_PARAMETER)
				CLASS_MEMBER_PROPERTY_READONLY(ItemColor, GetItemColor)
				CLASS_MEMBER_PROPERTY_READONLY(ItemName, GetItemName)
			END_INTERFACE_MEMBER(::demo::IColorItem)

			BEGIN_INTERFACE_MEMBER(::demo::IViewModel)
				CLASS_MEMBER_BASE(::vl::reflection::IDescriptable)
				CLASS_MEMBER_METHOD(GetColorItems, NO_PARAMETER)
				CLASS_MEMBER_PROPERTY_READONLY(ColorItems, GetColorItems)
			END_INTERFACE_MEMBER(::demo::IViewModel)

			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_BASE(::vl::presentation::controls::GuiWindow)
				CLASS_MEMBER_BASE(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(::vl::Ptr<::demo::IViewModel>), { L"__vwsn_ctor_parameter_ViewModel" })
				CLASS_MEMBER_METHOD(GetViewModel, NO_PARAMETER)
				CLASS_MEMBER_FIELD(__vwsn_parameter_ViewModel)
				CLASS_MEMBER_PROPERTY_READONLY(ViewModel, GetViewModel)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_BASE(::vl::reflection::DescriptableObject)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_demo_MainWindow_Initialize, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(ViewModel)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::ColorBomboItemTemplate)
					ADD_TYPE_INFO(::demo::ColorBomboItemTemplateConstructor)
					ADD_TYPE_INFO(::demo::ColorListItemTemplate)
					ADD_TYPE_INFO(::demo::ColorListItemTemplateConstructor)
					ADD_TYPE_INFO(::demo::IColorItem)
					ADD_TYPE_INFO(::demo::IViewModel)
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif
#endif

			bool LoadDemoTypes()
			{
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<DemoTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__clang__)
#pragma clang diagnostic pop
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#endif
