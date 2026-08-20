# RegistItem

`_ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb`

`WongWork::CAvatarItemMgr::RegistItem(int, int, int, char const*, stAvatarEmblemInfo_t const&, stAvatarExpansionInfo_t const&, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f901c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f901c  _ZN8WongWork14CAvatarItemMgr10RegistItemEiiiPKcRK20stAvatarEmblemInfo_tRK23stAvatarExpansionInfo_tb
#           WongWork::CAvatarItemMgr::RegistItem(int, int, int, char const*, stAvatarEmblemInfo_t const&, stAvatarExpansionInfo_t const&, bool)
# range [0x082f901c, 0x082f913d]
082f901c +0x000:  push   %ebp
082f901d +0x001:  mov    %esp,%ebp
082f901f +0x003:  sub    $0x58,%esp
082f9022 +0x006:  mov    0x24(%ebp),%eax
082f9025 +0x009:  mov    %al,-0x3c(%ebp)
082f9028 +0x00c:  mov    0xc(%ebp),%eax
082f902b +0x00f:  mov    %eax,0x4(%esp)
082f902f +0x013:  mov    0x8(%ebp),%eax
082f9032 +0x016:  mov    %eax,(%esp)
082f9035 +0x019:  call   082f9d34 <_ZNK8WongWork14CAvatarItemMgr9_FindItemEi>  ; WongWork::CAvatarItemMgr::_FindItem(int) const
082f903a +0x01e:  mov    %eax,-0x10(%ebp)
082f903d +0x021:  cmpl   $0x0,-0x10(%ebp)
082f9041 +0x025:  je     082f904d <+0x31>
082f9043 +0x027:  mov    $0x0,%eax
082f9048 +0x02c:  jmp    082f913b <+0x11f>
082f904d +0x031:  movl   $&_ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE,(%esp)
082f9054 +0x038:  call   082fa51c <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x34e>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x34e
082f9059 +0x03d:  mov    %eax,-0x2c(%ebp)
082f905c +0x040:  movl   $0x0,-0xc(%ebp)
082f9063 +0x047:  cmpb   $0x0,-0x3c(%ebp)
082f9067 +0x04b:  je     082f9089 <+0x6d>
082f9069 +0x04d:  cmpl   $0x0,0x10(%ebp)
082f906d +0x051:  je     082f908f <+0x73>
082f906f +0x053:  cmpl   $0x16d,0x10(%ebp)
082f9076 +0x05a:  je     082f908f <+0x73>
082f9078 +0x05c:  mov    0x10(%ebp),%eax
082f907b +0x05f:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
082f9081 +0x065:  add    0x14(%ebp),%eax
082f9084 +0x068:  mov    %eax,-0xc(%ebp)
082f9087 +0x06b:  jmp    082f908f <+0x73>
082f9089 +0x06d:  mov    0x10(%ebp),%eax
082f908c +0x070:  mov    %eax,-0xc(%ebp)
082f908f +0x073:  mov    -0x2c(%ebp),%eax
082f9092 +0x076:  mov    0x18(%ebp),%edx
082f9095 +0x079:  mov    %edx,0xc(%esp)
082f9099 +0x07d:  mov    0x14(%ebp),%edx
082f909c +0x080:  mov    %edx,0x8(%esp)
082f90a0 +0x084:  mov    -0xc(%ebp),%edx
082f90a3 +0x087:  mov    %edx,0x4(%esp)
082f90a7 +0x08b:  mov    %eax,(%esp)
082f90aa +0x08e:  call   082fa234 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x66>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x66
082f90af +0x093:  mov    -0x2c(%ebp),%eax
082f90b2 +0x096:  mov    0x1c(%ebp),%edx
082f90b5 +0x099:  mov    %edx,0x4(%esp)
082f90b9 +0x09d:  mov    %eax,(%esp)
082f90bc +0x0a0:  call   082fa26a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x9c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x9c
082f90c1 +0x0a5:  mov    -0x2c(%ebp),%eax
082f90c4 +0x0a8:  mov    0x20(%ebp),%edx
082f90c7 +0x0ab:  mov    %edx,0x4(%esp)
082f90cb +0x0af:  mov    %eax,(%esp)
082f90ce +0x0b2:  call   082fa326 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x158>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x158
082f90d3 +0x0b7:  lea    -0x18(%ebp),%eax
082f90d6 +0x0ba:  lea    -0x2c(%ebp),%edx
082f90d9 +0x0bd:  mov    %edx,0x8(%esp)
082f90dd +0x0c1:  lea    0xc(%ebp),%edx
082f90e0 +0x0c4:  mov    %edx,0x4(%esp)
082f90e4 +0x0c8:  mov    %eax,(%esp)
082f90e7 +0x0cb:  call   082fa75f <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x591>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x591
082f90ec +0x0d0:  sub    $0x4,%esp
082f90ef +0x0d3:  lea    -0x18(%ebp),%eax
082f90f2 +0x0d6:  mov    %eax,0x4(%esp)
082f90f6 +0x0da:  lea    -0x20(%ebp),%eax
082f90f9 +0x0dd:  mov    %eax,(%esp)
082f90fc +0x0e0:  call   082fa79e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x5d0>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x5d0
082f9101 +0x0e5:  mov    0x8(%ebp),%edx
082f9104 +0x0e8:  lea    -0x28(%ebp),%eax
082f9107 +0x0eb:  lea    -0x20(%ebp),%ecx
082f910a +0x0ee:  mov    %ecx,0x8(%esp)
082f910e +0x0f2:  mov    %edx,0x4(%esp)
082f9112 +0x0f6:  mov    %eax,(%esp)
082f9115 +0x0f9:  call   082fa7ce <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x600>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x600
082f911a +0x0fe:  sub    $0x4,%esp
082f911d +0x101:  mov    -0x2c(%ebp),%edx
082f9120 +0x104:  mov    0xc(%ebp),%eax
082f9123 +0x107:  mov    %edx,0x8(%esp)
082f9127 +0x10b:  mov    %eax,0x4(%esp)
082f912b +0x10f:  mov    0x8(%ebp),%eax
082f912e +0x112:  mov    %eax,(%esp)
082f9131 +0x115:  call   082f9e4c <_ZN8WongWork14CAvatarItemMgr18AddEmblemEnduranceEiPKNS_11Avatar_ItemE>  ; WongWork::CAvatarItemMgr::AddEmblemEndurance(int, WongWork::Avatar_Item const*)
082f9136 +0x11a:  mov    $0x1,%eax
082f913b +0x11f:  leave
082f913c +0x120:  ret
082f913d +0x121:  nop
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::RegistItem @ 0x82f901c

/* WongWork::CAvatarItemMgr::RegistItem(int, int, int, char const*, stAvatarEmblemInfo_t const&,
   stAvatarExpansionInfo_t const&, bool) */

undefined4 __thiscall
WongWork::CAvatarItemMgr::RegistItem
          (CAvatarItemMgr *this,int param_1,int param_2,int param_3,char *param_4,
          stAvatarEmblemInfo_t *param_5,stAvatarExpansionInfo_t *param_6,bool param_7)

{
  bool bVar1;
  undefined4 uVar2;
  Avatar_Item *this_00;
  undefined3 in_stack_00000021;
  pair local_2c [8];
  pair<int_const,WongWork::Avatar_Item*> local_24 [8];
  int local_1c [2];
  int local_14;
  int local_10;
  
  bVar1 = param_7;
  local_14 = _FindItem((int)this);
  if (local_14 == 0) {
    this_00 = (Avatar_Item *)
              DynamicPool<WongWork::Avatar_Item>::Acquire
                        ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool);
    local_10 = 0;
    if (bVar1) {
      if ((param_2 != 0) && (param_2 != 0x16d)) {
        local_10 = param_2 * 0x15180 + param_3;
      }
    }
    else {
      local_10 = param_2;
    }
    Avatar_Item::SetData(this_00,local_10,param_3,param_4);
    Avatar_Item::setEmblemSocketData(this_00,param_5);
    Avatar_Item::setExpansionInfo(this_00,param_6);
    std::make_pair<int&,WongWork::Avatar_Item*&>(local_1c,(Avatar_Item **)&param_1);
    std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
              (local_24,(pair *)local_1c);
    std::
    map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
    ::insert(local_2c);
    AddEmblemEndurance(this,param_1,this_00);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
