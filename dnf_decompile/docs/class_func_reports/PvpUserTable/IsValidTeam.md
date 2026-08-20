# IsValidTeam

`_ZN12PvpUserTable11IsValidTeamEi`

`PvpUserTable::IsValidTeam(int)`

| 类 | 地址 |
|---|---|
| `PvpUserTable` | `0x085d4a14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d4a14  _ZN12PvpUserTable11IsValidTeamEi
#           PvpUserTable::IsValidTeam(int)
# range [0x085d4a14, 0x085d4a31]
085d4a14 +0x00:  push   %ebp
085d4a15 +0x01:  mov    %esp,%ebp
085d4a17 +0x03:  cmpl   $0x0,0xc(%ebp)
085d4a1b +0x07:  js     085d4a2a <+0x16>
085d4a1d +0x09:  cmpl   $0x7,0xc(%ebp)
085d4a21 +0x0d:  jg     085d4a2a <+0x16>
085d4a23 +0x0f:  mov    $0x1,%eax
085d4a28 +0x14:  jmp    085d4a2f <+0x1b>
085d4a2a +0x16:  mov    $0x0,%eax
085d4a2f +0x1b:  pop    %ebp
085d4a30 +0x1c:  ret
085d4a31 +0x1d:  nop
```

## 反编译 C

```c
// PvpUserTable::IsValidTeam @ 0x85d4a14

/* PvpUserTable::IsValidTeam(int) */

undefined4 __thiscall PvpUserTable::IsValidTeam(PvpUserTable *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (7 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
