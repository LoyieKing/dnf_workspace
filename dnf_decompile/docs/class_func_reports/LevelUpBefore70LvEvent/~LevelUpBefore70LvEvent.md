# ~LevelUpBefore70LvEvent

`_ZN22LevelUpBefore70LvEventD1Ev`

`LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent()`

| 类 | 地址 |
|---|---|
| `LevelUpBefore70LvEvent` | `0x0811ff7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ff7c  _ZN22LevelUpBefore70LvEventD1Ev
#           LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent()
# range [0x0811ff7c, 0x0811ffab]
0811ff7c +0x00:  push   %ebp
0811ff7d +0x01:  mov    %esp,%ebp
0811ff7f +0x03:  sub    $0x18,%esp
0811ff82 +0x06:  mov    0x8(%ebp),%eax
0811ff85 +0x09:  movl   $&_ZTV22LevelUpBefore70LvEvent+0x8,(%eax)
0811ff8b +0x0f:  mov    0x8(%ebp),%eax
0811ff8e +0x12:  mov    %eax,(%esp)
0811ff91 +0x15:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
0811ff96 +0x1a:  mov    $0x0,%eax
0811ff9b +0x1f:  test   %al,%al
0811ff9d +0x21:  je     0811ffaa <+0x2e>
0811ff9f +0x23:  mov    0x8(%ebp),%eax
0811ffa2 +0x26:  mov    %eax,(%esp)
0811ffa5 +0x29:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811ffaa +0x2e:  leave
0811ffab +0x2f:  ret
```

## 反编译 C

```c
// LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent @ 0x811ff7c

/* WARNING: Removing unreachable block (ram,0x0811ff9f) */
/* LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent() */

void __thiscall LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent(LevelUpBefore70LvEvent *this)

{
  *(undefined ***)this = &PTR__LevelUpBefore70LvEvent_08b59048;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}
```
