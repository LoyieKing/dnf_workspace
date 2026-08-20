# dispatch_sig

`_ZN27Inter_NoticeCreateGuildAgit12dispatch_sigEP5CUserPci`

`Inter_NoticeCreateGuildAgit::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_NoticeCreateGuildAgit` | `0x084da98e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084da98e  _ZN27Inter_NoticeCreateGuildAgit12dispatch_sigEP5CUserPci
#           Inter_NoticeCreateGuildAgit::dispatch_sig(CUser*, char*, int)
# range [0x084da98e, 0x084dab13]
084da98e +0x000:  push   %ebp
084da98f +0x001:  mov    %esp,%ebp
084da991 +0x003:  push   %esi
084da992 +0x004:  push   %ebx
084da993 +0x005:  sub    $0x30,%esp
084da996 +0x008:  mov    0x10(%ebp),%eax
084da999 +0x00b:  mov    %eax,-0xc(%ebp)
084da99c +0x00e:  movl   $0x1,0x4(%esp)
084da9a4 +0x016:  mov    0xc(%ebp),%eax
084da9a7 +0x019:  mov    %eax,(%esp)
084da9aa +0x01c:  call   084eceac <_GLOBAL__I__Z7getUserj+0x3e5e>  ; global constructors keyed to getUser(unsigned int)+0x3e5e
084da9af +0x021:  mov    -0xc(%ebp),%eax
084da9b2 +0x024:  mov    0x12(%eax),%ebx
084da9b5 +0x027:  movl   $0xffffffff,0x4(%esp)
084da9bd +0x02f:  mov    0xc(%ebp),%eax
084da9c0 +0x032:  mov    %eax,(%esp)
084da9c3 +0x035:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084da9c8 +0x03a:  cmp    %eax,%ebx
084da9ca +0x03c:  sete   %al
084da9cd +0x03f:  test   %al,%al
084da9cf +0x041:  je     084daa5b <+0xcd>
084da9d5 +0x047:  lea    -0x24(%ebp),%eax
084da9d8 +0x04a:  mov    %eax,(%esp)
084da9db +0x04d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084da9e0 +0x052:  movl   $0xe7,0x8(%esp)
084da9e8 +0x05a:  movl   $0x1,0x4(%esp)
084da9f0 +0x062:  lea    -0x24(%ebp),%eax
084da9f3 +0x065:  mov    %eax,(%esp)
084da9f6 +0x068:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084da9fb +0x06d:  movl   $0x1,0x4(%esp)
084daa03 +0x075:  lea    -0x24(%ebp),%eax
084daa06 +0x078:  mov    %eax,(%esp)
084daa09 +0x07b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084daa0e +0x080:  movl   $0x1,0x4(%esp)
084daa16 +0x088:  lea    -0x24(%ebp),%eax
084daa19 +0x08b:  mov    %eax,(%esp)
084daa1c +0x08e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084daa21 +0x093:  lea    -0x24(%ebp),%eax
084daa24 +0x096:  mov    %eax,0x4(%esp)
084daa28 +0x09a:  mov    0xc(%ebp),%eax
084daa2b +0x09d:  mov    %eax,(%esp)
084daa2e +0x0a0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084daa33 +0x0a5:  jmp    084daa50 <+0xc2>
084daa35 +0x0a7:  mov    %edx,%ebx
084daa37 +0x0a9:  mov    %eax,%esi
084daa39 +0x0ab:  lea    -0x24(%ebp),%eax
084daa3c +0x0ae:  mov    %eax,(%esp)
084daa3f +0x0b1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084daa44 +0x0b6:  mov    %esi,%eax
084daa46 +0x0b8:  mov    %ebx,%edx
084daa48 +0x0ba:  mov    %eax,(%esp)
084daa4b +0x0bd:  call   08ae3750 <_Unwind_Resume>
084daa50 +0x0c2:  lea    -0x24(%ebp),%eax
084daa53 +0x0c5:  mov    %eax,(%esp)
084daa56 +0x0c8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084daa5b +0x0cd:  lea    -0x18(%ebp),%eax
084daa5e +0x0d0:  mov    %eax,(%esp)
084daa61 +0x0d3:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084daa66 +0x0d8:  movl   $0xbd,0x8(%esp)
084daa6e +0x0e0:  movl   $0x0,0x4(%esp)
084daa76 +0x0e8:  lea    -0x18(%ebp),%eax
084daa79 +0x0eb:  mov    %eax,(%esp)
084daa7c +0x0ee:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084daa81 +0x0f3:  movl   $0x1,0x4(%esp)
084daa89 +0x0fb:  lea    -0x18(%ebp),%eax
084daa8c +0x0fe:  mov    %eax,(%esp)
084daa8f +0x101:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084daa94 +0x106:  lea    -0x18(%ebp),%eax
084daa97 +0x109:  mov    %eax,0x4(%esp)
084daa9b +0x10d:  mov    0xc(%ebp),%eax
084daa9e +0x110:  mov    %eax,(%esp)
084daaa1 +0x113:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084daaa6 +0x118:  mov    0xc(%ebp),%eax
084daaa9 +0x11b:  mov    %eax,(%esp)
084daaac +0x11e:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
084daab1 +0x123:  mov    %eax,%ebx
084daab3 +0x125:  mov    0xc(%ebp),%eax
084daab6 +0x128:  mov    %eax,(%esp)
084daab9 +0x12b:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084daabe +0x130:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
084daac4 +0x136:  mov    %eax,0x4(%esp)
084daac8 +0x13a:  mov    %edx,(%esp)
084daacb +0x13d:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
084daad0 +0x142:  movl   $0x1,0x8(%esp)
084daad8 +0x14a:  mov    %ebx,0x4(%esp)
084daadc +0x14e:  mov    %eax,(%esp)
084daadf +0x151:  call   0846eb0e <_ZN17CGuildServerProxy26ChangeGuildAgitFlagInProxyEjh>  ; CGuildServerProxy::ChangeGuildAgitFlagInProxy(unsigned int, unsigned char)
084daae4 +0x156:  mov    $0x0,%ebx
084daae9 +0x15b:  lea    -0x18(%ebp),%eax
084daaec +0x15e:  mov    %eax,(%esp)
084daaef +0x161:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084daaf4 +0x166:  mov    %ebx,%eax
084daaf6 +0x168:  add    $0x30,%esp
084daaf9 +0x16b:  pop    %ebx
084daafa +0x16c:  pop    %esi
084daafb +0x16d:  pop    %ebp
084daafc +0x16e:  ret
084daafd +0x16f:  mov    %edx,%ebx
084daaff +0x171:  mov    %eax,%esi
084dab01 +0x173:  lea    -0x18(%ebp),%eax
084dab04 +0x176:  mov    %eax,(%esp)
084dab07 +0x179:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084dab0c +0x17e:  mov    %esi,%eax
084dab0e +0x180:  mov    %ebx,%edx
084dab10 +0x182:  mov    %eax,(%esp)
084dab13 +0x185:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// Inter_NoticeCreateGuildAgit::dispatch_sig @ 0x84da98e

/* Inter_NoticeCreateGuildAgit::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticeCreateGuildAgit::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
  CUser::SetGuildAgitFlag((CUser *)param_2,true);
  iVar1 = *(int *)(local_10 + 0x12);
  iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
  if (iVar1 == iVar2) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084da9f6 to 084daa32 has its CatchHandler @ 084daa35 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0xe7);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send((CUser *)param_2,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084daa7c to 084daae3 has its CatchHandler @ 084daafd */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xbd);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  uVar4 = CUser::GetServerGroup((CUser *)param_2);
  this = (CGuildServerProxy *)
         CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4);
  CGuildServerProxy::ChangeGuildAgitFlagInProxy(this,uVar3,'\x01');
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```
