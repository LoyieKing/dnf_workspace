# RegistNotAssignedAvatarItem

`_ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemE10Inven_Item`

`WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem(Inven_Item)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f95f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f95f4  _ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemE10Inven_Item
#           WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem(Inven_Item)
# range [0x082f95f4, 0x082f96a5]
082f95f4 +0x00:  push   %ebp
082f95f5 +0x01:  mov    %esp,%ebp
082f95f7 +0x03:  sub    $0x38,%esp
082f95fa +0x06:  mov    0x8(%ebp),%eax
082f95fd +0x09:  mov    %eax,(%esp)
082f9600 +0x0c:  call   082f9e02 <_ZN8WongWork14CAvatarItemMgr14_AssignTempKeyEv>  ; WongWork::CAvatarItemMgr::_AssignTempKey()
082f9605 +0x11:  mov    %eax,-0x24(%ebp)
082f9608 +0x14:  movl   $&_ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE,(%esp)
082f960f +0x1b:  call   082fa51c <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x34e>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x34e
082f9614 +0x20:  mov    %eax,-0x28(%ebp)
082f9617 +0x23:  mov    0x13(%ebp),%edx
082f961a +0x26:  mov    -0x28(%ebp),%eax
082f961d +0x29:  movl   $"",0xc(%esp)
082f9625 +0x31:  movl   $0x0,0x8(%esp)
082f962d +0x39:  mov    %edx,0x4(%esp)
082f9631 +0x3d:  mov    %eax,(%esp)
082f9634 +0x40:  call   082fa234 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x66>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x66
082f9639 +0x45:  mov    -0x28(%ebp),%eax
082f963c +0x48:  movl   $0x0,0x8(%esp)
082f9644 +0x50:  movl   $0x0,0x4(%esp)
082f964c +0x58:  mov    %eax,(%esp)
082f964f +0x5b:  call   082fa2fa <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x12c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x12c
082f9654 +0x60:  lea    -0x10(%ebp),%eax
082f9657 +0x63:  lea    -0x28(%ebp),%edx
082f965a +0x66:  mov    %edx,0x8(%esp)
082f965e +0x6a:  lea    -0x24(%ebp),%edx
082f9661 +0x6d:  mov    %edx,0x4(%esp)
082f9665 +0x71:  mov    %eax,(%esp)
082f9668 +0x74:  call   082fa75f <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x591>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x591
082f966d +0x79:  sub    $0x4,%esp
082f9670 +0x7c:  lea    -0x10(%ebp),%eax
082f9673 +0x7f:  mov    %eax,0x4(%esp)
082f9677 +0x83:  lea    -0x18(%ebp),%eax
082f967a +0x86:  mov    %eax,(%esp)
082f967d +0x89:  call   082fa79e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x5d0>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x5d0
082f9682 +0x8e:  mov    0x8(%ebp),%eax
082f9685 +0x91:  lea    0x18(%eax),%ecx
082f9688 +0x94:  lea    -0x20(%ebp),%eax
082f968b +0x97:  lea    -0x18(%ebp),%edx
082f968e +0x9a:  mov    %edx,0x8(%esp)
082f9692 +0x9e:  mov    %ecx,0x4(%esp)
082f9696 +0xa2:  mov    %eax,(%esp)
082f9699 +0xa5:  call   082fa7ce <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x600>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x600
082f969e +0xaa:  sub    $0x4,%esp
082f96a1 +0xad:  mov    -0x24(%ebp),%eax
082f96a4 +0xb0:  leave
082f96a5 +0xb1:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem @ 0x82f95f4

/* WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem(Inven_Item) */

Avatar_Item *
WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem
          (CAvatarItemMgr *param_1,undefined4 param_2,undefined8 param_3)

{
  Avatar_Item *this;
  Avatar_Item *local_28;
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  local_28 = (Avatar_Item *)_AssignTempKey(param_1);
  this = (Avatar_Item *)
         DynamicPool<WongWork::Avatar_Item>::Acquire
                   ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool);
  Avatar_Item::SetData(this,param_3._3_4_,0,"");
  Avatar_Item::setColor(this,0,0);
  std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,&local_28);
  std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
            (local_1c,(pair *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::insert(local_24);
  return local_28;
}
```
