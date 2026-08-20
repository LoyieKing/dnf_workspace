# dispatch_sig

`_ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallGuildInvite` | `0x0820791c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820791c  _ZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820791c, 0x08207b51]
0820791c +0x000:  push   %ebp
0820791d +0x001:  mov    %esp,%ebp
0820791f +0x003:  push   %esi
08207920 +0x004:  push   %ebx
08207921 +0x005:  sub    $0x40,%esp
08207924 +0x008:  mov    0xc(%ebp),%eax
08207927 +0x00b:  mov    %eax,(%esp)
0820792a +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0820792f +0x013:  cmp    $0x2,%eax
08207932 +0x016:  jle    08207943 <+0x27>
08207934 +0x018:  mov    0xc(%ebp),%eax
08207937 +0x01b:  mov    %eax,(%esp)
0820793a +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0820793f +0x023:  test   %eax,%eax
08207941 +0x025:  jne    0820794a <+0x2e>
08207943 +0x027:  mov    $0x1,%eax
08207948 +0x02c:  jmp    0820794f <+0x33>
0820794a +0x02e:  mov    $0x0,%eax
0820794f +0x033:  test   %al,%al
08207951 +0x035:  je     0820797c <+0x60>
08207953 +0x037:  movl   $0x0,0xc(%esp)
0820795b +0x03f:  movl   $0x0,0x8(%esp)
08207963 +0x047:  movl   $&_ZZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820796b +0x04f:  movl   $0xa24f,(%esp)
08207972 +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207977 +0x05b:  jmp    08207b4a <+0x22e>
0820797c +0x060:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08207981 +0x065:  movl   $0xb,0x8(%esp)
08207989 +0x06d:  mov    0xc(%ebp),%edx
0820798c +0x070:  mov    %edx,0x4(%esp)
08207990 +0x074:  mov    %eax,(%esp)
08207993 +0x077:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08207998 +0x07c:  mov    %eax,-0xc(%ebp)
0820799b +0x07f:  cmpl   $0x0,-0xc(%ebp)
0820799f +0x083:  je     082079c8 <+0xac>
082079a1 +0x085:  mov    -0xc(%ebp),%eax
082079a4 +0x088:  movzbl %al,%eax
082079a7 +0x08b:  mov    %eax,0x8(%esp)
082079ab +0x08f:  movl   $0x9a,0x4(%esp)
082079b3 +0x097:  mov    0xc(%ebp),%eax
082079b6 +0x09a:  mov    %eax,(%esp)
082079b9 +0x09d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082079be +0x0a2:  mov    $0x0,%eax
082079c3 +0x0a7:  jmp    08207b4a <+0x22e>
082079c8 +0x0ac:  lea    -0x10(%ebp),%eax
082079cb +0x0af:  mov    %eax,0x4(%esp)
082079cf +0x0b3:  mov    0x10(%ebp),%eax
082079d2 +0x0b6:  mov    %eax,(%esp)
082079d5 +0x0b9:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082079da +0x0be:  xor    $0x1,%eax
082079dd +0x0c1:  test   %al,%al
082079df +0x0c3:  je     08207a0a <+0xee>
082079e1 +0x0c5:  movl   $0x0,0xc(%esp)
082079e9 +0x0cd:  movl   $0x0,0x8(%esp)
082079f1 +0x0d5:  movl   $&_ZZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082079f9 +0x0dd:  movl   $0xa25d,(%esp)
08207a00 +0x0e4:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207a05 +0x0e9:  jmp    08207b4a <+0x22e>
08207a0a +0x0ee:  mov    -0x10(%ebp),%eax
08207a0d +0x0f1:  mov    %eax,0xc(%esp)
08207a11 +0x0f5:  movl   $0x1e,0x8(%esp)
08207a19 +0x0fd:  lea    -0x2e(%ebp),%eax
08207a1c +0x100:  mov    %eax,0x4(%esp)
08207a20 +0x104:  mov    0x10(%ebp),%eax
08207a23 +0x107:  mov    %eax,(%esp)
08207a26 +0x10a:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08207a2b +0x10f:  xor    $0x1,%eax
08207a2e +0x112:  test   %al,%al
08207a30 +0x114:  je     08207a5b <+0x13f>
08207a32 +0x116:  movl   $0x0,0xc(%esp)
08207a3a +0x11e:  movl   $0x0,0x8(%esp)
08207a42 +0x126:  movl   $&_ZZN26Dispatcher_CallGuildInvite12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207a4a +0x12e:  movl   $0xa261,(%esp)
08207a51 +0x135:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207a56 +0x13a:  jmp    08207b4a <+0x22e>
08207a5b +0x13f:  mov    0xc(%ebp),%eax
08207a5e +0x142:  mov    %eax,(%esp)
08207a61 +0x145:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08207a66 +0x14a:  test   %eax,%eax
08207a68 +0x14c:  sete   %al
08207a6b +0x14f:  test   %al,%al
08207a6d +0x151:  je     08207a93 <+0x177>
08207a6f +0x153:  movl   $0x22,0x8(%esp)
08207a77 +0x15b:  mov    0xc(%ebp),%eax
08207a7a +0x15e:  mov    %eax,0x4(%esp)
08207a7e +0x162:  mov    0x8(%ebp),%eax
08207a81 +0x165:  mov    %eax,(%esp)
08207a84 +0x168:  call   08207852 <_ZN26Dispatcher_CallGuildInvite24send_packet_guild_inviteEP5CUserh>  ; Dispatcher_CallGuildInvite::send_packet_guild_invite(CUser*, unsigned char)
08207a89 +0x16d:  mov    $0x0,%eax
08207a8e +0x172:  jmp    08207b4a <+0x22e>
08207a93 +0x177:  mov    0xc(%ebp),%eax
08207a96 +0x17a:  mov    %eax,(%esp)
08207a99 +0x17d:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
08207a9e +0x182:  xor    $0x1,%eax
08207aa1 +0x185:  test   %al,%al
08207aa3 +0x187:  je     08207acd <+0x1b1>
08207aa5 +0x189:  mov    0xc(%ebp),%eax
08207aa8 +0x18c:  mov    %eax,(%esp)
08207aab +0x18f:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
08207ab0 +0x194:  xor    $0x1,%eax
08207ab3 +0x197:  test   %al,%al
08207ab5 +0x199:  je     08207acd <+0x1b1>
08207ab7 +0x19b:  mov    0xc(%ebp),%eax
08207aba +0x19e:  mov    %eax,(%esp)
08207abd +0x1a1:  call   0822f548 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4bf2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4bf2
08207ac2 +0x1a6:  cmp    $0x3,%al
08207ac4 +0x1a8:  je     08207acd <+0x1b1>
08207ac6 +0x1aa:  mov    $0x1,%eax
08207acb +0x1af:  jmp    08207ad2 <+0x1b6>
08207acd +0x1b1:  mov    $0x0,%eax
08207ad2 +0x1b6:  test   %al,%al
08207ad4 +0x1b8:  je     08207af7 <+0x1db>
08207ad6 +0x1ba:  movl   $0x24,0x8(%esp)
08207ade +0x1c2:  mov    0xc(%ebp),%eax
08207ae1 +0x1c5:  mov    %eax,0x4(%esp)
08207ae5 +0x1c9:  mov    0x8(%ebp),%eax
08207ae8 +0x1cc:  mov    %eax,(%esp)
08207aeb +0x1cf:  call   08207852 <_ZN26Dispatcher_CallGuildInvite24send_packet_guild_inviteEP5CUserh>  ; Dispatcher_CallGuildInvite::send_packet_guild_invite(CUser*, unsigned char)
08207af0 +0x1d4:  mov    $0x0,%eax
08207af5 +0x1d9:  jmp    08207b4a <+0x22e>
08207af7 +0x1db:  mov    0xc(%ebp),%eax
08207afa +0x1de:  mov    %eax,(%esp)
08207afd +0x1e1:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08207b02 +0x1e6:  mov    %eax,%esi
08207b04 +0x1e8:  mov    0xc(%ebp),%eax
08207b07 +0x1eb:  mov    %eax,(%esp)
08207b0a +0x1ee:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08207b0f +0x1f3:  mov    %eax,%ebx
08207b11 +0x1f5:  mov    0xc(%ebp),%eax
08207b14 +0x1f8:  mov    %eax,(%esp)
08207b17 +0x1fb:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08207b1c +0x200:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08207b22 +0x206:  mov    %eax,0x4(%esp)
08207b26 +0x20a:  mov    %edx,(%esp)
08207b29 +0x20d:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08207b2e +0x212:  lea    -0x2e(%ebp),%edx
08207b31 +0x215:  mov    %edx,0xc(%esp)
08207b35 +0x219:  mov    %esi,0x8(%esp)
08207b39 +0x21d:  mov    %ebx,0x4(%esp)
08207b3d +0x221:  mov    %eax,(%esp)
08207b40 +0x224:  call   0846e0f2 <_ZN17CGuildServerProxy19SendCallGuildInviteEjjPc>  ; CGuildServerProxy::SendCallGuildInvite(unsigned int, unsigned int, char*)
08207b45 +0x229:  mov    $0x0,%eax
08207b4a +0x22e:  add    $0x40,%esp
08207b4d +0x231:  pop    %ebx
08207b4e +0x232:  pop    %esi
08207b4f +0x233:  pop    %ebp
08207b50 +0x234:  ret
08207b51 +0x235:  nop
```

## 反编译 C

```c
// Dispatcher_CallGuildInvite::dispatch_sig @ 0x820791c

/* Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CallGuildInvite::dispatch_sig
          (Dispatcher_CallGuildInvite *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  CGuildServerProxy *this_00;
  char local_32 [30];
  int local_14;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0xa24f,
                     "virtual int Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&)",0,0)
    ;
    return uVar4;
  }
  local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0xb);
  if (local_10 != 0) {
    CUser::SendCmdErrorPacket(param_1,0x9a,local_10 & 0xff);
    return 0;
  }
  cVar2 = PacketBuf::get_int(param_2,&local_14);
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_str(param_2,local_32,0x1e,local_14);
    if (cVar2 != '\x01') {
      uVar4 = LineFunc(0xa261,
                       "virtual int Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&)",0,
                       0);
      return uVar4;
    }
    iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      cVar2 = CUser::IsSubGuildMaster(param_1);
      if (((cVar2 == '\x01') || (cVar2 = CUser::IsGuildMaster(param_1), cVar2 == '\x01')) ||
         (cVar2 = CUserCharacInfo::getGuildMemberGrade((CUserCharacInfo *)param_1), cVar2 == '\x03')
         ) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        send_packet_guild_invite(this,param_1,'$');
      }
      else {
        uVar5 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar4 = CUser::GetServerGroup(param_1);
        this_00 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,uVar4);
        CGuildServerProxy::SendCallGuildInvite(this_00,uVar6,uVar5,local_32);
      }
      return 0;
    }
    send_packet_guild_invite(this,param_1,'\"');
    return 0;
  }
  uVar4 = LineFunc(0xa25d,"virtual int Dispatcher_CallGuildInvite::dispatch_sig(CUser*, PacketBuf&)"
                   ,0,0);
  return uVar4;
}
```
