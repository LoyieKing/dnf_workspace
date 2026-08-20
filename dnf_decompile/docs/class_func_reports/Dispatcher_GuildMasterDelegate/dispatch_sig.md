# dispatch_sig

`_ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildMasterDelegate` | `0x082082d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082082d6  _ZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&)
# range [0x082082d6, 0x082084e7]
082082d6 +0x000:  push   %ebp
082082d7 +0x001:  mov    %esp,%ebp
082082d9 +0x003:  push   %esi
082082da +0x004:  push   %ebx
082082db +0x005:  sub    $0x50,%esp
082082de +0x008:  mov    0xc(%ebp),%eax
082082e1 +0x00b:  mov    %eax,(%esp)
082082e4 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082082e9 +0x013:  cmp    $0x2,%eax
082082ec +0x016:  jle    082082fd <+0x27>
082082ee +0x018:  mov    0xc(%ebp),%eax
082082f1 +0x01b:  mov    %eax,(%esp)
082082f4 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082082f9 +0x023:  test   %eax,%eax
082082fb +0x025:  jne    08208304 <+0x2e>
082082fd +0x027:  mov    $0x1,%eax
08208302 +0x02c:  jmp    08208309 <+0x33>
08208304 +0x02e:  mov    $0x0,%eax
08208309 +0x033:  test   %al,%al
0820830b +0x035:  je     08208336 <+0x60>
0820830d +0x037:  movl   $0x0,0xc(%esp)
08208315 +0x03f:  movl   $0x0,0x8(%esp)
0820831d +0x047:  movl   $&_ZZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08208325 +0x04f:  movl   $0xa337,(%esp)
0820832c +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208331 +0x05b:  jmp    082084e1 <+0x20b>
08208336 +0x060:  mov    0xc(%ebp),%eax
08208339 +0x063:  mov    %eax,(%esp)
0820833c +0x066:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08208341 +0x06b:  mov    %eax,-0x10(%ebp)
08208344 +0x06e:  cmpl   $0x0,-0x10(%ebp)
08208348 +0x072:  jne    0820836f <+0x99>
0820834a +0x074:  movl   $0x22,0x8(%esp)
08208352 +0x07c:  movl   $0x9e,0x4(%esp)
0820835a +0x084:  mov    0xc(%ebp),%eax
0820835d +0x087:  mov    %eax,(%esp)
08208360 +0x08a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08208365 +0x08f:  mov    $0x0,%eax
0820836a +0x094:  jmp    082084e1 <+0x20b>
0820836f +0x099:  mov    0xc(%ebp),%eax
08208372 +0x09c:  mov    %eax,(%esp)
08208375 +0x09f:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
0820837a +0x0a4:  xor    $0x1,%eax
0820837d +0x0a7:  test   %al,%al
0820837f +0x0a9:  je     082083a6 <+0xd0>
08208381 +0x0ab:  movl   $0x24,0x8(%esp)
08208389 +0x0b3:  movl   $0x9e,0x4(%esp)
08208391 +0x0bb:  mov    0xc(%ebp),%eax
08208394 +0x0be:  mov    %eax,(%esp)
08208397 +0x0c1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0820839c +0x0c6:  mov    $0x0,%eax
082083a1 +0x0cb:  jmp    082084e1 <+0x20b>
082083a6 +0x0d0:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
082083ab +0x0d5:  movl   $0xe,0x8(%esp)
082083b3 +0x0dd:  mov    0xc(%ebp),%edx
082083b6 +0x0e0:  mov    %edx,0x4(%esp)
082083ba +0x0e4:  mov    %eax,(%esp)
082083bd +0x0e7:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
082083c2 +0x0ec:  mov    %eax,-0xc(%ebp)
082083c5 +0x0ef:  cmpl   $0x0,-0xc(%ebp)
082083c9 +0x0f3:  je     082083f2 <+0x11c>
082083cb +0x0f5:  mov    -0xc(%ebp),%eax
082083ce +0x0f8:  movzbl %al,%eax
082083d1 +0x0fb:  mov    %eax,0x8(%esp)
082083d5 +0x0ff:  movl   $0x9e,0x4(%esp)
082083dd +0x107:  mov    0xc(%ebp),%eax
082083e0 +0x10a:  mov    %eax,(%esp)
082083e3 +0x10d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082083e8 +0x112:  mov    $0x0,%eax
082083ed +0x117:  jmp    082084e1 <+0x20b>
082083f2 +0x11c:  movl   $0x0,-0x34(%ebp)
082083f9 +0x123:  lea    -0x34(%ebp),%eax
082083fc +0x126:  mov    %eax,0x4(%esp)
08208400 +0x12a:  mov    0x10(%ebp),%eax
08208403 +0x12d:  mov    %eax,(%esp)
08208406 +0x130:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0820840b +0x135:  xor    $0x1,%eax
0820840e +0x138:  test   %al,%al
08208410 +0x13a:  je     0820843b <+0x165>
08208412 +0x13c:  movl   $0x0,0xc(%esp)
0820841a +0x144:  movl   $0x0,0x8(%esp)
08208422 +0x14c:  movl   $&_ZZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820842a +0x154:  movl   $0xa35b,(%esp)
08208431 +0x15b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208436 +0x160:  jmp    082084e1 <+0x20b>
0820843b +0x165:  mov    -0x34(%ebp),%eax
0820843e +0x168:  mov    %eax,0xc(%esp)
08208442 +0x16c:  movl   $0x1e,0x8(%esp)
0820844a +0x174:  lea    -0x2e(%ebp),%eax
0820844d +0x177:  mov    %eax,0x4(%esp)
08208451 +0x17b:  mov    0x10(%ebp),%eax
08208454 +0x17e:  mov    %eax,(%esp)
08208457 +0x181:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
0820845c +0x186:  xor    $0x1,%eax
0820845f +0x189:  test   %al,%al
08208461 +0x18b:  je     08208489 <+0x1b3>
08208463 +0x18d:  movl   $0x0,0xc(%esp)
0820846b +0x195:  movl   $0x0,0x8(%esp)
08208473 +0x19d:  movl   $&_ZZN30Dispatcher_GuildMasterDelegate12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820847b +0x1a5:  movl   $0xa35e,(%esp)
08208482 +0x1ac:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08208487 +0x1b1:  jmp    082084e1 <+0x20b>
08208489 +0x1b3:  mov    -0x34(%ebp),%esi
0820848c +0x1b6:  movl   $0xffffffff,0x4(%esp)
08208494 +0x1be:  mov    0xc(%ebp),%eax
08208497 +0x1c1:  mov    %eax,(%esp)
0820849a +0x1c4:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0820849f +0x1c9:  mov    %eax,%ebx
082084a1 +0x1cb:  mov    0xc(%ebp),%eax
082084a4 +0x1ce:  mov    %eax,(%esp)
082084a7 +0x1d1:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
082084ac +0x1d6:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
082084b2 +0x1dc:  mov    %eax,0x4(%esp)
082084b6 +0x1e0:  mov    %edx,(%esp)
082084b9 +0x1e3:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
082084be +0x1e8:  lea    -0x2e(%ebp),%edx
082084c1 +0x1eb:  mov    %edx,0x10(%esp)
082084c5 +0x1ef:  mov    %esi,0xc(%esp)
082084c9 +0x1f3:  mov    %ebx,0x8(%esp)
082084cd +0x1f7:  mov    -0x10(%ebp),%edx
082084d0 +0x1fa:  mov    %edx,0x4(%esp)
082084d4 +0x1fe:  mov    %eax,(%esp)
082084d7 +0x201:  call   0846e2ac <_ZN17CGuildServerProxy23SendGuildMasterDelegateEjjiPc>  ; CGuildServerProxy::SendGuildMasterDelegate(unsigned int, unsigned int, int, char*)
082084dc +0x206:  mov    $0x0,%eax
082084e1 +0x20b:  add    $0x50,%esp
082084e4 +0x20e:  pop    %ebx
082084e5 +0x20f:  pop    %esi
082084e6 +0x210:  pop    %ebp
082084e7 +0x211:  ret
```

## 反编译 C

```c
// Dispatcher_GuildMasterDelegate::dispatch_sig @ 0x82082d6

/* Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_GuildMasterDelegate::dispatch_sig
          (Dispatcher_GuildMasterDelegate *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CGuildServerProxy *this_00;
  int local_38;
  char local_32 [30];
  uint local_14;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (2 < iVar3) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_08208309;
    }
  }
  bVar1 = true;
LAB_08208309:
  if (bVar1) {
    uVar4 = LineFunc(0xa337,
                     "virtual int Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    local_14 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    if (local_14 == 0) {
      CUser::SendCmdErrorPacket(param_1,0x9e,0x22);
      uVar4 = 0;
    }
    else {
      cVar2 = CUser::IsGuildMaster(param_1);
      if (cVar2 == '\x01') {
        local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0xe);
        if (local_10 == 0) {
          local_38 = 0;
          cVar2 = PacketBuf::get_int(param_2,&local_38);
          if (cVar2 == '\x01') {
            cVar2 = PacketBuf::get_str(param_2,local_32,0x1e,local_38);
            iVar3 = local_38;
            if (cVar2 == '\x01') {
              uVar5 = CUser::get_charac_no(param_1,-1);
              uVar4 = CUser::GetServerGroup(param_1);
              this_00 = (CGuildServerProxy *)
                        CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                                  (GlobalData::s_guild_proxy_mgr,uVar4);
              CGuildServerProxy::SendGuildMasterDelegate(this_00,local_14,uVar5,iVar3,local_32);
              uVar4 = 0;
            }
            else {
              uVar4 = LineFunc(0xa35e,
                               "virtual int Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar4 = LineFunc(0xa35b,
                             "virtual int Dispatcher_GuildMasterDelegate::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x9e,local_10 & 0xff);
          uVar4 = 0;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x9e,0x24);
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}
```
