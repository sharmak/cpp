/*
 * MyLogger.cpp
 *
 *  Created on: 08-Apr-2015
 *      Author: kishor
 */

#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
namespace logging = boost::log;

// Function to initialize logging
void init_logging() {
	logging::core::get()->set_filter(
		logging::trivial::severity >= logging::trivial::info
	);

}


