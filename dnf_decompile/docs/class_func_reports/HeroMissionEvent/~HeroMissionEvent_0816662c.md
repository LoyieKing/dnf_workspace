# ~HeroMissionEvent

`_ZN16HeroMissionEventD0Ev`

`HeroMissionEvent::~HeroMissionEvent()`

| 类 | 地址 |
|---|---|
| `HeroMissionEvent` | `0x0816662c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816662c  _ZN16HeroMissionEventD0Ev
#           HeroMissionEvent::~HeroMissionEvent()
# range [0x0816662c, 0x08166649]
0816662c +0x00:  push   %ebp
0816662d +0x01:  mov    %esp,%ebp
0816662f +0x03:  sub    $0x18,%esp
08166632 +0x06:  mov    0x8(%ebp),%eax
08166635 +0x09:  mov    %eax,(%esp)
08166638 +0x0c:  call   081665a2 <_ZN16HeroMissionEventD1Ev>  ; HeroMissionEvent::~HeroMissionEvent()
0816663d +0x11:  mov    0x8(%ebp),%eax
08166640 +0x14:  mov    %eax,(%esp)
08166643 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08166648 +0x1c:  leave
08166649 +0x1d:  ret
```

## 反编译 C

```c
// HeroMissionEvent::~HeroMissionEvent @ 0x816662c

/* HeroMissionEvent::~HeroMissionEvent() */

void __thiscall HeroMissionEvent::~HeroMissionEvent(HeroMissionEvent *this)

{
  ~HeroMissionEvent(this);
  operator_delete(this);
  return;
}
```
