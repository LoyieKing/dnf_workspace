# generateDropAvatarItem

`_ZNK8CMonster22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE`

`CMonster::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const`

| 类 | 地址 |
|---|---|
| `CMonster` | `0x0834f8a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834f8a6  _ZNK8CMonster22generateDropAvatarItemEhhRSt6vectorI10Inven_ItemSaIS1_EE
#           CMonster::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&) const
# range [0x0834f8a6, 0x0834f8e7]
0834f8a6 +0x00:  push   %ebp
0834f8a7 +0x01:  mov    %esp,%ebp
0834f8a9 +0x03:  push   %ebx
0834f8aa +0x04:  sub    $0x24,%esp
0834f8ad +0x07:  mov    0xc(%ebp),%edx
0834f8b0 +0x0a:  mov    0x10(%ebp),%eax
0834f8b3 +0x0d:  mov    %dl,-0xc(%ebp)
0834f8b6 +0x10:  mov    %al,-0x10(%ebp)
0834f8b9 +0x13:  movzbl -0x10(%ebp),%edx
0834f8bd +0x17:  movzbl -0xc(%ebp),%eax
0834f8c1 +0x1b:  mov    0x8(%ebp),%ecx
0834f8c4 +0x1e:  lea    0xcf8(%ecx),%ebx
0834f8ca +0x24:  mov    0x14(%ebp),%ecx
0834f8cd +0x27:  mov    %ecx,0xc(%esp)
0834f8d1 +0x2b:  mov    %edx,0x8(%esp)
0834f8d5 +0x2f:  mov    %eax,0x4(%esp)
0834f8d9 +0x33:  mov    %ebx,(%esp)
0834f8dc +0x36:  call   08349da0 <_Z22generateDropAvatarItemRK23stEnamyDropAvatarInfo_thhRSt6vectorI10Inven_ItemSaIS3_EE>  ; generateDropAvatarItem(stEnamyDropAvatarInfo_t const&, unsigned char, unsigned char, std::vector<Inven_Item, std::allocator<Inven_Item> >&)
0834f8e1 +0x3b:  add    $0x24,%esp
0834f8e4 +0x3e:  pop    %ebx
0834f8e5 +0x3f:  pop    %ebp
0834f8e6 +0x40:  ret
0834f8e7 +0x41:  nop
```

## 反编译 C

```c
// CMonster::generateDropAvatarItem @ 0x834f8a6

/* CMonster::generateDropAvatarItem(unsigned char, unsigned char, std::vector<Inven_Item,
   std::allocator<Inven_Item> >&) const */

void __thiscall
CMonster::generateDropAvatarItem(CMonster *this,uchar param_1,uchar param_2,vector *param_3)

{
  ::generateDropAvatarItem((stEnamyDropAvatarInfo_t *)(this + 0xcf8),param_1,param_2,param_3);
  return;
}
```
