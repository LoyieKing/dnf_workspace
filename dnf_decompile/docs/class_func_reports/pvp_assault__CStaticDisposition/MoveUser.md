# MoveUser

`_ZN11pvp_assault18CStaticDisposition8MoveUserEPNS_20CForcedMoveCharacterE`

`pvp_assault::CStaticDisposition::MoveUser(pvp_assault::CForcedMoveCharacter*)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CStaticDisposition` | `0x082e65ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e65ee  _ZN11pvp_assault18CStaticDisposition8MoveUserEPNS_20CForcedMoveCharacterE
#           pvp_assault::CStaticDisposition::MoveUser(pvp_assault::CForcedMoveCharacter*)
# range [0x082e65ee, 0x082e661d]
082e65ee +0x00:  push   %ebp
082e65ef +0x01:  mov    %esp,%ebp
082e65f1 +0x03:  sub    $0x18,%esp
082e65f4 +0x06:  mov    0xc(%ebp),%eax
082e65f7 +0x09:  mov    (%eax),%eax
082e65f9 +0x0b:  mov    %eax,%edx
082e65fb +0x0d:  mov    %edx,%eax
082e65fd +0x0f:  add    %eax,%eax
082e65ff +0x11:  add    %edx,%eax
082e6601 +0x13:  shl    $0x2,%eax
082e6604 +0x16:  add    $0x10,%eax
082e6607 +0x19:  add    0x8(%ebp),%eax
082e660a +0x1c:  lea    0x4(%eax),%edx
082e660d +0x1f:  mov    0xc(%ebp),%eax
082e6610 +0x22:  mov    %eax,0x4(%esp)
082e6614 +0x26:  mov    %edx,(%esp)
082e6617 +0x29:  call   082e5c0a <_ZN11pvp_assault12CExtraMatrix8MoveUserEPNS_20CForcedMoveCharacterE>  ; pvp_assault::CExtraMatrix::MoveUser(pvp_assault::CForcedMoveCharacter*)
082e661c +0x2e:  leave
082e661d +0x2f:  ret
```

## 反编译 C

```c
// pvp_assault::CStaticDisposition::MoveUser @ 0x82e65ee

/* pvp_assault::CStaticDisposition::MoveUser(pvp_assault::CForcedMoveCharacter*) */

void __thiscall
pvp_assault::CStaticDisposition::MoveUser(CStaticDisposition *this,CForcedMoveCharacter *param_1)

{
  CExtraMatrix::MoveUser((CExtraMatrix *)(this + *(int *)param_1 * 0xc + 0x14),param_1);
  return;
}
```
