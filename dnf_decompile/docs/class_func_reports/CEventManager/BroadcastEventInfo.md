# BroadcastEventInfo

`_ZN13CEventManager18BroadcastEventInfoEv`

`CEventManager::BroadcastEventInfo()`

| 类 | 地址 |
|---|---|
| `CEventManager` | `0x08116108` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08116108  _ZN13CEventManager18BroadcastEventInfoEv
#           CEventManager::BroadcastEventInfo()
# range [0x08116108, 0x08116211]
08116108 +0x000:  push   %ebp
08116109 +0x001:  mov    %esp,%ebp
0811610b +0x003:  push   %esi
0811610c +0x004:  push   %ebx
0811610d +0x005:  sub    $0x30,%esp
08116110 +0x008:  lea    -0x20(%ebp),%eax
08116113 +0x00b:  mov    %eax,(%esp)
08116116 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0811611b +0x013:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08116120 +0x018:  lea    0x134(%eax),%edx
08116126 +0x01e:  lea    -0x24(%ebp),%eax
08116129 +0x021:  mov    %edx,0x4(%esp)
0811612d +0x025:  mov    %eax,(%esp)
08116130 +0x028:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
08116135 +0x02d:  sub    $0x4,%esp
08116138 +0x030:  jmp    081161a8 <+0xa0>
0811613a +0x032:  lea    -0x24(%ebp),%eax
0811613d +0x035:  mov    %eax,(%esp)
08116140 +0x038:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
08116145 +0x03d:  mov    0x4(%eax),%eax
08116148 +0x040:  mov    %eax,-0xc(%ebp)
0811614b +0x043:  mov    -0xc(%ebp),%eax
0811614e +0x046:  mov    %eax,(%esp)
08116151 +0x049:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08116156 +0x04e:  cmp    $0x2,%eax
08116159 +0x051:  setg   %al
0811615c +0x054:  test   %al,%al
0811615e +0x056:  je     0811618b <+0x83>
08116160 +0x058:  mov    -0xc(%ebp),%eax
08116163 +0x05b:  mov    %eax,0x8(%esp)
08116167 +0x05f:  lea    -0x20(%ebp),%eax
0811616a +0x062:  mov    %eax,0x4(%esp)
0811616e +0x066:  mov    0x8(%ebp),%eax
08116171 +0x069:  mov    %eax,(%esp)
08116174 +0x06c:  call   08115de2 <_ZN13CEventManager17MakeNotiEventInfoER11PacketGuardP5CUser>  ; CEventManager::MakeNotiEventInfo(PacketGuard&, CUser*)
08116179 +0x071:  lea    -0x20(%ebp),%eax
0811617c +0x074:  mov    %eax,0x4(%esp)
08116180 +0x078:  mov    -0xc(%ebp),%eax
08116183 +0x07b:  mov    %eax,(%esp)
08116186 +0x07e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0811618b +0x083:  lea    -0x10(%ebp),%eax
0811618e +0x086:  movl   $0x0,0x8(%esp)
08116196 +0x08e:  lea    -0x24(%ebp),%edx
08116199 +0x091:  mov    %edx,0x4(%esp)
0811619d +0x095:  mov    %eax,(%esp)
081161a0 +0x098:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
081161a5 +0x09d:  sub    $0x4,%esp
081161a8 +0x0a0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081161ad +0x0a5:  lea    0x134(%eax),%edx
081161b3 +0x0ab:  lea    -0x14(%ebp),%eax
081161b6 +0x0ae:  mov    %edx,0x4(%esp)
081161ba +0x0b2:  mov    %eax,(%esp)
081161bd +0x0b5:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
081161c2 +0x0ba:  sub    $0x4,%esp
081161c5 +0x0bd:  lea    -0x14(%ebp),%eax
081161c8 +0x0c0:  mov    %eax,0x4(%esp)
081161cc +0x0c4:  lea    -0x24(%ebp),%eax
081161cf +0x0c7:  mov    %eax,(%esp)
081161d2 +0x0ca:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
081161d7 +0x0cf:  test   %al,%al
081161d9 +0x0d1:  jne    0811613a <+0x32>
081161df +0x0d7:  jmp    081161fc <+0xf4>
081161e1 +0x0d9:  mov    %edx,%ebx
081161e3 +0x0db:  mov    %eax,%esi
081161e5 +0x0dd:  lea    -0x20(%ebp),%eax
081161e8 +0x0e0:  mov    %eax,(%esp)
081161eb +0x0e3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081161f0 +0x0e8:  mov    %esi,%eax
081161f2 +0x0ea:  mov    %ebx,%edx
081161f4 +0x0ec:  mov    %eax,(%esp)
081161f7 +0x0ef:  call   08ae3750 <_Unwind_Resume>
081161fc +0x0f4:  lea    -0x20(%ebp),%eax
081161ff +0x0f7:  mov    %eax,(%esp)
08116202 +0x0fa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08116207 +0x0ff:  lea    -0x8(%ebp),%esp
0811620a +0x102:  add    $0x0,%esp
0811620d +0x105:  pop    %ebx
0811620e +0x106:  pop    %esi
0811620f +0x107:  pop    %ebp
08116210 +0x108:  ret
08116211 +0x109:  nop
```

## 反编译 C

```c
// CEventManager::BroadcastEventInfo @ 0x8116108

/* CEventManager::BroadcastEventInfo() */

void __thiscall CEventManager::BroadcastEventInfo(CEventManager *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_28 [4];
  PacketGuard local_24 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0811611b to 081161c1 has its CatchHandler @ 081161e1 */
  G_GameWorld();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_28);
  while( true ) {
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_28,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_28);
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      MakeNotiEventInfo(this,local_24,local_10);
      CUser::Send(local_10,local_24);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_28);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}
```
