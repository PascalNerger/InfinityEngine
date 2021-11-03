project "Sandbox"
	kind "ConsoleApp"
    
	language "C++"
	staticruntime "off"

    systemversion "latest"
    cppdialect "C++17"

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
		RuntimeSourceDirectory .. "**/Public",
	}

    links {
		
    }