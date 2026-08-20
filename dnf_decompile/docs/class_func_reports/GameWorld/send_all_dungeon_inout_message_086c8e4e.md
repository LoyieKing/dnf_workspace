# send_all_dungeon_inout_message

`_ZN9GameWorld30send_all_dungeon_inout_messageEib`

`GameWorld::send_all_dungeon_inout_message(int, bool)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c8e4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c8e4e  _ZN9GameWorld30send_all_dungeon_inout_messageEib
#           GameWorld::send_all_dungeon_inout_message(int, bool)
# range [0x086c8e4e, 0x086c8fc7]
086c8e4e +0x000:  push   %ebp
086c8e4f +0x001:  mov    %esp,%ebp
086c8e51 +0x003:  push   %esi
086c8e52 +0x004:  push   %ebx
086c8e53 +0x005:  sub    $0x40,%esp
086c8e56 +0x008:  mov    0x10(%ebp),%eax
086c8e59 +0x00b:  mov    %al,-0x2c(%ebp)
086c8e5c +0x00e:  lea    -0x24(%ebp),%eax
086c8e5f +0x011:  mov    %eax,(%esp)
086c8e62 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086c8e67 +0x019:  movl   $0x127,0x8(%esp)
086c8e6f +0x021:  movl   $0x0,0x4(%esp)
086c8e77 +0x029:  lea    -0x24(%ebp),%eax
086c8e7a +0x02c:  mov    %eax,(%esp)
086c8e7d +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086c8e82 +0x034:  mov    0xc(%ebp),%eax
086c8e85 +0x037:  mov    %eax,0x4(%esp)
086c8e89 +0x03b:  lea    -0x24(%ebp),%eax
086c8e8c +0x03e:  mov    %eax,(%esp)
086c8e8f +0x041:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086c8e94 +0x046:  movzbl -0x2c(%ebp),%eax
086c8e98 +0x04a:  mov    %eax,0x4(%esp)
086c8e9c +0x04e:  lea    -0x24(%ebp),%eax
086c8e9f +0x051:  mov    %eax,(%esp)
086c8ea2 +0x054:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086c8ea7 +0x059:  movl   $0x1,0x4(%esp)
086c8eaf +0x061:  lea    -0x24(%ebp),%eax
086c8eb2 +0x064:  mov    %eax,(%esp)
086c8eb5 +0x067:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086c8eba +0x06c:  mov    0xc(%ebp),%eax
086c8ebd +0x06f:  mov    %eax,0x4(%esp)
086c8ec1 +0x073:  mov    0x8(%ebp),%eax
086c8ec4 +0x076:  mov    %eax,(%esp)
086c8ec7 +0x079:  call   086c9076 <_ZN9GameWorld30getDungeonMinimumRequiredLevelEi>  ; GameWorld::getDungeonMinimumRequiredLevel(int)
086c8ecc +0x07e:  mov    %eax,-0x10(%ebp)
086c8ecf +0x081:  cmpl   $0xffffffff,-0x10(%ebp)
086c8ed3 +0x085:  je     086c8fb2 <+0x164>
086c8ed9 +0x08b:  mov    0x8(%ebp),%eax
086c8edc +0x08e:  lea    0x134(%eax),%edx
086c8ee2 +0x094:  lea    -0x28(%ebp),%eax
086c8ee5 +0x097:  mov    %edx,0x4(%esp)
086c8ee9 +0x09b:  mov    %eax,(%esp)
086c8eec +0x09e:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c8ef1 +0x0a3:  sub    $0x4,%esp
086c8ef4 +0x0a6:  jmp    086c8f60 <+0x112>
086c8ef6 +0x0a8:  lea    -0x28(%ebp),%eax
086c8ef9 +0x0ab:  mov    %eax,(%esp)
086c8efc +0x0ae:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c8f01 +0x0b3:  mov    0x4(%eax),%eax
086c8f04 +0x0b6:  mov    %eax,-0xc(%ebp)
086c8f07 +0x0b9:  mov    -0xc(%ebp),%eax
086c8f0a +0x0bc:  mov    %eax,(%esp)
086c8f0d +0x0bf:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c8f12 +0x0c4:  cmp    $0x2,%eax
086c8f15 +0x0c7:  setg   %al
086c8f18 +0x0ca:  test   %al,%al
086c8f1a +0x0cc:  je     086c8f43 <+0xf5>
086c8f1c +0x0ce:  mov    -0xc(%ebp),%eax
086c8f1f +0x0d1:  mov    %eax,(%esp)
086c8f22 +0x0d4:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086c8f27 +0x0d9:  cmp    -0x10(%ebp),%eax
086c8f2a +0x0dc:  setge  %al
086c8f2d +0x0df:  test   %al,%al
086c8f2f +0x0e1:  je     086c8f43 <+0xf5>
086c8f31 +0x0e3:  lea    -0x24(%ebp),%eax
086c8f34 +0x0e6:  mov    %eax,0x4(%esp)
086c8f38 +0x0ea:  mov    -0xc(%ebp),%eax
086c8f3b +0x0ed:  mov    %eax,(%esp)
086c8f3e +0x0f0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c8f43 +0x0f5:  lea    -0x14(%ebp),%eax
086c8f46 +0x0f8:  movl   $0x0,0x8(%esp)
086c8f4e +0x100:  lea    -0x28(%ebp),%edx
086c8f51 +0x103:  mov    %edx,0x4(%esp)
086c8f55 +0x107:  mov    %eax,(%esp)
086c8f58 +0x10a:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c8f5d +0x10f:  sub    $0x4,%esp
086c8f60 +0x112:  mov    0x8(%ebp),%eax
086c8f63 +0x115:  lea    0x134(%eax),%edx
086c8f69 +0x11b:  lea    -0x18(%ebp),%eax
086c8f6c +0x11e:  mov    %edx,0x4(%esp)
086c8f70 +0x122:  mov    %eax,(%esp)
086c8f73 +0x125:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c8f78 +0x12a:  sub    $0x4,%esp
086c8f7b +0x12d:  lea    -0x18(%ebp),%eax
086c8f7e +0x130:  mov    %eax,0x4(%esp)
086c8f82 +0x134:  lea    -0x28(%ebp),%eax
086c8f85 +0x137:  mov    %eax,(%esp)
086c8f88 +0x13a:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c8f8d +0x13f:  test   %al,%al
086c8f8f +0x141:  jne    086c8ef6 <+0xa8>
086c8f95 +0x147:  jmp    086c8fb2 <+0x164>
086c8f97 +0x149:  mov    %edx,%ebx
086c8f99 +0x14b:  mov    %eax,%esi
086c8f9b +0x14d:  lea    -0x24(%ebp),%eax
086c8f9e +0x150:  mov    %eax,(%esp)
086c8fa1 +0x153:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8fa6 +0x158:  mov    %esi,%eax
086c8fa8 +0x15a:  mov    %ebx,%edx
086c8faa +0x15c:  mov    %eax,(%esp)
086c8fad +0x15f:  call   08ae3750 <_Unwind_Resume>
086c8fb2 +0x164:  lea    -0x24(%ebp),%eax
086c8fb5 +0x167:  mov    %eax,(%esp)
086c8fb8 +0x16a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086c8fbd +0x16f:  lea    -0x8(%ebp),%esp
086c8fc0 +0x172:  add    $0x0,%esp
086c8fc3 +0x175:  pop    %ebx
086c8fc4 +0x176:  pop    %esi
086c8fc5 +0x177:  pop    %ebp
086c8fc6 +0x178:  ret
086c8fc7 +0x179:  nop
```

## 反编译 C

```c
// GameWorld::send_all_dungeon_inout_message @ 0x86c8e4e

/* GameWorld::send_all_dungeon_inout_message(int, bool) */

void __thiscall GameWorld::send_all_dungeon_inout_message(GameWorld *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_2c [4];
  PacketGuard local_28 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  int local_14;
  CUserCharacInfo *local_10;
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086c8e7d to 086c8f77 has its CatchHandler @ 086c8f97 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x127);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)param_2);
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
