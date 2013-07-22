SUBDIRS = . mxf2raw raw2bmx bmxtranswrap


noinst_LTLIBRARIES = libapp.la

libapp_la_SOURCES = \
	AppUtils.cpp \
	AppUtils.h \
	AS11Helper.cpp \
	AS11Helper.h

libapp_la_CXXFLAGS = $(BMX_CFLAGS)

library_includedir = $(includedir)/bmx-@BMX_MAJORMINOR@/bmx

nobase_library_include_HEADERS = \
	AppUtils.h \
	AS11Helper.h
