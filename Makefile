## ----------------------------------------------------------- ##
## Don't touch the next line unless you know what you're doing.##
## ----------------------------------------------------------- ##

# Name of the module
LOCAL_NAME := demo/myA9GTest

# List of submodules which contain code we need to include in the final lib
LOCAL_API_DEPENDS := \

LOCAL_ADD_INCLUDE := include\
                    include/std_inc \
                    include/api_inc \
                    cores/A9G


# Set this to any non-null string to signal a module which 
# generates a binary (must contain a "main" entry point). 
# If left null, only a library will be generated.
IS_ENTRY_POINT := no

## ------------------------------------ ##
## 	Add your custom flags here          ##
## ------------------------------------ ##
MYCFLAGS += 
MYCPPFLAGS +=  -g  -fno-exceptions -falign-functions=4  -MMD -ffunction-sections -fdata-sections

## ------------------------------------- ##
##	List all your sources here           ##
## ------------------------------------- ##
C_SRC := ${notdir ${wildcard src/*.c}}
C++_SRCD := ${notdir ${wildcard src/*.cpp}}
## ------------------------------------- ##
##  Do Not touch below this line         ##
## ------------------------------------- ##
include ${SOFT_WORKDIR}/platform/compilation/cust_rules.mk
