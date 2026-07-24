set pagination off
set confirm off
set print pretty on

#tui enable
#layout src

#
# Breakpoints
#

break main

#
# Mostrar automáticamente información cada vez que GDB se detiene
#

define hook-stop
    printf "\n=====================================================\n"
    frame
    printf "-----------------------------------------------------\n"
    info args
    printf "-----------------------------------------------------\n"
    info locals
    printf "-----------------------------------------------------\n"
    list
    printf "=====================================================\n\n"
end

#
# Ejecutar el programa
#

set args 3 2 1
run
