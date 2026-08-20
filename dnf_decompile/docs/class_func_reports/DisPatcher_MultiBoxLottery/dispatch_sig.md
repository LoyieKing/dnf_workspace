# dispatch_sig

`_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf`

`DisPatcher_MultiBoxLottery::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MultiBoxLottery` | `0x0820b802` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820b802  _ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf
#           DisPatcher_MultiBoxLottery::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820b802, 0x0820ba37]
0820b802 +0x000:  push   %ebp
0820b803 +0x001:  mov    %esp,%ebp
0820b805 +0x003:  push   %esi
0820b806 +0x004:  push   %ebx
0820b807 +0x005:  sub    $0x40,%esp
0820b80a +0x008:  mov    0xc(%ebp),%eax
0820b80d +0x00b:  mov    %eax,(%esp)
0820b810 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820b815 +0x013:  cmp    $0x2,%eax
0820b818 +0x016:  setle  %al
0820b81b +0x019:  test   %al,%al
0820b81d +0x01b:  je     0820b829 <+0x27>
0820b81f +0x01d:  mov    $0x0,%eax
0820b824 +0x022:  jmp    0820ba30 <+0x22e>
0820b829 +0x027:  mov    0xc(%ebp),%eax
0820b82c +0x02a:  mov    %eax,(%esp)
0820b82f +0x02d:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
0820b834 +0x032:  test   %al,%al
0820b836 +0x034:  je     0820b842 <+0x40>
0820b838 +0x036:  mov    $0x0,%eax
0820b83d +0x03b:  jmp    0820ba30 <+0x22e>
0820b842 +0x040:  call   081625e6 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x854>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x854
0820b847 +0x045:  movl   $0x12,0xc(%esp)
0820b84f +0x04d:  movl   $0x1,0x8(%esp)
0820b857 +0x055:  mov    0xc(%ebp),%edx
0820b85a +0x058:  mov    %edx,0x4(%esp)
0820b85e +0x05c:  mov    %eax,(%esp)
0820b861 +0x05f:  call   0816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>  ; ServiceRestrictManager::isRestricted(CUser*, RestrictCategory::Enum, int)
0820b866 +0x064:  test   %al,%al
0820b868 +0x066:  je     0820b88f <+0x8d>
0820b86a +0x068:  movl   $0xd1,0x8(%esp)
0820b872 +0x070:  movl   $0xd3,0x4(%esp)
0820b87a +0x078:  mov    0xc(%ebp),%eax
0820b87d +0x07b:  mov    %eax,(%esp)
0820b880 +0x07e:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820b885 +0x083:  mov    $0x0,%eax
0820b88a +0x088:  jmp    0820ba30 <+0x22e>
0820b88f +0x08d:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
0820b894 +0x092:  movl   $0x18,0x8(%esp)
0820b89c +0x09a:  mov    0xc(%ebp),%edx
0820b89f +0x09d:  mov    %edx,0x4(%esp)
0820b8a3 +0x0a1:  mov    %eax,(%esp)
0820b8a6 +0x0a4:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
0820b8ab +0x0a9:  mov    %eax,-0x10(%ebp)
0820b8ae +0x0ac:  cmpl   $0x0,-0x10(%ebp)
0820b8b2 +0x0b0:  je     0820b8db <+0xd9>
0820b8b4 +0x0b2:  mov    -0x10(%ebp),%eax
0820b8b7 +0x0b5:  movzbl %al,%eax
0820b8ba +0x0b8:  mov    %eax,0x8(%esp)
0820b8be +0x0bc:  movl   $0xd3,0x4(%esp)
0820b8c6 +0x0c4:  mov    0xc(%ebp),%eax
0820b8c9 +0x0c7:  mov    %eax,(%esp)
0820b8cc +0x0ca:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820b8d1 +0x0cf:  mov    $0x0,%eax
0820b8d6 +0x0d4:  jmp    0820ba30 <+0x22e>
0820b8db +0x0d9:  lea    -0x21(%ebp),%eax
0820b8de +0x0dc:  add    $0xd,%eax
0820b8e1 +0x0df:  mov    %eax,0x4(%esp)
0820b8e5 +0x0e3:  mov    0x10(%ebp),%eax
0820b8e8 +0x0e6:  mov    %eax,(%esp)
0820b8eb +0x0e9:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0820b8f0 +0x0ee:  xor    $0x1,%eax
0820b8f3 +0x0f1:  test   %al,%al
0820b8f5 +0x0f3:  je     0820b920 <+0x11e>
0820b8f7 +0x0f5:  movl   $0x0,0xc(%esp)
0820b8ff +0x0fd:  movl   $0x0,0x8(%esp)
0820b907 +0x105:  movl   $&_ZZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b90f +0x10d:  movl   $0xa838,(%esp)
0820b916 +0x114:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b91b +0x119:  jmp    0820ba30 <+0x22e>
0820b920 +0x11e:  lea    -0x21(%ebp),%eax
0820b923 +0x121:  add    $0xf,%eax
0820b926 +0x124:  mov    %eax,0x4(%esp)
0820b92a +0x128:  mov    0x10(%ebp),%eax
0820b92d +0x12b:  mov    %eax,(%esp)
0820b930 +0x12e:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0820b935 +0x133:  xor    $0x1,%eax
0820b938 +0x136:  test   %al,%al
0820b93a +0x138:  je     0820b965 <+0x163>
0820b93c +0x13a:  movl   $0x0,0xc(%esp)
0820b944 +0x142:  movl   $0x0,0x8(%esp)
0820b94c +0x14a:  movl   $&_ZZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b954 +0x152:  movl   $0xa839,(%esp)
0820b95b +0x159:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b960 +0x15e:  jmp    0820ba30 <+0x22e>
0820b965 +0x163:  movzwl -0x12(%ebp),%eax
0820b969 +0x167:  movzwl %ax,%edx
0820b96c +0x16a:  movzwl -0x14(%ebp),%eax
0820b970 +0x16e:  movzwl %ax,%eax
0820b973 +0x171:  mov    %edx,0x8(%esp)
0820b977 +0x175:  mov    %eax,0x4(%esp)
0820b97b +0x179:  mov    0xc(%ebp),%eax
0820b97e +0x17c:  mov    %eax,(%esp)
0820b981 +0x17f:  call   08674968 <_ZN5CUser21multibox_lottery_itemEii>  ; CUser::multibox_lottery_item(int, int)
0820b986 +0x184:  mov    %eax,-0xc(%ebp)
0820b989 +0x187:  cmpl   $0x0,-0xc(%ebp)
0820b98d +0x18b:  jle    0820ba2b <+0x229>
0820b993 +0x191:  lea    -0x30(%ebp),%eax
0820b996 +0x194:  mov    %eax,(%esp)
0820b999 +0x197:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0820b99e +0x19c:  movl   $0xd3,0x8(%esp)
0820b9a6 +0x1a4:  movl   $0x1,0x4(%esp)
0820b9ae +0x1ac:  lea    -0x30(%ebp),%eax
0820b9b1 +0x1af:  mov    %eax,(%esp)
0820b9b4 +0x1b2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0820b9b9 +0x1b7:  movl   $0x0,0x4(%esp)
0820b9c1 +0x1bf:  lea    -0x30(%ebp),%eax
0820b9c4 +0x1c2:  mov    %eax,(%esp)
0820b9c7 +0x1c5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820b9cc +0x1ca:  mov    -0xc(%ebp),%eax
0820b9cf +0x1cd:  mov    %eax,0x4(%esp)
0820b9d3 +0x1d1:  lea    -0x30(%ebp),%eax
0820b9d6 +0x1d4:  mov    %eax,(%esp)
0820b9d9 +0x1d7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0820b9de +0x1dc:  movl   $0x1,0x4(%esp)
0820b9e6 +0x1e4:  lea    -0x30(%ebp),%eax
0820b9e9 +0x1e7:  mov    %eax,(%esp)
0820b9ec +0x1ea:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0820b9f1 +0x1ef:  lea    -0x30(%ebp),%eax
0820b9f4 +0x1f2:  mov    %eax,0x4(%esp)
0820b9f8 +0x1f6:  mov    0xc(%ebp),%eax
0820b9fb +0x1f9:  mov    %eax,(%esp)
0820b9fe +0x1fc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0820ba03 +0x201:  jmp    0820ba20 <+0x21e>
0820ba05 +0x203:  mov    %edx,%ebx
0820ba07 +0x205:  mov    %eax,%esi
0820ba09 +0x207:  lea    -0x30(%ebp),%eax
0820ba0c +0x20a:  mov    %eax,(%esp)
0820ba0f +0x20d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820ba14 +0x212:  mov    %esi,%eax
0820ba16 +0x214:  mov    %ebx,%edx
0820ba18 +0x216:  mov    %eax,(%esp)
0820ba1b +0x219:  call   08ae3750 <_Unwind_Resume>
0820ba20 +0x21e:  lea    -0x30(%ebp),%eax
0820ba23 +0x221:  mov    %eax,(%esp)
0820ba26 +0x224:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0820ba2b +0x229:  mov    $0x0,%eax
0820ba30 +0x22e:  add    $0x40,%esp
0820ba33 +0x231:  pop    %ebx
0820ba34 +0x232:  pop    %esi
0820ba35 +0x233:  pop    %ebp
0820ba36 +0x234:  ret
0820ba37 +0x235:  nop
```

## 反编译 C

```c
// DisPatcher_MultiBoxLottery::dispatch_sig @ 0x820b802

/* DisPatcher_MultiBoxLottery::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_MultiBoxLottery::dispatch_sig
          (DisPatcher_MultiBoxLottery *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ServiceRestrictManager *pSVar4;
  PacketGuard local_34 [28];
  ushort local_18;
  ushort local_16;
  uint local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    cVar1 = CUser::CheckInTrade(param_1);
    if (cVar1 == '\0') {
      pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
      cVar1 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,0x12);
      if (cVar1 == '\0') {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x18);
        if (local_14 == 0) {
          cVar1 = PacketBuf::get_short(param_2,&local_18);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&local_16);
            if (cVar1 == '\x01') {
              local_10 = CUser::multibox_lottery_item(param_1,(uint)local_18,(uint)local_16);
              if (0 < local_10) {
                PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0820b9b4 to 0820ba02 has its CatchHandler @ 0820ba05 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xd3);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_10);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
                CUser::Send(param_1,local_34);
                PacketGuard::~PacketGuard(local_34);
              }
              uVar3 = 0;
            }
            else {
              uVar3 = LineFunc(0xa839,
                               "virtual int DisPatcher_MultiBoxLottery::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0xa838,
                             "virtual int DisPatcher_MultiBoxLottery::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0xd3,local_14 & 0xff);
          uVar3 = 0;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0xd3,0xd1);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
