# ~CPowerWarVictoriousEvent

`_ZN24CPowerWarVictoriousEventD0Ev`

`CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent()`

| 类 | 地址 |
|---|---|
| `CPowerWarVictoriousEvent` | `0x08268968` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08268968  _ZN24CPowerWarVictoriousEventD0Ev
#           CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent()
# range [0x08268968, 0x08268985]
08268968 +0x00:  push   %ebp
08268969 +0x01:  mov    %esp,%ebp
0826896b +0x03:  sub    $0x18,%esp
0826896e +0x06:  mov    0x8(%ebp),%eax
08268971 +0x09:  mov    %eax,(%esp)
08268974 +0x0c:  call   08268938 <_ZN24CPowerWarVictoriousEventD1Ev>  ; CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent()
08268979 +0x11:  mov    0x8(%ebp),%eax
0826897c +0x14:  mov    %eax,(%esp)
0826897f +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08268984 +0x1c:  leave
08268985 +0x1d:  ret
```

## 反编译 C

```c
// CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent @ 0x8268968

/* CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent() */

void __thiscall CPowerWarVictoriousEvent::~CPowerWarVictoriousEvent(CPowerWarVictoriousEvent *this)

{
  ~CPowerWarVictoriousEvent(this);
  operator_delete(this);
  return;
}
```
