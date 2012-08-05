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
	${OBJECTDIR}/_ext/535973528/WrappingArray.o \
	${OBJECTDIR}/_ext/535973528/Sensor.o \
	${OBJECTDIR}/_ext/535973528/drive.o \
	${OBJECTDIR}/_ext/535973528/Timer.o \
	${OBJECTDIR}/_ext/535973528/DrivingController.o \
	${OBJECTDIR}/_ext/535973528/RightWheel.o \
	${OBJECTDIR}/_ext/535973528/LeftWheel.o \
	${OBJECTDIR}/_ext/535973528/DirectionSensor.o \
	${OBJECTDIR}/_ext/535973528/WrappingArrayIterator.o


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

${OBJECTDIR}/_ext/535973528/WrappingArray.o: /home/tim/code/arduino/drive1/WrappingArray.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/535973528
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/535973528/WrappingArray.o /home/tim/code/arduino/drive1/WrappingArray.cpp

${OBJECTDIR}/_ext/535973528/Sensor.o: /home/tim/code/arduino/drive1/Sensor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/535973528
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/535973528/Sensor.o /home/tim/code/arduino/drive1/Sensor.cpp

${OBJECTDIR}/_ext/535973528/drive.o: /home/tim/code/arduino/drive1/drive.pde 
	${MKDIR} -p ${OBJECTDIR}/_ext/535973528
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/535973528/drive.o /home/tim/code/arduino/drive1/drive.pde

${OBJECTDIR}/_ext/535973528/Timer.o: /home/tim/code/arduino/drive1/Timer.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/535973528
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/535973528/Timer.o /home/tim/code/arduino/drive1/Timer.cpp

${OBJECTDIR}/_ext/535973528/DrivingController.o: /home/tim/code/arduino/drive1/DrivingController.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/535973528
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/535973528/DrivingController.o /home/tim/code/arduino/drive1/DrivingController.cpp

${OBJECTDIR}/_ext/535973528/RightWheel.o: /home/tim/code/arduino/drive1/RightWheel.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/535973528
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/535973528/RightWheel.o /home/tim/code/arduino/drive1/RightWheel.cpp

${OBJECTDIR}/_ext/535973528/LeftWheel.o: /home/tim/code/arduino/drive1/LeftWheel.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/535973528
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/535973528/LeftWheel.o /home/tim/code/arduino/drive1/LeftWheel.cpp

${OBJECTDIR}/_ext/535973528/DirectionSensor.o: /home/tim/code/arduino/drive1/DirectionSensor.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/535973528
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/535973528/DirectionSensor.o /home/tim/code/arduino/drive1/DirectionSensor.cpp

${OBJECTDIR}/_ext/535973528/WrappingArrayIterator.o: /home/tim/code/arduino/drive1/WrappingArrayIterator.cpp 
	${MKDIR} -p ${OBJECTDIR}/_ext/535973528
	${RM} $@.d
	$(COMPILE.cc) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/535973528/WrappingArrayIterator.o /home/tim/code/arduino/drive1/WrappingArrayIterator.cpp

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
