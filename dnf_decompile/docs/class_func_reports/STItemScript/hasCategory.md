# hasCategory

`_ZNK12STItemScript11hasCategoryENS_18ENUM_ITEM_CATEGORYE`

`STItemScript::hasCategory(STItemScript::ENUM_ITEM_CATEGORY) const`

| 类 | 地址 |
|---|---|
| `STItemScript` | `0x0898db2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898db2a  _ZNK12STItemScript11hasCategoryENS_18ENUM_ITEM_CATEGORYE
#           STItemScript::hasCategory(STItemScript::ENUM_ITEM_CATEGORY) const
# range [0x0898db2a, 0x0898db81]
0898db2a +0x00:  push   %ebp
0898db2b +0x01:  mov    %esp,%ebp
0898db2d +0x03:  sub    $0x28,%esp
0898db30 +0x06:  mov    0x8(%ebp),%eax
0898db33 +0x09:  lea    0x11c(%eax),%ecx
0898db39 +0x0f:  lea    -0x10(%ebp),%eax
0898db3c +0x12:  lea    0xc(%ebp),%edx
0898db3f +0x15:  mov    %edx,0x8(%esp)
0898db43 +0x19:  mov    %ecx,0x4(%esp)
0898db47 +0x1d:  mov    %eax,(%esp)
0898db4a +0x20:  call   08235bc4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb26e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb26e
0898db4f +0x25:  sub    $0x4,%esp
0898db52 +0x28:  mov    0x8(%ebp),%eax
0898db55 +0x2b:  lea    0x11c(%eax),%edx
0898db5b +0x31:  lea    -0xc(%ebp),%eax
0898db5e +0x34:  mov    %edx,0x4(%esp)
0898db62 +0x38:  mov    %eax,(%esp)
0898db65 +0x3b:  call   08235bf0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb29a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb29a
0898db6a +0x40:  sub    $0x4,%esp
0898db6d +0x43:  lea    -0xc(%ebp),%eax
0898db70 +0x46:  mov    %eax,0x4(%esp)
0898db74 +0x4a:  lea    -0x10(%ebp),%eax
0898db77 +0x4d:  mov    %eax,(%esp)
0898db7a +0x50:  call   08235c16 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb2c0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb2c0
0898db7f +0x55:  leave
0898db80 +0x56:  ret
0898db81 +0x57:  nop
```

## 反编译 C

```c
// STItemScript::hasCategory @ 0x898db2a

/* STItemScript::hasCategory(STItemScript::ENUM_ITEM_CATEGORY) const */

void STItemScript::hasCategory(void)

{
  _Rb_tree_const_iterator<STItemScript::ENUM_ITEM_CATEGORY> local_14 [4];
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  local_10 [12];
  
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::find(local_14);
  std::
  set<STItemScript::ENUM_ITEM_CATEGORY,std::less<STItemScript::ENUM_ITEM_CATEGORY>,std::allocator<STItemScript::ENUM_ITEM_CATEGORY>>
  ::end(local_10);
  std::_Rb_tree_const_iterator<STItemScript::ENUM_ITEM_CATEGORY>::operator!=
            (local_14,(_Rb_tree_const_iterator *)local_10);
  return;
}
```
