SUBDIRS = common frame essence_parser writer_helper mxf_helper \
	mxf_reader as02 mxf_op1a d10_mxf as11 avid_mxf wave clip_writer
# mov_writer mov_reader mxf_atom


lib_LTLIBRARIES = libbmx-@BMX_MAJORMINOR@.la

libbmx_@BMX_MAJORMINOR@_la_SOURCES =
libbmx_@BMX_MAJORMINOR@_la_LDFLAGS = \
	-version-info $(BMX_LIBVERSION)
libbmx_@BMX_MAJORMINOR@_la_LIBADD = \
	common/libcommon.la \
	frame/libframe.la \
	essence_parser/libessenceparser.la \
	writer_helper/libwriterhelper.la \
	mxf_helper/libmxfhelper.la \
	mxf_reader/libmxfreader.la \
	as02/libas02.la \
	mxf_op1a/libmxfop1a.la \
	avid_mxf/libavidmxf.la \
	d10_mxf/libd10mxf.la \
	as11/libas11.la \
	wave/libwave.la \
	clip_writer/libclipwriter.la \
	$(BMX_LIBADDLIBS)



