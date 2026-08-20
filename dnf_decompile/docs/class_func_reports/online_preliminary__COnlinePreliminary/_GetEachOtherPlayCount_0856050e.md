# _GetEachOtherPlayCount

`_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv`

`online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x0856050e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856050e  _ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEv
#           online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount()
# range [0x0856050e, 0x085605ed]
0856050e +0x00:  push   %ebp
0856050f +0x01:  mov    %esp,%ebp
08560511 +0x03:  sub    $0x28,%esp
08560514 +0x06:  movl   $0x0,-0x14(%ebp)
0856051b +0x0d:  movl   $0x0,-0x10(%ebp)
08560522 +0x14:  movl   $0x0,-0xc(%ebp)
08560529 +0x1b:  movl   $0x0,-0xc(%ebp)
08560530 +0x22:  jmp    08560569 <+0x5b>
08560532 +0x24:  mov    -0xc(%ebp),%edx
08560535 +0x27:  mov    0x8(%ebp),%eax
08560538 +0x2a:  add    $0x2,%edx
0856053b +0x2d:  movzbl 0x18(%eax,%edx,8),%eax
08560540 +0x32:  test   %al,%al
08560542 +0x34:  je     08560565 <+0x57>
08560544 +0x36:  mov    -0xc(%ebp),%edx
08560547 +0x39:  mov    0x8(%ebp),%eax
0856054a +0x3c:  add    $0x2,%edx
0856054d +0x3f:  mov    0x14(%eax,%edx,8),%eax
08560551 +0x43:  test   %eax,%eax
08560553 +0x45:  je     08560565 <+0x57>
08560555 +0x47:  mov    -0xc(%ebp),%edx
08560558 +0x4a:  mov    0x8(%ebp),%eax
0856055b +0x4d:  add    $0x2,%edx
0856055e +0x50:  mov    0x14(%eax,%edx,8),%eax
08560562 +0x54:  mov    %eax,-0x14(%ebp)
08560565 +0x57:  addl   $0x1,-0xc(%ebp)
08560569 +0x5b:  cmpl   $0x3,-0xc(%ebp)
0856056d +0x5f:  setle  %al
08560570 +0x62:  test   %al,%al
08560572 +0x64:  jne    08560532 <+0x24>
08560574 +0x66:  movl   $0x0,-0xc(%ebp)
0856057b +0x6d:  jmp    085605b4 <+0xa6>
0856057d +0x6f:  mov    -0xc(%ebp),%edx
08560580 +0x72:  mov    0x8(%ebp),%eax
08560583 +0x75:  add    $0x7,%edx
08560586 +0x78:  movzbl 0x18(%eax,%edx,8),%eax
0856058b +0x7d:  test   %al,%al
0856058d +0x7f:  je     085605b0 <+0xa2>
0856058f +0x81:  mov    -0xc(%ebp),%edx
08560592 +0x84:  mov    0x8(%ebp),%eax
08560595 +0x87:  add    $0x7,%edx
08560598 +0x8a:  mov    0x14(%eax,%edx,8),%eax
0856059c +0x8e:  test   %eax,%eax
0856059e +0x90:  je     085605b0 <+0xa2>
085605a0 +0x92:  mov    -0xc(%ebp),%edx
085605a3 +0x95:  mov    0x8(%ebp),%eax
085605a6 +0x98:  add    $0x7,%edx
085605a9 +0x9b:  mov    0x14(%eax,%edx,8),%eax
085605ad +0x9f:  mov    %eax,-0x10(%ebp)
085605b0 +0xa2:  addl   $0x1,-0xc(%ebp)
085605b4 +0xa6:  cmpl   $0x3,-0xc(%ebp)
085605b8 +0xaa:  setle  %al
085605bb +0xad:  test   %al,%al
085605bd +0xaf:  jne    0856057d <+0x6f>
085605bf +0xb1:  cmpl   $0x0,-0x14(%ebp)
085605c3 +0xb5:  je     085605e6 <+0xd8>
085605c5 +0xb7:  cmpl   $0x0,-0x10(%ebp)
085605c9 +0xbb:  je     085605e6 <+0xd8>
085605cb +0xbd:  mov    -0x10(%ebp),%eax
085605ce +0xc0:  mov    %eax,0x8(%esp)
085605d2 +0xc4:  mov    -0x14(%ebp),%eax
085605d5 +0xc7:  mov    %eax,0x4(%esp)
085605d9 +0xcb:  mov    0x8(%ebp),%eax
085605dc +0xce:  mov    %eax,(%esp)
085605df +0xd1:  call   08560212 <_ZN18online_preliminary18COnlinePreliminary22_GetEachOtherPlayCountEP5CUserS2_>  ; online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount(CUser*, CUser*)
085605e4 +0xd6:  jmp    085605eb <+0xdd>
085605e6 +0xd8:  mov    $0x0,%eax
085605eb +0xdd:  leave
085605ec +0xde:  ret
085605ed +0xdf:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount @ 0x856050e

/* online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount() */

undefined4 __thiscall
online_preliminary::COnlinePreliminary::_GetEachOtherPlayCount(COnlinePreliminary *this)

{
  undefined4 uVar1;
  CUser *local_18;
  CUser *local_14;
  int local_10;
  
  local_18 = (CUser *)0x0;
  local_14 = (CUser *)0x0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[(local_10 + 2) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (local_10 + 2) * 8 + 0x14) != 0)) {
      local_18 = *(CUser **)(this + (local_10 + 2) * 8 + 0x14);
    }
  }
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    if ((this[(local_10 + 7) * 8 + 0x18] != (COnlinePreliminary)0x0) &&
       (*(int *)(this + (local_10 + 7) * 8 + 0x14) != 0)) {
      local_14 = *(CUser **)(this + (local_10 + 7) * 8 + 0x14);
    }
  }
  if ((local_18 == (CUser *)0x0) || (local_14 == (CUser *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = _GetEachOtherPlayCount(this,local_18,local_14);
  }
  return uVar1;
}
```
