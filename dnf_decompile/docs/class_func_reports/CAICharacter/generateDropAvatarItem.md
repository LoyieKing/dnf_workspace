# generateDropAvatarItem

`_ZNK12CAICharacter22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE`

`CAICharacter::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const`

| 类 | 地址 |
|---|---|
| `CAICharacter` | `0x0834a15e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834a15e  _ZNK12CAICharacter22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE
#           CAICharacter::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
# range [0x0834a15e, 0x0834a19b]
0834a15e +0x00:  push   %ebp
0834a15f +0x01:  mov    %esp,%ebp
0834a161 +0x03:  push   %ebx
0834a162 +0x04:  sub    $0x24,%esp
0834a165 +0x07:  mov    0xc(%ebp),%edx
0834a168 +0x0a:  mov    0x10(%ebp),%eax
0834a16b +0x0d:  mov    %dl,-0xc(%ebp)
0834a16e +0x10:  mov    %al,-0x10(%ebp)
0834a171 +0x13:  movzbl -0x10(%ebp),%edx
0834a175 +0x17:  movzbl -0xc(%ebp),%eax
0834a179 +0x1b:  mov    0x8(%ebp),%ecx
0834a17c +0x1e:  lea    0x30(%ecx),%ebx
0834a17f +0x21:  mov    0x14(%ebp),%ecx
0834a182 +0x24:  mov    %ecx,0xc(%esp)
0834a186 +0x28:  mov    %edx,0x8(%esp)
0834a18a +0x2c:  mov    %eax,0x4(%esp)
0834a18e +0x30:  mov    %ebx,(%esp)
0834a191 +0x33:  call   08349da0 <_Z22generateDropAvatarItemRK23stEnamyDropAvatarInfo_thhRSt6vectorI10Inven_ItemSaIS3_EE>  ; generateDropAvatarItem(stEnamyDropAvatarInfo_t const&, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&)
0834a196 +0x38:  add    $0x24,%esp
0834a199 +0x3b:  pop    %ebx
0834a19a +0x3c:  pop    %ebp
0834a19b +0x3d:  ret
```

## 反编译 C

```c
// CAICharacter::generateDropAvatarItem @ 0x834a15e

/* CAICharacter::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) const */

void __thiscall
CAICharacter::generateDropAvatarItem(CAICharacter *this,uchar param_1,uchar param_2,vector *param_3)

{
  ::generateDropAvatarItem((stEnamyDropAvatarInfo_t *)(this + 0x30),param_1,param_2,param_3);
  return;
}
```
