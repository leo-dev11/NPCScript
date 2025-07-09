; ModuleID = '../examples/test.npc'
source_filename = "../examples/test.npc"

@msg = private unnamed_addr constant [12 x i8] c"\C2\A1Funciona!\00", align 1

define i32 @main() {
entry:
  %0 = call i32 @puts(ptr @msg)
  ret i32 0
}

declare i32 @puts(ptr)
