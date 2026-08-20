# addBadge

`_ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb`

`CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)`

| 类 | 地址 |
|---|---|
| `CLeagueMatch` | `0x0855e7ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0855e7ee  _ZN12CLeagueMatch8addBadgeEP10PlayerInfo15ENUM_BADGE_TYPEPhb
#           CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool)
# range [0x0855e7ee, 0x0855eb21]
0855e7ee +0x000:  push   %ebp
0855e7ef +0x001:  mov    %esp,%ebp
0855e7f1 +0x003:  push   %edi
0855e7f2 +0x004:  push   %esi
0855e7f3 +0x005:  push   %ebx
0855e7f4 +0x006:  sub    $0x13c,%esp
0855e7fa +0x00c:  mov    0x18(%ebp),%eax
0855e7fd +0x00f:  mov    %al,-0x12c(%ebp)
0855e803 +0x015:  mov    0xc(%ebp),%eax
0855e806 +0x018:  movzbl 0xc(%eax),%eax
0855e80a +0x01c:  xor    $0x1,%eax
0855e80d +0x01f:  test   %al,%al
0855e80f +0x021:  je     0855e81b <+0x2d>
0855e811 +0x023:  mov    $0x0,%ebx
0855e816 +0x028:  jmp    0855eb15 <+0x327>
0855e81b +0x02d:  mov    0xc(%ebp),%eax
0855e81e +0x030:  mov    0x8(%eax),%eax
0855e821 +0x033:  test   %eax,%eax
0855e823 +0x035:  jne    0855e82f <+0x41>
0855e825 +0x037:  mov    $0x0,%ebx
0855e82a +0x03c:  jmp    0855eb15 <+0x327>
0855e82f +0x041:  mov    0xc(%ebp),%eax
0855e832 +0x044:  mov    0x8(%eax),%eax
0855e835 +0x047:  mov    %eax,(%esp)
0855e838 +0x04a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0855e83d +0x04f:  test   %eax,%eax
0855e83f +0x051:  sete   %al
0855e842 +0x054:  test   %al,%al
0855e844 +0x056:  je     0855e850 <+0x62>
0855e846 +0x058:  mov    $0x0,%ebx
0855e84b +0x05d:  jmp    0855eb15 <+0x327>
0855e850 +0x062:  cmpl   $0x0,0x10(%ebp)
0855e854 +0x066:  jne    0855e880 <+0x92>
0855e856 +0x068:  mov    0xc(%ebp),%eax
0855e859 +0x06b:  mov    0x8(%eax),%eax
0855e85c +0x06e:  mov    0x10(%ebp),%edx
0855e85f +0x071:  mov    %edx,0x4(%esp)
0855e863 +0x075:  mov    %eax,(%esp)
0855e866 +0x078:  call   08568e48 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x812>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x812
0855e86b +0x07d:  cmp    $0x9,%ax
0855e86f +0x081:  setg   %al
0855e872 +0x084:  test   %al,%al
0855e874 +0x086:  je     0855e8c7 <+0xd9>
0855e876 +0x088:  mov    $0x0,%ebx
0855e87b +0x08d:  jmp    0855eb15 <+0x327>
0855e880 +0x092:  mov    0xc(%ebp),%eax
0855e883 +0x095:  mov    0x8(%eax),%eax
0855e886 +0x098:  movl   $0x1,0x4(%esp)
0855e88e +0x0a0:  mov    %eax,(%esp)
0855e891 +0x0a3:  call   08568e48 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x812>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x812
0855e896 +0x0a8:  movswl %ax,%ebx
0855e899 +0x0ab:  mov    0xc(%ebp),%eax
0855e89c +0x0ae:  mov    0x8(%eax),%eax
0855e89f +0x0b1:  movl   $0x2,0x4(%esp)
0855e8a7 +0x0b9:  mov    %eax,(%esp)
0855e8aa +0x0bc:  call   08568e48 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x812>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x812
0855e8af +0x0c1:  cwtl
0855e8b0 +0x0c2:  lea    (%ebx,%eax,1),%eax
0855e8b3 +0x0c5:  cmp    $0x9,%eax
0855e8b6 +0x0c8:  setg   %al
0855e8b9 +0x0cb:  test   %al,%al
0855e8bb +0x0cd:  je     0855e8c7 <+0xd9>
0855e8bd +0x0cf:  mov    $0x0,%ebx
0855e8c2 +0x0d4:  jmp    0855eb15 <+0x327>
0855e8c7 +0x0d9:  mov    0xc(%ebp),%eax
0855e8ca +0x0dc:  mov    0x8(%eax),%eax
0855e8cd +0x0df:  mov    0x10(%ebp),%edx
0855e8d0 +0x0e2:  mov    %edx,0x4(%esp)
0855e8d4 +0x0e6:  mov    %eax,(%esp)
0855e8d7 +0x0e9:  call   08568e5e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x828>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x828
0855e8dc +0x0ee:  mov    0x14(%ebp),%eax
0855e8df +0x0f1:  movb   $0x1,(%eax)
0855e8e2 +0x0f4:  movl   $0x0,-0x1c(%ebp)
0855e8e9 +0x0fb:  cmpb   $0x0,-0x12c(%ebp)
0855e8f0 +0x102:  je     0855e8f6 <+0x108>
0855e8f2 +0x104:  addl   $0x1,-0x1c(%ebp)
0855e8f6 +0x108:  lea    -0x128(%ebp),%ebx
0855e8fc +0x10e:  mov    $0x0,%eax
0855e901 +0x113:  mov    $0x40,%edx
0855e906 +0x118:  mov    %ebx,%edi
0855e908 +0x11a:  mov    %edx,%ecx
0855e90a +0x11c:  rep stos %eax,%es:(%edi)
0855e90c +0x11e:  mov    0x10(%ebp),%eax
0855e90f +0x121:  cmp    $0x1,%eax
0855e912 +0x124:  je     0855e926 <+0x138>
0855e914 +0x126:  cmp    $0x2,%eax
0855e917 +0x129:  je     0855e97b <+0x18d>
0855e919 +0x12b:  test   %eax,%eax
0855e91b +0x12d:  je     0855e9cd <+0x1df>
0855e921 +0x133:  jmp    0855ea1d <+0x22f>
0855e926 +0x138:  mov    0x14(%ebp),%eax
0855e929 +0x13b:  movzbl (%eax),%eax
0855e92c +0x13e:  movzbl %al,%eax
0855e92f +0x141:  mov    %eax,%ebx
0855e931 +0x143:  add    -0x1c(%ebp),%ebx
0855e934 +0x146:  movl   $0x0,0xc(%esp)
0855e93c +0x14e:  movl   $"school_red_badge_msg",0x8(%esp)
0855e944 +0x156:  movl   $0x4,0x4(%esp)
0855e94c +0x15e:  movl   $&g_scriptStringManager_,(%esp)
0855e953 +0x165:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0855e958 +0x16a:  mov    %ebx,0xc(%esp)
0855e95c +0x16e:  mov    %eax,0x8(%esp)
0855e960 +0x172:  movl   $0xff,0x4(%esp)
0855e968 +0x17a:  lea    -0x128(%ebp),%eax
0855e96e +0x180:  mov    %eax,(%esp)
0855e971 +0x183:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0855e976 +0x188:  jmp    0855ea1d <+0x22f>
0855e97b +0x18d:  mov    0x14(%ebp),%eax
0855e97e +0x190:  movzbl (%eax),%eax
0855e981 +0x193:  movzbl %al,%eax
0855e984 +0x196:  mov    %eax,%ebx
0855e986 +0x198:  add    -0x1c(%ebp),%ebx
0855e989 +0x19b:  movl   $0x0,0xc(%esp)
0855e991 +0x1a3:  movl   $"school_blue_badge_msg",0x8(%esp)
0855e999 +0x1ab:  movl   $0x4,0x4(%esp)
0855e9a1 +0x1b3:  movl   $&g_scriptStringManager_,(%esp)
0855e9a8 +0x1ba:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0855e9ad +0x1bf:  mov    %ebx,0xc(%esp)
0855e9b1 +0x1c3:  mov    %eax,0x8(%esp)
0855e9b5 +0x1c7:  movl   $0xff,0x4(%esp)
0855e9bd +0x1cf:  lea    -0x128(%ebp),%eax
0855e9c3 +0x1d5:  mov    %eax,(%esp)
0855e9c6 +0x1d8:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0855e9cb +0x1dd:  jmp    0855ea1d <+0x22f>
0855e9cd +0x1df:  mov    0x14(%ebp),%eax
0855e9d0 +0x1e2:  movzbl (%eax),%eax
0855e9d3 +0x1e5:  movzbl %al,%eax
0855e9d6 +0x1e8:  mov    %eax,%ebx
0855e9d8 +0x1ea:  add    -0x1c(%ebp),%ebx
0855e9db +0x1ed:  movl   $0x0,0xc(%esp)
0855e9e3 +0x1f5:  movl   $"school_green_badge_msg",0x8(%esp)
0855e9eb +0x1fd:  movl   $0x4,0x4(%esp)
0855e9f3 +0x205:  movl   $&g_scriptStringManager_,(%esp)
0855e9fa +0x20c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0855e9ff +0x211:  mov    %ebx,0xc(%esp)
0855ea03 +0x215:  mov    %eax,0x8(%esp)
0855ea07 +0x219:  movl   $0xff,0x4(%esp)
0855ea0f +0x221:  lea    -0x128(%ebp),%eax
0855ea15 +0x227:  mov    %eax,(%esp)
0855ea18 +0x22a:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0855ea1d +0x22f:  lea    -0x28(%ebp),%eax
0855ea20 +0x232:  mov    %eax,(%esp)
0855ea23 +0x235:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0855ea28 +0x23a:  movl   $0xc,0x8(%esp)
0855ea30 +0x242:  movl   $0x0,0x4(%esp)
0855ea38 +0x24a:  lea    -0x28(%ebp),%eax
0855ea3b +0x24d:  mov    %eax,(%esp)
0855ea3e +0x250:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0855ea43 +0x255:  movl   $0x0,0x4(%esp)
0855ea4b +0x25d:  lea    -0x28(%ebp),%eax
0855ea4e +0x260:  mov    %eax,(%esp)
0855ea51 +0x263:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855ea56 +0x268:  movl   $0x0,0x4(%esp)
0855ea5e +0x270:  lea    -0x28(%ebp),%eax
0855ea61 +0x273:  mov    %eax,(%esp)
0855ea64 +0x276:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0855ea69 +0x27b:  movl   $0x0,0x4(%esp)
0855ea71 +0x283:  lea    -0x28(%ebp),%eax
0855ea74 +0x286:  mov    %eax,(%esp)
0855ea77 +0x289:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0855ea7c +0x28e:  lea    -0x128(%ebp),%eax
0855ea82 +0x294:  mov    %eax,(%esp)
0855ea85 +0x297:  call   0807e3b0 <_init+0xca8>
0855ea8a +0x29c:  mov    %eax,0x4(%esp)
0855ea8e +0x2a0:  lea    -0x28(%ebp),%eax
0855ea91 +0x2a3:  mov    %eax,(%esp)
0855ea94 +0x2a6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0855ea99 +0x2ab:  lea    -0x128(%ebp),%eax
0855ea9f +0x2b1:  mov    %eax,(%esp)
0855eaa2 +0x2b4:  call   0807e3b0 <_init+0xca8>
0855eaa7 +0x2b9:  mov    %eax,0x8(%esp)
0855eaab +0x2bd:  lea    -0x128(%ebp),%eax
0855eab1 +0x2c3:  mov    %eax,0x4(%esp)
0855eab5 +0x2c7:  lea    -0x28(%ebp),%eax
0855eab8 +0x2ca:  mov    %eax,(%esp)
0855eabb +0x2cd:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
0855eac0 +0x2d2:  movl   $0x1,0x4(%esp)
0855eac8 +0x2da:  lea    -0x28(%ebp),%eax
0855eacb +0x2dd:  mov    %eax,(%esp)
0855eace +0x2e0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0855ead3 +0x2e5:  mov    0xc(%ebp),%eax
0855ead6 +0x2e8:  mov    0x8(%eax),%eax
0855ead9 +0x2eb:  lea    -0x28(%ebp),%edx
0855eadc +0x2ee:  mov    %edx,0x4(%esp)
0855eae0 +0x2f2:  mov    %eax,(%esp)
0855eae3 +0x2f5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0855eae8 +0x2fa:  mov    $0x1,%ebx
0855eaed +0x2ff:  lea    -0x28(%ebp),%eax
0855eaf0 +0x302:  mov    %eax,(%esp)
0855eaf3 +0x305:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855eaf8 +0x30a:  jmp    0855eb15 <+0x327>
0855eafa +0x30c:  mov    %edx,%ebx
0855eafc +0x30e:  mov    %eax,%esi
0855eafe +0x310:  lea    -0x28(%ebp),%eax
0855eb01 +0x313:  mov    %eax,(%esp)
0855eb04 +0x316:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0855eb09 +0x31b:  mov    %esi,%eax
0855eb0b +0x31d:  mov    %ebx,%edx
0855eb0d +0x31f:  mov    %eax,(%esp)
0855eb10 +0x322:  call   08ae3750 <_Unwind_Resume>
0855eb15 +0x327:  mov    %ebx,%eax
0855eb17 +0x329:  add    $0x13c,%esp
0855eb1d +0x32f:  pop    %ebx
0855eb1e +0x330:  pop    %esi
0855eb1f +0x331:  pop    %edi
0855eb20 +0x332:  pop    %ebp
0855eb21 +0x333:  ret
```

## 反编译 C

```c
// CLeagueMatch::addBadge @ 0x855e7ee

/* CLeagueMatch::addBadge(PlayerInfo*, ENUM_BADGE_TYPE, unsigned char*, bool) */

undefined4 __thiscall
CLeagueMatch::addBadge(undefined4 this,int param_1,int param_3,byte *param_4,char param_5)

{
  short sVar1;
  short sVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  byte bVar7;
  char local_12c [256];
  PacketGuard local_2c [12];
  uint local_20;
  
  bVar7 = 0;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if (*(int *)(param_1 + 8) == 0) {
      uVar6 = 0;
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(param_1 + 8));
      if (iVar3 == 0) {
        uVar6 = 0;
      }
      else {
        if (param_3 == 0) {
          sVar1 = CUser::GetDailyBadge(*(CUser **)(param_1 + 8),0);
          if (9 < sVar1) {
            return 0;
          }
        }
        else {
          sVar1 = CUser::GetDailyBadge(*(CUser **)(param_1 + 8),1);
          sVar2 = CUser::GetDailyBadge(*(CUser **)(param_1 + 8),2);
          if (9 < (int)sVar1 + (int)sVar2) {
            return 0;
          }
        }
        CUser::AddDailyBadge(*(CUser **)(param_1 + 8),param_3);
        *param_4 = 1;
        local_20 = (uint)(param_5 != '\0');
        pcVar4 = local_12c;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          pcVar4[0] = '\0';
          pcVar4[1] = '\0';
          pcVar4[2] = '\0';
          pcVar4[3] = '\0';
          pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
        }
        if (param_3 == 1) {
          iVar3 = *param_4 + local_20;
          pcVar4 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "school_red_badge_msg",(bool *)0x0);
          OS_API::snprintf(local_12c,0xff,pcVar4,iVar3);
        }
        else if (param_3 == 2) {
          iVar3 = *param_4 + local_20;
          pcVar4 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "school_blue_badge_msg",(bool *)0x0);
          OS_API::snprintf(local_12c,0xff,pcVar4,iVar3);
        }
        else if (param_3 == 0) {
          iVar3 = *param_4 + local_20;
          pcVar4 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "school_green_badge_msg",(bool *)0x0);
          OS_API::snprintf(local_12c,0xff,pcVar4,iVar3);
        }
        PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0855ea3e to 0855eae7 has its CatchHandler @ 0855eafa */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xc);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        sVar5 = strlen(local_12c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,sVar5);
        sVar5 = strlen(local_12c);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_2c,local_12c,sVar5);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send(*(CUser **)(param_1 + 8),local_2c);
        uVar6 = 1;
        PacketGuard::~PacketGuard(local_2c);
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}
```
