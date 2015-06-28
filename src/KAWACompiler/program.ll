; ModuleID = 'program'

%KawaClass_test.ClassC = type { %KawaClass_Struct_test.ClassC*, i8** }
%KawaClass_Struct_test.ClassC = type {}
%KawaClass_test.ClassB = type { %KawaClass_Struct_test.ClassB*, i8** }
%KawaClass_Struct_test.ClassB = type {}
%KawaClass_test.ClassA = type { %KawaClass_Struct_test.ClassA*, i8** }
%KawaClass_Struct_test.ClassA = type {}

@adhocTable__test.ClassC_test.ClassC = constant [2 x i8*] [i8* bitcast (void (%KawaClass_test.ClassC*)* @test.ClassC.methodeSept_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassC_test.ClassC to i8*)]
@methode_index_test.ClassC.methodeSept_rt_KawaClass_void_pt__KawaVoid = global i32 0
@methode_index_get_table_adhocTable__test.ClassC_test.ClassC = global i32 1
@adhocTable__test.ClassC_test.ClassB = constant [2 x i8*] [i8* bitcast (void (%KawaClass_test.ClassC*)* @test.ClassC.methodeSept_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassC_test.ClassB to i8*)]
@methode_index_get_table_adhocTable__test.ClassC_test.ClassB = global i32 4
@adhocTable__test.ClassB_test.ClassB = constant [6 x i8*] [i8* bitcast (void (%KawaClass_test.ClassB*)* @test.ClassB.methodeTrois_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (void (%KawaClass_test.ClassB*)* @test.ClassB.methodeQuatre_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (void (%KawaClass_test.ClassB*)* @test.ClassB.methodeCinq_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (void (%KawaClass_test.ClassC*)* @test.ClassC.methodeSept_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassC_test.ClassB to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassB_test.ClassB to i8*)]
@methode_index_test.ClassB.methodeTrois_rt_KawaClass_void_pt__KawaVoid = global i32 0
@methode_index_test.ClassB.methodeQuatre_rt_KawaClass_void_pt__KawaVoid = global i32 1
@methode_index_test.ClassB.methodeCinq_rt_KawaClass_void_pt__KawaVoid = global i32 2
@methode_index_test.ClassB.methodeSept_rt_KawaClass_void_pt__KawaVoid = global i32 2
@methode_index_get_table_adhocTable__test.ClassB_test.ClassB = global i32 5
@adhocTable__test.ClassC_test.ClassA = constant [2 x i8*] [i8* bitcast (void (%KawaClass_test.ClassC*)* @test.ClassC.methodeSept_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassC_test.ClassA to i8*)]
@methode_index_get_table_adhocTable__test.ClassC_test.ClassA = global i32 6
@adhocTable__test.ClassB_test.ClassA = constant [5 x i8*] [i8* bitcast (void (%KawaClass_test.ClassA*)* @test.ClassA.methodeTrois_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (void (%KawaClass_test.ClassB*)* @test.ClassB.methodeQuatre_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (void (%KawaClass_test.ClassC*)* @test.ClassC.methodeSept_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassC_test.ClassA to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassB_test.ClassA to i8*)]
@methode_index_get_table_adhocTable__test.ClassB_test.ClassA = global i32 5
@adhocTable__test.ClassC_test.ClassA1 = constant [2 x i8*] [i8* bitcast (void (%KawaClass_test.ClassC*)* @test.ClassC.methodeSept_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassC_test.ClassA to i8*)]
@adhocTable__test.ClassA_test.ClassA = constant [8 x i8*] [i8* bitcast (void (%KawaClass_test.ClassA*)* @test.ClassA.methodeUn_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (void (%KawaClass_test.ClassA*)* @test.ClassA.methodeDeux_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (void (%KawaClass_test.ClassA*)* @test.ClassA.methodeTrois_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (void (%KawaClass_test.ClassB*)* @test.ClassB.methodeQuatre_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (void (%KawaClass_test.ClassC*)* @test.ClassC.methodeSept_rt_KawaClass_void_pt__KawaVoid to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassB_test.ClassA to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassC_test.ClassA to i8*), i8* bitcast (i8** ()* @get_table_adhocTable__test.ClassA_test.ClassA to i8*)]
@methode_index_test.ClassA.methodeUn_rt_KawaClass_void_pt__KawaVoid = global i32 0
@methode_index_test.ClassA.methodeDeux_rt_KawaClass_void_pt__KawaVoid = global i32 1
@methode_index_test.ClassA.methodeTrois_rt_KawaClass_void_pt__KawaVoid = global i32 2
@methode_index_test.ClassA.methodeQuatre_rt_KawaClass_void_pt__KawaVoid = global i32 3
@methode_index_test.ClassA.methodeSept_rt_KawaClass_void_pt__KawaVoid = global i32 4
@methode_index_get_table_adhocTable__test.ClassA_test.ClassA = global i32 7
@0 = private unnamed_addr constant [17 x i8] c"\22Methode 7 in C\22\00"
@1 = private unnamed_addr constant [17 x i8] c"\22Methode 3 in B\22\00"
@2 = private unnamed_addr constant [17 x i8] c"\22Methode 4 in B\22\00"
@3 = private unnamed_addr constant [17 x i8] c"\22Methode 5 in B\22\00"
@4 = private unnamed_addr constant [17 x i8] c"\22Methode 1 in A\22\00"
@kawa_format_int = constant [3 x i8] c"%d\00"
@5 = private unnamed_addr constant [17 x i8] c"\22Methode 2 in A\22\00"
@6 = private unnamed_addr constant [17 x i8] c"\22Methode 3 in A\22\00"
@7 = private unnamed_addr constant [2 x i8] c"\0A\00"
@8 = private unnamed_addr constant [2 x i8] c"\0A\00"
@9 = private unnamed_addr constant [2 x i8] c"\0A\00"
@10 = private unnamed_addr constant [2 x i8] c"\0A\00"
@11 = private unnamed_addr constant [2 x i8] c"\0A\00"
@12 = private unnamed_addr constant [2 x i8] c"\0A\00"
@13 = private unnamed_addr constant [2 x i8] c"\0A\00"

define void @test.ClassC.methodeSept_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassC* %this) {
entry:
  %0 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @0, i32 0, i32 0))
  ret void
}

define i8** @get_table_adhocTable__test.ClassC_test.ClassC() {
entry:
  ret i8** getelementptr inbounds ([2 x i8*]* @adhocTable__test.ClassC_test.ClassC, i32 0, i32 0)
}

define i8** @get_table_adhocTable__test.ClassC_test.ClassB() {
entry:
  ret i8** getelementptr inbounds ([2 x i8*]* @adhocTable__test.ClassC_test.ClassB, i32 0, i32 0)
}

define void @test.ClassB.methodeTrois_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassB* %this) {
entry:
  %0 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @1, i32 0, i32 0))
  ret void
}

define void @test.ClassB.methodeQuatre_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassB* %this) {
entry:
  %0 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @2, i32 0, i32 0))
  ret void
}

define void @test.ClassB.methodeCinq_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassB* %this) {
entry:
  %0 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @3, i32 0, i32 0))
  ret void
}

declare extern_weak void @test.ClassB.methodeSept_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassB*)

define i8** @get_table_adhocTable__test.ClassB_test.ClassB() {
entry:
  ret i8** getelementptr inbounds ([6 x i8*]* @adhocTable__test.ClassB_test.ClassB, i32 0, i32 0)
}

define i8** @get_table_adhocTable__test.ClassC_test.ClassA() {
entry:
  ret i8** getelementptr inbounds ([2 x i8*]* @adhocTable__test.ClassC_test.ClassA, i32 0, i32 0)

entry1:                                           ; No predecessors!
  ret i8** getelementptr inbounds ([2 x i8*]* @adhocTable__test.ClassC_test.ClassA, i32 0, i32 0)
}

define void @test.ClassA.methodeTrois_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassA* %this) {
entry:
  %0 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @6, i32 0, i32 0))
  ret void
}

define i8** @get_table_adhocTable__test.ClassB_test.ClassA() {
entry:
  ret i8** getelementptr inbounds ([5 x i8*]* @adhocTable__test.ClassB_test.ClassA, i32 0, i32 0)
}

define void @test.ClassA.methodeUn_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassA* %this) {
entry:
  %0 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @4, i32 0, i32 0))
  %a_0 = alloca i32
  store i32 5, i32* %a_0
  %1 = load i32* %a_0
  %2 = call i8* @int_to_str(i32 %1)
  %3 = call i32 (i8*, ...)* @printf(i8* %2)
  %4 = load i32* %a_0
  %5 = add i32 15, %4
  store i32 %5, i32* %a_0
  %6 = load i32* %a_0
  %7 = call i8* @int_to_str(i32 %6)
  %8 = call i32 (i8*, ...)* @printf(i8* %7)
  ret void
}

define void @test.ClassA.methodeDeux_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassA* %this) {
entry:
  %0 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([17 x i8]* @5, i32 0, i32 0))
  ret void
}

declare extern_weak void @test.ClassA.methodeQuatre_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassA*)

declare extern_weak void @test.ClassA.methodeSept_rt_KawaClass_void_pt__KawaVoid(%KawaClass_test.ClassA*)

define i8** @get_table_adhocTable__test.ClassA_test.ClassA() {
entry:
  ret i8** getelementptr inbounds ([8 x i8*]* @adhocTable__test.ClassA_test.ClassA, i32 0, i32 0)
}

declare i32 @printf(i8*, ...)

define i8* @int_to_str(i32) {
entry:
  %1 = call i8* @malloc(i64 50)
  %2 = call i32 (i8*, i8*, ...)* @sprintf(i8* %1, i8* getelementptr inbounds ([3 x i8]* @kawa_format_int, i32 0, i32 0), i32 %0)
  ret i8* %1
}

; Function Attrs: nounwind
declare i8* @malloc(i64) #0

declare i32 @sprintf(i8*, i8*, ...)

define i32 @main() {
entry:
  %varA_0 = alloca %KawaClass_test.ClassA
  %0 = call %KawaClass_test.ClassA* @KawaConstructor_test.ClassA_pt_KawaVoid()
  %1 = alloca %KawaClass_test.ClassA
  %2 = load %KawaClass_test.ClassA* %1
  store %KawaClass_test.ClassA %2, %KawaClass_test.ClassA* %varA_0
  %3 = getelementptr %KawaClass_test.ClassA* %varA_0, i32 0, i32 0
  %4 = load %KawaClass_Struct_test.ClassA** %3
  %5 = getelementptr %KawaClass_test.ClassA* %varA_0, i32 0, i32 1
  %6 = load i8*** %5
  %7 = load i32* @methode_index_get_table_adhocTable__test.ClassA_test.ClassA
  %8 = getelementptr %KawaClass_test.ClassA* %0, i32 0, i32 0
  %9 = load %KawaClass_Struct_test.ClassA** %8
  %10 = getelementptr %KawaClass_test.ClassA* %0, i32 0, i32 1
  %11 = load i8*** %10
  %12 = bitcast i8** %11 to i8** ()**
  %13 = getelementptr i8** ()** %12, i32 %7
  %14 = load i8** ()** %13
  %15 = call i8** %14()
  store i8** %15, i8*** %5
  store %KawaClass_Struct_test.ClassA* %9, %KawaClass_Struct_test.ClassA** %3
  %varB_0 = alloca %KawaClass_test.ClassB
  %16 = call %KawaClass_test.ClassA* @KawaConstructor_test.ClassA_pt_KawaVoid()
  %17 = alloca %KawaClass_test.ClassB
  %18 = load %KawaClass_test.ClassB* %17
  store %KawaClass_test.ClassB %18, %KawaClass_test.ClassB* %varB_0
  %19 = getelementptr %KawaClass_test.ClassB* %varB_0, i32 0, i32 0
  %20 = load %KawaClass_Struct_test.ClassB** %19
  %21 = getelementptr %KawaClass_test.ClassB* %varB_0, i32 0, i32 1
  %22 = load i8*** %21
  %23 = load i32* @methode_index_get_table_adhocTable__test.ClassB_test.ClassA
  %24 = getelementptr %KawaClass_test.ClassA* %16, i32 0, i32 0
  %25 = load %KawaClass_Struct_test.ClassA** %24
  %26 = getelementptr %KawaClass_test.ClassA* %16, i32 0, i32 1
  %27 = load i8*** %26
  %28 = bitcast i8** %27 to i8** ()**
  %29 = getelementptr i8** ()** %28, i32 %23
  %30 = load i8** ()** %29
  %31 = call i8** %30()
  %32 = bitcast %KawaClass_Struct_test.ClassA* %25 to %KawaClass_Struct_test.ClassB*
  store i8** %31, i8*** %21
  store %KawaClass_Struct_test.ClassB* %32, %KawaClass_Struct_test.ClassB** %19
  %varC_0 = alloca %KawaClass_test.ClassB
  %33 = call %KawaClass_test.ClassB* @KawaConstructor_test.ClassB_pt_KawaVoid()
  %34 = alloca %KawaClass_test.ClassB
  %35 = load %KawaClass_test.ClassB* %34
  store %KawaClass_test.ClassB %35, %KawaClass_test.ClassB* %varC_0
  %36 = getelementptr %KawaClass_test.ClassB* %varC_0, i32 0, i32 0
  %37 = load %KawaClass_Struct_test.ClassB** %36
  %38 = getelementptr %KawaClass_test.ClassB* %varC_0, i32 0, i32 1
  %39 = load i8*** %38
  %40 = load i32* @methode_index_get_table_adhocTable__test.ClassB_test.ClassB
  %41 = getelementptr %KawaClass_test.ClassB* %33, i32 0, i32 0
  %42 = load %KawaClass_Struct_test.ClassB** %41
  %43 = getelementptr %KawaClass_test.ClassB* %33, i32 0, i32 1
  %44 = load i8*** %43
  %45 = bitcast i8** %44 to i8** ()**
  %46 = getelementptr i8** ()** %45, i32 %40
  %47 = load i8** ()** %46
  %48 = call i8** %47()
  store i8** %48, i8*** %38
  store %KawaClass_Struct_test.ClassB* %42, %KawaClass_Struct_test.ClassB** %36
  %49 = load i32* @methode_index_test.ClassA.methodeUn_rt_KawaClass_void_pt__KawaVoid
  %50 = getelementptr %KawaClass_test.ClassA* %varA_0, i32 0, i32 1
  %51 = load i8*** %50
  %52 = bitcast i8** %51 to void (%KawaClass_test.ClassA*)**
  %53 = getelementptr void (%KawaClass_test.ClassA*)** %52, i32 %49
  %54 = load void (%KawaClass_test.ClassA*)** %53
  call void %54(%KawaClass_test.ClassA* %varA_0)
  %55 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @7, i32 0, i32 0))
  %56 = load i32* @methode_index_test.ClassA.methodeDeux_rt_KawaClass_void_pt__KawaVoid
  %57 = getelementptr %KawaClass_test.ClassA* %varA_0, i32 0, i32 1
  %58 = load i8*** %57
  %59 = bitcast i8** %58 to void (%KawaClass_test.ClassA*)**
  %60 = getelementptr void (%KawaClass_test.ClassA*)** %59, i32 %56
  %61 = load void (%KawaClass_test.ClassA*)** %60
  call void %61(%KawaClass_test.ClassA* %varA_0)
  %62 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @8, i32 0, i32 0))
  %63 = load i32* @methode_index_test.ClassA.methodeTrois_rt_KawaClass_void_pt__KawaVoid
  %64 = getelementptr %KawaClass_test.ClassA* %varA_0, i32 0, i32 1
  %65 = load i8*** %64
  %66 = bitcast i8** %65 to void (%KawaClass_test.ClassA*)**
  %67 = getelementptr void (%KawaClass_test.ClassA*)** %66, i32 %63
  %68 = load void (%KawaClass_test.ClassA*)** %67
  call void %68(%KawaClass_test.ClassA* %varA_0)
  %69 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @9, i32 0, i32 0))
  %70 = load i32* @methode_index_test.ClassB.methodeTrois_rt_KawaClass_void_pt__KawaVoid
  %71 = getelementptr %KawaClass_test.ClassB* %varB_0, i32 0, i32 1
  %72 = load i8*** %71
  %73 = bitcast i8** %72 to void (%KawaClass_test.ClassB*)**
  %74 = getelementptr void (%KawaClass_test.ClassB*)** %73, i32 %70
  %75 = load void (%KawaClass_test.ClassB*)** %74
  call void %75(%KawaClass_test.ClassB* %varB_0)
  %76 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @10, i32 0, i32 0))
  %77 = load i32* @methode_index_test.ClassB.methodeTrois_rt_KawaClass_void_pt__KawaVoid
  %78 = getelementptr %KawaClass_test.ClassB* %varC_0, i32 0, i32 1
  %79 = load i8*** %78
  %80 = bitcast i8** %79 to void (%KawaClass_test.ClassB*)**
  %81 = getelementptr void (%KawaClass_test.ClassB*)** %80, i32 %77
  %82 = load void (%KawaClass_test.ClassB*)** %81
  call void %82(%KawaClass_test.ClassB* %varC_0)
  %83 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @11, i32 0, i32 0))
  %84 = load i32* @methode_index_test.ClassA.methodeQuatre_rt_KawaClass_void_pt__KawaVoid
  %85 = getelementptr %KawaClass_test.ClassA* %varA_0, i32 0, i32 1
  %86 = load i8*** %85
  %87 = bitcast i8** %86 to void (%KawaClass_test.ClassA*)**
  %88 = getelementptr void (%KawaClass_test.ClassA*)** %87, i32 %84
  %89 = load void (%KawaClass_test.ClassA*)** %88
  call void %89(%KawaClass_test.ClassA* %varA_0)
  %90 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @12, i32 0, i32 0))
  %91 = load i32* @methode_index_test.ClassA.methodeSept_rt_KawaClass_void_pt__KawaVoid
  %92 = getelementptr %KawaClass_test.ClassA* %varA_0, i32 0, i32 1
  %93 = load i8*** %92
  %94 = bitcast i8** %93 to void (%KawaClass_test.ClassA*)**
  %95 = getelementptr void (%KawaClass_test.ClassA*)** %94, i32 %91
  %96 = load void (%KawaClass_test.ClassA*)** %95
  call void %96(%KawaClass_test.ClassA* %varA_0)
  %97 = call i32 (i8*, ...)* @printf(i8* getelementptr inbounds ([2 x i8]* @13, i32 0, i32 0))
  ret i32 0
}

define %KawaClass_test.ClassA* @KawaConstructor_test.ClassA_pt_KawaVoid() {
entry:
  %this = alloca %KawaClass_test.ClassA
  %0 = call i8** @get_table_adhocTable__test.ClassA_test.ClassA()
  %1 = getelementptr %KawaClass_test.ClassA* %this, i32 0, i32 1
  store i8** %0, i8*** %1
  %2 = alloca %KawaClass_Struct_test.ClassA
  %3 = getelementptr %KawaClass_test.ClassA* %this, i32 0, i32 0
  store %KawaClass_Struct_test.ClassA* %2, %KawaClass_Struct_test.ClassA** %3
  call void @SubConstructor_test.ClassA_pt_KawaVoid(%KawaClass_test.ClassA* %this)
  ret %KawaClass_test.ClassA* %this
}

define void @SubConstructor_test.ClassA_pt_KawaVoid(%KawaClass_test.ClassA* %this) {
entry:
  ret void
}

define %KawaClass_test.ClassB* @KawaConstructor_test.ClassB_pt_KawaVoid() {
entry:
  %this = alloca %KawaClass_test.ClassB
  %0 = call i8** @get_table_adhocTable__test.ClassB_test.ClassB()
  %1 = getelementptr %KawaClass_test.ClassB* %this, i32 0, i32 1
  store i8** %0, i8*** %1
  %2 = alloca %KawaClass_Struct_test.ClassB
  %3 = getelementptr %KawaClass_test.ClassB* %this, i32 0, i32 0
  store %KawaClass_Struct_test.ClassB* %2, %KawaClass_Struct_test.ClassB** %3
  call void @SubConstructor_test.ClassB_pt_KawaVoid(%KawaClass_test.ClassB* %this)
  ret %KawaClass_test.ClassB* %this
}

define void @SubConstructor_test.ClassB_pt_KawaVoid(%KawaClass_test.ClassB* %this) {
entry:
  ret void
}

attributes #0 = { nounwind }
