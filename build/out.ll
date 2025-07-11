; ModuleID = '../examples/action_transition_test.npc'
source_filename = "../examples/action_transition_test.npc"

@fmt = private unnamed_addr constant [13 x i8] c"enemigo: %d\0A\00", align 1
@0 = private unnamed_addr constant [16 x i8] c"Acci\C3\B3n: atacar\00", align 1
@fmt.1 = private unnamed_addr constant [9 x i8] c"arg: %d\0A\00", align 1
@msg = private unnamed_addr constant [31 x i8] c"Transici\C3\B3n a siguiente estado\00", align 1
@msg.2 = private unnamed_addr constant [16 x i8] c"Fin del ejemplo\00", align 1

define i32 @main() {
entry:
  %enemigo = alloca i32, align 4
  store i32 42, ptr %enemigo, align 4
  %0 = call i32 (ptr, ...) @printf(ptr @fmt, i32 42)
  %1 = call i32 @puts(ptr @0)
  %enemigo1 = load i32, ptr %enemigo, align 4
  %2 = call i32 (ptr, ...) @printf(ptr @fmt.1, i32 %enemigo1)
  %3 = call i32 @puts(ptr @msg)
  %4 = call i32 @puts(ptr @msg.2)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare i32 @puts(ptr)
