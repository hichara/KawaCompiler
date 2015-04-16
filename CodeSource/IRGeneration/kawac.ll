; ModuleID = 'Nasser Module'

@kawa_format_int = constant [3 x i8] c"%d\00"
@kawa_format_double = constant [3 x i8] c"%f\00"

define i32 @main() {
entry:
  %0 = alloca i8, i32 15
  %zb = load i8* %0
  %1 = alloca [8 x i8]
  store [8 x i8] c"Zapaato\00", [8 x i8]* %1
  %2 = bitcast [8 x i8]* %1 to i8*
  %3 = call i8* @int_to_str(i32 15)
  %4 = call i8* @float_to_str(double 0x402E1CFD40000000)
  %5 = call i32 @strlen(i8* %4)
  %6 = call i8* @int_to_str(i32 %5)
  %7 = call i32 @puts(i8* %2)
  %8 = call i32 @puts(i8* %3)
  %9 = call i32 @puts(i8* %4)
  %10 = call i32 @puts(i8* %6)
  ret i32 0
}

; Function Attrs: nounwind
declare i32 @puts(i8*) #0

; Function Attrs: nounwind
declare i32 @strlen(i8*) #0

declare i8* @strcat(i8*, i8*)

define i8* @int_to_str(i32) {
entry:
  %1 = call i8* @malloc(i64 50)
  %2 = call i32 (i8*, i8*, ...)* @sprintf(i8* %1, i8* getelementptr inbounds ([3 x i8]* @kawa_format_int, i32 0, i32 0), i32 %0)
  ret i8* %1
}

; Function Attrs: nounwind
declare i8* @malloc(i64) #0

declare i32 @sprintf(i8*, i8*, ...)

define i8* @float_to_str(double) {
entry:
  %1 = call i8* @malloc(i64 50)
  %2 = call i32 (i8*, i8*, ...)* @sprintf(i8* %1, i8* getelementptr inbounds ([3 x i8]* @kawa_format_double, i32 0, i32 0), double %0)
  ret i8* %1
}

attributes #0 = { nounwind }
