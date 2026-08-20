# GetItemType

`_ZN8WongWork9CWebEvent11GetItemTypeEii`

`WongWork::CWebEvent::GetItemType(int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CWebEvent` | `0x086c1aba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c1aba  _ZN8WongWork9CWebEvent11GetItemTypeEii
#           WongWork::CWebEvent::GetItemType(int, int)
# range [0x086c1aba, 0x086c1ba7]
086c1aba +0x00:  push   %ebp
086c1abb +0x01:  mov    %esp,%ebp
086c1abd +0x03:  sub    $0x10,%esp
086c1ac0 +0x06:  movl   $0x0,-0x4(%ebp)
086c1ac7 +0x0d:  cmpl   $0x2,0x8(%ebp)
086c1acb +0x11:  jne    086c1b62 <+0xa8>
086c1ad1 +0x17:  mov    0xc(%ebp),%eax
086c1ad4 +0x1a:  cmp    $0xae68,%eax
086c1ad9 +0x1f:  je     086c1b3d <+0x83>
086c1adb +0x21:  cmp    $0xae68,%eax
086c1ae0 +0x26:  jg     086c1b0f <+0x55>
086c1ae2 +0x28:  cmp    $0x659d,%eax
086c1ae7 +0x2d:  je     086c1b4f <+0x95>
086c1ae9 +0x2f:  cmp    $0x659d,%eax
086c1aee +0x34:  jg     086c1afc <+0x42>
086c1af0 +0x36:  cmp    $0x3e7,%eax
086c1af5 +0x3b:  je     086c1b59 <+0x9f>
086c1af7 +0x3d:  jmp    086c1ba2 <+0xe8>
086c1afc +0x42:  cmp    $0x9ed0,%eax
086c1b01 +0x47:  je     086c1b3d <+0x83>
086c1b03 +0x49:  cmp    $0xa060,%eax
086c1b08 +0x4e:  je     086c1b46 <+0x8c>
086c1b0a +0x50:  jmp    086c1ba2 <+0xe8>
086c1b0f +0x55:  cmp    $0xbf9c,%eax
086c1b14 +0x5a:  je     086c1b46 <+0x8c>
086c1b16 +0x5c:  cmp    $0xbf9c,%eax
086c1b1b +0x61:  jg     086c1b2d <+0x73>
086c1b1d +0x63:  cmp    $0xaff8,%eax
086c1b22 +0x68:  je     086c1b46 <+0x8c>
086c1b24 +0x6a:  cmp    $0xbe0c,%eax
086c1b29 +0x6f:  je     086c1b3d <+0x83>
086c1b2b +0x71:  jmp    086c1ba2 <+0xe8>
086c1b2d +0x73:  cmp    $0xcd81,%eax
086c1b32 +0x78:  je     086c1b3d <+0x83>
086c1b34 +0x7a:  cmp    $0xcf11,%eax
086c1b39 +0x7f:  je     086c1b46 <+0x8c>
086c1b3b +0x81:  jmp    086c1ba2 <+0xe8>
086c1b3d +0x83:  movl   $0x1,-0x4(%ebp)
086c1b44 +0x8a:  jmp    086c1ba2 <+0xe8>
086c1b46 +0x8c:  movl   $0x2,-0x4(%ebp)
086c1b4d +0x93:  jmp    086c1ba2 <+0xe8>
086c1b4f +0x95:  movl   $0x3,-0x4(%ebp)
086c1b56 +0x9c:  nop
086c1b57 +0x9d:  jmp    086c1ba2 <+0xe8>
086c1b59 +0x9f:  movl   $0x4,-0x4(%ebp)
086c1b60 +0xa6:  jmp    086c1ba2 <+0xe8>
086c1b62 +0xa8:  cmpl   $0x3,0x8(%ebp)
086c1b66 +0xac:  jne    086c1b8a <+0xd0>
086c1b68 +0xae:  mov    0xc(%ebp),%eax
086c1b6b +0xb1:  cmp    $0x8,%eax
086c1b6e +0xb4:  je     086c1b81 <+0xc7>
086c1b70 +0xb6:  cmp    $0x659e,%eax
086c1b75 +0xbb:  jne    086c1ba1 <+0xe7>
086c1b77 +0xbd:  movl   $0x1,-0x4(%ebp)
086c1b7e +0xc4:  nop
086c1b7f +0xc5:  jmp    086c1ba2 <+0xe8>
086c1b81 +0xc7:  movl   $0x2,-0x4(%ebp)
086c1b88 +0xce:  jmp    086c1ba2 <+0xe8>
086c1b8a +0xd0:  cmpl   $0x3,0x8(%ebp)
086c1b8e +0xd4:  jne    086c1ba2 <+0xe8>
086c1b90 +0xd6:  mov    0xc(%ebp),%eax
086c1b93 +0xd9:  cmp    $0x1,%eax
086c1b96 +0xdc:  jne    086c1ba2 <+0xe8>
086c1b98 +0xde:  movl   $0x1,-0x4(%ebp)
086c1b9f +0xe5:  jmp    086c1ba2 <+0xe8>
086c1ba1 +0xe7:  nop
086c1ba2 +0xe8:  mov    -0x4(%ebp),%eax
086c1ba5 +0xeb:  leave
086c1ba6 +0xec:  ret
086c1ba7 +0xed:  nop
```

## 反编译 C

```c
// WongWork::CWebEvent::GetItemType @ 0x86c1aba

/* WongWork::CWebEvent::GetItemType(int, int) */

undefined4 WongWork::CWebEvent::GetItemType(int param_1,int param_2)

{
  if (param_1 != 2) {
    if (param_1 != 3) {
      if (param_1 != 3) {
        return 0;
      }
      if (param_2 == 1) {
        return 1;
      }
      return 0;
    }
    if (param_2 == 8) {
      return 2;
    }
    if (param_2 == 0x659e) {
      return 1;
    }
    return 0;
  }
  if (param_2 == 0xae68) {
    return 1;
  }
  if (param_2 < 0xae69) {
    if (param_2 == 0x659d) {
      return 3;
    }
    if (param_2 < 0x659e) {
      if (param_2 == 999) {
        return 4;
      }
      return 0;
    }
    if (param_2 == 0x9ed0) {
      return 1;
    }
    if (param_2 != 0xa060) {
      return 0;
    }
  }
  else if (param_2 != 0xbf9c) {
    if (param_2 < 0xbf9d) {
      if (param_2 != 0xaff8) {
        if (param_2 == 0xbe0c) {
          return 1;
        }
        return 0;
      }
    }
    else {
      if (param_2 == 0xcd81) {
        return 1;
      }
      if (param_2 != 0xcf11) {
        return 0;
      }
    }
  }
  return 2;
}
```
