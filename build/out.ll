; ModuleID = '../examples/if_while_test.npc'
source_filename = "../examples/if_while_test.npc"

@fmt = private unnamed_addr constant [7 x i8] c"x: %d\0A\00", align 1
@msg = private unnamed_addr constant [17 x i8] c"Inicio del ciclo\00", align 1
@msg.1 = private unnamed_addr constant [17 x i8] c"Dentro del ciclo\00", align 1
@fmt.2 = private unnamed_addr constant [7 x i8] c"x: %d\0A\00", align 1
@msg.3 = private unnamed_addr constant [19 x i8] c"Despu\C3\A9s del ciclo\00", align 1
@0 = private unnamed_addr constant [28 x i8] c"Transici\C3\B3n a estado: final\00", align 1
@msg.4 = private unnamed_addr constant [25 x i8] c"Llegaste al estado final\00", align 1

define i32 @main() {
entry:
  %x = alloca i32, align 4
  store i32 0, ptr %x, align 4
  %0 = call i32 (ptr, ...) @printf(ptr @fmt, i32 0)
  %1 = call i32 @puts(ptr @msg)
  br label %while.cond

while.cond:                                       ; preds = %while.body, %entry
  %x1 = load i32, ptr %x, align 4
  %lttmp = icmp slt i32 %x1, 3
  br i1 %lttmp, label %while.body, label %while.end

while.body:                                       ; preds = %while.cond
  %2 = call i32 @puts(ptr @msg.1)
  %x2 = load i32, ptr %x, align 4
  %addtmp = add i32 %x2, 1
  store i32 %addtmp, ptr %x, align 4
  %3 = call i32 (ptr, ...) @printf(ptr @fmt.2, i32 %addtmp)
  br label %while.cond

while.end:                                        ; preds = %while.cond
  %4 = call i32 @puts(ptr @msg.3)
  %x3 = load i32, ptr %x, align 4
  %eqtmp = icmp eq i32 %x3, 3
  %x4 = load i32, ptr %x, align 4
  %eqtmp5 = icmp eq i32 %x4, 3
  br i1 %eqtmp5, label %then, label %endif

then:                                             ; preds = %while.end
  %5 = call i32 @puts(ptr @0)
  br label %endif

endif:                                            ; preds = %then, %while.end
  %6 = call i32 @puts(ptr @msg.4)
  ret i32 0
}

declare i32 @printf(ptr, ...)

declare i32 @puts(ptr)
