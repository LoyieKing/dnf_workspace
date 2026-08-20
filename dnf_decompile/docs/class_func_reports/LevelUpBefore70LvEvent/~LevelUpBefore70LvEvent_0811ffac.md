# ~LevelUpBefore70LvEvent

`_ZN22LevelUpBefore70LvEventD0Ev`

`LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent()`

| 类 | 地址 |
|---|---|
| `LevelUpBefore70LvEvent` | `0x0811ffac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ffac  _ZN22LevelUpBefore70LvEventD0Ev
#           LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent()
# range [0x0811ffac, 0x0811ffc9]
0811ffac +0x00:  push   %ebp
0811ffad +0x01:  mov    %esp,%ebp
0811ffaf +0x03:  sub    $0x18,%esp
0811ffb2 +0x06:  mov    0x8(%ebp),%eax
0811ffb5 +0x09:  mov    %eax,(%esp)
0811ffb8 +0x0c:  call   0811ff7c <_ZN22LevelUpBefore70LvEventD1Ev>  ; LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent()
0811ffbd +0x11:  mov    0x8(%ebp),%eax
0811ffc0 +0x14:  mov    %eax,(%esp)
0811ffc3 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0811ffc8 +0x1c:  leave
0811ffc9 +0x1d:  ret
```

## 反编译 C

```c
// LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent @ 0x811ffac

/* LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent() */

void __thiscall LevelUpBefore70LvEvent::~LevelUpBefore70LvEvent(LevelUpBefore70LvEvent *this)

{
  ~LevelUpBefore70LvEvent(this);
  operator_delete(this);
  return;
}
```
