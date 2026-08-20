# GiveGrowCreatureEvent

`_ZN21GiveGrowCreatureEventC1Ev`

`GiveGrowCreatureEvent::GiveGrowCreatureEvent()`

| 类 | 地址 |
|---|---|
| `GiveGrowCreatureEvent` | `0x081b695c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b695c  _ZN21GiveGrowCreatureEventC1Ev
#           GiveGrowCreatureEvent::GiveGrowCreatureEvent()
# range [0x081b695c, 0x081b6977]
081b695c +0x00:  push   %ebp
081b695d +0x01:  mov    %esp,%ebp
081b695f +0x03:  sub    $0x18,%esp
081b6962 +0x06:  mov    0x8(%ebp),%eax
081b6965 +0x09:  mov    %eax,(%esp)
081b6968 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081b696d +0x11:  mov    0x8(%ebp),%eax
081b6970 +0x14:  movl   $&_ZTV21GiveGrowCreatureEvent+0x8,(%eax)
081b6976 +0x1a:  leave
081b6977 +0x1b:  ret
```

## 反编译 C

```c
// GiveGrowCreatureEvent::GiveGrowCreatureEvent @ 0x81b695c

/* GiveGrowCreatureEvent::GiveGrowCreatureEvent() */

void __thiscall GiveGrowCreatureEvent::GiveGrowCreatureEvent(GiveGrowCreatureEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__GiveGrowCreatureEvent_08bbbae8;
  return;
}
```
