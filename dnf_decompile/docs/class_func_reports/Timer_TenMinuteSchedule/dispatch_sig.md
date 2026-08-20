# dispatch_sig

`_ZN23Timer_TenMinuteSchedule12dispatch_sigEiij`

`Timer_TenMinuteSchedule::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_TenMinuteSchedule` | `0x08639668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639668  _ZN23Timer_TenMinuteSchedule12dispatch_sigEiij
#           Timer_TenMinuteSchedule::dispatch_sig(int, int, unsigned int)
# range [0x08639668, 0x086396d1]
08639668 +0x00:  push   %ebp
08639669 +0x01:  mov    %esp,%ebp
0863966b +0x03:  sub    $0x28,%esp
0863966e +0x06:  movb   $0x0,-0x9(%ebp)
08639672 +0x0a:  cmpl   $0x0,0x10(%ebp)
08639676 +0x0e:  jne    08639696 <+0x2e>
08639678 +0x10:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
0863967d +0x15:  mov    %eax,(%esp)
08639680 +0x18:  call   0860d8a4 <_ZN15CValueStatistic20InsertValueStatisticEv>  ; CValueStatistic::InsertValueStatistic()
08639685 +0x1d:  movl   $0x1,(%esp)
0863968c +0x24:  call   086396d2 <_ZN23Timer_TenMinuteSchedule15RegistNextTimerEi>  ; Timer_TenMinuteSchedule::RegistNextTimer(int)
08639691 +0x29:  mov    %al,-0x9(%ebp)
08639694 +0x2c:  jmp    086396b8 <+0x50>
08639696 +0x2e:  cmpl   $0x1,0x10(%ebp)
0863969a +0x32:  jne    086396b8 <+0x50>
0863969c +0x34:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
086396a1 +0x39:  mov    %eax,(%esp)
086396a4 +0x3c:  call   0860dccc <_ZN21CCirculationStatistic26InsertCirculationStatisticEv>  ; CCirculationStatistic::InsertCirculationStatistic()
086396a9 +0x41:  movl   $0x0,(%esp)
086396b0 +0x48:  call   086396d2 <_ZN23Timer_TenMinuteSchedule15RegistNextTimerEi>  ; Timer_TenMinuteSchedule::RegistNextTimer(int)
086396b5 +0x4d:  mov    %al,-0x9(%ebp)
086396b8 +0x50:  movzbl -0x9(%ebp),%eax
086396bc +0x54:  xor    $0x1,%eax
086396bf +0x57:  test   %al,%al
086396c1 +0x59:  je     086396ca <+0x62>
086396c3 +0x5b:  mov    $0x0,%eax
086396c8 +0x60:  jmp    086396cf <+0x67>
086396ca +0x62:  mov    $0x1,%eax
086396cf +0x67:  leave
086396d0 +0x68:  ret
086396d1 +0x69:  nop
```

## 反编译 C

```c
// Timer_TenMinuteSchedule::dispatch_sig @ 0x8639668

/* Timer_TenMinuteSchedule::dispatch_sig(int, int, unsigned int) */

bool Timer_TenMinuteSchedule::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char local_d;
  
  local_d = '\0';
  if (param_3 == 0) {
    GetInstanceValueStatistic();
    CValueStatistic::InsertValueStatistic();
    local_d = RegistNextTimer(1);
  }
  else if (param_3 == 1) {
    GetInstanceCirculationStatistic();
    CCirculationStatistic::InsertCirculationStatistic();
    local_d = RegistNextTimer(0);
  }
  return local_d == '\x01';
}
```
