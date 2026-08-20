# _IncreaseEachOtherPlayCount

`_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv`

`online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x085605ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085605ee  _ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEv
#           online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount()
# range [0x085605ee, 0x085606df]
085605ee +0x00:  push   %ebp
085605ef +0x01:  mov    %esp,%ebp
085605f1 +0x03:  sub    $0x28,%esp
085605f4 +0x06:  movl   $0x0,-0x14(%ebp)
085605fb +0x0d:  movl   $0x0,-0x10(%ebp)
08560602 +0x14:  movl   $0x0,-0xc(%ebp)
08560609 +0x1b:  movl   $0x0,-0xc(%ebp)
08560610 +0x22:  jmp    08560649 <+0x5b>
08560612 +0x24:  mov    -0xc(%ebp),%edx
08560615 +0x27:  mov    0x8(%ebp),%eax
08560618 +0x2a:  add    $0x2,%edx
0856061b +0x2d:  movzbl 0x18(%eax,%edx,8),%eax
08560620 +0x32:  test   %al,%al
08560622 +0x34:  je     08560645 <+0x57>
08560624 +0x36:  mov    -0xc(%ebp),%edx
08560627 +0x39:  mov    0x8(%ebp),%eax
0856062a +0x3c:  add    $0x2,%edx
0856062d +0x3f:  mov    0x14(%eax,%edx,8),%eax
08560631 +0x43:  test   %eax,%eax
08560633 +0x45:  je     08560645 <+0x57>
08560635 +0x47:  mov    -0xc(%ebp),%edx
08560638 +0x4a:  mov    0x8(%ebp),%eax
0856063b +0x4d:  add    $0x2,%edx
0856063e +0x50:  mov    0x14(%eax,%edx,8),%eax
08560642 +0x54:  mov    %eax,-0x14(%ebp)
08560645 +0x57:  addl   $0x1,-0xc(%ebp)
08560649 +0x5b:  cmpl   $0x3,-0xc(%ebp)
0856064d +0x5f:  setle  %al
08560650 +0x62:  test   %al,%al
08560652 +0x64:  jne    08560612 <+0x24>
08560654 +0x66:  movl   $0x0,-0xc(%ebp)
0856065b +0x6d:  jmp    08560694 <+0xa6>
0856065d +0x6f:  mov    -0xc(%ebp),%edx
08560660 +0x72:  mov    0x8(%ebp),%eax
08560663 +0x75:  add    $0x7,%edx
08560666 +0x78:  movzbl 0x18(%eax,%edx,8),%eax
0856066b +0x7d:  test   %al,%al
0856066d +0x7f:  je     08560690 <+0xa2>
0856066f +0x81:  mov    -0xc(%ebp),%edx
08560672 +0x84:  mov    0x8(%ebp),%eax
08560675 +0x87:  add    $0x7,%edx
08560678 +0x8a:  mov    0x14(%eax,%edx,8),%eax
0856067c +0x8e:  test   %eax,%eax
0856067e +0x90:  je     08560690 <+0xa2>
08560680 +0x92:  mov    -0xc(%ebp),%edx
08560683 +0x95:  mov    0x8(%ebp),%eax
08560686 +0x98:  add    $0x7,%edx
08560689 +0x9b:  mov    0x14(%eax,%edx,8),%eax
0856068d +0x9f:  mov    %eax,-0x10(%ebp)
08560690 +0xa2:  addl   $0x1,-0xc(%ebp)
08560694 +0xa6:  cmpl   $0x3,-0xc(%ebp)
08560698 +0xaa:  setle  %al
0856069b +0xad:  test   %al,%al
0856069d +0xaf:  jne    0856065d <+0x6f>
0856069f +0xb1:  cmpl   $0x0,-0x14(%ebp)
085606a3 +0xb5:  je     085606dd <+0xef>
085606a5 +0xb7:  cmpl   $0x0,-0x10(%ebp)
085606a9 +0xbb:  je     085606dd <+0xef>
085606ab +0xbd:  mov    -0x10(%ebp),%eax
085606ae +0xc0:  mov    %eax,0x8(%esp)
085606b2 +0xc4:  mov    -0x14(%ebp),%eax
085606b5 +0xc7:  mov    %eax,0x4(%esp)
085606b9 +0xcb:  mov    0x8(%ebp),%eax
085606bc +0xce:  mov    %eax,(%esp)
085606bf +0xd1:  call   085602ae <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEP5CUserS2_>  ; online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount(CUser*, CUser*)
085606c4 +0xd6:  mov    -0x14(%ebp),%eax
085606c7 +0xd9:  mov    %eax,0x8(%esp)
085606cb +0xdd:  mov    -0x10(%ebp),%eax
085606ce +0xe0:  mov    %eax,0x4(%esp)
085606d2 +0xe4:  mov    0x8(%ebp),%eax
085606d5 +0xe7:  mov    %eax,(%esp)
085606d8 +0xea:  call   085602ae <_ZN18online_preliminary18COnlinePreliminary27_IncreaseEachOtherPlayCountEP5CUserS2_>  ; online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount(CUser*, CUser*)
085606dd +0xef:  leave
085606de +0xf0:  ret
085606df +0xf1:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount @ 0x85605ee

/* online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount() */

void __thiscall
online_preliminary::COnlinePreliminary::_IncreaseEachOtherPlayCount(COnlinePreliminary *this)

{
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
  if ((local_18 != (CUser *)0x0) && (local_14 != (CUser *)0x0)) {
    _IncreaseEachOtherPlayCount(this,local_18,local_14);
    _IncreaseEachOtherPlayCount(this,local_14,local_18);
  }
  return;
}
```
