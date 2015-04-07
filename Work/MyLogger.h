/*
 * MyLogger.h
 *
 *  Created on: 08-Apr-2015
 *      Author: kishor
 */

#ifndef MYLOGGER_H_
#define MYLOGGER_H_
// ============================================================
// Couple of notes for configuring logger:
// From command line the invocation should look like following
//
// kishor@kishor-Vostro-2520:~/test$ g++ -DBOOST_LOG_DYN_LINK -c boost_log.cpp kishor@kishor-Vostro-2520:~/test$
// kishor@kishor-Vostro-2520:~/test$ g++  boost_log.o -lpthread -lboost_log -o boost_log
// kishor@kishor-Vostro-2520:~/test$
//
// I modified the eclipse workspace to have BOOST_LOG_DYN_LINK flag configured.
// and added -l link against pthread and boost log
//
// FTR in my system boost include files are at
// /usr/include/boost and libraries are present in /usr/lib/
//
// Useful stackoverflow links: http://stackoverflow.com/questions/23137637/linker-error-while-linking-boost-log-tutorial-undefined-references
// http://askubuntu.com/questions/263461/where-is-my-boost-lib-file
#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
namespace logging = boost::log;

// Function to initialize logging
void init_logging();

// One liner like python for logging
#define INFO BOOST_LOG_TRIVIAL(info)

#endif /* MYLOGGER_H_ */
