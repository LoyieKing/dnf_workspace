# dispatch_sig

`_ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ReplyGuildInvite::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ReplyGuildInvite` | `0x08207b52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08207b52  _ZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ReplyGuildInvite::dispatch_sig(CUser*, PacketBuf&)
# range [0x08207b52, 0x08207d39]
08207b52 +0x000:  push   %ebp
08207b53 +0x001:  mov    %esp,%ebp
08207b55 +0x003:  push   %esi
08207b56 +0x004:  push   %ebx
08207b57 +0x005:  sub    $0x30,%esp
08207b5a +0x008:  mov    0xc(%ebp),%eax
08207b5d +0x00b:  mov    %eax,(%esp)
08207b60 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08207b65 +0x013:  cmp    $0x2,%eax
08207b68 +0x016:  jle    08207b79 <+0x27>
08207b6a +0x018:  mov    0xc(%ebp),%eax
08207b6d +0x01b:  mov    %eax,(%esp)
08207b70 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08207b75 +0x023:  test   %eax,%eax
08207b77 +0x025:  jne    08207b80 <+0x2e>
08207b79 +0x027:  mov    $0x1,%eax
08207b7e +0x02c:  jmp    08207b85 <+0x33>
08207b80 +0x02e:  mov    $0x0,%eax
08207b85 +0x033:  test   %al,%al
08207b87 +0x035:  je     08207bb4 <+0x62>
08207b89 +0x037:  movl   $0x0,0xc(%esp)
08207b91 +0x03f:  movl   $0x0,0x8(%esp)
08207b99 +0x047:  movl   $&_ZZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207ba1 +0x04f:  movl   $0xa278,(%esp)
08207ba8 +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207bad +0x05b:  mov    %eax,%ebx
08207baf +0x05d:  jmp    08207d30 <+0x1de>
08207bb4 +0x062:  lea    -0xd(%ebp),%eax
08207bb7 +0x065:  mov    %eax,0x4(%esp)
08207bbb +0x069:  mov    0x10(%ebp),%eax
08207bbe +0x06c:  mov    %eax,(%esp)
08207bc1 +0x06f:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08207bc6 +0x074:  xor    $0x1,%eax
08207bc9 +0x077:  test   %al,%al
08207bcb +0x079:  je     08207bf8 <+0xa6>
08207bcd +0x07b:  movl   $0x0,0xc(%esp)
08207bd5 +0x083:  movl   $0x0,0x8(%esp)
08207bdd +0x08b:  movl   $&_ZZN27Dispatcher_ReplyGuildInvite12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207be5 +0x093:  movl   $0xa27c,(%esp)
08207bec +0x09a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207bf1 +0x09f:  mov    %eax,%ebx
08207bf3 +0x0a1:  jmp    08207d30 <+0x1de>
08207bf8 +0x0a6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08207bfd +0x0ab:  mov    %eax,(%esp)
08207c00 +0x0ae:  call   080f131e <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x3a0>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x3a0
08207c05 +0x0b3:  test   %al,%al
08207c07 +0x0b5:  je     08207cae <+0x15c>
08207c0d +0x0bb:  lea    -0x1c(%ebp),%eax
08207c10 +0x0be:  mov    %eax,(%esp)
08207c13 +0x0c1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08207c18 +0x0c6:  movl   $0x9b,0x8(%esp)
08207c20 +0x0ce:  movl   $0x1,0x4(%esp)
08207c28 +0x0d6:  lea    -0x1c(%ebp),%eax
08207c2b +0x0d9:  mov    %eax,(%esp)
08207c2e +0x0dc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08207c33 +0x0e1:  movl   $0x0,0x4(%esp)
08207c3b +0x0e9:  lea    -0x1c(%ebp),%eax
08207c3e +0x0ec:  mov    %eax,(%esp)
08207c41 +0x0ef:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08207c46 +0x0f4:  movl   $0x63,0x4(%esp)
08207c4e +0x0fc:  lea    -0x1c(%ebp),%eax
08207c51 +0x0ff:  mov    %eax,(%esp)
08207c54 +0x102:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08207c59 +0x107:  movl   $0x1,0x4(%esp)
08207c61 +0x10f:  lea    -0x1c(%ebp),%eax
08207c64 +0x112:  mov    %eax,(%esp)
08207c67 +0x115:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08207c6c +0x11a:  lea    -0x1c(%ebp),%eax
08207c6f +0x11d:  mov    %eax,0x4(%esp)
08207c73 +0x121:  mov    0xc(%ebp),%eax
08207c76 +0x124:  mov    %eax,(%esp)
08207c79 +0x127:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08207c7e +0x12c:  mov    $0x0,%ebx
08207c83 +0x131:  lea    -0x1c(%ebp),%eax
08207c86 +0x134:  mov    %eax,(%esp)
08207c89 +0x137:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08207c8e +0x13c:  jmp    08207d30 <+0x1de>
08207c93 +0x141:  mov    %edx,%ebx
08207c95 +0x143:  mov    %eax,%esi
08207c97 +0x145:  lea    -0x1c(%ebp),%eax
08207c9a +0x148:  mov    %eax,(%esp)
08207c9d +0x14b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08207ca2 +0x150:  mov    %esi,%eax
08207ca4 +0x152:  mov    %ebx,%edx
08207ca6 +0x154:  mov    %eax,(%esp)
08207ca9 +0x157:  call   08ae3750 <_Unwind_Resume>
08207cae +0x15c:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08207cb3 +0x161:  movl   $0xc,0x8(%esp)
08207cbb +0x169:  mov    0xc(%ebp),%edx
08207cbe +0x16c:  mov    %edx,0x4(%esp)
08207cc2 +0x170:  mov    %eax,(%esp)
08207cc5 +0x173:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08207cca +0x178:  mov    %eax,-0xc(%ebp)
08207ccd +0x17b:  cmpl   $0x0,-0xc(%ebp)
08207cd1 +0x17f:  je     08207cea <+0x198>
08207cd3 +0x181:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08207cd8 +0x186:  mov    -0xc(%ebp),%edx
08207cdb +0x189:  mov    %edx,0x4(%esp)
08207cdf +0x18d:  mov    %eax,(%esp)
08207ce2 +0x190:  call   08288140 <_ZN21CSecu_ProtectionField14GetOppositeErrEi>  ; CSecu_ProtectionField::GetOppositeErr(int)
08207ce7 +0x195:  mov    %al,-0xd(%ebp)
08207cea +0x198:  movzbl -0xd(%ebp),%eax
08207cee +0x19c:  movzbl %al,%esi
08207cf1 +0x19f:  mov    0xc(%ebp),%eax
08207cf4 +0x1a2:  mov    %eax,(%esp)
08207cf7 +0x1a5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08207cfc +0x1aa:  mov    %eax,%ebx
08207cfe +0x1ac:  mov    0xc(%ebp),%eax
08207d01 +0x1af:  mov    %eax,(%esp)
08207d04 +0x1b2:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08207d09 +0x1b7:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08207d0f +0x1bd:  mov    %eax,0x4(%esp)
08207d13 +0x1c1:  mov    %edx,(%esp)
08207d16 +0x1c4:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08207d1b +0x1c9:  mov    %esi,0x8(%esp)
08207d1f +0x1cd:  mov    %ebx,0x4(%esp)
08207d23 +0x1d1:  mov    %eax,(%esp)
08207d26 +0x1d4:  call   0846e14c <_ZN17CGuildServerProxy20SendReplyGuildInviteEjh>  ; CGuildServerProxy::SendReplyGuildInvite(unsigned int, unsigned char)
08207d2b +0x1d9:  mov    $0x0,%ebx
08207d30 +0x1de:  mov    %ebx,%eax
08207d32 +0x1e0:  add    $0x30,%esp
08207d35 +0x1e3:  pop    %ebx
08207d36 +0x1e4:  pop    %esi
08207d37 +0x1e5:  pop    %ebp
08207d38 +0x1e6:  ret
08207d39 +0x1e7:  nop
```

## 反编译 C

```c
// Dispatcher_ReplyGuildInvite::dispatch_sig @ 0x8207b52

/* Dispatcher_ReplyGuildInvite::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ReplyGuildInvite::dispatch_sig
          (Dispatcher_ReplyGuildInvite *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  GameWorld *this_00;
  uint uVar6;
  CGuildServerProxy *this_01;
  PacketGuard local_20 [15];
  uchar local_11;
  int local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (2 < iVar4) {
    iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar4 != 0) {
      bVar1 = false;
      goto LAB_08207b85;
    }
  }
  bVar1 = true;
LAB_08207b85:
  if (bVar1) {
    uVar5 = LineFunc(0xa278,
                     "virtual int Dispatcher_ReplyGuildInvite::dispatch_sig(CUser*, PacketBuf&)",0,0
                    );
  }
  else {
    cVar3 = PacketBuf::get_byte(param_2,&local_11);
    if (cVar3 == '\x01') {
      this_00 = (GameWorld *)G_GameWorld();
      cVar3 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
      if (cVar3 == '\0') {
        local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0xc);
        if (local_10 != 0) {
          local_11 = CSecu_ProtectionField::GetOppositeErr
                               (GlobalData::s_pSecuProtectionField,local_10);
        }
        uVar2 = local_11;
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar5 = CUser::GetServerGroup(param_1);
        this_01 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,uVar5);
        CGuildServerProxy::SendReplyGuildInvite(this_01,uVar6,uVar2);
        uVar5 = 0;
      }
      else {
        PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08207c2e to 08207c7d has its CatchHandler @ 08207c93 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x9b);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,99);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send(param_1,local_20);
        uVar5 = 0;
        PacketGuard::~PacketGuard(local_20);
      }
    }
    else {
      uVar5 = LineFunc(0xa27c,
                       "virtual int Dispatcher_ReplyGuildInvite::dispatch_sig(CUser*, PacketBuf&)",0
                       ,0);
    }
  }
  return uVar5;
}
```
