-- The main engine directory
EngineDirectory = path.getabsolute("Engine/") .. "/"

-- The build output directories
BuildConfiguration = "%{cfg.buildcfg}"
OutputDirectoryName = BuildConfiguration

BinaryDirectory = EngineDirectory .. "Binaries/"
IntermediateDirectory = EngineDirectory .. "Intermediates/"

BinaryOutputDirectory = BinaryDirectory .. OutputDirectoryName
IntermediateOutputDirectory = IntermediateDirectory .. OutputDirectoryName

-- The engine source directories
SourceDirectory = EngineDirectory .. "Source/"

RuntimeSourceDirectory = SourceDirectory .. "Runtime/"
ThirdPartySourceDirectory = SourceDirectory .. "ThirdParty/"

-- The main workspace
workspace "InfinityEngine"
	architecture "x64"
	startproject "Sandbox"

	-- All available build configurations
	configurations {
		"Debug",
		"Release",
		"Production"
	}

	filter "system:windows"
		defines {
			"INFINITY_PLATFORM_WINDOWS",
		}

	filter "system:linux"
		defines {
			"INFINITY_PLATFORM_LINUX",
		}

	filter "system:macosx"
		defines {
			"INFINITY_PLATFORM_MAC",
		}


	filter "configurations:Debug"
		defines "INFINITY_BUILD_DEBUG"

		runtime "Debug"
		symbols "On"

	filter "configurations:Release"
		defines "INFINITY_BUILD_RELEASE"

		runtime "Release"
		optimize "On"

	filter "configurations:Production"
		defines "INFINITY_BUILD_PRODUCTION"

		runtime "Release"
		optimize "On"

		inlining "Auto"

group "Engine/Runtime"
	include (RuntimeSourceDirectory .. "Core")
	include (RuntimeSourceDirectory .. "Engine")
	include (RuntimeSourceDirectory .. "Sandbox")

	include (RuntimeSourceDirectory .. "RHI")
	include (RuntimeSourceDirectory .. "RHIVulkan")

	include (RuntimeSourceDirectory .. "Renderer")

group "Engine/ThirdParty"
