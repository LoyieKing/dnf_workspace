# CreateDnFTimer

`_ZN16CDnFTimerFactory14CreateDnFTimerEv`

`CDnFTimerFactory::CreateDnFTimer()`

| 类 | 地址 |
|---|---|
| `CDnFTimerFactory` | `0x085ecab0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ecab0  _ZN16CDnFTimerFactory14CreateDnFTimerEv
#           CDnFTimerFactory::CreateDnFTimer()
# range [0x085ecab0, 0x085ecad7]
085ecab0 +0x00:  push   %ebp
085ecab1 +0x01:  mov    %esp,%ebp
085ecab3 +0x03:  push   %ebx
085ecab4 +0x04:  sub    $0x14,%esp
085ecab7 +0x07:  movl   $0xc,(%esp)
085ecabe +0x0e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085ecac3 +0x13:  mov    %eax,%ebx
085ecac5 +0x15:  mov    %ebx,%eax
085ecac7 +0x17:  mov    %eax,(%esp)
085ecaca +0x1a:  call   085ed7f2 <_GLOBAL__I_query_table+0xbd>  ; global constructors keyed to query_table+0xbd
085ecacf +0x1f:  mov    %ebx,%eax
085ecad1 +0x21:  add    $0x14,%esp
085ecad4 +0x24:  pop    %ebx
085ecad5 +0x25:  pop    %ebp
085ecad6 +0x26:  ret
085ecad7 +0x27:  nop
```

## 反编译 C

```c
// CDnFTimerFactory::CreateDnFTimer @ 0x85ecab0

/* CDnFTimerFactory::CreateDnFTimer() */

CUnixTimer * CDnFTimerFactory::CreateDnFTimer(void)

{
  CUnixTimer *this;
  
  this = operator_new(0xc);
  CUnixTimer::CUnixTimer(this);
  return this;
}
```
