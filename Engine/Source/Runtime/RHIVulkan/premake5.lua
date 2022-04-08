project "RHIVulkan"
	kind "SharedLib"

	language "C++"
	staticruntime "off"

    systemversion "latest"
    cppdialect "C++20"

	filter "system:linux"
		cppdialect "C++2a"

	targetname ("%{wks.name}-%{prj.name}")
	targetprefix ("")

	targetdir (BinaryOutputDirectory)
	objdir ("!" .. IntermediateOutputDirectory .. "/" .. "%{prj.name}")

	files {
		"premake5.lua",

		"Public/**.h",
		"Public/**.inl",

		"Private/**.h",
		"Private/**.inl",
		"Private/**.cpp"
	}

	includedirs {
		RuntimeSourceDirectory .. "RHIVulkan/Public/**",
	}

    defines {
        "INFINITY_BUILD_DYNAMIC_LIB"
    }