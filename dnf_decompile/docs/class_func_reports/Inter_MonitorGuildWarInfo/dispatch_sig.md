# dispatch_sig

`_ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci`

`Inter_MonitorGuildWarInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorGuildWarInfo` | `0x084ce7f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ce7f6  _ZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPci
#           Inter_MonitorGuildWarInfo::dispatch_sig(CUser*, char*, int)
# range [0x084ce7f6, 0x084cea91]
084ce7f6 +0x000:  push   %ebp
084ce7f7 +0x001:  mov    %esp,%ebp
084ce7f9 +0x003:  push   %esi
084ce7fa +0x004:  push   %ebx
084ce7fb +0x005:  sub    $0x40,%esp
084ce7fe +0x008:  mov    0xc(%ebp),%eax
084ce801 +0x00b:  mov    %eax,(%esp)
084ce804 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084ce809 +0x013:  test   %eax,%eax
084ce80b +0x015:  sete   %al
084ce80e +0x018:  test   %al,%al
084ce810 +0x01a:  je     084ce81c <+0x26>
084ce812 +0x01c:  mov    $0x0,%ebx
084ce817 +0x021:  jmp    084cea88 <+0x292>
084ce81c +0x026:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084ce821 +0x02b:  mov    %eax,(%esp)
084ce824 +0x02e:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084ce829 +0x033:  cmp    $0x6,%eax
084ce82c +0x036:  setne  %al
084ce82f +0x039:  test   %al,%al
084ce831 +0x03b:  je     084ce83d <+0x47>
084ce833 +0x03d:  mov    $0x0,%ebx
084ce838 +0x042:  jmp    084cea88 <+0x292>
084ce83d +0x047:  mov    0x10(%ebp),%eax
084ce840 +0x04a:  mov    %eax,-0x1c(%ebp)
084ce843 +0x04d:  movl   $0xffffffff,0x4(%esp)
084ce84b +0x055:  mov    0xc(%ebp),%eax
084ce84e +0x058:  mov    %eax,(%esp)
084ce851 +0x05b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ce856 +0x060:  mov    %eax,%edx
084ce858 +0x062:  mov    -0x1c(%ebp),%eax
084ce85b +0x065:  mov    0xe(%eax),%eax
084ce85e +0x068:  cmp    %eax,%edx
084ce860 +0x06a:  setne  %al
084ce863 +0x06d:  test   %al,%al
084ce865 +0x06f:  je     084ce8be <+0xc8>
084ce867 +0x071:  mov    -0x1c(%ebp),%eax
084ce86a +0x074:  mov    0xe(%eax),%ebx
084ce86d +0x077:  movl   $0xffffffff,0x4(%esp)
084ce875 +0x07f:  mov    0xc(%ebp),%eax
084ce878 +0x082:  mov    %eax,(%esp)
084ce87b +0x085:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084ce880 +0x08a:  mov    %ebx,0x18(%esp)
084ce884 +0x08e:  mov    %eax,0x14(%esp)
084ce888 +0x092:  movl   $"GuildWarInfo : Inter_MonitorGuildWarInfo::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084ce890 +0x09a:  movl   $0x2ad4,0xc(%esp)
084ce898 +0x0a2:  movl   $&_ZZN25Inter_MonitorGuildWarInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084ce8a0 +0x0aa:  movl   $"InterDispatcher.cpp",0x4(%esp)
084ce8a8 +0x0b2:  movl   $0x1,(%esp)
084ce8af +0x0b9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084ce8b4 +0x0be:  mov    $0x0,%ebx
084ce8b9 +0x0c3:  jmp    084cea88 <+0x292>
084ce8be +0x0c8:  lea    -0x28(%ebp),%eax
084ce8c1 +0x0cb:  mov    %eax,(%esp)
084ce8c4 +0x0ce:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ce8c9 +0x0d3:  movl   $0x70,0x8(%esp)
084ce8d1 +0x0db:  movl   $0x1,0x4(%esp)
084ce8d9 +0x0e3:  lea    -0x28(%ebp),%eax
084ce8dc +0x0e6:  mov    %eax,(%esp)
084ce8df +0x0e9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084ce8e4 +0x0ee:  movl   $0x1,0x4(%esp)
084ce8ec +0x0f6:  lea    -0x28(%ebp),%eax
084ce8ef +0x0f9:  mov    %eax,(%esp)
084ce8f2 +0x0fc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ce8f7 +0x101:  movl   $0x0,-0x18(%ebp)
084ce8fe +0x108:  movl   $0x0,-0x14(%ebp)
084ce905 +0x10f:  jmp    084ce92c <+0x136>
084ce907 +0x111:  mov    -0x14(%ebp),%edx
084ce90a +0x114:  mov    -0x1c(%ebp),%ecx
084ce90d +0x117:  mov    %edx,%eax
084ce90f +0x119:  shl    $0x5,%eax
084ce912 +0x11c:  add    %edx,%eax
084ce914 +0x11e:  lea    (%ecx,%eax,1),%eax
084ce917 +0x121:  add    $0x10,%eax
084ce91a +0x124:  mov    0x2(%eax),%eax
084ce91d +0x127:  test   %eax,%eax
084ce91f +0x129:  je     084ce927 <+0x131>
084ce921 +0x12b:  addl   $0x1,-0x18(%ebp)
084ce925 +0x12f:  jmp    084ce928 <+0x132>
084ce927 +0x131:  nop
084ce928 +0x132:  addl   $0x1,-0x14(%ebp)
084ce92c +0x136:  cmpl   $0x9,-0x14(%ebp)
084ce930 +0x13a:  setle  %al
084ce933 +0x13d:  test   %al,%al
084ce935 +0x13f:  jne    084ce907 <+0x111>
084ce937 +0x141:  mov    -0x18(%ebp),%eax
084ce93a +0x144:  mov    %eax,0x4(%esp)
084ce93e +0x148:  lea    -0x28(%ebp),%eax
084ce941 +0x14b:  mov    %eax,(%esp)
084ce944 +0x14e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ce949 +0x153:  movl   $0x0,-0x10(%ebp)
084ce950 +0x15a:  jmp    084cea25 <+0x22f>
084ce955 +0x15f:  mov    -0x10(%ebp),%edx
084ce958 +0x162:  mov    -0x1c(%ebp),%ecx
084ce95b +0x165:  mov    %edx,%eax
084ce95d +0x167:  shl    $0x5,%eax
084ce960 +0x16a:  add    %edx,%eax
084ce962 +0x16c:  lea    (%ecx,%eax,1),%eax
084ce965 +0x16f:  add    $0x10,%eax
084ce968 +0x172:  mov    0x2(%eax),%eax
084ce96b +0x175:  mov    %eax,0x4(%esp)
084ce96f +0x179:  lea    -0x28(%ebp),%eax
084ce972 +0x17c:  mov    %eax,(%esp)
084ce975 +0x17f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ce97a +0x184:  mov    -0x10(%ebp),%edx
084ce97d +0x187:  mov    -0x1c(%ebp),%ecx
084ce980 +0x18a:  mov    %edx,%eax
084ce982 +0x18c:  shl    $0x5,%eax
084ce985 +0x18f:  add    %edx,%eax
084ce987 +0x191:  lea    (%ecx,%eax,1),%eax
084ce98a +0x194:  add    $0x10,%eax
084ce98d +0x197:  mov    0x6(%eax),%eax
084ce990 +0x19a:  mov    %eax,0x4(%esp)
084ce994 +0x19e:  lea    -0x28(%ebp),%eax
084ce997 +0x1a1:  mov    %eax,(%esp)
084ce99a +0x1a4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ce99f +0x1a9:  mov    -0x10(%ebp),%edx
084ce9a2 +0x1ac:  mov    -0x1c(%ebp),%ecx
084ce9a5 +0x1af:  mov    %edx,%eax
084ce9a7 +0x1b1:  shl    $0x5,%eax
084ce9aa +0x1b4:  add    %edx,%eax
084ce9ac +0x1b6:  lea    (%ecx,%eax,1),%eax
084ce9af +0x1b9:  add    $0x10,%eax
084ce9b2 +0x1bc:  movzwl 0xa(%eax),%eax
084ce9b6 +0x1c0:  movzwl %ax,%eax
084ce9b9 +0x1c3:  mov    %eax,0x4(%esp)
084ce9bd +0x1c7:  lea    -0x28(%ebp),%eax
084ce9c0 +0x1ca:  mov    %eax,(%esp)
084ce9c3 +0x1cd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084ce9c8 +0x1d2:  mov    -0x10(%ebp),%edx
084ce9cb +0x1d5:  mov    %edx,%eax
084ce9cd +0x1d7:  shl    $0x5,%eax
084ce9d0 +0x1da:  add    %edx,%eax
084ce9d2 +0x1dc:  add    $0x10,%eax
084ce9d5 +0x1df:  add    -0x1c(%ebp),%eax
084ce9d8 +0x1e2:  add    $0xc,%eax
084ce9db +0x1e5:  mov    %eax,(%esp)
084ce9de +0x1e8:  call   0807e3b0 <_init+0xca8>
084ce9e3 +0x1ed:  mov    %eax,-0xc(%ebp)
084ce9e6 +0x1f0:  mov    -0xc(%ebp),%eax
084ce9e9 +0x1f3:  mov    %eax,0x4(%esp)
084ce9ed +0x1f7:  lea    -0x28(%ebp),%eax
084ce9f0 +0x1fa:  mov    %eax,(%esp)
084ce9f3 +0x1fd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ce9f8 +0x202:  mov    -0x10(%ebp),%edx
084ce9fb +0x205:  mov    %edx,%eax
084ce9fd +0x207:  shl    $0x5,%eax
084cea00 +0x20a:  add    %edx,%eax
084cea02 +0x20c:  add    $0x10,%eax
084cea05 +0x20f:  add    -0x1c(%ebp),%eax
084cea08 +0x212:  lea    0xc(%eax),%edx
084cea0b +0x215:  mov    -0xc(%ebp),%eax
084cea0e +0x218:  mov    %eax,0x8(%esp)
084cea12 +0x21c:  mov    %edx,0x4(%esp)
084cea16 +0x220:  lea    -0x28(%ebp),%eax
084cea19 +0x223:  mov    %eax,(%esp)
084cea1c +0x226:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cea21 +0x22b:  addl   $0x1,-0x10(%ebp)
084cea25 +0x22f:  mov    -0x10(%ebp),%eax
084cea28 +0x232:  cmp    -0x18(%ebp),%eax
084cea2b +0x235:  setl   %al
084cea2e +0x238:  test   %al,%al
084cea30 +0x23a:  jne    084ce955 <+0x15f>
084cea36 +0x240:  movl   $0x1,0x4(%esp)
084cea3e +0x248:  lea    -0x28(%ebp),%eax
084cea41 +0x24b:  mov    %eax,(%esp)
084cea44 +0x24e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cea49 +0x253:  lea    -0x28(%ebp),%eax
084cea4c +0x256:  mov    %eax,0x4(%esp)
084cea50 +0x25a:  mov    0xc(%ebp),%eax
084cea53 +0x25d:  mov    %eax,(%esp)
084cea56 +0x260:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cea5b +0x265:  mov    $0x0,%ebx
084cea60 +0x26a:  lea    -0x28(%ebp),%eax
084cea63 +0x26d:  mov    %eax,(%esp)
084cea66 +0x270:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cea6b +0x275:  jmp    084cea88 <+0x292>
084cea6d +0x277:  mov    %edx,%ebx
084cea6f +0x279:  mov    %eax,%esi
084cea71 +0x27b:  lea    -0x28(%ebp),%eax
084cea74 +0x27e:  mov    %eax,(%esp)
084cea77 +0x281:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cea7c +0x286:  mov    %esi,%eax
084cea7e +0x288:  mov    %ebx,%edx
084cea80 +0x28a:  mov    %eax,(%esp)
084cea83 +0x28d:  call   08ae3750 <_Unwind_Resume>
084cea88 +0x292:  mov    %ebx,%eax
084cea8a +0x294:  add    $0x40,%esp
084cea8d +0x297:  pop    %ebx
084cea8e +0x298:  pop    %esi
084cea8f +0x299:  pop    %ebp
084cea90 +0x29a:  ret
084cea91 +0x29b:  nop
```

## 反编译 C

```c
// Inter_MonitorGuildWarInfo::dispatch_sig @ 0x84ce7f6

/* Inter_MonitorGuildWarInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorGuildWarInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  GameWorld *this;
  undefined4 uVar3;
  PacketGuard local_2c [12];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  size_t local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    this = (GameWorld *)G_GameWorld();
    iVar2 = GameWorld::GetChannelType(this);
    if (iVar2 == 6) {
      local_20 = param_3;
      iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar2 == *(int *)(local_20 + 0xe)) {
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 084ce8df to 084cea5a has its CatchHandler @ 084cea6d */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x70);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
        local_1c = 0;
        for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
          if (*(int *)(local_20 + local_18 * 0x21 + 0x12) != 0) {
            local_1c = local_1c + 1;
          }
        }
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,local_1c);
        for (local_14 = 0; local_14 < local_1c; local_14 = local_14 + 1) {
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_2c,*(int *)(local_20 + local_14 * 0x21 + 0x12));
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_2c,*(int *)(local_20 + local_14 * 0x21 + 0x16));
          InterfacePacketBuf::put_short
                    ((InterfacePacketBuf *)local_2c,
                     (uint)*(ushort *)(local_20 + local_14 * 0x21 + 0x1a));
          local_10 = strlen((char *)(local_14 * 0x21 + local_20 + 0x1c));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_2c,(char *)(local_14 * 0x21 + local_20 + 0x1c),
                     local_10);
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send((CUser *)param_2,local_2c);
        PacketGuard::~PacketGuard(local_2c);
      }
      else {
        uVar1 = *(undefined4 *)(local_20 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorGuildWarInfo::dispatch_sig(CUser*, char*, int)",0x2ad4,
                   "GuildWarInfo : Inter_MonitorGuildWarInfo::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar1);
      }
    }
  }
  return 0;
}
```
