# dispatch_sig

`_ZN30Dispatcher_PowerWarProcessInfo12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_PowerWarProcessInfo::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PowerWarProcessInfo` | `0x0821ea32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821ea32  _ZN30Dispatcher_PowerWarProcessInfo12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_PowerWarProcessInfo::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821ea32, 0x0821eb65]
0821ea32 +0x000:  push   %ebp
0821ea33 +0x001:  mov    %esp,%ebp
0821ea35 +0x003:  push   %esi
0821ea36 +0x004:  push   %ebx
0821ea37 +0x005:  sub    $0x20,%esp
0821ea3a +0x008:  mov    0xc(%ebp),%eax
0821ea3d +0x00b:  mov    %eax,(%esp)
0821ea40 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0821ea45 +0x013:  cmp    $0x2,%eax
0821ea48 +0x016:  jle    0821ea59 <+0x27>
0821ea4a +0x018:  mov    0xc(%ebp),%eax
0821ea4d +0x01b:  mov    %eax,(%esp)
0821ea50 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0821ea55 +0x023:  test   %eax,%eax
0821ea57 +0x025:  jne    0821ea60 <+0x2e>
0821ea59 +0x027:  mov    $0x1,%eax
0821ea5e +0x02c:  jmp    0821ea65 <+0x33>
0821ea60 +0x02e:  mov    $0x0,%eax
0821ea65 +0x033:  test   %al,%al
0821ea67 +0x035:  je     0821ea94 <+0x62>
0821ea69 +0x037:  movl   $0x0,0xc(%esp)
0821ea71 +0x03f:  movl   $0x0,0x8(%esp)
0821ea79 +0x047:  movl   $&_ZZN30Dispatcher_PowerWarProcessInfo12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821ea81 +0x04f:  movl   $0xd721,(%esp)
0821ea88 +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821ea8d +0x05b:  mov    %eax,%ebx
0821ea8f +0x05d:  jmp    0821eb5d <+0x12b>
0821ea94 +0x062:  movl   $0xffffffff,0x4(%esp)
0821ea9c +0x06a:  mov    0xc(%ebp),%eax
0821ea9f +0x06d:  mov    %eax,(%esp)
0821eaa2 +0x070:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0821eaa7 +0x075:  mov    %eax,%ebx
0821eaa9 +0x077:  mov    0xc(%ebp),%eax
0821eaac +0x07a:  mov    %eax,(%esp)
0821eaaf +0x07d:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821eab4 +0x082:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0821eaba +0x088:  mov    %eax,0x4(%esp)
0821eabe +0x08c:  mov    %edx,(%esp)
0821eac1 +0x08f:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0821eac6 +0x094:  mov    %ebx,0x4(%esp)
0821eaca +0x098:  mov    %eax,(%esp)
0821eacd +0x09b:  call   0846df1c <_ZN17CGuildServerProxy23SendPowerWarProcessInfoEj>  ; CGuildServerProxy::SendPowerWarProcessInfo(unsigned int)
0821ead2 +0x0a0:  lea    -0x14(%ebp),%eax
0821ead5 +0x0a3:  mov    %eax,(%esp)
0821ead8 +0x0a6:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0821eadd +0x0ab:  movl   $0xec,0x8(%esp)
0821eae5 +0x0b3:  movl   $0x1,0x4(%esp)
0821eaed +0x0bb:  lea    -0x14(%ebp),%eax
0821eaf0 +0x0be:  mov    %eax,(%esp)
0821eaf3 +0x0c1:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0821eaf8 +0x0c6:  movl   $0x1,0x4(%esp)
0821eb00 +0x0ce:  lea    -0x14(%ebp),%eax
0821eb03 +0x0d1:  mov    %eax,(%esp)
0821eb06 +0x0d4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0821eb0b +0x0d9:  movl   $0x1,0x4(%esp)
0821eb13 +0x0e1:  lea    -0x14(%ebp),%eax
0821eb16 +0x0e4:  mov    %eax,(%esp)
0821eb19 +0x0e7:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0821eb1e +0x0ec:  lea    -0x14(%ebp),%eax
0821eb21 +0x0ef:  mov    %eax,0x4(%esp)
0821eb25 +0x0f3:  mov    0xc(%ebp),%eax
0821eb28 +0x0f6:  mov    %eax,(%esp)
0821eb2b +0x0f9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0821eb30 +0x0fe:  mov    $0x0,%ebx
0821eb35 +0x103:  lea    -0x14(%ebp),%eax
0821eb38 +0x106:  mov    %eax,(%esp)
0821eb3b +0x109:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821eb40 +0x10e:  jmp    0821eb5d <+0x12b>
0821eb42 +0x110:  mov    %edx,%ebx
0821eb44 +0x112:  mov    %eax,%esi
0821eb46 +0x114:  lea    -0x14(%ebp),%eax
0821eb49 +0x117:  mov    %eax,(%esp)
0821eb4c +0x11a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0821eb51 +0x11f:  mov    %esi,%eax
0821eb53 +0x121:  mov    %ebx,%edx
0821eb55 +0x123:  mov    %eax,(%esp)
0821eb58 +0x126:  call   08ae3750 <_Unwind_Resume>
0821eb5d +0x12b:  mov    %ebx,%eax
0821eb5f +0x12d:  add    $0x20,%esp
0821eb62 +0x130:  pop    %ebx
0821eb63 +0x131:  pop    %esi
0821eb64 +0x132:  pop    %ebp
0821eb65 +0x133:  ret
```

## 反编译 C

```c
// Dispatcher_PowerWarProcessInfo::dispatch_sig @ 0x821ea32

/* Dispatcher_PowerWarProcessInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_PowerWarProcessInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  CGuildServerProxy *this;
  PacketGuard local_18 [12];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0821ea65;
    }
  }
  bVar1 = true;
LAB_0821ea65:
  if (bVar1) {
    uVar3 = LineFunc(0xd721,
                     "virtual int Dispatcher_PowerWarProcessInfo::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
    uVar3 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar3);
    CGuildServerProxy::SendPowerWarProcessInfo(this,uVar4);
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0821eaf3 to 0821eb2f has its CatchHandler @ 0821eb42 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xec);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send((CUser *)param_2,local_18);
    uVar3 = 0;
    PacketGuard::~PacketGuard(local_18);
  }
  return uVar3;
}
```
