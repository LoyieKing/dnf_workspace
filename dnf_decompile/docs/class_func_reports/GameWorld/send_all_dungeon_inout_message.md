# send_all_dungeon_inout_message

`_ZN9GameWorld30send_all_dungeon_inout_messageEi`

`GameWorld::send_all_dungeon_inout_message(int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c8cc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c8cc4  _ZN9GameWorld30send_all_dungeon_inout_messageEi
#           GameWorld::send_all_dungeon_inout_message(int)
# range [0x086c8cc4, 0x086c8e4d]
086c8cc4 +0x000:  push   %ebp
086c8cc5 +0x001:  mov    %esp,%ebp
086c8cc7 +0x003:  push   %esi
086c8cc8 +0x004:  push   %ebx
086c8cc9 +0x005:  sub    $0x30,%esp
086c8ccc +0x008:  lea    -0x24(%ebp),%eax
086c8ccf +0x00b:  mov    %eax,(%esp)
086c8cd2 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c8cd7 +0x013:  movl   $0x127,0x8(%esp)
086c8cdf +0x01b:  movl   $0x0,0x4(%esp)
086c8ce7 +0x023:  lea    -0x24(%ebp),%eax
086c8cea +0x026:  mov    %eax,(%esp)
086c8ced +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c8cf2 +0x02e:  mov    0xc(%ebp),%eax
086c8cf5 +0x031:  mov    %eax,0x4(%esp)
086c8cf9 +0x035:  lea    -0x24(%ebp),%eax
086c8cfc +0x038:  mov    %eax,(%esp)
086c8cff +0x03b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c8d04 +0x040:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086c8d09 +0x045:  lea    0x68(%eax),%edx
086c8d0c +0x048:  mov    0xc(%ebp),%eax
086c8d0f +0x04b:  mov    %eax,0x4(%esp)
086c8d13 +0x04f:  mov    %edx,(%esp)
086c8d16 +0x052:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
086c8d1b +0x057:  movzbl %al,%eax
086c8d1e +0x05a:  mov    %eax,0x4(%esp)
086c8d22 +0x05e:  lea    -0x24(%ebp),%eax
086c8d25 +0x061:  mov    %eax,(%esp)
086c8d28 +0x064:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8d2d +0x069:  movl   $0x1,0x4(%esp)
086c8d35 +0x071:  lea    -0x24(%ebp),%eax
086c8d38 +0x074:  mov    %eax,(%esp)
086c8d3b +0x077:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c8d40 +0x07c:  mov    0xc(%ebp),%eax
086c8d43 +0x07f:  mov    %eax,0x4(%esp)
086c8d47 +0x083:  mov    0x8(%ebp),%eax
086c8d4a +0x086:  mov    %eax,(%esp)
086c8d4d +0x089:  call   086c9076 <_ZN9GameWorld30getDungeonMinimumRequiredLevelEi>  ; GameWorld::getDungeonMinimumRequiredLevel(int)
086c8d52 +0x08e:  mov    %eax,-0x10(%ebp)
086c8d55 +0x091:  cmpl   $0xffffffff,-0x10(%ebp)
086c8d59 +0x095:  je     086c8e38 <+0x174>
086c8d5f +0x09b:  mov    0x8(%ebp),%eax
086c8d62 +0x09e:  lea    0x134(%eax),%edx
086c8d68 +0x0a4:  lea    -0x28(%ebp),%eax
086c8d6b +0x0a7:  mov    %edx,0x4(%esp)
086c8d6f +0x0ab:  mov    %eax,(%esp)
086c8d72 +0x0ae:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c8d77 +0x0b3:  sub    $0x4,%esp
086c8d7a +0x0b6:  jmp    086c8de6 <+0x122>
086c8d7c +0x0b8:  lea    -0x28(%ebp),%eax
086c8d7f +0x0bb:  mov    %eax,(%esp)
086c8d82 +0x0be:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c8d87 +0x0c3:  mov    0x4(%eax),%eax
086c8d8a +0x0c6:  mov    %eax,-0xc(%ebp)
086c8d8d +0x0c9:  mov    -0xc(%ebp),%eax
086c8d90 +0x0cc:  mov    %eax,(%esp)
086c8d93 +0x0cf:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c8d98 +0x0d4:  cmp    $0x2,%eax
086c8d9b +0x0d7:  setg   %al
086c8d9e +0x0da:  test   %al,%al
086c8da0 +0x0dc:  je     086c8dc9 <+0x105>
086c8da2 +0x0de:  mov    -0xc(%ebp),%eax
086c8da5 +0x0e1:  mov    %eax,(%esp)
086c8da8 +0x0e4:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086c8dad +0x0e9:  cmp    -0x10(%ebp),%eax
086c8db0 +0x0ec:  setge  %al
086c8db3 +0x0ef:  test   %al,%al
086c8db5 +0x0f1:  je     086c8dc9 <+0x105>
086c8db7 +0x0f3:  lea    -0x24(%ebp),%eax
086c8dba +0x0f6:  mov    %eax,0x4(%esp)
086c8dbe +0x0fa:  mov    -0xc(%ebp),%eax
086c8dc1 +0x0fd:  mov    %eax,(%esp)
086c8dc4 +0x100:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c8dc9 +0x105:  lea    -0x14(%ebp),%eax
086c8dcc +0x108:  movl   $0x0,0x8(%esp)
086c8dd4 +0x110:  lea    -0x28(%ebp),%edx
086c8dd7 +0x113:  mov    %edx,0x4(%esp)
086c8ddb +0x117:  mov    %eax,(%esp)
086c8dde +0x11a:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c8de3 +0x11f:  sub    $0x4,%esp
086c8de6 +0x122:  mov    0x8(%ebp),%eax
086c8de9 +0x125:  lea    0x134(%eax),%edx
086c8def +0x12b:  lea    -0x18(%ebp),%eax
086c8df2 +0x12e:  mov    %edx,0x4(%esp)
086c8df6 +0x132:  mov    %eax,(%esp)
086c8df9 +0x135:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c8dfe +0x13a:  sub    $0x4,%esp
086c8e01 +0x13d:  lea    -0x18(%ebp),%eax
086c8e04 +0x140:  mov    %eax,0x4(%esp)
086c8e08 +0x144:  lea    -0x28(%ebp),%eax
086c8e0b +0x147:  mov    %eax,(%esp)
086c8e0e +0x14a:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c8e13 +0x14f:  test   %al,%al
086c8e15 +0x151:  jne    086c8d7c <+0xb8>
086c8e1b +0x157:  jmp    086c8e38 <+0x174>
086c8e1d +0x159:  mov    %edx,%ebx
086c8e1f +0x15b:  mov    %eax,%esi
086c8e21 +0x15d:  lea    -0x24(%ebp),%eax
086c8e24 +0x160:  mov    %eax,(%esp)
086c8e27 +0x163:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8e2c +0x168:  mov    %esi,%eax
086c8e2e +0x16a:  mov    %ebx,%edx
086c8e30 +0x16c:  mov    %eax,(%esp)
086c8e33 +0x16f:  call   08ae3750 <_Unwind_Resume>
086c8e38 +0x174:  lea    -0x24(%ebp),%eax
086c8e3b +0x177:  mov    %eax,(%esp)
086c8e3e +0x17a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8e43 +0x17f:  lea    -0x8(%ebp),%esp
086c8e46 +0x182:  add    $0x0,%esp
086c8e49 +0x185:  pop    %ebx
086c8e4a +0x186:  pop    %esi
086c8e4b +0x187:  pop    %ebp
086c8e4c +0x188:  ret
086c8e4d +0x189:  nop
```

## 反编译 C

```c
// GameWorld::send_all_dungeon_inout_message @ 0x86c8cc4

/* GameWorld::send_all_dungeon_inout_message(int) */

void __thiscall GameWorld::send_all_dungeon_inout_message(GameWorld *this,int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_2c [4];
  PacketGuard local_28 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  int local_14;
  CUserCharacInfo *local_10;
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086c8ced to 086c8dfd has its CatchHandler @ 086c8e1d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x127);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_1);
  iVar2 = G_CDataManager();
  uVar3 = ServerParameterScript::isDungeonOpen(iVar2 + 0x68);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,uVar3 & 0xff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  local_14 = getDungeonMinimumRequiredLevel((int)this);
  if (local_14 != -1) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::begin(local_2c);
    while( true ) {
      std::
      map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_2c,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_2c);
      local_10 = *(CUserCharacInfo **)(iVar2 + 4);
      iVar2 = CUser::get_state((CUser *)local_10);
      if ((2 < iVar2) && (iVar2 = CUserCharacInfo::get_charac_level(local_10), local_14 <= iVar2)) {
        CUser::Send((CUser *)local_10,local_28);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)local_2c);
    }
  }
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
