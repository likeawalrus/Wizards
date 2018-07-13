// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class WizardsEditorTarget : TargetRules
{
	public WizardsEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
        bUsesSteam = true;
		ExtraModuleNames.Add("Wizards");
	}
}
