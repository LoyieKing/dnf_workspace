# _FindItemAll

`_ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi`

`WongWork::CAvatarItemMgr::_FindItemAll(int) const`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9cac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9cac  _ZNK8WongWork14CAvatarItemMgr12_FindItemAllEi
#           WongWork::CAvatarItemMgr::_FindItemAll(int) const
# range [0x082f9cac, 0x082f9d33]
082f9cac +0x00:  push   %ebp
082f9cad +0x01:  mov    %esp,%ebp
082f9caf +0x03:  sub    $0x28,%esp
082f9cb2 +0x06:  mov    0xc(%ebp),%eax
082f9cb5 +0x09:  mov    %eax,(%esp)
082f9cb8 +0x0c:  call   0822d20d <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x28b7>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x28b7
082f9cbd +0x11:  test   %al,%al
082f9cbf +0x13:  je     082f9cd5 <+0x29>
082f9cc1 +0x15:  mov    0xc(%ebp),%eax
082f9cc4 +0x18:  mov    %eax,0x4(%esp)
082f9cc8 +0x1c:  mov    0x8(%ebp),%eax
082f9ccb +0x1f:  mov    %eax,(%esp)
082f9cce +0x22:  call   082f9d98 <_ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi>  ; WongWork::CAvatarItemMgr::_FindWaitAssignItem(int) const
082f9cd3 +0x27:  jmp    082f9d31 <+0x85>
082f9cd5 +0x29:  mov    0x8(%ebp),%edx
082f9cd8 +0x2c:  lea    -0x10(%ebp),%eax
082f9cdb +0x2f:  lea    0xc(%ebp),%ecx
082f9cde +0x32:  mov    %ecx,0x8(%esp)
082f9ce2 +0x36:  mov    %edx,0x4(%esp)
082f9ce6 +0x3a:  mov    %eax,(%esp)
082f9ce9 +0x3d:  call   082faa4e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x880>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x880
082f9cee +0x42:  sub    $0x4,%esp
082f9cf1 +0x45:  mov    0x8(%ebp),%edx
082f9cf4 +0x48:  lea    -0xc(%ebp),%eax
082f9cf7 +0x4b:  mov    %edx,0x4(%esp)
082f9cfb +0x4f:  mov    %eax,(%esp)
082f9cfe +0x52:  call   082fa820 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x652>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x652
082f9d03 +0x57:  sub    $0x4,%esp
082f9d06 +0x5a:  lea    -0xc(%ebp),%eax
082f9d09 +0x5d:  mov    %eax,0x4(%esp)
082f9d0d +0x61:  lea    -0x10(%ebp),%eax
082f9d10 +0x64:  mov    %eax,(%esp)
082f9d13 +0x67:  call   082faa7a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x8ac>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x8ac
082f9d18 +0x6c:  test   %al,%al
082f9d1a +0x6e:  je     082f9d23 <+0x77>
082f9d1c +0x70:  mov    $0x0,%eax
082f9d21 +0x75:  jmp    082f9d31 <+0x85>
082f9d23 +0x77:  lea    -0x10(%ebp),%eax
082f9d26 +0x7a:  mov    %eax,(%esp)
082f9d29 +0x7d:  call   082fa878 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6aa>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6aa
082f9d2e +0x82:  mov    0x4(%eax),%eax
082f9d31 +0x85:  leave
082f9d32 +0x86:  ret
082f9d33 +0x87:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::_FindItemAll @ 0x82f9cac

/* WongWork::CAvatarItemMgr::_FindItemAll(int) const */

undefined4 __thiscall WongWork::CAvatarItemMgr::_FindItemAll(CAvatarItemMgr *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,WongWork::Avatar_Item*>> local_14 [4];
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  local_10 [12];
  
  cVar1 = IsTempKey(param_1);
  if (cVar1 == '\0') {
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
  }
  else {
    uVar2 = _FindWaitAssignItem((int)this);
  }
  return uVar2;
}
```
