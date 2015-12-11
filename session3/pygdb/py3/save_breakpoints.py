import gdb


class SaveBreakpointsCommand(gdb.Command):
    """Save the current breakpoints to a file.
    This command takes a single argument, a file name.
    The breakpoints can be restored using the 'source' command."""

    def __init__(self):
        super(SaveBreakpointsCommand, self).__init__("save breakpoints",
                                                     gdb.COMMAND_USER)

    def invoke(self, arg, from_tty):
        f = open(arg, 'w')
        for bp in gdb.breakpoints():
            print ("break", bp.location, file=f) 


SaveBreakpointsCommand()
