# dispatch_sig

`_ZN39Dispatcer_polic_one_to_one_chat_disable12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcer_polic_one_to_one_chat_disable::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcer_polic_one_to_one_chat_disable` | `0x082272ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082272ce  _ZN39Dispatcer_polic_one_to_one_chat_disable12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcer_polic_one_to_one_chat_disable::dispatch_sig(CUser*, PacketBuf&)
# range [0x082272ce, 0x082273ad]
082272ce +0x00:  push   %ebp
082272cf +0x01:  mov    %esp,%ebp
082272d1 +0x03:  push   %ebx
082272d2 +0x04:  sub    $0x44,%esp
082272d5 +0x07:  mov    0xc(%ebp),%eax
082272d8 +0x0a:  mov    %eax,(%esp)
082272db +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
082272e0 +0x12:  cmp    $0x2,%eax
082272e3 +0x15:  jle    082272f4 <+0x26>
082272e5 +0x17:  mov    0xc(%ebp),%eax
082272e8 +0x1a:  mov    %eax,(%esp)
082272eb +0x1d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082272f0 +0x22:  test   %eax,%eax
082272f2 +0x24:  jne    082272fb <+0x2d>
082272f4 +0x26:  mov    $0x1,%eax
082272f9 +0x2b:  jmp    08227300 <+0x32>
082272fb +0x2d:  mov    $0x0,%eax
08227300 +0x32:  test   %al,%al
08227302 +0x34:  je     0822730e <+0x40>
08227304 +0x36:  mov    $0x0,%eax
08227309 +0x3b:  jmp    082273a8 <+0xda>
0822730e +0x40:  lea    -0x38(%ebp),%eax
08227311 +0x43:  mov    %eax,(%esp)
08227314 +0x46:  call   0822c296 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1940>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1940
08227319 +0x4b:  lea    -0x38(%ebp),%eax
0822731c +0x4e:  add    $0xe,%eax
0822731f +0x51:  mov    %eax,0x4(%esp)
08227323 +0x55:  mov    0x10(%ebp),%eax
08227326 +0x58:  mov    %eax,(%esp)
08227329 +0x5b:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0822732e +0x60:  mov    -0x2a(%ebp),%eax
08227331 +0x63:  mov    %eax,0xc(%esp)
08227335 +0x67:  movl   $0x1e,0x8(%esp)
0822733d +0x6f:  lea    -0x38(%ebp),%eax
08227340 +0x72:  add    $0x12,%eax
08227343 +0x75:  mov    %eax,0x4(%esp)
08227347 +0x79:  mov    0x10(%ebp),%eax
0822734a +0x7c:  mov    %eax,(%esp)
0822734d +0x7f:  call   0858d2bc <_ZN9PacketBuf7get_strEPcii>  ; PacketBuf::get_str(char*, int, int)
08227352 +0x84:  mov    0xc(%ebp),%eax
08227355 +0x87:  mov    %eax,(%esp)
08227358 +0x8a:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0822735d +0x8f:  test   %al,%al
0822735f +0x91:  je     082273a3 <+0xd5>
08227361 +0x93:  mov    0xc(%ebp),%eax
08227364 +0x96:  mov    %eax,(%esp)
08227367 +0x99:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0822736c +0x9e:  mov    %eax,-0x2e(%ebp)
0822736f +0xa1:  lea    -0x38(%ebp),%ebx
08227372 +0xa4:  mov    0xc(%ebp),%eax
08227375 +0xa7:  mov    %eax,(%esp)
08227378 +0xaa:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0822737d +0xaf:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
08227383 +0xb5:  mov    %eax,0x4(%esp)
08227387 +0xb9:  mov    %edx,(%esp)
0822738a +0xbc:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
0822738f +0xc1:  movl   $0x30,0x8(%esp)
08227397 +0xc9:  mov    %ebx,0x4(%esp)
0822739b +0xcd:  mov    %eax,(%esp)
0822739e +0xd0:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
082273a3 +0xd5:  mov    $0x0,%eax
082273a8 +0xda:  add    $0x44,%esp
082273ab +0xdd:  pop    %ebx
082273ac +0xde:  pop    %ebp
082273ad +0xdf:  ret
```

## 反编译 C

```c
// Dispatcer_polic_one_to_one_chat_disable::dispatch_sig @ 0x82272ce

/* Dispatcer_polic_one_to_one_chat_disable::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcer_polic_one_to_one_chat_disable::dispatch_sig
          (Dispatcer_polic_one_to_one_chat_disable *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CMonitorServerProxy *this_00;
  Packet_Disable_User_OneToOneChat_Police local_3c [10];
  undefined4 local_32;
  uint local_2e;
  char acStack_2a [34];
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    Packet_Disable_User_OneToOneChat_Police::Packet_Disable_User_OneToOneChat_Police(local_3c);
    PacketBuf::get_int(param_2,&local_2e);
    PacketBuf::get_str(param_2,acStack_2a,0x1e,local_2e);
    cVar2 = CUser::isGMUser(param_1);
    if (cVar2 != '\0') {
      local_32 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar4 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar4);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_3c,0x30);
    }
  }
  return 0;
}
```
