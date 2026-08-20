# dispatch_sig

`_ZN27Inter_NoticeDeleteGuildAgit12dispatch_sigEP5CUserPci`

`Inter_NoticeDeleteGuildAgit::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeDeleteGuildAgit` | `0x084dab18` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dab18  _ZN27Inter_NoticeDeleteGuildAgit12dispatch_sigEP5CUserPci
#           Inter_NoticeDeleteGuildAgit::dispatch_sig(CUser*, char*, int)
# range [0x084dab18, 0x084dacd9]
084dab18 +0x000:  push   %ebp
084dab19 +0x001:  mov    %esp,%ebp
084dab1b +0x003:  push   %esi
084dab1c +0x004:  push   %ebx
084dab1d +0x005:  sub    $0x30,%esp
084dab20 +0x008:  mov    0x10(%ebp),%eax
084dab23 +0x00b:  mov    %eax,-0xc(%ebp)
084dab26 +0x00e:  mov    -0xc(%ebp),%eax
084dab29 +0x011:  movzbl 0x16(%eax),%eax
084dab2d +0x015:  test   %al,%al
084dab2f +0x017:  je     084dab5c <+0x44>
084dab31 +0x019:  mov    -0xc(%ebp),%eax
084dab34 +0x01c:  movzbl 0x16(%eax),%eax
084dab38 +0x020:  movzbl %al,%eax
084dab3b +0x023:  mov    %eax,0x8(%esp)
084dab3f +0x027:  movl   $0xe8,0x4(%esp)
084dab47 +0x02f:  mov    0xc(%ebp),%eax
084dab4a +0x032:  mov    %eax,(%esp)
084dab4d +0x035:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084dab52 +0x03a:  mov    $0x0,%ebx
084dab57 +0x03f:  jmp    084dacd1 <+0x1b9>
084dab5c +0x044:  movl   $0x0,0x4(%esp)
084dab64 +0x04c:  mov    0xc(%ebp),%eax
084dab67 +0x04f:  mov    %eax,(%esp)
084dab6a +0x052:  call   084eceac <_GLOBAL__I__Z7getUserj+0x3e5e>  ; global constructors keyed to getUser(unsigned int)+0x3e5e
084dab6f +0x057:  mov    -0xc(%ebp),%eax
084dab72 +0x05a:  mov    0x12(%eax),%ebx
084dab75 +0x05d:  movl   $0xffffffff,0x4(%esp)
084dab7d +0x065:  mov    0xc(%ebp),%eax
084dab80 +0x068:  mov    %eax,(%esp)
084dab83 +0x06b:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084dab88 +0x070:  cmp    %eax,%ebx
084dab8a +0x072:  sete   %al
084dab8d +0x075:  test   %al,%al
084dab8f +0x077:  je     084dac1b <+0x103>
084dab95 +0x07d:  lea    -0x24(%ebp),%eax
084dab98 +0x080:  mov    %eax,(%esp)
084dab9b +0x083:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084daba0 +0x088:  movl   $0xe8,0x8(%esp)
084daba8 +0x090:  movl   $0x1,0x4(%esp)
084dabb0 +0x098:  lea    -0x24(%ebp),%eax
084dabb3 +0x09b:  mov    %eax,(%esp)
084dabb6 +0x09e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dabbb +0x0a3:  movl   $0x1,0x4(%esp)
084dabc3 +0x0ab:  lea    -0x24(%ebp),%eax
084dabc6 +0x0ae:  mov    %eax,(%esp)
084dabc9 +0x0b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084dabce +0x0b6:  movl   $0x1,0x4(%esp)
084dabd6 +0x0be:  lea    -0x24(%ebp),%eax
084dabd9 +0x0c1:  mov    %eax,(%esp)
084dabdc +0x0c4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dabe1 +0x0c9:  lea    -0x24(%ebp),%eax
084dabe4 +0x0cc:  mov    %eax,0x4(%esp)
084dabe8 +0x0d0:  mov    0xc(%ebp),%eax
084dabeb +0x0d3:  mov    %eax,(%esp)
084dabee +0x0d6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dabf3 +0x0db:  jmp    084dac10 <+0xf8>
084dabf5 +0x0dd:  mov    %edx,%ebx
084dabf7 +0x0df:  mov    %eax,%esi
084dabf9 +0x0e1:  lea    -0x24(%ebp),%eax
084dabfc +0x0e4:  mov    %eax,(%esp)
084dabff +0x0e7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dac04 +0x0ec:  mov    %esi,%eax
084dac06 +0x0ee:  mov    %ebx,%edx
084dac08 +0x0f0:  mov    %eax,(%esp)
084dac0b +0x0f3:  call   08ae3750 <_Unwind_Resume>
084dac10 +0x0f8:  lea    -0x24(%ebp),%eax
084dac13 +0x0fb:  mov    %eax,(%esp)
084dac16 +0x0fe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dac1b +0x103:  lea    -0x18(%ebp),%eax
084dac1e +0x106:  mov    %eax,(%esp)
084dac21 +0x109:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084dac26 +0x10e:  movl   $0xbe,0x8(%esp)
084dac2e +0x116:  movl   $0x0,0x4(%esp)
084dac36 +0x11e:  lea    -0x18(%ebp),%eax
084dac39 +0x121:  mov    %eax,(%esp)
084dac3c +0x124:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084dac41 +0x129:  movl   $0x1,0x4(%esp)
084dac49 +0x131:  lea    -0x18(%ebp),%eax
084dac4c +0x134:  mov    %eax,(%esp)
084dac4f +0x137:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084dac54 +0x13c:  lea    -0x18(%ebp),%eax
084dac57 +0x13f:  mov    %eax,0x4(%esp)
084dac5b +0x143:  mov    0xc(%ebp),%eax
084dac5e +0x146:  mov    %eax,(%esp)
084dac61 +0x149:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084dac66 +0x14e:  mov    0xc(%ebp),%eax
084dac69 +0x151:  mov    %eax,(%esp)
084dac6c +0x154:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084dac71 +0x159:  mov    %eax,%ebx
084dac73 +0x15b:  mov    0xc(%ebp),%eax
084dac76 +0x15e:  mov    %eax,(%esp)
084dac79 +0x161:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084dac7e +0x166:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084dac84 +0x16c:  mov    %eax,0x4(%esp)
084dac88 +0x170:  mov    %edx,(%esp)
084dac8b +0x173:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084dac90 +0x178:  movl   $0x0,0x8(%esp)
084dac98 +0x180:  mov    %ebx,0x4(%esp)
084dac9c +0x184:  mov    %eax,(%esp)
084dac9f +0x187:  call   0846eb0e <_ZN17CGuildServerProxy26ChangeGuildAgitFlagInProxyEjh>  ; CGuildServerProxy::ChangeGuildAgitFlagInProxy(unsigned int, unsigned char)
084daca4 +0x18c:  mov    $0x0,%ebx
084daca9 +0x191:  lea    -0x18(%ebp),%eax
084dacac +0x194:  mov    %eax,(%esp)
084dacaf +0x197:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dacb4 +0x19c:  jmp    084dacd1 <+0x1b9>
084dacb6 +0x19e:  mov    %edx,%ebx
084dacb8 +0x1a0:  mov    %eax,%esi
084dacba +0x1a2:  lea    -0x18(%ebp),%eax
084dacbd +0x1a5:  mov    %eax,(%esp)
084dacc0 +0x1a8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dacc5 +0x1ad:  mov    %esi,%eax
084dacc7 +0x1af:  mov    %ebx,%edx
084dacc9 +0x1b1:  mov    %eax,(%esp)
084daccc +0x1b4:  call   08ae3750 <_Unwind_Resume>
084dacd1 +0x1b9:  mov    %ebx,%eax
084dacd3 +0x1bb:  add    $0x30,%esp
084dacd6 +0x1be:  pop    %ebx
084dacd7 +0x1bf:  pop    %esi
084dacd8 +0x1c0:  pop    %ebp
084dacd9 +0x1c1:  ret
```

## 反编译 C

```c
// Inter_NoticeDeleteGuildAgit::dispatch_sig @ 0x84dab18

/* Inter_NoticeDeleteGuildAgit::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeDeleteGuildAgit::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (*(char *)(param_3 + 0x16) == '\0') {
    CUser::SetGuildAgitFlag((CUser *)param_2,false);
    iVar1 = *(int *)(local_10 + 0x12);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084dabb6 to 084dabf2 has its CatchHandler @ 084dabf5 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0xe8);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send((CUser *)param_2,local_28);
      PacketGuard::~PacketGuard(local_28);
    }
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084dac3c to 084daca3 has its CatchHandler @ 084dacb6 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xbe);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
    uVar4 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
    CGuildServerProxy::ChangeGuildAgitFlagInProxy(this,uVar3,'\0');
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,0xe8,*(undefined1 *)(param_3 + 0x16));
  }
  return 0;
}
```
