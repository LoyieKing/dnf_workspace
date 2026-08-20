# dispatch_sig

`_ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci`

`Inter_MonitorNoticeGuildNames::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorNoticeGuildNames` | `0x084cafce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cafce  _ZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPci
#           Inter_MonitorNoticeGuildNames::dispatch_sig(CUser*, char*, int)
# range [0x084cafce, 0x084cb1ab]
084cafce +0x000:  push   %ebp
084cafcf +0x001:  mov    %esp,%ebp
084cafd1 +0x003:  push   %esi
084cafd2 +0x004:  push   %ebx
084cafd3 +0x005:  sub    $0x40,%esp
084cafd6 +0x008:  mov    0xc(%ebp),%eax
084cafd9 +0x00b:  mov    %eax,(%esp)
084cafdc +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cafe1 +0x013:  test   %eax,%eax
084cafe3 +0x015:  sete   %al
084cafe6 +0x018:  test   %al,%al
084cafe8 +0x01a:  je     084caff4 <+0x26>
084cafea +0x01c:  mov    $0x0,%ebx
084cafef +0x021:  jmp    084cb1a2 <+0x1d4>
084caff4 +0x026:  mov    0x10(%ebp),%eax
084caff7 +0x029:  mov    %eax,-0x14(%ebp)
084caffa +0x02c:  movl   $0xffffffff,0x4(%esp)
084cb002 +0x034:  mov    0xc(%ebp),%eax
084cb005 +0x037:  mov    %eax,(%esp)
084cb008 +0x03a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cb00d +0x03f:  mov    %eax,%edx
084cb00f +0x041:  mov    -0x14(%ebp),%eax
084cb012 +0x044:  mov    0xe(%eax),%eax
084cb015 +0x047:  cmp    %eax,%edx
084cb017 +0x049:  setne  %al
084cb01a +0x04c:  test   %al,%al
084cb01c +0x04e:  je     084cb075 <+0xa7>
084cb01e +0x050:  mov    -0x14(%ebp),%eax
084cb021 +0x053:  mov    0xe(%eax),%ebx
084cb024 +0x056:  movl   $0xffffffff,0x4(%esp)
084cb02c +0x05e:  mov    0xc(%ebp),%eax
084cb02f +0x061:  mov    %eax,(%esp)
084cb032 +0x064:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084cb037 +0x069:  mov    %ebx,0x18(%esp)
084cb03b +0x06d:  mov    %eax,0x14(%esp)
084cb03f +0x071:  movl   $"Packet_Monitor_Notice_Guild_Char_Names::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)",0x10(%esp)
084cb047 +0x079:  movl   $0x255f,0xc(%esp)
084cb04f +0x081:  movl   $&_ZZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cb057 +0x089:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cb05f +0x091:  movl   $0x1,(%esp)
084cb066 +0x098:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cb06b +0x09d:  mov    $0x0,%ebx
084cb070 +0x0a2:  jmp    084cb1a2 <+0x1d4>
084cb075 +0x0a7:  mov    0xc(%ebp),%eax
084cb078 +0x0aa:  mov    %eax,(%esp)
084cb07b +0x0ad:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084cb080 +0x0b2:  mov    -0x14(%ebp),%edx
084cb083 +0x0b5:  mov    0x12(%edx),%edx
084cb086 +0x0b8:  cmp    %edx,%eax
084cb088 +0x0ba:  setne  %al
084cb08b +0x0bd:  test   %al,%al
084cb08d +0x0bf:  je     084cb0c5 <+0xf7>
084cb08f +0x0c1:  movl   $"Inter_MonitorCallGuildMembers::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey",0x10(%esp)
084cb097 +0x0c9:  movl   $0x2565,0xc(%esp)
084cb09f +0x0d1:  movl   $&_ZZN29Inter_MonitorNoticeGuildNames12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cb0a7 +0x0d9:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cb0af +0x0e1:  movl   $0x1,(%esp)
084cb0b6 +0x0e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cb0bb +0x0ed:  mov    $0x0,%ebx
084cb0c0 +0x0f2:  jmp    084cb1a2 <+0x1d4>
084cb0c5 +0x0f7:  lea    -0x20(%ebp),%eax
084cb0c8 +0x0fa:  mov    %eax,(%esp)
084cb0cb +0x0fd:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084cb0d0 +0x102:  movl   $0x3f,0x8(%esp)
084cb0d8 +0x10a:  movl   $0x0,0x4(%esp)
084cb0e0 +0x112:  lea    -0x20(%ebp),%eax
084cb0e3 +0x115:  mov    %eax,(%esp)
084cb0e6 +0x118:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cb0eb +0x11d:  mov    -0x14(%ebp),%eax
084cb0ee +0x120:  movzbl 0x16(%eax),%eax
084cb0f2 +0x124:  movzbl %al,%eax
084cb0f5 +0x127:  mov    %eax,-0x10(%ebp)
084cb0f8 +0x12a:  mov    -0x10(%ebp),%eax
084cb0fb +0x12d:  mov    %eax,0x4(%esp)
084cb0ff +0x131:  lea    -0x20(%ebp),%eax
084cb102 +0x134:  mov    %eax,(%esp)
084cb105 +0x137:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cb10a +0x13c:  movl   $0x0,-0xc(%ebp)
084cb111 +0x143:  jmp    084cb143 <+0x175>
084cb113 +0x145:  mov    -0xc(%ebp),%eax
084cb116 +0x148:  add    %eax,%eax
084cb118 +0x14a:  mov    %eax,%edx
084cb11a +0x14c:  shl    $0x4,%edx
084cb11d +0x14f:  sub    %eax,%edx
084cb11f +0x151:  lea    0x10(%edx),%eax
084cb122 +0x154:  add    -0x14(%ebp),%eax
084cb125 +0x157:  add    $0x7,%eax
084cb128 +0x15a:  movl   $0x1e,0x8(%esp)
084cb130 +0x162:  mov    %eax,0x4(%esp)
084cb134 +0x166:  lea    -0x20(%ebp),%eax
084cb137 +0x169:  mov    %eax,(%esp)
084cb13a +0x16c:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084cb13f +0x171:  addl   $0x1,-0xc(%ebp)
084cb143 +0x175:  mov    -0xc(%ebp),%eax
084cb146 +0x178:  cmp    -0x10(%ebp),%eax
084cb149 +0x17b:  setl   %al
084cb14c +0x17e:  test   %al,%al
084cb14e +0x180:  jne    084cb113 <+0x145>
084cb150 +0x182:  movl   $0x1,0x4(%esp)
084cb158 +0x18a:  lea    -0x20(%ebp),%eax
084cb15b +0x18d:  mov    %eax,(%esp)
084cb15e +0x190:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084cb163 +0x195:  lea    -0x20(%ebp),%eax
084cb166 +0x198:  mov    %eax,0x4(%esp)
084cb16a +0x19c:  mov    0xc(%ebp),%eax
084cb16d +0x19f:  mov    %eax,(%esp)
084cb170 +0x1a2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084cb175 +0x1a7:  mov    $0x0,%ebx
084cb17a +0x1ac:  lea    -0x20(%ebp),%eax
084cb17d +0x1af:  mov    %eax,(%esp)
084cb180 +0x1b2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb185 +0x1b7:  jmp    084cb1a2 <+0x1d4>
084cb187 +0x1b9:  mov    %edx,%ebx
084cb189 +0x1bb:  mov    %eax,%esi
084cb18b +0x1bd:  lea    -0x20(%ebp),%eax
084cb18e +0x1c0:  mov    %eax,(%esp)
084cb191 +0x1c3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cb196 +0x1c8:  mov    %esi,%eax
084cb198 +0x1ca:  mov    %ebx,%edx
084cb19a +0x1cc:  mov    %eax,(%esp)
084cb19d +0x1cf:  call   08ae3750 <_Unwind_Resume>
084cb1a2 +0x1d4:  mov    %ebx,%eax
084cb1a4 +0x1d6:  add    $0x40,%esp
084cb1a7 +0x1d9:  pop    %ebx
084cb1a8 +0x1da:  pop    %esi
084cb1a9 +0x1db:  pop    %ebp
084cb1aa +0x1dc:  ret
084cb1ab +0x1dd:  nop
```

## 反编译 C

```c
// Inter_MonitorNoticeGuildNames::dispatch_sig @ 0x84cafce

/* Inter_MonitorNoticeGuildNames::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorNoticeGuildNames::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_24 [12];
  int local_18;
  uint local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 != 0) {
    local_18 = param_3;
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar2 == *(int *)(local_18 + 0xe)) {
      iVar2 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      if (iVar2 == *(int *)(local_18 + 0x12)) {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084cb0e6 to 084cb174 has its CatchHandler @ 084cb187 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x3f);
        local_14 = (uint)*(byte *)(local_18 + 0x16);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,local_14);
        for (local_10 = 0; local_10 < (int)local_14; local_10 = local_10 + 1) {
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_24,(char *)(local_10 * 0x1e + local_18 + 0x17),0x1e
                    );
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send((CUser *)param_2,local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      else {
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorNoticeGuildNames::dispatch_sig(CUser*, char*, int)",
                   0x2565,
                   "Inter_MonitorCallGuildMembers::dispatch_sig() : pUser->get_charac_guildkey() != recv->m_uGuildKey"
                  );
      }
    }
    else {
      uVar1 = *(undefined4 *)(local_18 + 0xe);
      uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorNoticeGuildNames::dispatch_sig(CUser*, char*, int)",
                 0x255f,
                 "Packet_Monitor_Notice_Guild_Char_Names::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                 ,uVar3,uVar1);
    }
  }
  return 0;
}
```
