﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe ResourceBase.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_DOCUMENTEDITORBASE
#define VCZH_WORKFLOW_COMPILER_GENERATED_DOCUMENTEDITORBASE

#include "EditorBasePartialClasses.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace demo
{
	class DocumentEditorBase : public ::vl::presentation::controls::GuiCustomControl, public ::demo::DocumentEditorBaseConstructor, public ::vl::reflection::Description<DocumentEditorBase>
	{
		friend class ::demo::DocumentEditorBaseConstructor;
		friend class ::vl_workflow_global::__vwsnc10_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize____vl_reflection_description_ICoroutine;
		friend class ::vl_workflow_global::__vwsnc11_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc12_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc13_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc14_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc15_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc16_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc17_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc18_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc19_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc1_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc20_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc21_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc22_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc23_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc24_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc25_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc26_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc27_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc28_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc29_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc30_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc3_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc5_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc6_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc7_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc8_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc9_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf10_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf11_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf12_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf13_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf14_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf15_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf16_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf17_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf18_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf19_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf20_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf21_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf22_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf23_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf24_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf25_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf26_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize__;
		friend struct ::vl_workflow_global::__vwsnf27_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf28_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf29_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf30_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf31_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf32_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf33_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf34_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf35_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf36_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf37_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf38_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf39_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf3_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf40_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf41_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf42_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf43_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf44_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf45_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf46_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf47_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf48_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf49_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf4_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf50_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf51_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf52_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf53_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf54_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf55_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf56_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf57_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf58_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf59_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf5_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf60_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf61_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf6_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf7_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf8_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
		friend struct ::vl_workflow_global::__vwsnf9_EditorBase_demo_DocumentEditorBaseConstructor___vwsn_demo_DocumentEditorBase_Initialize_;
#ifdef VCZH_DESCRIPTABLEOBJECT_WITH_METADATA
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<DocumentEditorBase>;
#endif
	protected:
		::vl::presentation::controls::GuiToolstripCommand* __vwsn_prop_EditModeCommand;
		::vl::presentation::controls::GuiToolstripCommand* GetEditModeCommand();
		void SetEditModeCommand(::vl::presentation::controls::GuiToolstripCommand* __vwsn_value_);
		::vl::Event<void()> EditModeCommandChanged;
	private:
		void SetEditMode(::vl::presentation::controls::GuiDocumentCommonInterface::EditMode editMode);
	protected:
		::vl::presentation::controls::GuiToolstripCommand* SelectAlignmentCommand();
	private:
		void SetAlignment(::vl::Nullable<::vl::presentation::Alignment> alignment);
		bool __vwsn_prop_HasEditableSelection;
		bool GetHasEditableSelection();
		void SetHasEditableSelection(bool __vwsn_value_);
		::vl::Event<void()> HasEditableSelectionChanged;
		bool __vwsn_prop_HasEditableSelectionInSingleParagraph;
		bool GetHasEditableSelectionInSingleParagraph();
		void SetHasEditableSelectionInSingleParagraph(bool __vwsn_value_);
		::vl::Event<void()> HasEditableSelectionInSingleParagraphChanged;
		bool HasEditableCursor();
		bool HasEditableHyperlink(bool forEdit);
	protected:
		::vl::presentation::compositions::GuiGraphicsComposition* GetMenuContainer();
		::vl::presentation::compositions::GuiGraphicsComposition* GetToolstripContainer();
	public:
		void LoadAsPrivateFormat(const ::vl::WString& fileName);
		void SaveAsPrivateFormat(const ::vl::WString& fileName);
		void SaveAsRTF(const ::vl::WString& fileName);
		void SaveAsHTML(const ::vl::WString& fileName);
	private:
		void SaveDocument();
	public:
		bool CancelWindowClose();
		DocumentEditorBase();
		void __vwsn_instance_ctor_();
		~DocumentEditorBase();

	/* USER_CONTENT_BEGIN(custom members of ::demo::DocumentEditorBase) */
	/* USER_CONTENT_END() */
	};

}
#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
