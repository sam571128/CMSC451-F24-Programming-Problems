rem   *** validation ***
call scripts\run-validator-tests.bat
call scripts\run-checker-tests.bat

rem    *** tests ***
md tests
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=5 1" "tests\02" 2
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=5 2" "tests\03" 3
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=5 3" "tests\04" 4
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=5 4" "tests\05" 5
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=5 5" "tests\06" 6
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10 5" "tests\07" 7
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10 6" "tests\08" 8
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10 7" "tests\09" 9
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10 8" "tests\10" 10
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10 9" "tests\11" 11
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10 10" "tests\12" 12
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 11" "tests\13" 13
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 12" "tests\14" 14
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 13" "tests\15" 15
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 14" "tests\16" 16
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 15" "tests\17" 17
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 16" "tests\18" 18
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 17" "tests\19" 19
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 18" "tests\20" 20
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 19" "tests\21" 21
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100 20" "tests\22" 22
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 21" "tests\23" 23
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 22" "tests\24" 24
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 23" "tests\25" 25
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 24" "tests\26" 26
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 25" "tests\27" 27
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 26" "tests\28" 28
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 27" "tests\29" 29
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 28" "tests\30" 30
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 29" "tests\31" 31
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 30" "tests\32" 32
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 31" "tests\33" 33
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 32" "tests\34" 34
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 33" "tests\35" 35
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 34" "tests\36" 36
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 35" "tests\37" 37
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 36" "tests\38" 38
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 37" "tests\39" 39
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 38" "tests\40" 40
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 39" "tests\41" 41
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000 40" "tests\42" 42
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 41" "tests\43" 43
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 42" "tests\44" 44
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 43" "tests\45" 45
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 44" "tests\46" 46
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 45" "tests\47" 47
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 46" "tests\48" 48
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 47" "tests\49" 49
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 48" "tests\50" 50
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 49" "tests\51" 51
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 50" "tests\52" 52
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 51" "tests\53" 53
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 52" "tests\54" 54
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 53" "tests\55" 55
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 54" "tests\56" 56
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 55" "tests\57" 57
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 56" "tests\58" 58
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 57" "tests\59" 59
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 58" "tests\60" 60
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 59" "tests\61" 61
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=10000 60" "tests\62" 62
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 61" "tests\63" 63
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 62" "tests\64" 64
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 63" "tests\65" 65
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 64" "tests\66" 66
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 65" "tests\67" 67
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 66" "tests\68" 68
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 67" "tests\69" 69
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 68" "tests\70" 70
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 69" "tests\71" 71
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 70" "tests\72" 72
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 71" "tests\73" 73
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 72" "tests\74" 74
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 73" "tests\75" 75
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 74" "tests\76" 76
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 75" "tests\77" 77
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 76" "tests\78" 78
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 77" "tests\79" 79
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 78" "tests\80" 80
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 79" "tests\81" 81
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=100000 80" "tests\82" 82
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 81" "tests\83" 83
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 82" "tests\84" 84
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 83" "tests\85" 85
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 84" "tests\86" 86
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 85" "tests\87" 87
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 86" "tests\88" 88
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 87" "tests\89" 89
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 88" "tests\90" 90
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 89" "tests\91" 91
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 90" "tests\92" 92
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 91" "tests\93" 93
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 92" "tests\94" 94
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 93" "tests\95" 95
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 94" "tests\96" 96
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 95" "tests\97" 97
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 96" "tests\98" 98
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 97" "tests\99" 99
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 98" "tests\100" 100
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 99" "tests\101" 101
call scripts\gen-input-via-stdout.bat "files\gen.exe -n=1000000 100" "tests\102" 102
call scripts\gen-answer.bat tests\01 tests\01.a "tests" "1"
call scripts\gen-answer.bat tests\02 tests\02.a "tests" "1"
call scripts\gen-answer.bat tests\03 tests\03.a "tests" "1"
call scripts\gen-answer.bat tests\04 tests\04.a "tests" "1"
call scripts\gen-answer.bat tests\05 tests\05.a "tests" "1"
call scripts\gen-answer.bat tests\06 tests\06.a "tests" "1"
call scripts\gen-answer.bat tests\07 tests\07.a "tests" "1"
call scripts\gen-answer.bat tests\08 tests\08.a "tests" "1"
call scripts\gen-answer.bat tests\09 tests\09.a "tests" "1"
call scripts\gen-answer.bat tests\10 tests\10.a "tests" "1"
call scripts\gen-answer.bat tests\11 tests\11.a "tests" "1"
call scripts\gen-answer.bat tests\12 tests\12.a "tests" "1"
call scripts\gen-answer.bat tests\13 tests\13.a "tests" "2"
call scripts\gen-answer.bat tests\14 tests\14.a "tests" "2"
call scripts\gen-answer.bat tests\15 tests\15.a "tests" "2"
call scripts\gen-answer.bat tests\16 tests\16.a "tests" "2"
call scripts\gen-answer.bat tests\17 tests\17.a "tests" "2"
call scripts\gen-answer.bat tests\18 tests\18.a "tests" "2"
call scripts\gen-answer.bat tests\19 tests\19.a "tests" "2"
call scripts\gen-answer.bat tests\20 tests\20.a "tests" "2"
call scripts\gen-answer.bat tests\21 tests\21.a "tests" "2"
call scripts\gen-answer.bat tests\22 tests\22.a "tests" "2"
call scripts\gen-answer.bat tests\23 tests\23.a "tests" "3"
call scripts\gen-answer.bat tests\24 tests\24.a "tests" "3"
call scripts\gen-answer.bat tests\25 tests\25.a "tests" "3"
call scripts\gen-answer.bat tests\26 tests\26.a "tests" "3"
call scripts\gen-answer.bat tests\27 tests\27.a "tests" "3"
call scripts\gen-answer.bat tests\28 tests\28.a "tests" "3"
call scripts\gen-answer.bat tests\29 tests\29.a "tests" "3"
call scripts\gen-answer.bat tests\30 tests\30.a "tests" "3"
call scripts\gen-answer.bat tests\31 tests\31.a "tests" "3"
call scripts\gen-answer.bat tests\32 tests\32.a "tests" "3"
call scripts\gen-answer.bat tests\33 tests\33.a "tests" "3"
call scripts\gen-answer.bat tests\34 tests\34.a "tests" "3"
call scripts\gen-answer.bat tests\35 tests\35.a "tests" "3"
call scripts\gen-answer.bat tests\36 tests\36.a "tests" "3"
call scripts\gen-answer.bat tests\37 tests\37.a "tests" "3"
call scripts\gen-answer.bat tests\38 tests\38.a "tests" "3"
call scripts\gen-answer.bat tests\39 tests\39.a "tests" "3"
call scripts\gen-answer.bat tests\40 tests\40.a "tests" "3"
call scripts\gen-answer.bat tests\41 tests\41.a "tests" "3"
call scripts\gen-answer.bat tests\42 tests\42.a "tests" "3"
call scripts\gen-answer.bat tests\43 tests\43.a "tests" "4"
call scripts\gen-answer.bat tests\44 tests\44.a "tests" "4"
call scripts\gen-answer.bat tests\45 tests\45.a "tests" "4"
call scripts\gen-answer.bat tests\46 tests\46.a "tests" "4"
call scripts\gen-answer.bat tests\47 tests\47.a "tests" "4"
call scripts\gen-answer.bat tests\48 tests\48.a "tests" "4"
call scripts\gen-answer.bat tests\49 tests\49.a "tests" "4"
call scripts\gen-answer.bat tests\50 tests\50.a "tests" "4"
call scripts\gen-answer.bat tests\51 tests\51.a "tests" "4"
call scripts\gen-answer.bat tests\52 tests\52.a "tests" "4"
call scripts\gen-answer.bat tests\53 tests\53.a "tests" "4"
call scripts\gen-answer.bat tests\54 tests\54.a "tests" "4"
call scripts\gen-answer.bat tests\55 tests\55.a "tests" "4"
call scripts\gen-answer.bat tests\56 tests\56.a "tests" "4"
call scripts\gen-answer.bat tests\57 tests\57.a "tests" "4"
call scripts\gen-answer.bat tests\58 tests\58.a "tests" "4"
call scripts\gen-answer.bat tests\59 tests\59.a "tests" "4"
call scripts\gen-answer.bat tests\60 tests\60.a "tests" "4"
call scripts\gen-answer.bat tests\61 tests\61.a "tests" "4"
call scripts\gen-answer.bat tests\62 tests\62.a "tests" "4"
call scripts\gen-answer.bat tests\63 tests\63.a "tests" "5"
call scripts\gen-answer.bat tests\64 tests\64.a "tests" "5"
call scripts\gen-answer.bat tests\65 tests\65.a "tests" "5"
call scripts\gen-answer.bat tests\66 tests\66.a "tests" "5"
call scripts\gen-answer.bat tests\67 tests\67.a "tests" "5"
call scripts\gen-answer.bat tests\68 tests\68.a "tests" "5"
call scripts\gen-answer.bat tests\69 tests\69.a "tests" "5"
call scripts\gen-answer.bat tests\70 tests\70.a "tests" "5"
call scripts\gen-answer.bat tests\71 tests\71.a "tests" "5"
call scripts\gen-answer.bat tests\72 tests\72.a "tests" "5"
call scripts\gen-answer.bat tests\73 tests\73.a "tests" "5"
call scripts\gen-answer.bat tests\74 tests\74.a "tests" "5"
call scripts\gen-answer.bat tests\75 tests\75.a "tests" "5"
call scripts\gen-answer.bat tests\76 tests\76.a "tests" "5"
call scripts\gen-answer.bat tests\77 tests\77.a "tests" "5"
call scripts\gen-answer.bat tests\78 tests\78.a "tests" "5"
call scripts\gen-answer.bat tests\79 tests\79.a "tests" "5"
call scripts\gen-answer.bat tests\80 tests\80.a "tests" "5"
call scripts\gen-answer.bat tests\81 tests\81.a "tests" "5"
call scripts\gen-answer.bat tests\82 tests\82.a "tests" "5"
call scripts\gen-answer.bat tests\83 tests\83.a "tests" "5"
call scripts\gen-answer.bat tests\84 tests\84.a "tests" "5"
call scripts\gen-answer.bat tests\85 tests\85.a "tests" "5"
call scripts\gen-answer.bat tests\86 tests\86.a "tests" "5"
call scripts\gen-answer.bat tests\87 tests\87.a "tests" "5"
call scripts\gen-answer.bat tests\88 tests\88.a "tests" "5"
call scripts\gen-answer.bat tests\89 tests\89.a "tests" "5"
call scripts\gen-answer.bat tests\90 tests\90.a "tests" "5"
call scripts\gen-answer.bat tests\91 tests\91.a "tests" "5"
call scripts\gen-answer.bat tests\92 tests\92.a "tests" "5"
call scripts\gen-answer.bat tests\93 tests\93.a "tests" "5"
call scripts\gen-answer.bat tests\94 tests\94.a "tests" "5"
call scripts\gen-answer.bat tests\95 tests\95.a "tests" "5"
call scripts\gen-answer.bat tests\96 tests\96.a "tests" "5"
call scripts\gen-answer.bat tests\97 tests\97.a "tests" "5"
call scripts\gen-answer.bat tests\98 tests\98.a "tests" "5"
call scripts\gen-answer.bat tests\99 tests\99.a "tests" "5"
call scripts\gen-answer.bat tests\100 tests\100.a "tests" "5"
call scripts\gen-answer.bat tests\101 tests\101.a "tests" "5"
call scripts\gen-answer.bat tests\102 tests\102.a "tests" "5"
call scripts\gen-answer.bat tests\103 tests\103.a "tests" "1"
call scripts\gen-answer.bat tests\104 tests\104.a "tests" "1"

