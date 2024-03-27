// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_3_Example : ModuleRules
{
	public UE5_3_Example(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG" });
        PublicIncludePaths.AddRange(
        new string[] {
            "UE5_3_Example",
            "UE5_3_Example/Actors",
            "UE5_3_Example/Components",
            "UE5_3_Example/Mods",
            "UE5_3_Example/SystemQueue",
            "UE5_3_Example/Systems",
        });
    }
}
