# AssignAvatarItemKey

`_ZN8WongWork14CAvatarItemMgr19AssignAvatarItemKeyEii`

`WongWork::CAvatarItemMgr::AssignAvatarItemKey(int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f9772` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f9772  _ZN8WongWork14CAvatarItemMgr19AssignAvatarItemKeyEii
#           WongWork::CAvatarItemMgr::AssignAvatarItemKey(int, int)
# range [0x082f9772, 0x082f9819]
082f9772 +0x00:  push   %ebp
082f9773 +0x01:  mov    %esp,%ebp
082f9775 +0x03:  sub    $0x38,%esp
082f9778 +0x06:  mov    0xc(%ebp),%eax
082f977b +0x09:  mov    %eax,0x4(%esp)
082f977f +0x0d:  mov    0x8(%ebp),%eax
082f9782 +0x10:  mov    %eax,(%esp)
082f9785 +0x13:  call   082f9d98 <_ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi>  ; WongWork::CAvatarItemMgr::_FindWaitAssignItem(int) const
082f978a +0x18:  mov    %eax,-0x24(%ebp)
082f978d +0x1b:  mov    -0x24(%ebp),%eax
082f9790 +0x1e:  test   %eax,%eax
082f9792 +0x20:  jne    082f979b <+0x29>
082f9794 +0x22:  mov    $0x0,%eax
082f9799 +0x27:  jmp    082f9818 <+0xa6>
082f979b +0x29:  mov    0x8(%ebp),%eax
082f979e +0x2c:  lea    0x18(%eax),%edx
082f97a1 +0x2f:  lea    0xc(%ebp),%eax
082f97a4 +0x32:  mov    %eax,0x4(%esp)
082f97a8 +0x36:  mov    %edx,(%esp)
082f97ab +0x39:  call   082fa886 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6b8>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6b8
082f97b0 +0x3e:  lea    -0x10(%ebp),%eax
082f97b3 +0x41:  lea    -0x24(%ebp),%edx
082f97b6 +0x44:  mov    %edx,0x8(%esp)
082f97ba +0x48:  lea    0x10(%ebp),%edx
082f97bd +0x4b:  mov    %edx,0x4(%esp)
082f97c1 +0x4f:  mov    %eax,(%esp)
082f97c4 +0x52:  call   082fa75f <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x591>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x591
082f97c9 +0x57:  sub    $0x4,%esp
082f97cc +0x5a:  lea    -0x10(%ebp),%eax
082f97cf +0x5d:  mov    %eax,0x4(%esp)
082f97d3 +0x61:  lea    -0x18(%ebp),%eax
082f97d6 +0x64:  mov    %eax,(%esp)
082f97d9 +0x67:  call   082fa79e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x5d0>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x5d0
082f97de +0x6c:  mov    0x8(%ebp),%edx
082f97e1 +0x6f:  lea    -0x20(%ebp),%eax
082f97e4 +0x72:  lea    -0x18(%ebp),%ecx
082f97e7 +0x75:  mov    %ecx,0x8(%esp)
082f97eb +0x79:  mov    %edx,0x4(%esp)
082f97ef +0x7d:  mov    %eax,(%esp)
082f97f2 +0x80:  call   082fa7ce <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x600>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x600
082f97f7 +0x85:  sub    $0x4,%esp
082f97fa +0x88:  mov    -0x24(%ebp),%edx
082f97fd +0x8b:  mov    0x10(%ebp),%eax
082f9800 +0x8e:  mov    %edx,0x8(%esp)
082f9804 +0x92:  mov    %eax,0x4(%esp)
082f9808 +0x96:  mov    0x8(%ebp),%eax
082f980b +0x99:  mov    %eax,(%esp)
082f980e +0x9c:  call   082f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>  ; WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*)
082f9813 +0xa1:  mov    $0x1,%eax
082f9818 +0xa6:  leave
082f9819 +0xa7:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::AssignAvatarItemKey @ 0x82f9772

/* WongWork::CAvatarItemMgr::AssignAvatarItemKey(int, int) */

bool __thiscall
WongWork::CAvatarItemMgr::AssignAvatarItemKey(CAvatarItemMgr *this,int param_1,int param_2)

{
  Avatar_Item *pAVar1;
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  pAVar1 = (Avatar_Item *)_FindWaitAssignItem((int)this);
  if (pAVar1 != (Avatar_Item *)0x0) {
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::erase((int *)(this + 0x18));
    std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,(Avatar_Item **)&param_2);
    std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
              (local_1c,(pair *)local_14);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::insert(local_24);
    AddEmblemEndurance(this,param_2,pAVar1);
  }
  return pAVar1 != (Avatar_Item *)0x0;
}
```
