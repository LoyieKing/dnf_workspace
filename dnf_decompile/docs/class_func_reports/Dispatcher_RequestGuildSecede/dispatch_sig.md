# dispatch_sig

`_ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestGuildSecede` | `0x08207d3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08207d3a  _ZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&)
# range [0x08207d3a, 0x08207ffd]
08207d3a +0x000:  push   %ebp
08207d3b +0x001:  mov    %esp,%ebp
08207d3d +0x003:  push   %esi
08207d3e +0x004:  push   %ebx
08207d3f +0x005:  sub    $0x50,%esp
08207d42 +0x008:  mov    0xc(%ebp),%eax
08207d45 +0x00b:  mov    %eax,(%esp)
08207d48 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08207d4d +0x013:  cmp    $0x2,%eax
08207d50 +0x016:  jle    08207d61 <+0x27>
08207d52 +0x018:  mov    0xc(%ebp),%eax
08207d55 +0x01b:  mov    %eax,(%esp)
08207d58 +0x01e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08207d5d +0x023:  test   %eax,%eax
08207d5f +0x025:  jne    08207d68 <+0x2e>
08207d61 +0x027:  mov    $0x1,%eax
08207d66 +0x02c:  jmp    08207d6d <+0x33>
08207d68 +0x02e:  mov    $0x0,%eax
08207d6d +0x033:  test   %al,%al
08207d6f +0x035:  je     08207d9a <+0x60>
08207d71 +0x037:  movl   $0x0,0xc(%esp)
08207d79 +0x03f:  movl   $0x0,0x8(%esp)
08207d81 +0x047:  movl   $&_ZZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207d89 +0x04f:  movl   $0xa29f,(%esp)
08207d90 +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207d95 +0x05b:  jmp    08207ff7 <+0x2bd>
08207d9a +0x060:  mov    0xc(%ebp),%eax
08207d9d +0x063:  mov    %eax,(%esp)
08207da0 +0x066:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
08207da5 +0x06b:  mov    %eax,-0x10(%ebp)
08207da8 +0x06e:  cmpl   $0x0,-0x10(%ebp)
08207dac +0x072:  jne    08207dd3 <+0x99>
08207dae +0x074:  movl   $0x22,0x8(%esp)
08207db6 +0x07c:  movl   $0x9c,0x4(%esp)
08207dbe +0x084:  mov    0xc(%ebp),%eax
08207dc1 +0x087:  mov    %eax,(%esp)
08207dc4 +0x08a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08207dc9 +0x08f:  mov    $0x0,%eax
08207dce +0x094:  jmp    08207ff7 <+0x2bd>
08207dd3 +0x099:  mov    0xc(%ebp),%eax
08207dd6 +0x09c:  mov    %eax,(%esp)
08207dd9 +0x09f:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08207dde +0x0a4:  cmp    $0x7,%al
08207de0 +0x0a6:  sete   %al
08207de3 +0x0a9:  test   %al,%al
08207de5 +0x0ab:  je     08207e0c <+0xd2>
08207de7 +0x0ad:  movl   $0x13,0x8(%esp)
08207def +0x0b5:  movl   $0x9c,0x4(%esp)
08207df7 +0x0bd:  mov    0xc(%ebp),%eax
08207dfa +0x0c0:  mov    %eax,(%esp)
08207dfd +0x0c3:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08207e02 +0x0c8:  mov    $0x0,%eax
08207e07 +0x0cd:  jmp    08207ff7 <+0x2bd>
08207e0c +0x0d2:  movl   $0x0,-0x34(%ebp)
08207e13 +0x0d9:  lea    -0x34(%ebp),%eax
08207e16 +0x0dc:  mov    %eax,0x4(%esp)
08207e1a +0x0e0:  mov    0x10(%ebp),%eax
08207e1d +0x0e3:  mov    %eax,(%esp)
08207e20 +0x0e6:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
08207e25 +0x0eb:  xor    $0x1,%eax
08207e28 +0x0ee:  test   %al,%al
08207e2a +0x0f0:  je     08207e55 <+0x11b>
08207e2c +0x0f2:  movl   $0x0,0xc(%esp)
08207e34 +0x0fa:  movl   $0x0,0x8(%esp)
08207e3c +0x102:  movl   $&_ZZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207e44 +0x10a:  movl   $0xa2b3,(%esp)
08207e4b +0x111:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207e50 +0x116:  jmp    08207ff7 <+0x2bd>
08207e55 +0x11b:  mov    -0x34(%ebp),%eax
08207e58 +0x11e:  test   %eax,%eax
08207e5a +0x120:  je     08207f4c <+0x212>
08207e60 +0x126:  mov    -0x34(%ebp),%eax
08207e63 +0x129:  cmp    $0x1d,%eax
08207e66 +0x12c:  jg     08207f4c <+0x212>
08207e6c +0x132:  mov    -0x34(%ebp),%eax
08207e6f +0x135:  mov    %eax,0xc(%esp)
08207e73 +0x139:  movl   $0x1e,0x8(%esp)
08207e7b +0x141:  lea    -0x2e(%ebp),%eax
08207e7e +0x144:  mov    %eax,0x4(%esp)
08207e82 +0x148:  mov    0x10(%ebp),%eax
08207e85 +0x14b:  mov    %eax,(%esp)
08207e88 +0x14e:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08207e8d +0x153:  xor    $0x1,%eax
08207e90 +0x156:  test   %al,%al
08207e92 +0x158:  je     08207ebd <+0x183>
08207e94 +0x15a:  movl   $0x0,0xc(%esp)
08207e9c +0x162:  movl   $0x0,0x8(%esp)
08207ea4 +0x16a:  movl   $&_ZZN29Dispatcher_RequestGuildSecede12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08207eac +0x172:  movl   $0xa2b8,(%esp)
08207eb3 +0x179:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08207eb8 +0x17e:  jmp    08207ff7 <+0x2bd>
08207ebd +0x183:  mov    0xc(%ebp),%eax
08207ec0 +0x186:  mov    %eax,(%esp)
08207ec3 +0x189:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
08207ec8 +0x18e:  xor    $0x1,%eax
08207ecb +0x191:  test   %al,%al
08207ecd +0x193:  je     08207ee8 <+0x1ae>
08207ecf +0x195:  mov    0xc(%ebp),%eax
08207ed2 +0x198:  mov    %eax,(%esp)
08207ed5 +0x19b:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
08207eda +0x1a0:  xor    $0x1,%eax
08207edd +0x1a3:  test   %al,%al
08207edf +0x1a5:  je     08207ee8 <+0x1ae>
08207ee1 +0x1a7:  mov    $0x1,%eax
08207ee6 +0x1ac:  jmp    08207eed <+0x1b3>
08207ee8 +0x1ae:  mov    $0x0,%eax
08207eed +0x1b3:  test   %al,%al
08207eef +0x1b5:  je     08207f16 <+0x1dc>
08207ef1 +0x1b7:  movl   $0x24,0x8(%esp)
08207ef9 +0x1bf:  movl   $0x9c,0x4(%esp)
08207f01 +0x1c7:  mov    0xc(%ebp),%eax
08207f04 +0x1ca:  mov    %eax,(%esp)
08207f07 +0x1cd:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08207f0c +0x1d2:  mov    $0x0,%eax
08207f11 +0x1d7:  jmp    08207ff7 <+0x2bd>
08207f16 +0x1dc:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08207f1b +0x1e1:  mov    %eax,(%esp)
08207f1e +0x1e4:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
08207f23 +0x1e9:  test   %al,%al
08207f25 +0x1eb:  je     08207f4c <+0x212>
08207f27 +0x1ed:  movl   $0x13,0x8(%esp)
08207f2f +0x1f5:  movl   $0x9c,0x4(%esp)
08207f37 +0x1fd:  mov    0xc(%ebp),%eax
08207f3a +0x200:  mov    %eax,(%esp)
08207f3d +0x203:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08207f42 +0x208:  mov    $0x0,%eax
08207f47 +0x20d:  jmp    08207ff7 <+0x2bd>
08207f4c +0x212:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
08207f51 +0x217:  movl   $0xd,0x8(%esp)
08207f59 +0x21f:  mov    0xc(%ebp),%edx
08207f5c +0x222:  mov    %edx,0x4(%esp)
08207f60 +0x226:  mov    %eax,(%esp)
08207f63 +0x229:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
08207f68 +0x22e:  mov    %eax,-0xc(%ebp)
08207f6b +0x231:  cmpl   $0x0,-0xc(%ebp)
08207f6f +0x235:  je     08207f95 <+0x25b>
08207f71 +0x237:  mov    -0xc(%ebp),%eax
08207f74 +0x23a:  movzbl %al,%eax
08207f77 +0x23d:  mov    %eax,0x8(%esp)
08207f7b +0x241:  movl   $0x9c,0x4(%esp)
08207f83 +0x249:  mov    0xc(%ebp),%eax
08207f86 +0x24c:  mov    %eax,(%esp)
08207f89 +0x24f:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08207f8e +0x254:  mov    $0x0,%eax
08207f93 +0x259:  jmp    08207ff7 <+0x2bd>
08207f95 +0x25b:  mov    -0x34(%ebp),%eax
08207f98 +0x25e:  test   %eax,%eax
08207f9a +0x260:  jne    08207fa7 <+0x26d>
08207f9c +0x262:  mov    0xc(%ebp),%eax
08207f9f +0x265:  mov    %eax,(%esp)
08207fa2 +0x268:  call   0867e898 <_ZN5CUser18deleteGuildExpBookEv>  ; CUser::deleteGuildExpBook()
08207fa7 +0x26d:  mov    -0x34(%ebp),%esi
08207faa +0x270:  mov    0xc(%ebp),%eax
08207fad +0x273:  mov    %eax,(%esp)
08207fb0 +0x276:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08207fb5 +0x27b:  mov    %eax,%ebx
08207fb7 +0x27d:  mov    0xc(%ebp),%eax
08207fba +0x280:  mov    %eax,(%esp)
08207fbd +0x283:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08207fc2 +0x288:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
08207fc8 +0x28e:  mov    %eax,0x4(%esp)
08207fcc +0x292:  mov    %edx,(%esp)
08207fcf +0x295:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08207fd4 +0x29a:  lea    -0x2e(%ebp),%edx
08207fd7 +0x29d:  mov    %edx,0x10(%esp)
08207fdb +0x2a1:  mov    %esi,0xc(%esp)
08207fdf +0x2a5:  mov    %ebx,0x8(%esp)
08207fe3 +0x2a9:  mov    -0x10(%ebp),%edx
08207fe6 +0x2ac:  mov    %edx,0x4(%esp)
08207fea +0x2b0:  mov    %eax,(%esp)
08207fed +0x2b3:  call   0846e190 <_ZN17CGuildServerProxy22SendRequestGuildSecedeEjjiPc>  ; CGuildServerProxy::SendRequestGuildSecede(unsigned int, unsigned int, int, char*)
08207ff2 +0x2b8:  mov    $0x0,%eax
08207ff7 +0x2bd:  add    $0x50,%esp
08207ffa +0x2c0:  pop    %ebx
08207ffb +0x2c1:  pop    %esi
08207ffc +0x2c2:  pop    %ebp
08207ffd +0x2c3:  ret
```

## 反编译 C

```c
// Dispatcher_RequestGuildSecede::dispatch_sig @ 0x8207d3a

/* Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestGuildSecede::dispatch_sig
          (Dispatcher_RequestGuildSecede *this,CUser *param_1,PacketBuf *param_2)

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
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0xa29f,
                     "virtual int Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
    return uVar4;
  }
  local_14 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
  if (local_14 == 0) {
    CUser::SendCmdErrorPacket(param_1,0x9c,0x22);
    return 0;
  }
  cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
  if (cVar2 != '\a') {
    local_38 = 0;
    cVar2 = PacketBuf::get_int(param_2,&local_38);
    if (cVar2 != '\x01') {
      uVar4 = LineFunc(0xa2b3,
                       "virtual int Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
      return uVar4;
    }
    if ((local_38 != 0) && (local_38 < 0x1e)) {
      cVar2 = PacketBuf::get_str(param_2,local_32,0x1e,local_38);
      if (cVar2 != '\x01') {
        uVar4 = LineFunc(0xa2b8,
                         "virtual int Dispatcher_RequestGuildSecede::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
      cVar2 = CUser::IsSubGuildMaster(param_1);
      if ((cVar2 == '\x01') || (cVar2 = CUser::IsGuildMaster(param_1), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(param_1,0x9c,0x24);
        return 0;
      }
      cVar2 = CPowerManager::IsPowerWarEventOn();
      if (cVar2 != '\0') {
        CUser::SendCmdErrorPacket(param_1,0x9c,0x13);
        return 0;
      }
    }
    local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0xd);
    if (local_10 == 0) {
      if (local_38 == 0) {
        CUser::deleteGuildExpBook(param_1);
      }
      iVar3 = local_38;
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar4 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar4);
      CGuildServerProxy::SendRequestGuildSecede(this_00,local_14,uVar5,iVar3,local_32);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x9c,local_10 & 0xff);
    }
    return 0;
  }
  CUser::SendCmdErrorPacket(param_1,0x9c,0x13);
  return 0;
}
```
