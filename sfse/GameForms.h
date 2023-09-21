#pragma once

#include "sfse/GameFormComponents.h"
#include "sfse/GameReflection.h"
#include "sfse/NiTypes.h"

class TESFile;
class TESObjectREFR;
class BGSMorphableObject;

class TESForm : public TESFormRefCount, public BSReflection::IObject
{
public:
	virtual ~TESForm();  // 00

	struct ACTIVATE_DATA
	{
		TESObjectREFR*	activatedRef;
		TESObjectREFR*	actionRef;
		TESForm*		objectToGet;
		s32				count;
		bool			unk1C;
	};

	// add
	virtual void          Unk_08();                                                         // 08
	virtual void          Unk_09();                                                         // 09
	virtual void          Unk_0A();                                                         // 0A
	virtual void          Unk_0B();                                                         // 0B
	virtual void          Unk_0C();                                                         // 0C
	virtual void          Unk_0D();                                                         // 0D
	virtual void          Unk_0E();                                                         // 0E
	virtual void          Unk_0F();                                                         // 0F
	virtual void          Unk_10();                                                         // 10
	virtual void          Unk_11();                                                         // 11
	virtual void          Unk_12();                                                         // 12
	virtual void          Unk_13();                                                         // 13
	virtual void          Unk_14();                                                         // 14
	virtual void          Unk_15();                                                         // 15
	virtual void          Unk_16();                                                         // 16
	virtual bool          AddChange(u32 a_changeFlags);                           // 17
	virtual void          RemoveChange(u32 a_changeFlags);                        // 18
	virtual void          Unk_19();                                                         // 19
	virtual void          Unk_1A();                                                         // 1A
	virtual void          Unk_1B();                                                         // 1B
	virtual void          Unk_1C();                                                         // 1C
	virtual void          Unk_1D();                                                         // 1D
	virtual void          Unk_1E();                                                         // 1E
	virtual void          InitItemImpl();                                                   // 1F
	virtual TESFile* GetRevertFile() const;                                            // 20
	virtual TESFile* GetDescriptionOwnerFile() const;                                  // 21
	virtual u8  GetSavedFormType();                                               // 22
	virtual void          GetFormDetailedString(char* a_dest, u32 a_size) const;  // 23
	virtual bool          GetKnown() const;                                                 // 24
	virtual bool          GetRandomAnim() const;                                            // 25
	virtual bool          GetPlayable() const;                                              // 26
	virtual void          SetPlayable(bool a_set);                                          // 27
	virtual void          Unk_28();                                                         // 28
	virtual void          Unk_29();                                                         // 29
	virtual bool          GetDangerous() const;                                             // 2A
	virtual bool          QHasCurrents() const;                                             // 2B
	virtual bool          GetObstacle() const;                                              // 2C
	virtual void          Unk_2D();                                                         // 2D
	virtual bool          GetOnLocalMap() const;                                            // 2E
	virtual bool          GetMustUpdate() const;                                            // 2F
	virtual void          SetOnLocalMap(bool a_val);                                        // 30
	virtual void          Unk_31();                                                         // 31 - new?
	virtual void          Unk_32();                                                         // 32 - GetIgnoredBySandbox()?
	virtual void          SetDelete(bool a_deleted);                                        // 33
	virtual void          SetAltered(bool a_altered);                                       // 34
	virtual void          Unk_35();                                                         // 35
	virtual void          Unk_36();                                                         // 36
	virtual void          Unk_37();                                                         // 37
	virtual void          Unk_38();                                                         // 38
	virtual void          Unk_39();                                                         // 39
	virtual void          Unk_3A();                                                         // 3A
	virtual void          Unk_3B();                                                         // 3B
	virtual void          Unk_3C();                                                         // 3C
	virtual void          Unk_3D();                                                         // 3D
	virtual void          Unk_3E();                                                         // 3E
	virtual void          Unk_3F();                                                         // 3F
	virtual bool          IsFurniture();                                                    // 40 - new
	virtual void          Unk_41();                                                         // 41
	virtual void          Unk_42();                                                         // 42
	virtual void          Unk_43();                                                         // 43
	virtual void          Unk_44();                                                         // 44
	virtual void          Unk_45();                                                         // 45
	virtual void          Unk_46();                                                         // 46
	virtual void          Unk_47();                                                         // 47
	virtual void          Unk_48();                                                         // 48
	virtual void          Unk_49();                                                         // 49
	virtual void          Unk_4A();                                                         // 4A
	virtual void          Unk_4B();                                                         // 4B
	virtual u32 GetFullNameLength() const;                                        // 4C - new
	virtual const char* GetFullName() const;                                              // 4D - new
	virtual void          Unk_4E();                                                         // 4E
	virtual void          Unk_4F();                                                         // 4F
	virtual void          Unk_50();                                                         // 50
	virtual void          Unk_51();                                                         // 51
	virtual void          Unk_52();                                                         // 52
	virtual void          Unk_53();                                                         // 53
	virtual bool          Activate(const ACTIVATE_DATA& a_activateData);                    // 54
	virtual void          Unk_55();                                                         // 55
	virtual void          Unk_56();                                                         // 56
	virtual void          Unk_57();                                                         // 57
	virtual void          Unk_58();                                                         // 58
	virtual void          Unk_59();                                                         // 59
	virtual void          Unk_5A();                                                         // 5A
	virtual void          Unk_5B();                                                         // 5B
	virtual void          Unk_5C();                                                         // 5C
	virtual u32 GetFilledSlots() const;                                           // 5D
	virtual u32 GetFilledSlotsImpl() const;                                       // 5E
	virtual float         GetDesirability() const;                                          // 5F
	virtual void          Unk_60();                                                         // 60
	virtual void          Unk_61();                                                         // 61

	// members
	u64 sourceFiles;  // 18 - TESFileContainer
	u32 unk20;        // 20
	u32 unk24;        // 24
	u32 formFlags;    // 28
	u32 unk2C;        // 2C
	u32 formID;       // 30
	u8  unk34;        // 34 - also flag
	u8  unk35;        // 35
	u8  formType;     // 36
};
static_assert(offsetof(TESForm, refCount) == 0x08);
static_assert(sizeof(TESForm) == 0x38);

class BGSKeyword : public TESForm
{
public:
	//...
};

struct OBJ_REFR
{
public:
	// members
	NiPoint3A angle;            // 00
	NiPoint3A location;         // 10
	TESForm* objectReference;  // 20 - TESBoundObject
};
static_assert(sizeof(OBJ_REFR) == 0x30);

//using _LookupByEDID = TESForm * (*)(const char* a_edid);
//inline RelocAddr<_LookupByEDID> LookupByEDID(0x014D7F0C);

class BGSListForm :
	public TESForm
{
public:
	BSTArray<TESForm*> ArrayOfForms;		// 38
	u64	unk48;	// 48
	u64	unk50;	// 50
	u64	unk58;	// 58
	u64	unk60;	// 60
	u64	unk68;	// 68
	u64	unk70;	// 70
	u64	unk78;	// 78
	u64	unk80;	// 80
	u64	unk88;	// 88
};
static_assert(sizeof(BGSListForm) == 0x90);

class BGSMorphableObject : public TESForm
{
public:
	BSFixedString		unk38;					// 38
	BGSMorphableObject*	unk40;					// 40 - Seems to point to itself?
	BSFixedString		performanceMaterial;	// 48
	BSFixedString		chargenMaterial;		// 50
	BSFixedString		unk58;					// 58
	u32					unk60;					// 60
	u32					unk64;					// 64
};
static_assert(sizeof(BGSMorphableObject) == 0x68);

class BGSHeadPart : 
	public TESForm,
	public TESFullName, // 38
	public BGSModelMaterialSwap // 48
{
public:
	enum HeadPartType : s32
	{
		HeadPartMisc = 0,
		HeadPartFace,
		HeadPartRightEye,
		HeadPartHair,
		HeadPartFacialHair,
		HeadPart5,
		HeadPartEyebrows,
		HeadPartJewelry,
		HeadPart8,
		HeadPartTeeth,
		HeadPart10,
		HeadPart11,
		HeadPartLeftEye,
		HeadPartEyelashes
	};

	BSFixedString unk70; // 70
	BGSHeadPart* unk78;	// 78
	TESModel ChargenModel;	// 80
	TESModelTri MorphsA[3];	// A0
	u8	unk100;	// 100
	u8	pad101[7];	// 101
	u64	unk108; // 108
	BSTArray<BGSHeadPart*>	extraParts;	// 110
	BGSMorphableObject*	morph;	// 120
	u64	unk128;	// 128
	BGSListForm*	unk130;	// 130
	BSFixedString	unk138;	// 138
	BSFixedString	unk140;	// 140
	HeadPartType	eType;	// 148
	u32	unk14C; // 14C
};
static_assert(sizeof(BGSHeadPart) == 0x150);
static_assert(offsetof(BGSHeadPart, strFullName) == 0x40);
static_assert(offsetof(BGSHeadPart, cModel) == 0x50);