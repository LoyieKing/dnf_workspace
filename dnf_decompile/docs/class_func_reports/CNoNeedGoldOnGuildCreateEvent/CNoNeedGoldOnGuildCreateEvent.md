# CNoNeedGoldOnGuildCreateEvent

`_ZN29CNoNeedGoldOnGuildCreateEventC1Ev`

`CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent()`

| 类 | 地址 |
|---|---|
| `CNoNeedGoldOnGuildCreateEvent` | `0x081b9b8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9b8c  _ZN29CNoNeedGoldOnGuildCreateEventC1Ev
#           CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent()
# range [0x081b9b8c, 0x081b9ba7]
081b9b8c +0x00:  push   %ebp
081b9b8d +0x01:  mov    %esp,%ebp
081b9b8f +0x03:  sub    $0x18,%esp
081b9b92 +0x06:  mov    0x8(%ebp),%eax
081b9b95 +0x09:  mov    %eax,(%esp)
081b9b98 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081b9b9d +0x11:  mov    0x8(%ebp),%eax
081b9ba0 +0x14:  movl   $&_ZTV29CNoNeedGoldOnGuildCreateEvent+0x8,(%eax)
081b9ba6 +0x1a:  leave
081b9ba7 +0x1b:  ret
```

## 反编译 C

```c
// CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent @ 0x81b9b8c

/* CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent() */

void __thiscall
CNoNeedGoldOnGuildCreateEvent::CNoNeedGoldOnGuildCreateEvent(CNoNeedGoldOnGuildCreateEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CNoNeedGoldOnGuildCreateEvent_08bbd0c8;
  return;
}
```
