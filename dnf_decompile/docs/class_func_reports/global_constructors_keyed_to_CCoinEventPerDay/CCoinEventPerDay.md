# CCoinEventPerDay

`_GLOBAL__I__ZN16CCoinEventPerDayC2Ev`

`global constructors keyed to CCoinEventPerDay::CCoinEventPerDay()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CCoinEventPerDay` | `0x0810ad89` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ad89  _GLOBAL__I__ZN16CCoinEventPerDayC2Ev
#           global constructors keyed to CCoinEventPerDay::CCoinEventPerDay()
# range [0x0810ad89, 0x0810ada7]
0810ad89 +0x00:  push   %ebp
0810ad8a +0x01:  mov    %esp,%ebp
0810ad8c +0x03:  sub    $0x18,%esp
0810ad8f +0x06:  movl   $0xffff,0x4(%esp)
0810ad97 +0x0e:  movl   $0x1,(%esp)
0810ad9e +0x15:  call   0810ad49 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
0810ada3 +0x1a:  leave
0810ada4 +0x1b:  ret
0810ada5 +0x1c:  nop
0810ada6 +0x1d:  nop
0810ada7 +0x1e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x810ad89

/* CCoinEventPerDay::CCoinEventPerDay() */

void CCoinEventPerDay::_GLOBAL__I_CCoinEventPerDay(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
