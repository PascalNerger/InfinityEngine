project "RHI"
	kind "SharedLib"
    
	language "C++"
	staticruntime "off"

    systemversion "latest"
    cppdialect "C++latest"

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
		RuntimeSourceDirectory .. "RHI/Public/**",
	}

    defines {
        "INFINITY_BUILD_DYNAMIC_LIB"
    }