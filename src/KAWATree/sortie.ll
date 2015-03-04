; ModuleID = 'Hello world Module'

define i32 @main() {
entry:
  %0 = alloca [14 x i8]
  store [14 x i8] c"Hello world !\00", [14 x i8]* %0
  %1 = bitcast [14 x i8]* %0 to i8*
  %2 = call i32 @puts(i8* %1)
  %3 = alloca [3 x i8]
  store [3 x i8] c"42\00", [3 x i8]* %3
  %4 = bitcast [3 x i8]* %3 to i8*
  %5 = call i32 @puts(i8* %4)
  %6 = alloca [10 x i8]
  store [10 x i8] c"13.370000\00", [10 x i8]* %6
  %7 = bitcast [10 x i8]* %6 to i8*
  %8 = call i32 @puts(i8* %7)
  ret i32 0
}

; Function Attrs: nounwind
declare i32 @puts(i8*) #0

attributes #0 = { nounwind }
