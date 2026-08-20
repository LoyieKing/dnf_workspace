# MoveUser

`_ZN11pvp_assault19CDynamicDisposition8MoveUserEPNS_20CForcedMoveCharacterE`

`pvp_assault::CDynamicDisposition::MoveUser(pvp_assault::CForcedMoveCharacter*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CDynamicDisposition` | `0x082e62a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e62a0  _ZN11pvp_assault19CDynamicDisposition8MoveUserEPNS_20CForcedMoveCharacterE
#           pvp_assault::CDynamicDisposition::MoveUser(pvp_assault::CForcedMoveCharacter*)
# range [0x082e62a0, 0x082e62a9]
082e62a0 +0x00:  push   %ebp
082e62a1 +0x01:  mov    %esp,%ebp
082e62a3 +0x03:  mov    $0x1,%eax
082e62a8 +0x08:  pop    %ebp
082e62a9 +0x09:  ret
```

## 反编译 C

```c
// pvp_assault::CDynamicDisposition::MoveUser @ 0x82e62a0

/* pvp_assault::CDynamicDisposition::MoveUser(pvp_assault::CForcedMoveCharacter*) */

undefined4 pvp_assault::CDynamicDisposition::MoveUser(CForcedMoveCharacter *param_1)

{
  return 1;
}
```
