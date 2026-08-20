# send

`_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase`

`Dispatcher_Avatar_Disjoint_Random_Reward::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Avatar_Disjoint_Random_Reward` | `0x081dec56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dec56  _ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase
#           Dispatcher_Avatar_Disjoint_Random_Reward::send(CUser*, ParamBase&)
# range [0x081dec56, 0x081dee29]
081dec56 +0x000:  push   %ebp
081dec57 +0x001:  mov    %esp,%ebp
081dec59 +0x003:  push   %esi
081dec5a +0x004:  push   %ebx
081dec5b +0x005:  sub    $0x40,%esp
081dec5e +0x008:  mov    0x10(%ebp),%eax
081dec61 +0x00b:  mov    %eax,0x4(%esp)
081dec65 +0x00f:  lea    -0x24(%ebp),%eax
081dec68 +0x012:  mov    %eax,(%esp)
081dec6b +0x015:  call   0823516e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa818>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa818
081dec70 +0x01a:  lea    -0x30(%ebp),%eax
081dec73 +0x01d:  mov    %eax,(%esp)
081dec76 +0x020:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081dec7b +0x025:  movl   $0x1c2,0x8(%esp)
081dec83 +0x02d:  movl   $0x1,0x4(%esp)
081dec8b +0x035:  lea    -0x30(%ebp),%eax
081dec8e +0x038:  mov    %eax,(%esp)
081dec91 +0x03b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081dec96 +0x040:  mov    -0x20(%ebp),%eax
081dec99 +0x043:  test   %eax,%eax
081dec9b +0x045:  jne    081ded8c <+0x136>
081deca1 +0x04b:  movl   $0x1,0x4(%esp)
081deca9 +0x053:  lea    -0x30(%ebp),%eax
081decac +0x056:  mov    %eax,(%esp)
081decaf +0x059:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081decb4 +0x05e:  mov    -0x1c(%ebp),%eax
081decb7 +0x061:  mov    %eax,0x4(%esp)
081decbb +0x065:  lea    -0x30(%ebp),%eax
081decbe +0x068:  mov    %eax,(%esp)
081decc1 +0x06b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081decc6 +0x070:  lea    -0x24(%ebp),%eax
081decc9 +0x073:  add    $0xc,%eax
081deccc +0x076:  mov    %eax,(%esp)
081deccf +0x079:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081decd4 +0x07e:  mov    %eax,0x4(%esp)
081decd8 +0x082:  lea    -0x30(%ebp),%eax
081decdb +0x085:  mov    %eax,(%esp)
081decde +0x088:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dece3 +0x08d:  lea    -0x24(%ebp),%eax
081dece6 +0x090:  add    $0xc,%eax
081dece9 +0x093:  mov    %eax,(%esp)
081decec +0x096:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
081decf1 +0x09b:  test   %eax,%eax
081decf3 +0x09d:  setne  %al
081decf6 +0x0a0:  test   %al,%al
081decf8 +0x0a2:  je     081dedb1 <+0x15b>
081decfe +0x0a8:  lea    -0x34(%ebp),%eax
081ded01 +0x0ab:  lea    -0x24(%ebp),%edx
081ded04 +0x0ae:  add    $0xc,%edx
081ded07 +0x0b1:  mov    %edx,0x4(%esp)
081ded0b +0x0b5:  mov    %eax,(%esp)
081ded0e +0x0b8:  call   080dd5b2 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xfb>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xfb
081ded13 +0x0bd:  sub    $0x4,%esp
081ded16 +0x0c0:  jmp    081ded5c <+0x106>
081ded18 +0x0c2:  lea    -0x34(%ebp),%eax
081ded1b +0x0c5:  mov    %eax,(%esp)
081ded1e +0x0c8:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
081ded23 +0x0cd:  mov    (%eax),%eax
081ded25 +0x0cf:  mov    %eax,0x4(%esp)
081ded29 +0x0d3:  lea    -0x30(%ebp),%eax
081ded2c +0x0d6:  mov    %eax,(%esp)
081ded2f +0x0d9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081ded34 +0x0de:  lea    -0x34(%ebp),%eax
081ded37 +0x0e1:  mov    %eax,(%esp)
081ded3a +0x0e4:  call   08111cee <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1200>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1200
081ded3f +0x0e9:  mov    0x4(%eax),%eax
081ded42 +0x0ec:  mov    %eax,0x4(%esp)
081ded46 +0x0f0:  lea    -0x30(%ebp),%eax
081ded49 +0x0f3:  mov    %eax,(%esp)
081ded4c +0x0f6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081ded51 +0x0fb:  lea    -0x34(%ebp),%eax
081ded54 +0x0fe:  mov    %eax,(%esp)
081ded57 +0x101:  call   0811120a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x71c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x71c
081ded5c +0x106:  lea    -0xc(%ebp),%eax
081ded5f +0x109:  lea    -0x24(%ebp),%edx
081ded62 +0x10c:  add    $0xc,%edx
081ded65 +0x10f:  mov    %edx,0x4(%esp)
081ded69 +0x113:  mov    %eax,(%esp)
081ded6c +0x116:  call   080dd5d6 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x11f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x11f
081ded71 +0x11b:  sub    $0x4,%esp
081ded74 +0x11e:  lea    -0xc(%ebp),%eax
081ded77 +0x121:  mov    %eax,0x4(%esp)
081ded7b +0x125:  lea    -0x34(%ebp),%eax
081ded7e +0x128:  mov    %eax,(%esp)
081ded81 +0x12b:  call   081111de <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x6f0>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x6f0
081ded86 +0x130:  test   %al,%al
081ded88 +0x132:  jne    081ded18 <+0xc2>
081ded8a +0x134:  jmp    081dedb1 <+0x15b>
081ded8c +0x136:  movl   $0x0,0x4(%esp)
081ded94 +0x13e:  lea    -0x30(%ebp),%eax
081ded97 +0x141:  mov    %eax,(%esp)
081ded9a +0x144:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081ded9f +0x149:  mov    -0x20(%ebp),%eax
081deda2 +0x14c:  mov    %eax,0x4(%esp)
081deda6 +0x150:  lea    -0x30(%ebp),%eax
081deda9 +0x153:  mov    %eax,(%esp)
081dedac +0x156:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081dedb1 +0x15b:  movl   $0x1,0x4(%esp)
081dedb9 +0x163:  lea    -0x30(%ebp),%eax
081dedbc +0x166:  mov    %eax,(%esp)
081dedbf +0x169:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081dedc4 +0x16e:  lea    -0x30(%ebp),%eax
081dedc7 +0x171:  mov    %eax,0x4(%esp)
081dedcb +0x175:  mov    0xc(%ebp),%eax
081dedce +0x178:  mov    %eax,(%esp)
081dedd1 +0x17b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081dedd6 +0x180:  jmp    081deded <+0x197>
081dedd8 +0x182:  mov    %edx,%ebx
081dedda +0x184:  mov    %eax,%esi
081deddc +0x186:  lea    -0x30(%ebp),%eax
081deddf +0x189:  mov    %eax,(%esp)
081dede2 +0x18c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dede7 +0x191:  mov    %esi,%eax
081dede9 +0x193:  mov    %ebx,%edx
081dedeb +0x195:  jmp    081dedfa <+0x1a4>
081deded +0x197:  lea    -0x30(%ebp),%eax
081dedf0 +0x19a:  mov    %eax,(%esp)
081dedf3 +0x19d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081dedf8 +0x1a2:  jmp    081dee15 <+0x1bf>
081dedfa +0x1a4:  mov    %edx,%ebx
081dedfc +0x1a6:  mov    %eax,%esi
081dedfe +0x1a8:  lea    -0x24(%ebp),%eax
081dee01 +0x1ab:  mov    %eax,(%esp)
081dee04 +0x1ae:  call   082351e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa890>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa890
081dee09 +0x1b3:  mov    %esi,%eax
081dee0b +0x1b5:  mov    %ebx,%edx
081dee0d +0x1b7:  mov    %eax,(%esp)
081dee10 +0x1ba:  call   08ae3750 <_Unwind_Resume>
081dee15 +0x1bf:  lea    -0x24(%ebp),%eax
081dee18 +0x1c2:  mov    %eax,(%esp)
081dee1b +0x1c5:  call   082351e6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa890>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa890
081dee20 +0x1ca:  lea    -0x8(%ebp),%esp
081dee23 +0x1cd:  add    $0x0,%esp
081dee26 +0x1d0:  pop    %ebx
081dee27 +0x1d1:  pop    %esi
081dee28 +0x1d2:  pop    %ebp
081dee29 +0x1d3:  ret
```

## 反编译 C

```c
// Dispatcher_Avatar_Disjoint_Random_Reward::send @ 0x81dec56

/* Dispatcher_Avatar_Disjoint_Random_Reward::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Avatar_Disjoint_Random_Reward::send
          (Dispatcher_Avatar_Disjoint_Random_Reward *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_38 [4];
  PacketGuard local_34 [12];
  stAvatarDisjointRandomReward local_28 [4];
  int local_24;
  int local_20;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_1c [12];
  __normal_iterator local_10 [4];
  
  stAvatarDisjointRandomReward::stAvatarDisjointRandomReward
            (local_28,(stAvatarDisjointRandomReward *)param_2);
                    /* try { // try from 081dec76 to 081dec7a has its CatchHandler @ 081dedfa */
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 081dec91 to 081dedd5 has its CatchHandler @ 081dedd8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x1c2);
  if (local_24 == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,local_20);
    iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(avStack_1c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar2);
    iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(avStack_1c);
    if (iVar2 != 0) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar1 = __gnu_cxx::operator!=(local_38,local_10);
        if (!bVar1) break;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_38);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*piVar3);
        iVar2 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_38);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*(int *)(iVar2 + 4));
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_38);
      }
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_24);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  CUser::Send(param_1,local_34);
                    /* try { // try from 081dedf3 to 081dedf7 has its CatchHandler @ 081dedfa */
  PacketGuard::~PacketGuard(local_34);
  stAvatarDisjointRandomReward::~stAvatarDisjointRandomReward(local_28);
  return;
}
```
