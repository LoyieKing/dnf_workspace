# dispatch_sig

`_ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildEnter::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildEnter` | `0x084c9194` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c9194  _ZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildEnter::dispatch_sig(CUser*, char*, int)
# range [0x084c9194, 0x084c93e3]
084c9194 +0x000:  push   %ebp
084c9195 +0x001:  mov    %esp,%ebp
084c9197 +0x003:  push   %edi
084c9198 +0x004:  push   %esi
084c9199 +0x005:  push   %ebx
084c919a +0x006:  sub    $0x5c,%esp
084c919d +0x009:  mov    0xc(%ebp),%eax
084c91a0 +0x00c:  mov    %eax,(%esp)
084c91a3 +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084c91a8 +0x014:  test   %eax,%eax
084c91aa +0x016:  sete   %al
084c91ad +0x019:  test   %al,%al
084c91af +0x01b:  je     084c91bb <+0x27>
084c91b1 +0x01d:  mov    $0x0,%ebx
084c91b6 +0x022:  jmp    084c93d9 <+0x245>
084c91bb +0x027:  mov    0x10(%ebp),%eax
084c91be +0x02a:  mov    %eax,-0x24(%ebp)
084c91c1 +0x02d:  movl   $0xffffffff,0x4(%esp)
084c91c9 +0x035:  mov    0xc(%ebp),%eax
084c91cc +0x038:  mov    %eax,(%esp)
084c91cf +0x03b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c91d4 +0x040:  mov    %eax,%edx
084c91d6 +0x042:  mov    -0x24(%ebp),%eax
084c91d9 +0x045:  mov    0xe(%eax),%eax
084c91dc +0x048:  cmp    %eax,%edx
084c91de +0x04a:  setne  %al
084c91e1 +0x04d:  test   %al,%al
084c91e3 +0x04f:  je     084c923c <+0xa8>
084c91e5 +0x051:  mov    -0x24(%ebp),%eax
084c91e8 +0x054:  mov    0xe(%eax),%ebx
084c91eb +0x057:  movl   $0xffffffff,0x4(%esp)
084c91f3 +0x05f:  mov    0xc(%ebp),%eax
084c91f6 +0x062:  mov    %eax,(%esp)
084c91f9 +0x065:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084c91fe +0x06a:  mov    %ebx,0x18(%esp)
084c9202 +0x06e:  mov    %eax,0x14(%esp)
084c9206 +0x072:  movl   $"Inter_MonitorNoticeGuildEnter::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084c920e +0x07a:  movl   $0x2305,0xc(%esp)
084c9216 +0x082:  movl   $&_ZZN29Inter_MonitorNoticeGuildEnter12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084c921e +0x08a:  movl   $"InterDispatcher.cpp",0x4(%esp)
084c9226 +0x092:  movl   $0x1,(%esp)
084c922d +0x099:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084c9232 +0x09e:  mov    $0x0,%ebx
084c9237 +0x0a3:  jmp    084c93d9 <+0x245>
084c923c +0x0a8:  mov    -0x24(%ebp),%eax
084c923f +0x0ab:  mov    0x55(%eax),%ebx
084c9242 +0x0ae:  mov    0xc(%ebp),%eax
084c9245 +0x0b1:  mov    %eax,(%esp)
084c9248 +0x0b4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084c924d +0x0b9:  cmp    %eax,%ebx
084c924f +0x0bb:  sete   %al
084c9252 +0x0be:  test   %al,%al
084c9254 +0x0c0:  je     084c92b9 <+0x125>
084c9256 +0x0c2:  mov    -0x24(%ebp),%eax
084c9259 +0x0c5:  movzbl 0x59(%eax),%eax
084c925d +0x0c9:  test   %al,%al
084c925f +0x0cb:  je     084c9268 <+0xd4>
084c9261 +0x0cd:  mov    $0x1,%ebx
084c9266 +0x0d2:  jmp    084c926d <+0xd9>
084c9268 +0x0d4:  mov    $0x0,%ebx
084c926d +0x0d9:  mov    -0x24(%ebp),%eax
084c9270 +0x0dc:  movzwl 0x12(%eax),%eax
084c9274 +0x0e0:  movzwl %ax,%edi
084c9277 +0x0e3:  mov    -0x24(%ebp),%eax
084c927a +0x0e6:  mov    0x1c(%eax),%esi
084c927d +0x0e9:  mov    -0x24(%ebp),%eax
084c9280 +0x0ec:  add    $0x20,%eax
084c9283 +0x0ef:  mov    %eax,-0x3c(%ebp)
084c9286 +0x0f2:  mov    0xc(%ebp),%eax
084c9289 +0x0f5:  mov    %eax,(%esp)
084c928c +0x0f8:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084c9291 +0x0fd:  mov    0xc(%ebp),%edx
084c9294 +0x100:  add    $0x79700,%edx
084c929a +0x106:  mov    %ebx,0x14(%esp)
084c929e +0x10a:  mov    %edi,0x10(%esp)
084c92a2 +0x10e:  mov    %esi,0xc(%esp)
084c92a6 +0x112:  mov    -0x3c(%ebp),%ecx
084c92a9 +0x115:  mov    %ecx,0x8(%esp)
084c92ad +0x119:  mov    %eax,0x4(%esp)
084c92b1 +0x11d:  mov    %edx,(%esp)
084c92b4 +0x120:  call   08685a48 <_ZN15cUserHistoryLog9GuildJoinEjPKcjtc>  ; cUserHistoryLog::GuildJoin(unsigned int, char const*, unsigned int, unsigned short, char)
084c92b9 +0x125:  lea    -0x30(%ebp),%eax
084c92bc +0x128:  mov    %eax,(%esp)
084c92bf +0x12b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084c92c4 +0x130:  movl   $0x3a,0x8(%esp)
084c92cc +0x138:  movl   $0x0,0x4(%esp)
084c92d4 +0x140:  lea    -0x30(%ebp),%eax
084c92d7 +0x143:  mov    %eax,(%esp)
084c92da +0x146:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084c92df +0x14b:  mov    -0x24(%ebp),%eax
084c92e2 +0x14e:  mov    0x14(%eax),%eax
084c92e5 +0x151:  mov    %eax,0x4(%esp)
084c92e9 +0x155:  lea    -0x30(%ebp),%eax
084c92ec +0x158:  mov    %eax,(%esp)
084c92ef +0x15b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c92f4 +0x160:  mov    -0x24(%ebp),%eax
084c92f7 +0x163:  mov    0x1c(%eax),%eax
084c92fa +0x166:  mov    %eax,0x4(%esp)
084c92fe +0x16a:  lea    -0x30(%ebp),%eax
084c9301 +0x16d:  mov    %eax,(%esp)
084c9304 +0x170:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c9309 +0x175:  mov    -0x24(%ebp),%eax
084c930c +0x178:  add    $0x20,%eax
084c930f +0x17b:  mov    %eax,(%esp)
084c9312 +0x17e:  call   0807e3b0 <_init+0xca8>
084c9317 +0x183:  mov    %eax,-0x20(%ebp)
084c931a +0x186:  mov    -0x20(%ebp),%eax
084c931d +0x189:  mov    %eax,0x4(%esp)
084c9321 +0x18d:  lea    -0x30(%ebp),%eax
084c9324 +0x190:  mov    %eax,(%esp)
084c9327 +0x193:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c932c +0x198:  mov    -0x24(%ebp),%eax
084c932f +0x19b:  lea    0x20(%eax),%edx
084c9332 +0x19e:  mov    -0x20(%ebp),%eax
084c9335 +0x1a1:  mov    %eax,0x8(%esp)
084c9339 +0x1a5:  mov    %edx,0x4(%esp)
084c933d +0x1a9:  lea    -0x30(%ebp),%eax
084c9340 +0x1ac:  mov    %eax,(%esp)
084c9343 +0x1af:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c9348 +0x1b4:  mov    -0x24(%ebp),%eax
084c934b +0x1b7:  add    $0x37,%eax
084c934e +0x1ba:  mov    %eax,(%esp)
084c9351 +0x1bd:  call   0807e3b0 <_init+0xca8>
084c9356 +0x1c2:  mov    %eax,-0x1c(%ebp)
084c9359 +0x1c5:  mov    -0x1c(%ebp),%eax
084c935c +0x1c8:  mov    %eax,0x4(%esp)
084c9360 +0x1cc:  lea    -0x30(%ebp),%eax
084c9363 +0x1cf:  mov    %eax,(%esp)
084c9366 +0x1d2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084c936b +0x1d7:  mov    -0x24(%ebp),%eax
084c936e +0x1da:  lea    0x37(%eax),%edx
084c9371 +0x1dd:  mov    -0x1c(%ebp),%eax
084c9374 +0x1e0:  mov    %eax,0x8(%esp)
084c9378 +0x1e4:  mov    %edx,0x4(%esp)
084c937c +0x1e8:  lea    -0x30(%ebp),%eax
084c937f +0x1eb:  mov    %eax,(%esp)
084c9382 +0x1ee:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084c9387 +0x1f3:  movl   $0x1,0x4(%esp)
084c938f +0x1fb:  lea    -0x30(%ebp),%eax
084c9392 +0x1fe:  mov    %eax,(%esp)
084c9395 +0x201:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084c939a +0x206:  lea    -0x30(%ebp),%eax
084c939d +0x209:  mov    %eax,0x4(%esp)
084c93a1 +0x20d:  mov    0xc(%ebp),%eax
084c93a4 +0x210:  mov    %eax,(%esp)
084c93a7 +0x213:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084c93ac +0x218:  mov    $0x0,%ebx
084c93b1 +0x21d:  lea    -0x30(%ebp),%eax
084c93b4 +0x220:  mov    %eax,(%esp)
084c93b7 +0x223:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c93bc +0x228:  jmp    084c93d9 <+0x245>
084c93be +0x22a:  mov    %edx,%ebx
084c93c0 +0x22c:  mov    %eax,%esi
084c93c2 +0x22e:  lea    -0x30(%ebp),%eax
084c93c5 +0x231:  mov    %eax,(%esp)
084c93c8 +0x234:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084c93cd +0x239:  mov    %esi,%eax
084c93cf +0x23b:  mov    %ebx,%edx
084c93d1 +0x23d:  mov    %eax,(%esp)
084c93d4 +0x240:  call   08ae3750 <_Unwind_Resume>
084c93d9 +0x245:  mov    %ebx,%eax
084c93db +0x247:  add    $0x5c,%esp
084c93de +0x24a:  pop    %ebx
084c93df +0x24b:  pop    %esi
084c93e0 +0x24c:  pop    %edi
084c93e1 +0x24d:  pop    %ebp
084c93e2 +0x24e:  ret
084c93e3 +0x24f:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildEnter::dispatch_sig @ 0x84c9194

/* Inter_MonitorNoticeGuildEnter::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildEnter::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  PacketGuard local_34 [12];
  int local_28;
  size_t local_24;
  size_t local_20;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (iVar5 != 0) {
    local_28 = param_3;
    iVar5 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar5 == *(int *)(local_28 + 0xe)) {
      iVar5 = *(int *)(local_28 + 0x55);
      iVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      if (iVar5 == iVar7) {
        cVar1 = *(char *)(local_28 + 0x59);
        uVar2 = *(ushort *)(local_28 + 0x12);
        uVar4 = *(uint *)(local_28 + 0x1c);
        pcVar8 = (char *)(local_28 + 0x20);
        uVar9 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
        cUserHistoryLog::GuildJoin
                  ((cUserHistoryLog *)(param_2 + 0x79700),uVar9,pcVar8,uVar4,uVar2,cVar1 != '\0');
      }
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084c92da to 084c93ab has its CatchHandler @ 084c93be */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x3a);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x14));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*(int *)(local_28 + 0x1c));
      local_24 = strlen((char *)(local_28 + 0x20));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_24);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_34,(char *)(local_28 + 0x20),local_24)
      ;
      local_20 = strlen((char *)(local_28 + 0x37));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,local_20);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_34,(char *)(local_28 + 0x37),local_20)
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      CUser::Send((CUser *)param_2,local_34);
      PacketGuard::~PacketGuard(local_34);
    }
    else {
      uVar3 = *(undefined4 *)(local_28 + 0xe);
      uVar6 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildEnter::dispatch_sig(CUser*, char*, int)",
                 0x2305,
                 "Inter_MonitorNoticeGuildEnter::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar6,uVar3);
    }
  }
  return 0;
}
```
