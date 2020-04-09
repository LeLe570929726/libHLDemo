find_package(protobuf 3 REQUIRED)
protobuf_generate_cpp(libHLDemo_PROTOBUF_SRCS libHLDemo_PROTOBUF_HDRS
	"Protobuf/ServerMessage.proto"
	"Protobuf/NetworkMessage.proto"
)

add_library(libHLDemo)

target_sources(libHLDemo 
	PRIVATE
		${libHLDemo_PROTOBUF_SRCS}
		${libHLDemo_PROTOBUF_HDRS}
)

target_link_libraries(libHLDemo
	PRIVATE
		protobuf::libprotobuf-lite
)

target_include_directories(libHLDemo
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}
)
