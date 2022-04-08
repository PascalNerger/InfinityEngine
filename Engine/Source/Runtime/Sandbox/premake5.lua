project "Sandbox"
	kind "ConsoleApp"

	language "C++"
	staticruntime "off"

    systemversion "latest"
    cppdialect "C++20"

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
		RuntimeSourceDirectory .. "Sandbox/Public/**",

		RuntimeSourceDirectory .. "Core/Public/**",
		RuntimeSourceDirectory .. "Core/Public/",
	}

    links {
		"Core"
    }