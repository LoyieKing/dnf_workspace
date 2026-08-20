# _FindItem

`_ZNK8WongWork14CAvatarItemMgr9_FindItemEi`

`WongWork::CAvatarItemMgr::_FindItem(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9d34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9d34  _ZNK8WongWork14CAvatarItemMgr9_FindItemEi
#           WongWork::CAvatarItemMgr::_FindItem(int) const
# range [0x082f9d34, 0x082f9d97]
082f9d34 +0x00:  push   %ebp
082f9d35 +0x01:  mov    %esp,%ebp
082f9d37 +0x03:  sub    $0x28,%esp
082f9d3a +0x06:  mov    0x8(%ebp),%edx
082f9d3d +0x09:  lea    -0x10(%ebp),%eax
082f9d40 +0x0c:  lea    0xc(%ebp),%ecx
082f9d43 +0x0f:  mov    %ecx,0x8(%esp)
082f9d47 +0x13:  mov    %edx,0x4(%esp)
082f9d4b +0x17:  mov    %eax,(%esp)
082f9d4e +0x1a:  call   082faa4e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x880>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x880
082f9d53 +0x1f:  sub    $0x4,%esp
082f9d56 +0x22:  mov    0x8(%ebp),%edx
082f9d59 +0x25:  lea    -0xc(%ebp),%eax
082f9d5c +0x28:  mov    %edx,0x4(%esp)
082f9d60 +0x2c:  mov    %eax,(%esp)
082f9d63 +0x2f:  call   082fa820 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x652>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x652
082f9d68 +0x34:  sub    $0x4,%esp
082f9d6b +0x37:  lea    -0xc(%ebp),%eax
082f9d6e +0x3a:  mov    %eax,0x4(%esp)
082f9d72 +0x3e:  lea    -0x10(%ebp),%eax
082f9d75 +0x41:  mov    %eax,(%esp)
082f9d78 +0x44:  call   082faa7a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8ac>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8ac
082f9d7d +0x49:  test   %al,%al
082f9d7f +0x4b:  je     082f9d88 <+0x54>
082f9d81 +0x4d:  mov    $0x0,%eax
082f9d86 +0x52:  jmp    082f9d96 <+0x62>
082f9d88 +0x54:  lea    -0x10(%ebp),%eax
082f9d8b +0x57:  mov    %eax,(%esp)
082f9d8e +0x5a:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f9d93 +0x5f:  mov    0x4(%eax),%eax
082f9d96 +0x62:  leave
082f9d97 +0x63:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::_FindItem @ 0x82f9d34

/* WongWork::CAvatarItemMgr::_FindItem(int) const */

undefined4 WongWork::CAvatarItemMgr::_FindItem(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_14 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_10 [12];
  
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::find((int *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>>::operator->
                      (local_14);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
