# send_packet

`_ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE`

`advancealtar::Dispatcher_GetAchievementReward::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)`

| 类 | 地址 |
|---|---|
| `advancealtar::Dispatcher_GetAchievementReward` | `0x08140daa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08140daa  _ZN12advancealtar31Dispatcher_GetAchievementReward11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE
#           advancealtar::Dispatcher_GetAchievementReward::send_packet(CUser*, CMDPacketStruct::STBaseResponse&)
# range [0x08140daa, 0x08140f6d]
08140daa +0x000:  push   %ebp
08140dab +0x001:  mov    %esp,%ebp
08140dad +0x003:  push   %esi
08140dae +0x004:  push   %ebx
08140daf +0x005:  sub    $0x40,%esp
08140db2 +0x008:  mov    0x10(%ebp),%eax
08140db5 +0x00b:  mov    %eax,-0x10(%ebp)
08140db8 +0x00e:  lea    -0x24(%ebp),%eax
08140dbb +0x011:  mov    %eax,(%esp)
08140dbe +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08140dc3 +0x019:  movl   $0x243,0x8(%esp)
08140dcb +0x021:  movl   $0x1,0x4(%esp)
08140dd3 +0x029:  lea    -0x24(%ebp),%eax
08140dd6 +0x02c:  mov    %eax,(%esp)
08140dd9 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08140dde +0x034:  movl   $0x1,0x4(%esp)
08140de6 +0x03c:  lea    -0x24(%ebp),%eax
08140de9 +0x03f:  mov    %eax,(%esp)
08140dec +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08140df1 +0x047:  movl   $0x0,-0xc(%ebp)
08140df8 +0x04e:  movl   $0x0,-0x28(%ebp)
08140dff +0x055:  mov    -0x10(%ebp),%eax
08140e02 +0x058:  mov    0x8(%eax),%eax
08140e05 +0x05b:  mov    0xc(%ebp),%edx
08140e08 +0x05e:  lea    0x8df60(%edx),%ecx
08140e0e +0x064:  lea    -0x28(%ebp),%edx
08140e11 +0x067:  mov    %edx,0xc(%esp)
08140e15 +0x06b:  mov    %eax,0x8(%esp)
08140e19 +0x06f:  mov    0xc(%ebp),%eax
08140e1c +0x072:  mov    %eax,0x4(%esp)
08140e20 +0x076:  mov    %ecx,(%esp)
08140e23 +0x079:  call   0813234e <_ZN12advancealtar25CharacAdvanceAltarManager21sendAchievementRewardEP5CUseriPPKSt6vectorINS_11_RewardItemESaIS4_EE>  ; advancealtar::CharacAdvanceAltarManager::sendAchievementReward(CUser*, int, std::vector<advancealtar::_RewardItem, std::allocator<advancealtar::_RewardItem> > const**)
08140e28 +0x07e:  mov    -0x10(%ebp),%edx
08140e2b +0x081:  mov    %eax,0x4(%edx)
08140e2e +0x084:  mov    -0x10(%ebp),%eax
08140e31 +0x087:  movl   $0xc,0x8(%esp)
08140e39 +0x08f:  mov    %eax,0x4(%esp)
08140e3d +0x093:  lea    -0x24(%ebp),%eax
08140e40 +0x096:  mov    %eax,(%esp)
08140e43 +0x099:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08140e48 +0x09e:  mov    -0x10(%ebp),%eax
08140e4b +0x0a1:  mov    0x4(%eax),%eax
08140e4e +0x0a4:  test   %eax,%eax
08140e50 +0x0a6:  jne    08140f04 <+0x15a>
08140e56 +0x0ac:  mov    -0x28(%ebp),%eax
08140e59 +0x0af:  test   %eax,%eax
08140e5b +0x0b1:  je     08140f04 <+0x15a>
08140e61 +0x0b7:  mov    -0x28(%ebp),%eax
08140e64 +0x0ba:  mov    %eax,(%esp)
08140e67 +0x0bd:  call   081356c0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x12c7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x12c7
08140e6c +0x0c2:  mov    %eax,-0xc(%ebp)
08140e6f +0x0c5:  mov    -0xc(%ebp),%eax
08140e72 +0x0c8:  mov    %eax,0x4(%esp)
08140e76 +0x0cc:  lea    -0x24(%ebp),%eax
08140e79 +0x0cf:  mov    %eax,(%esp)
08140e7c +0x0d2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08140e81 +0x0d7:  mov    -0x28(%ebp),%edx
08140e84 +0x0da:  lea    -0x2c(%ebp),%eax
08140e87 +0x0dd:  mov    %edx,0x4(%esp)
08140e8b +0x0e1:  mov    %eax,(%esp)
08140e8e +0x0e4:  call   08135754 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x135b>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x135b
08140e93 +0x0e9:  sub    $0x4,%esp
08140e96 +0x0ec:  jmp    08140ed7 <+0x12d>
08140e98 +0x0ee:  lea    -0x2c(%ebp),%eax
08140e9b +0x0f1:  mov    %eax,(%esp)
08140e9e +0x0f4:  call   0813580c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1413>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1413
08140ea3 +0x0f9:  movl   $0xc,0x8(%esp)
08140eab +0x101:  mov    %eax,0x4(%esp)
08140eaf +0x105:  lea    -0x24(%ebp),%eax
08140eb2 +0x108:  mov    %eax,(%esp)
08140eb5 +0x10b:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
08140eba +0x110:  lea    -0x14(%ebp),%eax
08140ebd +0x113:  movl   $0x0,0x8(%esp)
08140ec5 +0x11b:  lea    -0x2c(%ebp),%edx
08140ec8 +0x11e:  mov    %edx,0x4(%esp)
08140ecc +0x122:  mov    %eax,(%esp)
08140ecf +0x125:  call   081357d8 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13df>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13df
08140ed4 +0x12a:  sub    $0x4,%esp
08140ed7 +0x12d:  mov    -0x28(%ebp),%edx
08140eda +0x130:  lea    -0x18(%ebp),%eax
08140edd +0x133:  mov    %edx,0x4(%esp)
08140ee1 +0x137:  mov    %eax,(%esp)
08140ee4 +0x13a:  call   08135780 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x1387>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x1387
08140ee9 +0x13f:  sub    $0x4,%esp
08140eec +0x142:  lea    -0x18(%ebp),%eax
08140eef +0x145:  mov    %eax,0x4(%esp)
08140ef3 +0x149:  lea    -0x2c(%ebp),%eax
08140ef6 +0x14c:  mov    %eax,(%esp)
08140ef9 +0x14f:  call   081357ac <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x13b3>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x13b3
08140efe +0x154:  test   %al,%al
08140f00 +0x156:  jne    08140e98 <+0xee>
08140f02 +0x158:  jmp    08140f16 <+0x16c>
08140f04 +0x15a:  mov    -0xc(%ebp),%eax
08140f07 +0x15d:  mov    %eax,0x4(%esp)
08140f0b +0x161:  lea    -0x24(%ebp),%eax
08140f0e +0x164:  mov    %eax,(%esp)
08140f11 +0x167:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08140f16 +0x16c:  movl   $0x1,0x4(%esp)
08140f1e +0x174:  lea    -0x24(%ebp),%eax
08140f21 +0x177:  mov    %eax,(%esp)
08140f24 +0x17a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08140f29 +0x17f:  lea    -0x24(%ebp),%eax
08140f2c +0x182:  mov    %eax,0x4(%esp)
08140f30 +0x186:  mov    0xc(%ebp),%eax
08140f33 +0x189:  mov    %eax,(%esp)
08140f36 +0x18c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08140f3b +0x191:  jmp    08140f58 <+0x1ae>
08140f3d +0x193:  mov    %edx,%ebx
08140f3f +0x195:  mov    %eax,%esi
08140f41 +0x197:  lea    -0x24(%ebp),%eax
08140f44 +0x19a:  mov    %eax,(%esp)
08140f47 +0x19d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08140f4c +0x1a2:  mov    %esi,%eax
08140f4e +0x1a4:  mov    %ebx,%edx
08140f50 +0x1a6:  mov    %eax,(%esp)
08140f53 +0x1a9:  call   08ae3750 <_Unwind_Resume>
08140f58 +0x1ae:  lea    -0x24(%ebp),%eax
08140f5b +0x1b1:  mov    %eax,(%esp)
08140f5e +0x1b4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08140f63 +0x1b9:  lea    -0x8(%ebp),%esp
08140f66 +0x1bc:  add    $0x0,%esp
08140f69 +0x1bf:  pop    %ebx
08140f6a +0x1c0:  pop    %esi
08140f6b +0x1c1:  pop    %ebp
08140f6c +0x1c2:  ret
08140f6d +0x1c3:  nop
```

## 反编译 C

```c
// advancealtar::Dispatcher_GetAchievementReward::send_packet @ 0x8140daa

/* advancealtar::Dispatcher_GetAchievementReward::send_packet(CUser*,
   CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_GetAchievementReward::send_packet
          (Dispatcher_GetAchievementReward *this,CUser *param_1,STBaseResponse *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_30 [4];
  vector *local_2c;
  PacketGuard local_28 [12];
  __normal_iterator local_1c [4];
  __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
  local_18 [4];
  STBaseResponse *local_14;
  int local_10;
  
  local_14 = param_2;
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08140dd9 to 08140f3a has its CatchHandler @ 08140f3d */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x243);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
  local_10 = 0;
  local_2c = (vector *)0x0;
  uVar2 = CharacAdvanceAltarManager::sendAchievementReward
                    ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),param_1,*(int *)(local_14 + 8)
                     ,&local_2c);
  *(undefined4 *)(local_14 + 4) = uVar2;
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_28,(char *)local_14,0xc);
  if ((*(int *)(local_14 + 4) == 0) && (local_2c != (vector *)0x0)) {
    local_10 = std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::
               size((vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>> *)
                    local_2c);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_10);
    std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::begin();
    while( true ) {
      std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>::end();
      bVar1 = __gnu_cxx::operator!=(local_30,local_1c);
      if (!bVar1) break;
      pcVar3 = (char *)__gnu_cxx::
                       __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
                       ::operator*(local_30);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_28,pcVar3,0xc);
      __gnu_cxx::
      __normal_iterator<advancealtar::_RewardItem_const*,std::vector<advancealtar::_RewardItem,std::allocator<advancealtar::_RewardItem>>>
      ::operator++(local_18,(int)local_30);
    }
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,local_10);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(param_1,local_28);
  PacketGuard::~PacketGuard(local_28);
  return;
}
```
