# GetTeamId

`_ZN18online_preliminary18COnlinePreliminary9GetTeamIdEv`

`online_preliminary::COnlinePreliminary::GetTeamId()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085623e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085623e0  _ZN18online_preliminary18COnlinePreliminary9GetTeamIdEv
#           online_preliminary::COnlinePreliminary::GetTeamId()
# range [0x085623e0, 0x085623eb]
085623e0 +0x00:  push   %ebp
085623e1 +0x01:  mov    %esp,%ebp
085623e3 +0x03:  mov    0x8(%ebp),%eax
085623e6 +0x06:  mov    0x1c(%eax),%eax
085623e9 +0x09:  pop    %ebp
085623ea +0x0a:  ret
085623eb +0x0b:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::GetTeamId @ 0x85623e0

/* online_preliminary::COnlinePreliminary::GetTeamId() */

undefined4 __thiscall online_preliminary::COnlinePreliminary::GetTeamId(COnlinePreliminary *this)

{
  return *(undefined4 *)(this + 0x1c);
}
```
