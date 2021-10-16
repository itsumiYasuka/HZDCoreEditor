#pragma once

#include "common.h"

namespace RTTIIDAExporter
{
	using namespace HRZ;

	void ExportAll(const char *Directory);
	void ExportMSRTTI(FILE *F);
	void ExportGGRTTI(FILE *F);
	void ExportGGRTTIStructures(FILE *F);
	void ExportGameSymbolRTTI(FILE *F);
	void ExportFullgameScriptSymbols(FILE *F);
}