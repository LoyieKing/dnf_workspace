# dispatch_sig

`_ZN35Inter_MonitorSetSubGuildMasterReply12dispatch_sigEP5CUserPci`

`Inter_MonitorSetSubGuildMasterReply::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorSetSubGuildMasterReply` | `0x084cc35c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cc35c  _ZN35Inter_MonitorSetSubGuildMasterReply12dispatch_sigEP5CUserPci
#           Inter_MonitorSetSubGuildMasterReply::dispatch_sig(CUser*, char*, int)
# range [0x084cc35c, 0x084cc55d]
084cc35c +0x000:  push   %ebp
084cc35d +0x001:  mov    %esp,%ebp
084cc35f +0x003:  push   %edi
084cc360 +0x004:  push   %esi
084cc361 +0x005:  push   %ebx
084cc362 +0x006:  sub    $0x5c,%esp
084cc365 +0x009:  mov    0xc(%ebp),%eax
084cc368 +0x00c:  mov    %eax,(%esp)
084cc36b +0x00f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cc370 +0x014:  test   %eax,%eax
084cc372 +0x016:  sete   %al
084cc375 +0x019:  test   %al,%al
084cc377 +0x01b:  je     084cc383 <+0x27>
084cc379 +0x01d:  mov    $0x0,%ebx
084cc37e +0x022:  jmp    084cc553 <+0x1f7>
084cc383 +0x027:  mov    0x10(%ebp),%eax
084cc386 +0x02a:  mov    %eax,-0x20(%ebp)
084cc389 +0x02d:  mov    -0x20(%ebp),%eax
084cc38c +0x030:  mov    0x12(%eax),%ebx
084cc38f +0x033:  movl   $0xffffffff,0x4(%esp)
084cc397 +0x03b:  mov    0xc(%ebp),%eax
084cc39a +0x03e:  mov    %eax,(%esp)
084cc39d +0x041:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cc3a2 +0x046:  cmp    %eax,%ebx
084cc3a4 +0x048:  setne  %al
084cc3a7 +0x04b:  test   %al,%al
084cc3a9 +0x04d:  je     084cc3b5 <+0x59>
084cc3ab +0x04f:  mov    $0x0,%ebx
084cc3b0 +0x054:  jmp    084cc553 <+0x1f7>
084cc3b5 +0x059:  lea    -0x2c(%ebp),%eax
084cc3b8 +0x05c:  mov    %eax,(%esp)
084cc3bb +0x05f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cc3c0 +0x064:  movl   $0x81,0x8(%esp)
084cc3c8 +0x06c:  movl   $0x1,0x4(%esp)
084cc3d0 +0x074:  lea    -0x2c(%ebp),%eax
084cc3d3 +0x077:  mov    %eax,(%esp)
084cc3d6 +0x07a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cc3db +0x07f:  mov    -0x20(%ebp),%eax
084cc3de +0x082:  mov    0xa(%eax),%eax
084cc3e1 +0x085:  test   %eax,%eax
084cc3e3 +0x087:  jne    084cc4d9 <+0x17d>
084cc3e9 +0x08d:  movl   $0x1,0x4(%esp)
084cc3f1 +0x095:  lea    -0x2c(%ebp),%eax
084cc3f4 +0x098:  mov    %eax,(%esp)
084cc3f7 +0x09b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc3fc +0x0a0:  mov    -0x20(%ebp),%eax
084cc3ff +0x0a3:  mov    0xa(%eax),%eax
084cc402 +0x0a6:  mov    %eax,0x4(%esp)
084cc406 +0x0aa:  lea    -0x2c(%ebp),%eax
084cc409 +0x0ad:  mov    %eax,(%esp)
084cc40c +0x0b0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc411 +0x0b5:  mov    -0x20(%ebp),%eax
084cc414 +0x0b8:  add    $0x17,%eax
084cc417 +0x0bb:  mov    %eax,(%esp)
084cc41a +0x0be:  call   0807e3b0 <_init+0xca8>
084cc41f +0x0c3:  mov    %eax,-0x1c(%ebp)
084cc422 +0x0c6:  mov    -0x1c(%ebp),%eax
084cc425 +0x0c9:  mov    %eax,0x4(%esp)
084cc429 +0x0cd:  lea    -0x2c(%ebp),%eax
084cc42c +0x0d0:  mov    %eax,(%esp)
084cc42f +0x0d3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084cc434 +0x0d8:  mov    -0x20(%ebp),%eax
084cc437 +0x0db:  lea    0x17(%eax),%edx
084cc43a +0x0de:  mov    -0x1c(%ebp),%eax
084cc43d +0x0e1:  mov    %eax,0x8(%esp)
084cc441 +0x0e5:  mov    %edx,0x4(%esp)
084cc445 +0x0e9:  lea    -0x2c(%ebp),%eax
084cc448 +0x0ec:  mov    %eax,(%esp)
084cc44b +0x0ef:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cc450 +0x0f4:  mov    -0x20(%ebp),%eax
084cc453 +0x0f7:  movzbl 0x16(%eax),%eax
084cc457 +0x0fb:  movzbl %al,%eax
084cc45a +0x0fe:  mov    %eax,0x4(%esp)
084cc45e +0x102:  lea    -0x2c(%ebp),%eax
084cc461 +0x105:  mov    %eax,(%esp)
084cc464 +0x108:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc469 +0x10d:  mov    -0x20(%ebp),%eax
084cc46c +0x110:  movzbl 0x16(%eax),%eax
084cc470 +0x114:  movzbl %al,%eax
084cc473 +0x117:  mov    %eax,-0x40(%ebp)
084cc476 +0x11a:  mov    -0x20(%ebp),%eax
084cc479 +0x11d:  movzbl 0x35(%eax),%eax
084cc47d +0x121:  movzbl %al,%eax
084cc480 +0x124:  mov    %eax,-0x3c(%ebp)
084cc483 +0x127:  mov    -0x20(%ebp),%eax
084cc486 +0x12a:  mov    0x36(%eax),%edi
084cc489 +0x12d:  mov    -0x20(%ebp),%eax
084cc48c +0x130:  mov    0x12(%eax),%esi
084cc48f +0x133:  mov    0xc(%ebp),%eax
084cc492 +0x136:  mov    %eax,(%esp)
084cc495 +0x139:  call   08230164 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x580e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x580e
084cc49a +0x13e:  mov    %eax,%ebx
084cc49c +0x140:  mov    0xc(%ebp),%eax
084cc49f +0x143:  mov    %eax,(%esp)
084cc4a2 +0x146:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084cc4a7 +0x14b:  mov    %eax,%edx
084cc4a9 +0x14d:  mov    0xc(%ebp),%eax
084cc4ac +0x150:  add    $0x79700,%eax
084cc4b1 +0x155:  mov    -0x40(%ebp),%ecx
084cc4b4 +0x158:  mov    %ecx,0x18(%esp)
084cc4b8 +0x15c:  mov    -0x3c(%ebp),%ecx
084cc4bb +0x15f:  mov    %ecx,0x14(%esp)
084cc4bf +0x163:  mov    %edi,0x10(%esp)
084cc4c3 +0x167:  mov    %esi,0xc(%esp)
084cc4c7 +0x16b:  mov    %ebx,0x8(%esp)
084cc4cb +0x16f:  mov    %edx,0x4(%esp)
084cc4cf +0x173:  mov    %eax,(%esp)
084cc4d2 +0x176:  call   08685c4e <_ZN15cUserHistoryLog16GuildChangeGradeEjPKcjjhh>  ; cUserHistoryLog::GuildChangeGrade(unsigned int, char const*, unsigned int, unsigned int, unsigned char, unsigned char)
084cc4d7 +0x17b:  jmp    084cc501 <+0x1a5>
084cc4d9 +0x17d:  movl   $0x0,0x4(%esp)
084cc4e1 +0x185:  lea    -0x2c(%ebp),%eax
084cc4e4 +0x188:  mov    %eax,(%esp)
084cc4e7 +0x18b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc4ec +0x190:  mov    -0x20(%ebp),%eax
084cc4ef +0x193:  mov    0xa(%eax),%eax
084cc4f2 +0x196:  mov    %eax,0x4(%esp)
084cc4f6 +0x19a:  lea    -0x2c(%ebp),%eax
084cc4f9 +0x19d:  mov    %eax,(%esp)
084cc4fc +0x1a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cc501 +0x1a5:  movl   $0x1,0x4(%esp)
084cc509 +0x1ad:  lea    -0x2c(%ebp),%eax
084cc50c +0x1b0:  mov    %eax,(%esp)
084cc50f +0x1b3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cc514 +0x1b8:  lea    -0x2c(%ebp),%eax
084cc517 +0x1bb:  mov    %eax,0x4(%esp)
084cc51b +0x1bf:  mov    0xc(%ebp),%eax
084cc51e +0x1c2:  mov    %eax,(%esp)
084cc521 +0x1c5:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cc526 +0x1ca:  mov    $0x0,%ebx
084cc52b +0x1cf:  lea    -0x2c(%ebp),%eax
084cc52e +0x1d2:  mov    %eax,(%esp)
084cc531 +0x1d5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc536 +0x1da:  jmp    084cc553 <+0x1f7>
084cc538 +0x1dc:  mov    %edx,%ebx
084cc53a +0x1de:  mov    %eax,%esi
084cc53c +0x1e0:  lea    -0x2c(%ebp),%eax
084cc53f +0x1e3:  mov    %eax,(%esp)
084cc542 +0x1e6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cc547 +0x1eb:  mov    %esi,%eax
084cc549 +0x1ed:  mov    %ebx,%edx
084cc54b +0x1ef:  mov    %eax,(%esp)
084cc54e +0x1f2:  call   08ae3750 <_Unwind_Resume>
084cc553 +0x1f7:  mov    %ebx,%eax
084cc555 +0x1f9:  add    $0x5c,%esp
084cc558 +0x1fc:  pop    %ebx
084cc559 +0x1fd:  pop    %esi
084cc55a +0x1fe:  pop    %edi
084cc55b +0x1ff:  pop    %ebp
084cc55c +0x200:  ret
084cc55d +0x201:  nop
```

## 反编译 C

```c
// Inter_MonitorSetSubGuildMasterReply::dispatch_sig @ 0x84cc35c

/* Inter_MonitorSetSubGuildMasterReply::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorSetSubGuildMasterReply::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uchar uVar1;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  PacketGuard local_30 [12];
  int local_24;
  size_t local_20;
  
  iVar5 = CUser::get_state((CUser *)param_2);
  if (iVar5 != 0) {
    local_24 = param_3;
    iVar5 = *(int *)(param_3 + 0x12);
    iVar6 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar5 == iVar6) {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084cc3d6 to 084cc525 has its CatchHandler @ 084cc538 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x81);
      if (*(int *)(local_24 + 10) == 0) {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(local_24 + 10));
        local_20 = strlen((char *)(local_24 + 0x17));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_20);
        InterfacePacketBuf::put_str
                  ((InterfacePacketBuf *)local_30,(char *)(local_24 + 0x17),local_20);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_24 + 0x16));
        uVar1 = *(uchar *)(local_24 + 0x16);
        uVar2 = *(uchar *)(local_24 + 0x35);
        uVar3 = *(uint *)(local_24 + 0x36);
        uVar4 = *(uint *)(local_24 + 0x12);
        pcVar7 = (char *)CUser::GetGuildDBInfo((CUser *)param_2);
        uVar8 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
        cUserHistoryLog::GuildChangeGrade
                  ((cUserHistoryLog *)(param_2 + 0x79700),uVar8,pcVar7,uVar4,uVar3,uVar2,uVar1);
      }
      else {
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(local_24 + 10));
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 0;
}
```
