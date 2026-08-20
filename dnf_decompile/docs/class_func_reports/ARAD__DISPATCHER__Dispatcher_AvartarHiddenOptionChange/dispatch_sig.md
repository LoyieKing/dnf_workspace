# dispatch_sig

`_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf`

`ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange` | `0x0819f6f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819f6f8  _ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange12dispatch_sigEP5CUserR9PacketBuf
#           ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::dispatch_sig(CUser*, PacketBuf&)
# range [0x0819f6f8, 0x0819f955]
0819f6f8 +0x000:  push   %ebp
0819f6f9 +0x001:  mov    %esp,%ebp
0819f6fb +0x003:  push   %esi
0819f6fc +0x004:  push   %ebx
0819f6fd +0x005:  sub    $0x20,%esp
0819f700 +0x008:  cmpl   $0x0,0xc(%ebp)
0819f704 +0x00c:  jne    0819f710 <+0x18>
0819f706 +0x00e:  mov    $0x632,%ebx
0819f70b +0x013:  jmp    0819f94d <+0x255>
0819f710 +0x018:  mov    0xc(%ebp),%eax
0819f713 +0x01b:  mov    %eax,(%esp)
0819f716 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0819f71b +0x023:  test   %eax,%eax
0819f71d +0x025:  sete   %al
0819f720 +0x028:  test   %al,%al
0819f722 +0x02a:  je     0819f72e <+0x36>
0819f724 +0x02c:  mov    $0x0,%ebx
0819f729 +0x031:  jmp    0819f94d <+0x255>
0819f72e +0x036:  mov    0xc(%ebp),%eax
0819f731 +0x039:  mov    %eax,(%esp)
0819f734 +0x03c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0819f739 +0x041:  cmp    $0x2,%eax
0819f73c +0x044:  jle    0819f74e <+0x56>
0819f73e +0x046:  mov    0xc(%ebp),%eax
0819f741 +0x049:  mov    %eax,(%esp)
0819f744 +0x04c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0819f749 +0x051:  cmp    $0x4,%eax
0819f74c +0x054:  jle    0819f755 <+0x5d>
0819f74e +0x056:  mov    $0x1,%eax
0819f753 +0x05b:  jmp    0819f75a <+0x62>
0819f755 +0x05d:  mov    $0x0,%eax
0819f75a +0x062:  test   %al,%al
0819f75c +0x064:  je     0819f783 <+0x8b>
0819f75e +0x066:  movl   $0x7,0x8(%esp)
0819f766 +0x06e:  movl   $0x24c,0x4(%esp)
0819f76e +0x076:  mov    0xc(%ebp),%eax
0819f771 +0x079:  mov    %eax,(%esp)
0819f774 +0x07c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f779 +0x081:  mov    $0x0,%ebx
0819f77e +0x086:  jmp    0819f94d <+0x255>
0819f783 +0x08b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819f788 +0x090:  mov    %eax,(%esp)
0819f78b +0x093:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
0819f790 +0x098:  test   %al,%al
0819f792 +0x09a:  jne    0819f7a5 <+0xad>
0819f794 +0x09c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0819f799 +0x0a1:  mov    %eax,(%esp)
0819f79c +0x0a4:  call   081a0ab2 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x1a1>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x1a1
0819f7a1 +0x0a9:  test   %al,%al
0819f7a3 +0x0ab:  je     0819f7ac <+0xb4>
0819f7a5 +0x0ad:  mov    $0x1,%eax
0819f7aa +0x0b2:  jmp    0819f7b1 <+0xb9>
0819f7ac +0x0b4:  mov    $0x0,%eax
0819f7b1 +0x0b9:  test   %al,%al
0819f7b3 +0x0bb:  je     0819f7da <+0xe2>
0819f7b5 +0x0bd:  movl   $0x7,0x8(%esp)
0819f7bd +0x0c5:  movl   $0x24c,0x4(%esp)
0819f7c5 +0x0cd:  mov    0xc(%ebp),%eax
0819f7c8 +0x0d0:  mov    %eax,(%esp)
0819f7cb +0x0d3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f7d0 +0x0d8:  mov    $0x0,%ebx
0819f7d5 +0x0dd:  jmp    0819f94d <+0x255>
0819f7da +0x0e2:  mov    0xc(%ebp),%eax
0819f7dd +0x0e5:  mov    %eax,(%esp)
0819f7e0 +0x0e8:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0819f7e5 +0x0ed:  test   %al,%al
0819f7e7 +0x0ef:  je     0819f80e <+0x116>
0819f7e9 +0x0f1:  movl   $0x7,0x8(%esp)
0819f7f1 +0x0f9:  movl   $0x24c,0x4(%esp)
0819f7f9 +0x101:  mov    0xc(%ebp),%eax
0819f7fc +0x104:  mov    %eax,(%esp)
0819f7ff +0x107:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0819f804 +0x10c:  mov    $0x0,%ebx
0819f809 +0x111:  jmp    0819f94d <+0x255>
0819f80e +0x116:  lea    -0xe(%ebp),%eax
0819f811 +0x119:  mov    %eax,(%esp)
0819f814 +0x11c:  call   081a095c <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x4b>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x4b
0819f819 +0x121:  lea    -0xe(%ebp),%eax
0819f81c +0x124:  mov    %eax,0x4(%esp)
0819f820 +0x128:  mov    0x10(%ebp),%eax
0819f823 +0x12b:  mov    %eax,(%esp)
0819f826 +0x12e:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0819f82b +0x133:  xor    $0x1,%eax
0819f82e +0x136:  test   %al,%al
0819f830 +0x138:  je     0819f83c <+0x144>
0819f832 +0x13a:  mov    $0x64d,%ebx
0819f837 +0x13f:  jmp    0819f94d <+0x255>
0819f83c +0x144:  lea    -0xe(%ebp),%eax
0819f83f +0x147:  add    $0x2,%eax
0819f842 +0x14a:  mov    %eax,0x4(%esp)
0819f846 +0x14e:  mov    0x10(%ebp),%eax
0819f849 +0x151:  mov    %eax,(%esp)
0819f84c +0x154:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
0819f851 +0x159:  xor    $0x1,%eax
0819f854 +0x15c:  test   %al,%al
0819f856 +0x15e:  je     0819f862 <+0x16a>
0819f858 +0x160:  mov    $0x651,%ebx
0819f85d +0x165:  jmp    0819f94d <+0x255>
0819f862 +0x16a:  lea    -0xe(%ebp),%eax
0819f865 +0x16d:  mov    %eax,0x8(%esp)
0819f869 +0x171:  mov    0xc(%ebp),%eax
0819f86c +0x174:  mov    %eax,0x4(%esp)
0819f870 +0x178:  mov    0x8(%ebp),%eax
0819f873 +0x17b:  mov    %eax,(%esp)
0819f876 +0x17e:  call   0819f956 <_ZN4ARAD10DISPATCHER36Dispatcher_AvartarHiddenOptionChange14checkWorkStateEP5CUserRN4arad27SigAvatarHiddenOptionChangeE>  ; ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::checkWorkState(CUser*, arad::SigAvatarHiddenOptionChange&)
0819f87b +0x183:  xor    $0x1,%eax
0819f87e +0x186:  test   %al,%al
0819f880 +0x188:  je     0819f88c <+0x194>
0819f882 +0x18a:  mov    $0x0,%ebx
0819f887 +0x18f:  jmp    0819f94d <+0x255>
0819f88c +0x194:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0819f891 +0x199:  movl   $0x659,0x8(%esp)
0819f899 +0x1a1:  movl   $"localjapan/Arad_PacketDispatcher.cpp",0x4(%esp)
0819f8a1 +0x1a9:  mov    %eax,(%esp)
0819f8a4 +0x1ac:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0819f8a9 +0x1b1:  movl   $0x1,0x8(%esp)
0819f8b1 +0x1b9:  mov    %eax,0x4(%esp)
0819f8b5 +0x1bd:  lea    -0x18(%ebp),%eax
0819f8b8 +0x1c0:  mov    %eax,(%esp)
0819f8bb +0x1c3:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0819f8c0 +0x1c8:  mov    0xc(%ebp),%eax
0819f8c3 +0x1cb:  mov    %eax,(%esp)
0819f8c6 +0x1ce:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0819f8cb +0x1d3:  mov    %eax,0x8(%esp)
0819f8cf +0x1d7:  movl   $0x2e,0x4(%esp)
0819f8d7 +0x1df:  lea    -0x18(%ebp),%eax
0819f8da +0x1e2:  mov    %eax,(%esp)
0819f8dd +0x1e5:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
0819f8e2 +0x1ea:  lea    -0x18(%ebp),%eax
0819f8e5 +0x1ed:  mov    %eax,(%esp)
0819f8e8 +0x1f0:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0819f8ed +0x1f5:  movl   $0x6,0x8(%esp)
0819f8f5 +0x1fd:  lea    -0xe(%ebp),%edx
0819f8f8 +0x200:  mov    %edx,0x4(%esp)
0819f8fc +0x204:  mov    %eax,(%esp)
0819f8ff +0x207:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0819f904 +0x20c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0819f909 +0x211:  lea    -0x18(%ebp),%edx
0819f90c +0x214:  mov    %edx,0x8(%esp)
0819f910 +0x218:  movl   $0x1,0x4(%esp)
0819f918 +0x220:  mov    %eax,(%esp)
0819f91b +0x223:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0819f920 +0x228:  mov    $0x0,%ebx
0819f925 +0x22d:  lea    -0x18(%ebp),%eax
0819f928 +0x230:  mov    %eax,(%esp)
0819f92b +0x233:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0819f930 +0x238:  jmp    0819f94d <+0x255>
0819f932 +0x23a:  mov    %edx,%ebx
0819f934 +0x23c:  mov    %eax,%esi
0819f936 +0x23e:  lea    -0x18(%ebp),%eax
0819f939 +0x241:  mov    %eax,(%esp)
0819f93c +0x244:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0819f941 +0x249:  mov    %esi,%eax
0819f943 +0x24b:  mov    %ebx,%edx
0819f945 +0x24d:  mov    %eax,(%esp)
0819f948 +0x250:  call   08ae3750 <_Unwind_Resume>
0819f94d +0x255:  mov    %ebx,%eax
0819f94f +0x257:  add    $0x20,%esp
0819f952 +0x25a:  pop    %ebx
0819f953 +0x25b:  pop    %esi
0819f954 +0x25c:  pop    %ebp
0819f955 +0x25d:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::dispatch_sig @ 0x819f6f8

/* ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
ARAD::DISPATCHER::Dispatcher_AvartarHiddenOptionChange::dispatch_sig
          (Dispatcher_AvartarHiddenOptionChange *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  Stream *pSVar5;
  CStreamGuard *this_00;
  undefined4 uVar6;
  CStreamGuard local_1c [10];
  SigAvatarHiddenOptionChange local_12 [2];
  short asStack_10 [2];
  
  if (param_1 == (CUser *)0x0) {
    return 0x632;
  }
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) || (iVar3 = CUser::get_state(param_1), 4 < iVar3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24c,7);
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsFreePvPChannel(pGVar4);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0819f7b1;
    }
  }
  bVar1 = true;
LAB_0819f7b1:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x24c,7);
    uVar6 = 0;
  }
  else {
    cVar2 = CUser::CheckInTrade(param_1);
    if (cVar2 == '\0') {
      arad::SigAvatarHiddenOptionChange::SigAvatarHiddenOptionChange(local_12);
      cVar2 = PacketBuf::get_short(param_2,(short *)local_12);
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_short(param_2,asStack_10);
        if (cVar2 == '\x01') {
          cVar2 = checkWorkState(this,param_1,local_12);
          if (cVar2 == '\x01') {
            pSVar5 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,
                                         "localjapan/Arad_PacketDispatcher.cpp",0x659);
            CStreamGuard::CStreamGuard(local_1c,pSVar5,true);
            uVar6 = CUser::GetUID(param_1);
                    /* try { // try from 0819f8dd to 0819f91f has its CatchHandler @ 0819f932 */
            make_internal_stream_jpn(local_1c,0x2e,uVar6);
            this_00 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
            CStreamGuard::put_binary(this_00,local_12,6);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_1c);
            uVar6 = 0;
            CStreamGuard::~CStreamGuard(local_1c);
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 0x651;
        }
      }
      else {
        uVar6 = 0x64d;
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x24c,7);
      uVar6 = 0;
    }
  }
  return uVar6;
}
```
