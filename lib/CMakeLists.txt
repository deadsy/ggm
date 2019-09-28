cmake_minimum_required(VERSION 3.13.1)

project(libggm)

add_library(ggm STATIC
		core/block.c
		core/event.c
		core/lut.c
		core/math.c
		core/midi.c
		core/module.c
		core/port.c
		core/synth.c
		core/util.c
		module/template.c
		module/delay/delay.c
		module/env/adsr.c
		module/filter/biquad.c
		module/filter/svf.c
		module/midi/mono.c
		module/midi/poly.c
		module/mix/pan.c
		module/osc/goom.c
		module/osc/ks.c
		module/osc/lfo.c
		module/osc/noise.c
		module/osc/sine.c
		module/pm/breath.c
		module/root/metro.c
		module/root/poly.c
		module/seq/seq.c
		module/seq/smf.c
		module/voice/goom.c
		module/voice/osc.c
)

target_include_directories(ggm PRIVATE
    inc
    module
)

target_compile_options(ggm PRIVATE
	-Wall
  -Wextra
  -Wstrict-prototypes
  -Wno-unused-parameter
  -Wpedantic
  -Werror
)
