# GetDefaultEventInfo

`_ZNK25LevelupSupportEventManger19GetDefaultEventInfoEv`

`LevelupSupportEventManger::GetDefaultEventInfo() const`

| 类 | 地址 |
|---|---|
| `LevelupSupportEventManger` | `0x08147012` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08147012  _ZNK25LevelupSupportEventManger19GetDefaultEventInfoEv
#           LevelupSupportEventManger::GetDefaultEventInfo() const
# range [0x08147012, 0x0814701d]
08147012 +0x00:  push   %ebp
08147013 +0x01:  mov    %esp,%ebp
08147015 +0x03:  mov    0x8(%ebp),%eax
08147018 +0x06:  add    $0x34,%eax
0814701b +0x09:  pop    %ebp
0814701c +0x0a:  ret
0814701d +0x0b:  nop
```

## 反编译 C

```c
// LevelupSupportEventManger::GetDefaultEventInfo @ 0x8147012

/* LevelupSupportEventManger::GetDefaultEventInfo() const */

LevelupSupportEventManger * __thiscall
LevelupSupportEventManger::GetDefaultEventInfo(LevelupSupportEventManger *this)

{
  return this + 0x34;
}
```
