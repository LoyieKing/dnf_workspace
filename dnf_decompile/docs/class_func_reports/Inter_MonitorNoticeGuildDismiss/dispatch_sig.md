# dispatch_sig

`_ZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildDismiss` | `0x084ca00c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ca00c  _ZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser*, char*, int)
# range [0x084ca00c, 0x084ca1e5]
084ca00c +0x000:  push   %ebp
084ca00d +0x001:  mov    %esp,%ebp
084ca00f +0x003:  push   %esi
084ca010 +0x004:  push   %ebx
084ca011 +0x005:  sub    $0x40,%esp
084ca014 +0x008:  mov    0xc(%ebp),%eax
084ca017 +0x00b:  mov    %eax,(%esp)
084ca01a +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ca01f +0x013:  test   %eax,%eax
084ca021 +0x015:  sete   %al
084ca024 +0x018:  test   %al,%al
084ca026 +0x01a:  je     084ca032 <+0x26>
084ca028 +0x01c:  mov    $0x0,%ebx
084ca02d +0x021:  jmp    084ca1dc <+0x1d0>
084ca032 +0x026:  mov    0x10(%ebp),%eax
084ca035 +0x029:  mov    %eax,-0xc(%ebp)
084ca038 +0x02c:  movl   $0xffffffff,0x4(%esp)
084ca040 +0x034:  mov    0xc(%ebp),%eax
084ca043 +0x037:  mov    %eax,(%esp)
084ca046 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ca04b +0x03f:  mov    %eax,%edx
084ca04d +0x041:  mov    -0xc(%ebp),%eax
084ca050 +0x044:  mov    0xe(%eax),%eax
084ca053 +0x047:  cmp    %eax,%edx
084ca055 +0x049:  setne  %al
084ca058 +0x04c:  test   %al,%al
084ca05a +0x04e:  je     084ca0b3 <+0xa7>
084ca05c +0x050:  mov    -0xc(%ebp),%eax
084ca05f +0x053:  mov    0xe(%eax),%ebx
084ca062 +0x056:  movl   $0xffffffff,0x4(%esp)
084ca06a +0x05e:  mov    0xc(%ebp),%eax
084ca06d +0x061:  mov    %eax,(%esp)
084ca070 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ca075 +0x069:  mov    %ebx,0x18(%esp)
084ca079 +0x06d:  mov    %eax,0x14(%esp)
084ca07d +0x071:  movl   $"Inter_MonitorNoticeGuildDismiss::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084ca085 +0x079:  movl   $0x2429,0xc(%esp)
084ca08d +0x081:  movl   $&_ZZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084ca095 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084ca09d +0x091:  movl   $0x1,(%esp)
084ca0a4 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ca0a9 +0x09d:  mov    $0x0,%ebx
084ca0ae +0x0a2:  jmp    084ca1dc <+0x1d0>
084ca0b3 +0x0a7:  mov    0xc(%ebp),%eax
084ca0b6 +0x0aa:  mov    %eax,(%esp)
084ca0b9 +0x0ad:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
084ca0be +0x0b2:  mov    0x17(%eax),%esi
084ca0c1 +0x0b5:  movl   $0xffffffff,0x4(%esp)
084ca0c9 +0x0bd:  mov    0xc(%ebp),%eax
084ca0cc +0x0c0:  mov    %eax,(%esp)
084ca0cf +0x0c3:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ca0d4 +0x0c8:  mov    %eax,%ebx
084ca0d6 +0x0ca:  movl   $0x0,0xc(%esp)
084ca0de +0x0d2:  movl   $0x242d,0x8(%esp)
084ca0e6 +0x0da:  movl   $&_ZZN31Inter_MonitorNoticeGuildDismiss12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084ca0ee +0x0e2:  lea    -0x1c(%ebp),%eax
084ca0f1 +0x0e5:  mov    %eax,(%esp)
084ca0f4 +0x0e8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084ca0f9 +0x0ed:  mov    %esi,0xc(%esp)
084ca0fd +0x0f1:  mov    %ebx,0x8(%esp)
084ca101 +0x0f5:  movl   $"Guild Create Right Init! Char id : %d, Master Id : %d",0x4(%esp)
084ca109 +0x0fd:  lea    -0x1c(%ebp),%eax
084ca10c +0x100:  mov    %eax,(%esp)
084ca10f +0x103:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084ca114 +0x108:  mov    0xc(%ebp),%eax
084ca117 +0x10b:  mov    %eax,(%esp)
084ca11a +0x10e:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
084ca11f +0x113:  mov    0x17(%eax),%ebx
084ca122 +0x116:  movl   $0xffffffff,0x4(%esp)
084ca12a +0x11e:  mov    0xc(%ebp),%eax
084ca12d +0x121:  mov    %eax,(%esp)
084ca130 +0x124:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ca135 +0x129:  cmp    %eax,%ebx
084ca137 +0x12b:  sete   %al
084ca13a +0x12e:  test   %al,%al
084ca13c +0x130:  je     084ca151 <+0x145>
084ca13e +0x132:  mov    0xc(%ebp),%eax
084ca141 +0x135:  movl   $0x0,0x4(%esp)
084ca149 +0x13d:  mov    %eax,(%esp)
084ca14c +0x140:  call   0822f590 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4c3a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4c3a
084ca151 +0x145:  mov    0xc(%ebp),%eax
084ca154 +0x148:  movl   $0x0,0x4(%esp)
084ca15c +0x150:  mov    %eax,(%esp)
084ca15f +0x153:  call   082a671e <_GLOBAL__I__ZN4CLog5this_E+0x2b45>  ; global constructors keyed to CLog::this_+0x2b45
084ca164 +0x158:  lea    -0x28(%ebp),%eax
084ca167 +0x15b:  mov    %eax,(%esp)
084ca16a +0x15e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ca16f +0x163:  movl   $0x3d,0x8(%esp)
084ca177 +0x16b:  movl   $0x0,0x4(%esp)
084ca17f +0x173:  lea    -0x28(%ebp),%eax
084ca182 +0x176:  mov    %eax,(%esp)
084ca185 +0x179:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ca18a +0x17e:  movl   $0x1,0x4(%esp)
084ca192 +0x186:  lea    -0x28(%ebp),%eax
084ca195 +0x189:  mov    %eax,(%esp)
084ca198 +0x18c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ca19d +0x191:  lea    -0x28(%ebp),%eax
084ca1a0 +0x194:  mov    %eax,0x4(%esp)
084ca1a4 +0x198:  mov    0xc(%ebp),%eax
084ca1a7 +0x19b:  mov    %eax,(%esp)
084ca1aa +0x19e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ca1af +0x1a3:  mov    $0x0,%ebx
084ca1b4 +0x1a8:  lea    -0x28(%ebp),%eax
084ca1b7 +0x1ab:  mov    %eax,(%esp)
084ca1ba +0x1ae:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ca1bf +0x1b3:  jmp    084ca1dc <+0x1d0>
084ca1c1 +0x1b5:  mov    %edx,%ebx
084ca1c3 +0x1b7:  mov    %eax,%esi
084ca1c5 +0x1b9:  lea    -0x28(%ebp),%eax
084ca1c8 +0x1bc:  mov    %eax,(%esp)
084ca1cb +0x1bf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084ca1d0 +0x1c4:  mov    %esi,%eax
084ca1d2 +0x1c6:  mov    %ebx,%edx
084ca1d4 +0x1c8:  mov    %eax,(%esp)
084ca1d7 +0x1cb:  call   08ae3750 <_Unwind_Resume>
084ca1dc +0x1d0:  mov    %ebx,%eax
084ca1de +0x1d2:  add    $0x40,%esp
084ca1e1 +0x1d5:  pop    %ebx
084ca1e2 +0x1d6:  pop    %esi
084ca1e3 +0x1d7:  pop    %ebp
084ca1e4 +0x1d8:  ret
084ca1e5 +0x1d9:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildDismiss::dispatch_sig @ 0x84ca00c

/* Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  PacketGuard local_2c [12];
  cMyTrace local_20 [16];
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_10 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_10 + 0xe)) {
      iVar2 = CUser::GetGuildDBInfo((CUser *)param_2);
      uVar1 = *(undefined4 *)(iVar2 + 0x17);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      cMyTrace::cMyTrace(local_20,
                         "virtual int Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser*, char*, int)"
                         ,0x242d,0);
      cMyTrace::operator()
                (local_20,"Guild Create Right Init! Char id : %d, Master Id : %d",uVar3,uVar1);
      iVar2 = CUser::GetGuildDBInfo((CUser *)param_2);
      iVar2 = *(int *)(iVar2 + 0x17);
      iVar4 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == iVar4) {
        CUserCharacInfo::set_guild_create_right((CUserCharacInfo *)param_2,'\0');
      }
      CUserCharacInfo::set_charac_guildkey((CUserCharacInfo *)param_2,0);
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084ca185 to 084ca1ae has its CatchHandler @ 084ca1c1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x3d);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send((CUser *)param_2,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
    else {
      uVar1 = *(undefined4 *)(local_10 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildDismiss::dispatch_sig(CUser*, char*, int)",
                 0x2429,
                 "Inter_MonitorNoticeGuildDismiss::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```
