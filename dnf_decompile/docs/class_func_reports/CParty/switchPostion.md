# switchPostion

`_ZN6CParty13switchPostionEcc`

`CParty::switchPostion(char, char)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085ba680` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ba680  _ZN6CParty13switchPostionEcc
#           CParty::switchPostion(char, char)
# range [0x085ba680, 0x085ba761]
085ba680 +0x00:  push   %ebp
085ba681 +0x01:  mov    %esp,%ebp
085ba683 +0x03:  push   %ebx
085ba684 +0x04:  sub    $0x28,%esp
085ba687 +0x07:  mov    0xc(%ebp),%edx
085ba68a +0x0a:  mov    0x10(%ebp),%eax
085ba68d +0x0d:  mov    %dl,-0x28(%ebp)
085ba690 +0x10:  mov    %al,-0x2c(%ebp)
085ba693 +0x13:  movsbl -0x28(%ebp),%edx
085ba697 +0x17:  mov    0x8(%ebp),%ecx
085ba69a +0x1a:  mov    %edx,%eax
085ba69c +0x1c:  add    %eax,%eax
085ba69e +0x1e:  add    %edx,%eax
085ba6a0 +0x20:  shl    $0x3,%eax
085ba6a3 +0x23:  lea    (%ecx,%eax,1),%eax
085ba6a6 +0x26:  add    $0x70,%eax
085ba6a9 +0x29:  mov    0x8(%eax),%edx
085ba6ac +0x2c:  mov    %edx,-0x1c(%ebp)
085ba6af +0x2f:  mov    0xc(%eax),%edx
085ba6b2 +0x32:  mov    %edx,-0x18(%ebp)
085ba6b5 +0x35:  mov    0x10(%eax),%edx
085ba6b8 +0x38:  mov    %edx,-0x14(%ebp)
085ba6bb +0x3b:  mov    0x14(%eax),%edx
085ba6be +0x3e:  mov    %edx,-0x10(%ebp)
085ba6c1 +0x41:  mov    0x18(%eax),%edx
085ba6c4 +0x44:  mov    %edx,-0xc(%ebp)
085ba6c7 +0x47:  mov    0x1c(%eax),%eax
085ba6ca +0x4a:  mov    %eax,-0x8(%ebp)
085ba6cd +0x4d:  movsbl -0x28(%ebp),%edx
085ba6d1 +0x51:  movsbl -0x2c(%ebp),%ecx
085ba6d5 +0x55:  mov    0x8(%ebp),%ebx
085ba6d8 +0x58:  mov    %edx,%eax
085ba6da +0x5a:  add    %eax,%eax
085ba6dc +0x5c:  add    %edx,%eax
085ba6de +0x5e:  shl    $0x3,%eax
085ba6e1 +0x61:  lea    (%ebx,%eax,1),%eax
085ba6e4 +0x64:  lea    0x70(%eax),%edx
085ba6e7 +0x67:  mov    0x8(%ebp),%ebx
085ba6ea +0x6a:  mov    %ecx,%eax
085ba6ec +0x6c:  add    %eax,%eax
085ba6ee +0x6e:  add    %ecx,%eax
085ba6f0 +0x70:  shl    $0x3,%eax
085ba6f3 +0x73:  lea    (%ebx,%eax,1),%eax
085ba6f6 +0x76:  add    $0x70,%eax
085ba6f9 +0x79:  mov    0x8(%eax),%ecx
085ba6fc +0x7c:  mov    %ecx,0x8(%edx)
085ba6ff +0x7f:  mov    0xc(%eax),%ecx
085ba702 +0x82:  mov    %ecx,0xc(%edx)
085ba705 +0x85:  mov    0x10(%eax),%ecx
085ba708 +0x88:  mov    %ecx,0x10(%edx)
085ba70b +0x8b:  mov    0x14(%eax),%ecx
085ba70e +0x8e:  mov    %ecx,0x14(%edx)
085ba711 +0x91:  mov    0x18(%eax),%ecx
085ba714 +0x94:  mov    %ecx,0x18(%edx)
085ba717 +0x97:  mov    0x1c(%eax),%eax
085ba71a +0x9a:  mov    %eax,0x1c(%edx)
085ba71d +0x9d:  movsbl -0x2c(%ebp),%edx
085ba721 +0xa1:  mov    0x8(%ebp),%ecx
085ba724 +0xa4:  mov    %edx,%eax
085ba726 +0xa6:  add    %eax,%eax
085ba728 +0xa8:  add    %edx,%eax
085ba72a +0xaa:  shl    $0x3,%eax
085ba72d +0xad:  lea    (%ecx,%eax,1),%eax
085ba730 +0xb0:  add    $0x70,%eax
085ba733 +0xb3:  mov    -0x1c(%ebp),%edx
085ba736 +0xb6:  mov    %edx,0x8(%eax)
085ba739 +0xb9:  mov    -0x18(%ebp),%edx
085ba73c +0xbc:  mov    %edx,0xc(%eax)
085ba73f +0xbf:  mov    -0x14(%ebp),%edx
085ba742 +0xc2:  mov    %edx,0x10(%eax)
085ba745 +0xc5:  mov    -0x10(%ebp),%edx
085ba748 +0xc8:  mov    %edx,0x14(%eax)
085ba74b +0xcb:  mov    -0xc(%ebp),%edx
085ba74e +0xce:  mov    %edx,0x18(%eax)
085ba751 +0xd1:  mov    -0x8(%ebp),%edx
085ba754 +0xd4:  mov    %edx,0x1c(%eax)
085ba757 +0xd7:  mov    $0x1,%eax
085ba75c +0xdc:  add    $0x28,%esp
085ba75f +0xdf:  pop    %ebx
085ba760 +0xe0:  pop    %ebp
085ba761 +0xe1:  ret
```

## 反编译 C

```c
// CParty::switchPostion @ 0x85ba680

/* CParty::switchPostion(char, char) */

undefined4 __thiscall CParty::switchPostion(CParty *this,char param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined4 *)(this + param_1 * 0x18 + 0x78);
  uVar2 = *(undefined4 *)(this + param_1 * 0x18 + 0x7c);
  uVar3 = *(undefined4 *)(this + param_1 * 0x18 + 0x80);
  uVar4 = *(undefined4 *)(this + param_1 * 0x18 + 0x84);
  uVar5 = *(undefined4 *)(this + param_1 * 0x18 + 0x88);
  uVar6 = *(undefined4 *)(this + param_1 * 0x18 + 0x8c);
  *(undefined4 *)(this + param_1 * 0x18 + 0x78) = *(undefined4 *)(this + param_2 * 0x18 + 0x78);
  *(undefined4 *)(this + param_1 * 0x18 + 0x7c) = *(undefined4 *)(this + param_2 * 0x18 + 0x7c);
  *(undefined4 *)(this + param_1 * 0x18 + 0x80) = *(undefined4 *)(this + param_2 * 0x18 + 0x80);
  *(undefined4 *)(this + param_1 * 0x18 + 0x84) = *(undefined4 *)(this + param_2 * 0x18 + 0x84);
  *(undefined4 *)(this + param_1 * 0x18 + 0x88) = *(undefined4 *)(this + param_2 * 0x18 + 0x88);
  *(undefined4 *)(this + param_1 * 0x18 + 0x8c) = *(undefined4 *)(this + param_2 * 0x18 + 0x8c);
  *(undefined4 *)(this + param_2 * 0x18 + 0x78) = uVar1;
  *(undefined4 *)(this + param_2 * 0x18 + 0x7c) = uVar2;
  *(undefined4 *)(this + param_2 * 0x18 + 0x80) = uVar3;
  *(undefined4 *)(this + param_2 * 0x18 + 0x84) = uVar4;
  *(undefined4 *)(this + param_2 * 0x18 + 0x88) = uVar5;
  *(undefined4 *)(this + param_2 * 0x18 + 0x8c) = uVar6;
  return 1;
}
```
