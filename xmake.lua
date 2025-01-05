set_project("app")
set_version("1.0.0")
set_warnings("all")
add_rules("mode.debug", "mode.release")
add_includedirs("include")
add_defines("_CRT_SECURE_NO_WARNINGS")
includes("@builtin/xpack")
includes("vendor/LCUI/xmake.lua")

target("app")
    if is_plat("windows") then
        add_rules("win.sdk.application")
        add_files("version.rc")
    end
    set_configdir("include")
    set_rundir("dist")
    add_deps("lcui")
    set_kind("binary")
    add_files("app/**.c")
    on_run(function (target)
        import("core.base.option")
        local argv = {}
        local options = {{nil, "memcheck",  "k",  nil, "enable memory check."}}
        local args = option.raw_parse(option.get("arguments") or {}, options)
        os.cd("$(scriptdir)/dist")
        if args.memcheck then
            if is_plat("windows") then
                table.insert(argv, target:targetfile())
                os.execv("drmemory", argv)
            else
                table.insert(argv, "valgrind")
                table.insert(argv, "--leak-check=full")
                table.insert(argv, "--error-exitcode=42")
                table.insert(argv, target:targetfile())
                os.execv("sudo", argv)
            end
        else
            os.execv(target:targetfile())
        end
    end)


xpack("app")
    set_title("LCUI Quick Start ($(arch))")
    set_description("A minimal LCUI application")
    set_author("i@lc-soft.io")
    set_maintainer("i@lc-soft.io")
    set_copyright("Copyright (C) 2014-present, Liu Chao <i@lc-soft.io>")
    set_licensefile("./LICENSE.txt")
    set_formats("nsis", "zip")
    set_basename("lcui-quick-start-v$(version)")
    add_installfiles("dist/(**)")
