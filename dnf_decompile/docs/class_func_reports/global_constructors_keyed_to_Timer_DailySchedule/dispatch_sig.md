# dispatch_sig

`_GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij`

`global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `global constructors keyed to Timer_DailySchedule` | `0x0812c9c5` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812c9c5  _GLOBAL__I__ZN19Timer_DailySchedule12dispatch_sigEiij
#           global constructors keyed to Timer_DailySchedule::dispatch_sig(int, int, unsigned int)
# range [0x0812c9c5, 0x0812ca73]
0812c9c5 +0x00:  push   %ebp
0812c9c6 +0x01:  mov    %esp,%ebp
0812c9c8 +0x03:  sub    $0x18,%esp
0812c9cb +0x06:  movl   $0xffff,0x4(%esp)
0812c9d3 +0x0e:  movl   $0x1,(%esp)
0812c9da +0x15:  call   0812c985 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0812c9df +0x1a:  leave
0812c9e0 +0x1b:  ret
0812c9e1 +0x1c:  nop
0812c9e2 +0x1d:  push   %ebp
0812c9e3 +0x1e:  mov    %esp,%ebp
0812c9e5 +0x20:  sub    $0x18,%esp
0812c9e8 +0x23:  mov    0x8(%ebp),%eax
0812c9eb +0x26:  movl   $&_ZTV8TimerSig+0x8,(%eax)
0812c9f1 +0x2c:  mov    $0x0,%eax
0812c9f6 +0x31:  test   %al,%al
0812c9f8 +0x33:  je     0812ca05 <+0x40>
0812c9fa +0x35:  mov    0x8(%ebp),%eax
0812c9fd +0x38:  mov    %eax,(%esp)
0812ca00 +0x3b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812ca05 +0x40:  leave
0812ca06 +0x41:  ret
0812ca07 +0x42:  nop
0812ca08 +0x43:  push   %ebp
0812ca09 +0x44:  mov    %esp,%ebp
0812ca0b +0x46:  sub    $0x18,%esp
0812ca0e +0x49:  mov    0x8(%ebp),%eax
0812ca11 +0x4c:  mov    %eax,(%esp)
0812ca14 +0x4f:  call   0812c9e2 <+0x1d>
0812ca19 +0x54:  mov    0x8(%ebp),%eax
0812ca1c +0x57:  mov    %eax,(%esp)
0812ca1f +0x5a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812ca24 +0x5f:  leave
0812ca25 +0x60:  ret
0812ca26 +0x61:  push   %ebp
0812ca27 +0x62:  mov    %esp,%ebp
0812ca29 +0x64:  sub    $0x18,%esp
0812ca2c +0x67:  mov    0x8(%ebp),%eax
0812ca2f +0x6a:  movl   $&_ZTV19Timer_DailySchedule+0x8,(%eax)
0812ca35 +0x70:  mov    0x8(%ebp),%eax
0812ca38 +0x73:  mov    %eax,(%esp)
0812ca3b +0x76:  call   0812c9e2 <+0x1d>
0812ca40 +0x7b:  mov    $0x0,%eax
0812ca45 +0x80:  test   %al,%al
0812ca47 +0x82:  je     0812ca54 <+0x8f>
0812ca49 +0x84:  mov    0x8(%ebp),%eax
0812ca4c +0x87:  mov    %eax,(%esp)
0812ca4f +0x8a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812ca54 +0x8f:  leave
0812ca55 +0x90:  ret
0812ca56 +0x91:  push   %ebp
0812ca57 +0x92:  mov    %esp,%ebp
0812ca59 +0x94:  sub    $0x18,%esp
0812ca5c +0x97:  mov    0x8(%ebp),%eax
0812ca5f +0x9a:  mov    %eax,(%esp)
0812ca62 +0x9d:  call   0812ca26 <+0x61>
0812ca67 +0xa2:  mov    0x8(%ebp),%eax
0812ca6a +0xa5:  mov    %eax,(%esp)
0812ca6d +0xa8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0812ca72 +0xad:  leave
0812ca73 +0xae:  ret
```

## 反编译 C

```c
// <global>::global @ 0x812c9c5

/* Timer_DailySchedule::dispatch_sig(int, int, unsigned int) */

void Timer_DailySchedule::_GLOBAL__I_dispatch_sig(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
