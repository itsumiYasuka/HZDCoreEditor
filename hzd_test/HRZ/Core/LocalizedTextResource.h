#pragma once

#include "../PCore/Common.h"

#include "ResourceWithoutLegacyName.h"

namespace HRZ
{

class LocalizedTextResource : public ResourceWithoutLegacyName
{
public:
	wchar_t *m_TextData;			// 0x20
	uint16_t m_TextDataLength;		// 0x28
	void *m_UnknownLinkedList30;	// 0x30 Linked list where elements are 56 bytes in size

	virtual const GGRTTI *GetRTTI() const override;		// 0
	virtual ~LocalizedTextResource() override;			// 1

	WString GetTranslation() const
	{
		WString str;
		CallOffset<0x08823C0, void(*)(const LocalizedTextResource *, WString&)>(this, str);

		return str;
	}
};
assert_size(LocalizedTextResource, 0x38);

}