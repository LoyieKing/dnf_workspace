# _GetOppositeTeam

`_ZN18online_preliminary18COnlinePreliminary16_GetOppositeTeamEi`

`online_preliminary::COnlinePreliminary::_GetOppositeTeam(int)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08561f66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08561f66  _ZN18online_preliminary18COnlinePreliminary16_GetOppositeTeamEi
#           online_preliminary::COnlinePreliminary::_GetOppositeTeam(int)
# range [0x08561f66, 0x08561f8b]
08561f66 +0x00:  push   %ebp
08561f67 +0x01:  mov    %esp,%ebp
08561f69 +0x03:  mov    0xc(%ebp),%eax
08561f6c +0x06:  cmp    $0x1,%eax
08561f6f +0x09:  je     08561f78 <+0x12>
08561f71 +0x0b:  cmp    $0x2,%eax
08561f74 +0x0e:  je     08561f7f <+0x19>
08561f76 +0x10:  jmp    08561f86 <+0x20>
08561f78 +0x12:  mov    $0x2,%eax
08561f7d +0x17:  jmp    08561f89 <+0x23>
08561f7f +0x19:  mov    $0x1,%eax
08561f84 +0x1e:  jmp    08561f89 <+0x23>
08561f86 +0x20:  mov    0xc(%ebp),%eax
08561f89 +0x23:  pop    %ebp
08561f8a +0x24:  ret
08561f8b +0x25:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_GetOppositeTeam @ 0x8561f66

/* online_preliminary::COnlinePreliminary::_GetOppositeTeam(int) */

int __thiscall
online_preliminary::COnlinePreliminary::_GetOppositeTeam(COnlinePreliminary *this,int param_1)

{
  if (param_1 == 1) {
    param_1 = 2;
  }
  else if (param_1 == 2) {
    param_1 = 1;
  }
  return param_1;
}
```
