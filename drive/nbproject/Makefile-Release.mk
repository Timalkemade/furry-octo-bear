#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=pic32-gcc
CCC=pic32-g++
CXX=pic32-g++
FC=gfortran
AS=pic32-as

# Macros
CND_PLATFORM=PIC32-Linux-x86
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/2095499449/WrappingArray.o \
	${OBJECTDIR}/_ext/2095499449/Sensor.o \
	${OBJECTDIR}/_ext/2095499449/RightWheel.o \
	${OBJECTDIR}/_ext/2095499449/Timer.o \
	${OBJECTDIR}/_ext/2095499449/DrivingController.o \
	${OBJECTDIR}/_ext/2095499449/LeftWheel.o \
	${OBJECTDIR}/_ext/2095499449/drive.o \
	${OBJECTDIR}/_ext/2095499449/WrappingArrayIterator.o \
	${OBJECTDIR}/_ext/2095499449/DirectionSensor.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/drive

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/drive: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/drive ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/_ext/2095499449/WrappingArray.o: /home/tim/code/arduino/drive/WrappingArray.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2095499449
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2095499449/WrappingArray.o /home/tim/code/arduino/drive/WrappingArray.cpp

${OBJECTDIR}/_ext/2095499449/Sensor.o: /home/tim/code/arduino/drive/Sensor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2095499449
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2095499449/Sensor.o /home/tim/code/arduino/drive/Sensor.cpp

${OBJECTDIR}/_ext/2095499449/RightWheel.o: /home/tim/code/arduino/drive/RightWheel.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2095499449
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2095499449/RightWheel.o /home/tim/code/arduino/drive/RightWheel.cpp

${OBJECTDIR}/_ext/2095499449/Timer.o: /home/tim/code/arduino/drive/Timer.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2095499449
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2095499449/Timer.o /home/tim/code/arduino/drive/Timer.cpp

${OBJECTDIR}/_ext/2095499449/DrivingController.o: /home/tim/code/arduino/drive/DrivingController.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2095499449
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2095499449/DrivingController.o /home/tim/code/arduino/drive/DrivingController.cpp

${OBJECTDIR}/_ext/2095499449/LeftWheel.o: /home/tim/code/arduino/drive/LeftWheel.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2095499449
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2095499449/LeftWheel.o /home/tim/code/arduino/drive/LeftWheel.cpp

${OBJECTDIR}/_ext/2095499449/drive.o: /home/tim/code/arduino/drive/drive.pde 
	${MKDIR} -p ${OBJECTDIR}/_ext/2095499449
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2095499449/drive.o /home/tim/code/arduino/drive/drive.pde

${OBJECTDIR}/_ext/2095499449/WrappingArrayIterator.o: /home/tim/code/arduino/drive/WrappingArrayIterator.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2095499449
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2095499449/WrappingArrayIterator.o /home/tim/code/arduino/drive/WrappingArrayIterator.cpp

${OBJECTDIR}/_ext/2095499449/DirectionSensor.o: /home/tim/code/arduino/drive/DirectionSensor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/2095499449
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/2095499449/DirectionSensor.o /home/tim/code/arduino/drive/DirectionSensor.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/drive

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
