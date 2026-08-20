# RegistNotAssignedAvatarItem

`_ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemEiiPKcbRK20stAvatarEmblemInfo_t`

`WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem(int, int, char const*, bool, stAvatarEmblemInfo_t const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CAvatarItemMgr` | `0x082f94bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082f94bc  _ZN8WongWork14CAvatarItemMgr27RegistNotAssignedAvatarItemEiiPKcbRK20stAvatarEmblemInfo_t
#           WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem(int, int, char const*, bool, stAvatarEmblemInfo_t const&)
# range [0x082f94bc, 0x082f95f3]
082f94bc +0x000:  push   %ebp
082f94bd +0x001:  mov    %esp,%ebp
082f94bf +0x003:  sub    $0x48,%esp
082f94c2 +0x006:  mov    0x18(%ebp),%eax
082f94c5 +0x009:  mov    %al,-0x2c(%ebp)
082f94c8 +0x00c:  mov    0x8(%ebp),%eax
082f94cb +0x00f:  mov    %eax,(%esp)
082f94ce +0x012:  call   082f9e02 <_ZN8WongWork14CAvatarItemMgr14_AssignTempKeyEv>  ; WongWork::CAvatarItemMgr::_AssignTempKey()
082f94d3 +0x017:  mov    %eax,-0x24(%ebp)
082f94d6 +0x01a:  movl   $&_ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE,(%esp)
082f94dd +0x021:  call   082fa51c <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x34e>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x34e
082f94e2 +0x026:  mov    %eax,-0x28(%ebp)
082f94e5 +0x029:  cmpl   $0x0,0xc(%ebp)
082f94e9 +0x02d:  je     082f94f4 <+0x38>
082f94eb +0x02f:  cmpl   $0x16d,0xc(%ebp)
082f94f2 +0x036:  jne    082f9517 <+0x5b>
082f94f4 +0x038:  mov    -0x28(%ebp),%eax
082f94f7 +0x03b:  mov    0x14(%ebp),%edx
082f94fa +0x03e:  mov    %edx,0xc(%esp)
082f94fe +0x042:  mov    0x10(%ebp),%edx
082f9501 +0x045:  mov    %edx,0x8(%esp)
082f9505 +0x049:  movl   $0x0,0x4(%esp)
082f950d +0x051:  mov    %eax,(%esp)
082f9510 +0x054:  call   082fa234 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x66>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x66
082f9515 +0x059:  jmp    082f9575 <+0xb9>
082f9517 +0x05b:  movzbl -0x2c(%ebp),%eax
082f951b +0x05f:  xor    $0x1,%eax
082f951e +0x062:  test   %al,%al
082f9520 +0x064:  je     082f954f <+0x93>
082f9522 +0x066:  mov    0xc(%ebp),%eax
082f9525 +0x069:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
082f952b +0x06f:  mov    %eax,%edx
082f952d +0x071:  add    0x10(%ebp),%edx
082f9530 +0x074:  mov    -0x28(%ebp),%eax
082f9533 +0x077:  mov    0x14(%ebp),%ecx
082f9536 +0x07a:  mov    %ecx,0xc(%esp)
082f953a +0x07e:  mov    0x10(%ebp),%ecx
082f953d +0x081:  mov    %ecx,0x8(%esp)
082f9541 +0x085:  mov    %edx,0x4(%esp)
082f9545 +0x089:  mov    %eax,(%esp)
082f9548 +0x08c:  call   082fa234 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x66>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x66
082f954d +0x091:  jmp    082f9575 <+0xb9>
082f954f +0x093:  mov    0xc(%ebp),%eax
082f9552 +0x096:  mov    0x10(%ebp),%edx
082f9555 +0x099:  lea    (%edx,%eax,1),%ecx
082f9558 +0x09c:  mov    -0x28(%ebp),%eax
082f955b +0x09f:  mov    0x14(%ebp),%edx
082f955e +0x0a2:  mov    %edx,0xc(%esp)
082f9562 +0x0a6:  mov    0x10(%ebp),%edx
082f9565 +0x0a9:  mov    %edx,0x8(%esp)
082f9569 +0x0ad:  mov    %ecx,0x4(%esp)
082f956d +0x0b1:  mov    %eax,(%esp)
082f9570 +0x0b4:  call   082fa234 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x66>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x66
082f9575 +0x0b9:  mov    -0x28(%ebp),%eax
082f9578 +0x0bc:  mov    0x1c(%ebp),%edx
082f957b +0x0bf:  mov    %edx,0x4(%esp)
082f957f +0x0c3:  mov    %eax,(%esp)
082f9582 +0x0c6:  call   082fa26a <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x9c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x9c
082f9587 +0x0cb:  mov    -0x28(%ebp),%eax
082f958a +0x0ce:  movl   $0x0,0x8(%esp)
082f9592 +0x0d6:  movl   $0x0,0x4(%esp)
082f959a +0x0de:  mov    %eax,(%esp)
082f959d +0x0e1:  call   082fa2fa <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x12c>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x12c
082f95a2 +0x0e6:  lea    -0x10(%ebp),%eax
082f95a5 +0x0e9:  lea    -0x28(%ebp),%edx
082f95a8 +0x0ec:  mov    %edx,0x8(%esp)
082f95ac +0x0f0:  lea    -0x24(%ebp),%edx
082f95af +0x0f3:  mov    %edx,0x4(%esp)
082f95b3 +0x0f7:  mov    %eax,(%esp)
082f95b6 +0x0fa:  call   082fa75f <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x591>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x591
082f95bb +0x0ff:  sub    $0x4,%esp
082f95be +0x102:  lea    -0x10(%ebp),%eax
082f95c1 +0x105:  mov    %eax,0x4(%esp)
082f95c5 +0x109:  lea    -0x18(%ebp),%eax
082f95c8 +0x10c:  mov    %eax,(%esp)
082f95cb +0x10f:  call   082fa79e <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x5d0>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x5d0
082f95d0 +0x114:  mov    0x8(%ebp),%eax
082f95d3 +0x117:  lea    0x18(%eax),%ecx
082f95d6 +0x11a:  lea    -0x20(%ebp),%eax
082f95d9 +0x11d:  lea    -0x18(%ebp),%edx
082f95dc +0x120:  mov    %edx,0x8(%esp)
082f95e0 +0x124:  mov    %ecx,0x4(%esp)
082f95e4 +0x128:  mov    %eax,(%esp)
082f95e7 +0x12b:  call   082fa7ce <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x600>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x600
082f95ec +0x130:  sub    $0x4,%esp
082f95ef +0x133:  mov    -0x24(%ebp),%eax
082f95f2 +0x136:  leave
082f95f3 +0x137:  ret
```

## 反编译 C

```c
// WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem @ 0x82f94bc

/* WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem(int, int, char const*, bool,
   stAvatarEmblemInfo_t const&) */

Avatar_Item * __thiscall
WongWork::CAvatarItemMgr::RegistNotAssignedAvatarItem
          (CAvatarItemMgr *this,int param_1,int param_2,char *param_3,bool param_4,
          stAvatarEmblemInfo_t *param_5)

{
  Avatar_Item *this_00;
  Avatar_Item *local_28;
  pair local_24 [8];
  pair<int_const,WongWork::Avatar_Item*> local_1c [8];
  int local_14 [4];
  
  local_28 = (Avatar_Item *)_AssignTempKey(this);
  this_00 = (Avatar_Item *)
            DynamicPool<WongWork::Avatar_Item>::Acquire
                      ((DynamicPool<WongWork::Avatar_Item> *)m_AvatarItemPool);
  if ((param_1 == 0) || (param_1 == 0x16d)) {
    Avatar_Item::SetData(this_00,0,param_2,param_3);
  }
  else if (param_4) {
    Avatar_Item::SetData(this_00,param_2 + param_1,param_2,param_3);
  }
  else {
    Avatar_Item::SetData(this_00,param_1 * 0x15180 + param_2,param_2,param_3);
  }
  Avatar_Item::setEmblemSocketData(this_00,param_5);
  Avatar_Item::setColor(this_00,0,0);
  std::make_pair<int&,WongWork::Avatar_Item*&>(local_14,&local_28);
  std::pair<int_const,WongWork::Avatar_Item*>::pair<int,WongWork::Avatar_Item*>
            (local_1c,(pair *)local_14);
  std::
  map<int,WongWork::Avatar_Item*,std::less<int>,std::allocator<std::pair<int_const,WongWork::Avatar_Item*>>>
  ::insert(local_24);
  return local_28;
}
```
