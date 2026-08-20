# DestroyDnFTimer

`_ZN16CDnFTimerFactory15DestroyDnFTimerEP9CDnFTimer`

`CDnFTimerFactory::DestroyDnFTimer(CDnFTimer*)`

| 类 | 地址 |
|---|---|
| `CDnFTimerFactory` | `0x085ecad8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ecad8  _ZN16CDnFTimerFactory15DestroyDnFTimerEP9CDnFTimer
#           CDnFTimerFactory::DestroyDnFTimer(CDnFTimer*)
# range [0x085ecad8, 0x085ecaeb]
085ecad8 +0x00:  push   %ebp
085ecad9 +0x01:  mov    %esp,%ebp
085ecadb +0x03:  sub    $0x18,%esp
085ecade +0x06:  mov    0x8(%ebp),%eax
085ecae1 +0x09:  mov    %eax,(%esp)
085ecae4 +0x0c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085ecae9 +0x11:  leave
085ecaea +0x12:  ret
085ecaeb +0x13:  nop
```

## 反编译 C

```c
// CDnFTimerFactory::DestroyDnFTimer @ 0x85ecad8

/* CDnFTimerFactory::DestroyDnFTimer(CDnFTimer*) */

void CDnFTimerFactory::DestroyDnFTimer(CDnFTimer *param_1)

{
  operator_delete(param_1);
  return;
}
```
