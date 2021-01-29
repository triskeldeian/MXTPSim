set(SIMU_WORKING_DIR ${CMAKE_INSTALL_PREFIX}/IBFSimulation)
set(CONF_DIR ${SIMU_WORKING_DIR}/conf)
set(PLUGIN_DIR plugin)

set( CONF_FILES IBFSimulation.xml)

foreach( file ${CONF_FILES})
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/${file} ${CMAKE_CURRENT_BINARY_DIR}/${file} @ONLY)
    install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${file} DESTINATION ${CONF_DIR})
endforeach( file )



