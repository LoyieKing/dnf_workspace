# LevelUpBefore70LvEvent

`_ZN22LevelUpBefore70LvEventC1Ev`

`LevelUpBefore70LvEvent::LevelUpBefore70LvEvent()`

| 类 | 地址 |
|---|---|
| `LevelUpBefore70LvEvent` | `0x0811ff60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811ff60  _ZN22LevelUpBefore70LvEventC1Ev
#           LevelUpBefore70LvEvent::LevelUpBefore70LvEvent()
# range [0x0811ff60, 0x0811ff7b]
0811ff60 +0x00:  push   %ebp
0811ff61 +0x01:  mov    %esp,%ebp
0811ff63 +0x03:  sub    $0x18,%esp
0811ff66 +0x06:  mov    0x8(%ebp),%eax
0811ff69 +0x09:  mov    %eax,(%esp)
0811ff6c +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0811ff71 +0x11:  mov    0x8(%ebp),%eax
0811ff74 +0x14:  movl   $&_ZTV22LevelUpBefore70LvEvent+0x8,(%eax)
0811ff7a +0x1a:  leave
0811ff7b +0x1b:  ret
```

## 反编译 C

```c
// LevelUpBefore70LvEvent::LevelUpBefore70LvEvent @ 0x811ff60

/* LevelUpBefore70LvEvent::LevelUpBefore70LvEvent() */

void __thiscall LevelUpBefore70LvEvent::LevelUpBefore70LvEvent(LevelUpBefore70LvEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__LevelUpBefore70LvEvent_08b59048;
  return;
}
```
