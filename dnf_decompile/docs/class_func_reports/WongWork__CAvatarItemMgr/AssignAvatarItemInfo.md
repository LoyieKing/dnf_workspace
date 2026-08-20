# AssignAvatarItemInfo

`_ZN8WongWork14CAvatarItemMgr20AssignAvatarItemInfoEiiiiPKc`

`WongWork::CAvatarItemMgr::AssignAvatarItemInfo(int, int, int, int, char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f96a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f96a6  _ZN8WongWork14CAvatarItemMgr20AssignAvatarItemInfoEiiiiPKc
#           WongWork::CAvatarItemMgr::AssignAvatarItemInfo(int, int, int, int, char const*)
# range [0x082f96a6, 0x082f9771]
082f96a6 +0x00:  push   %ebp
082f96a7 +0x01:  mov    %esp,%ebp
082f96a9 +0x03:  sub    $0x38,%esp
082f96ac +0x06:  mov    0xc(%ebp),%eax
082f96af +0x09:  mov    %eax,0x4(%esp)
082f96b3 +0x0d:  mov    0x8(%ebp),%eax
082f96b6 +0x10:  mov    %eax,(%esp)
082f96b9 +0x13:  call   082f9d98 <_ZNK8WongWork14CAvatarItemMgr19_FindWaitAssignItemEi>  ; WongWork::CAvatarItemMgr::_FindWaitAssignItem(int) const
082f96be +0x18:  mov    %eax,-0x24(%ebp)
082f96c1 +0x1b:  mov    -0x24(%ebp),%eax
082f96c4 +0x1e:  test   %eax,%eax
082f96c6 +0x20:  jne    082f96d2 <+0x2c>
082f96c8 +0x22:  mov    $0x0,%eax
082f96cd +0x27:  jmp    082f976f <+0xc9>
082f96d2 +0x2c:  mov    -0x24(%ebp),%eax
082f96d5 +0x2f:  mov    0x1c(%ebp),%edx
082f96d8 +0x32:  mov    %edx,0xc(%esp)
082f96dc +0x36:  mov    0x18(%ebp),%edx
082f96df +0x39:  mov    %edx,0x8(%esp)
082f96e3 +0x3d:  mov    0x14(%ebp),%edx
082f96e6 +0x40:  mov    %edx,0x4(%esp)
082f96ea +0x44:  mov    %eax,(%esp)
082f96ed +0x47:  call   082fa234 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x66>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x66
082f96f2 +0x4c:  mov    0x8(%ebp),%eax
082f96f5 +0x4f:  lea    0x18(%eax),%edx
082f96f8 +0x52:  lea    0xc(%ebp),%eax
082f96fb +0x55:  mov    %eax,0x4(%esp)
082f96ff +0x59:  mov    %edx,(%esp)
082f9702 +0x5c:  call   082fa886 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x6b8>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x6b8
082f9707 +0x61:  lea    -0x10(%ebp),%eax
082f970a +0x64:  lea    -0x24(%ebp),%edx
082f970d +0x67:  mov    %edx,0x8(%esp)
082f9711 +0x6b:  lea    0x10(%ebp),%edx
082f9714 +0x6e:  mov    %edx,0x4(%esp)
082f9718 +0x72:  mov    %eax,(%esp)
082f971b +0x75:  call   082fa75f <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x591>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x591
082f9720 +0x7a:  sub    $0x4,%esp
082f9723 +0x7d:  lea    -0x10(%ebp),%eax
082f9726 +0x80:  mov    %eax,0x4(%esp)
082f972a +0x84:  lea    -0x18(%ebp),%eax
082f972d +0x87:  mov    %eax,(%esp)
082f9730 +0x8a:  call   082fa79e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x5d0>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x5d0
082f9735 +0x8f:  mov    0x8(%ebp),%edx
082f9738 +0x92:  lea    -0x20(%ebp),%eax
082f973b +0x95:  lea    -0x18(%ebp),%ecx
082f973e +0x98:  mov    %ecx,0x8(%esp)
082f9742 +0x9c:  mov    %edx,0x4(%esp)
082f9746 +0xa0:  mov    %eax,(%esp)
082f9749 +0xa3:  call   082fa7ce <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x600>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x600
082f974e +0xa8:  sub    $0x4,%esp
082f9751 +0xab:  mov    -0x24(%ebp),%edx
082f9754 +0xae:  mov    0x10(%ebp),%eax
082f9757 +0xb1:  mov    %edx,0x8(%esp)
082f975b +0xb5:  mov    %eax,0x4(%esp)
082f975f +0xb9:  mov    0x8(%ebp),%eax
082f9762 +0xbc:  mov    %eax,(%esp)
082f9765 +0xbf:  call   082f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>  ; WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*)
082f976a +0xc4:  mov    $0x1,%eax
082f976f +0xc9:  leave
082f9770 +0xca:  ret
082f9771 +0xcb:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::AssignAvatarItemInfo @ 0x82f96a6

/* WongWork::CAvatarItemMgr::AssignAvatarItemInfo(int, int, int, int, char const*) */

bool __thiscall
WongWork::CAvatarItemMgr::AssignAvatarItemInfo
          (CAvatarItemMgr *this,int param_1,int param_2,int param_3,int param_4,char *param_5)

{
  Avatar_Item *this_00;
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  this_00 = (Avatar_Item *)_FindWaitAssignItem((int)this);
  if (this_00 != (Avatar_Item *)0x0) {
    Avatar_Item::SetData(this_00,param_3,param_4,param_5);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::erase((int *)(this + 0x18));
    std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,(Avatar_Item **)&param_2);
    std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
              (local_1c,(pair *)local_14);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::insert(local_24);
    AddEmblemEndurance(this,param_2,this_00);
  }
  return this_00 != (Avatar_Item *)0x0;
}
```
