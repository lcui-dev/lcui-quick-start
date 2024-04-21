set_project("app")
set_version("1.0.0")
set_warnings("all")
add_rules("mode.debug", "mode.release")
add_includedirs("include")
add_defines("_CRT_SECURE_NO_WARNINGS")
includes("vendor/LCUI/xmake.lua")

target("app")
    if is_plat("windows") then
        add_rules("win.sdk.application")
    end
    set_configdir("include")
    set_rundir("dist")
    add_deps("lcui")
    set_kind("binary")
    add_files("app/**.c")
