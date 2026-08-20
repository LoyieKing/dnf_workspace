# process

`_ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RegisterToBlackList::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RegisterToBlackList` | `0x081cdc9a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cdc9a  _ZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RegisterToBlackList::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cdc9a, 0x081cde35]
081cdc9a +0x000:  push   %ebp
081cdc9b +0x001:  mov    %esp,%ebp
081cdc9d +0x003:  push   %ebx
081cdc9e +0x004:  sub    $0x54,%esp
081cdca1 +0x007:  mov    0x14(%ebp),%eax
081cdca4 +0x00a:  mov    %eax,-0x10(%ebp)
081cdca7 +0x00d:  mov    0x10(%ebp),%eax
081cdcaa +0x010:  mov    %eax,0x8(%esp)
081cdcae +0x014:  mov    0xc(%ebp),%eax
081cdcb1 +0x017:  mov    %eax,0x4(%esp)
081cdcb5 +0x01b:  mov    0x8(%ebp),%eax
081cdcb8 +0x01e:  mov    %eax,(%esp)
081cdcbb +0x021:  call   081cdc70 <_ZN30Dispatcher_RegisterToBlackList11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_RegisterToBlackList::check_error(CUser*, MSG_BASE&)
081cdcc0 +0x026:  mov    %eax,%edx
081cdcc2 +0x028:  mov    -0x10(%ebp),%eax
081cdcc5 +0x02b:  mov    %edx,0x4(%eax)
081cdcc8 +0x02e:  mov    -0x10(%ebp),%eax
081cdccb +0x031:  mov    0x4(%eax),%eax
081cdcce +0x034:  test   %eax,%eax
081cdcd0 +0x036:  jle    081cdcdc <+0x42>
081cdcd2 +0x038:  mov    $0x0,%eax
081cdcd7 +0x03d:  jmp    081cde30 <+0x196>
081cdcdc +0x042:  mov    -0x10(%ebp),%eax
081cdcdf +0x045:  mov    0x4(%eax),%eax
081cdce2 +0x048:  test   %eax,%eax
081cdce4 +0x04a:  jns    081cdd18 <+0x7e>
081cdce6 +0x04c:  mov    0xc(%ebp),%eax
081cdce9 +0x04f:  mov    %eax,(%esp)
081cdcec +0x052:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cdcf1 +0x057:  mov    -0x10(%ebp),%edx
081cdcf4 +0x05a:  mov    0x4(%edx),%edx
081cdcf7 +0x05d:  mov    %eax,0xc(%esp)
081cdcfb +0x061:  mov    %edx,0x8(%esp)
081cdcff +0x065:  movl   $&_ZZN30Dispatcher_RegisterToBlackList7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cdd07 +0x06d:  movl   $0x269f,(%esp)
081cdd0e +0x074:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cdd13 +0x079:  jmp    081cde30 <+0x196>
081cdd18 +0x07e:  mov    0x10(%ebp),%eax
081cdd1b +0x081:  mov    %eax,-0xc(%ebp)
081cdd1e +0x084:  lea    -0x3c(%ebp),%eax
081cdd21 +0x087:  mov    %eax,(%esp)
081cdd24 +0x08a:  call   0822bb2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x11d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x11d8
081cdd29 +0x08f:  mov    0xc(%ebp),%eax
081cdd2c +0x092:  mov    %eax,(%esp)
081cdd2f +0x095:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cdd34 +0x09a:  mov    %eax,-0x32(%ebp)
081cdd37 +0x09d:  mov    -0xc(%ebp),%eax
081cdd3a +0x0a0:  mov    0x10(%eax),%eax
081cdd3d +0x0a3:  mov    -0xc(%ebp),%edx
081cdd40 +0x0a6:  add    $0x14,%edx
081cdd43 +0x0a9:  mov    %eax,0x8(%esp)
081cdd47 +0x0ad:  mov    %edx,0x4(%esp)
081cdd4b +0x0b1:  lea    -0x3c(%ebp),%eax
081cdd4e +0x0b4:  add    $0xe,%eax
081cdd51 +0x0b7:  mov    %eax,(%esp)
081cdd54 +0x0ba:  call   0807d8d0 <_init+0x1c8>
081cdd59 +0x0bf:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081cdd5e +0x0c4:  mov    0x378(%eax),%eax
081cdd64 +0x0ca:  cmp    $0x3,%eax
081cdd67 +0x0cd:  sete   %al
081cdd6a +0x0d0:  test   %al,%al
081cdd6c +0x0d2:  je     081cddc3 <+0x129>
081cdd6e +0x0d4:  movl   $0x1d,0x8(%esp)
081cdd76 +0x0dc:  movl   $"샤오유",0x4(%esp)
081cdd7e +0x0e4:  lea    -0x3c(%ebp),%eax
081cdd81 +0x0e7:  add    $0xe,%eax
081cdd84 +0x0ea:  mov    %eax,(%esp)
081cdd87 +0x0ed:  call   0807e8c0 <_init+0x11b8>
081cdd8c +0x0f2:  test   %eax,%eax
081cdd8e +0x0f4:  je     081cddb2 <+0x118>
081cdd90 +0x0f6:  movl   $0x1d,0x8(%esp)
081cdd98 +0x0fe:  movl   $"샤유리",0x4(%esp)
081cdda0 +0x106:  lea    -0x3c(%ebp),%eax
081cdda3 +0x109:  add    $0xe,%eax
081cdda6 +0x10c:  mov    %eax,(%esp)
081cdda9 +0x10f:  call   0807e8c0 <_init+0x11b8>
081cddae +0x114:  test   %eax,%eax
081cddb0 +0x116:  jne    081cddc3 <+0x129>
081cddb2 +0x118:  mov    -0x10(%ebp),%eax
081cddb5 +0x11b:  movl   $0x7fffffff,0x4(%eax)
081cddbc +0x122:  mov    $0x0,%eax
081cddc1 +0x127:  jmp    081cde30 <+0x196>
081cddc3 +0x129:  lea    -0x3c(%ebp),%ebx
081cddc6 +0x12c:  mov    0xc(%ebp),%eax
081cddc9 +0x12f:  mov    %eax,(%esp)
081cddcc +0x132:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081cddd1 +0x137:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081cddd7 +0x13d:  mov    %eax,0x4(%esp)
081cdddb +0x141:  mov    %edx,(%esp)
081cddde +0x144:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081cdde3 +0x149:  movl   $0x2c,0x8(%esp)
081cddeb +0x151:  mov    %ebx,0x4(%esp)
081cddef +0x155:  mov    %eax,(%esp)
081cddf2 +0x158:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
081cddf7 +0x15d:  lea    -0x3c(%ebp),%ebx
081cddfa +0x160:  mov    0xc(%ebp),%eax
081cddfd +0x163:  mov    %eax,(%esp)
081cde00 +0x166:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081cde05 +0x16b:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081cde0b +0x171:  mov    %eax,0x4(%esp)
081cde0f +0x175:  mov    %edx,(%esp)
081cde12 +0x178:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081cde17 +0x17d:  movl   $0x2c,0x8(%esp)
081cde1f +0x185:  mov    %ebx,0x4(%esp)
081cde23 +0x189:  mov    %eax,(%esp)
081cde26 +0x18c:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
081cde2b +0x191:  mov    $0x0,%eax
081cde30 +0x196:  add    $0x54,%esp
081cde33 +0x199:  pop    %ebx
081cde34 +0x19a:  pop    %ebp
081cde35 +0x19b:  ret
```

## 反编译 C

```c
// Dispatcher_RegisterToBlackList::process @ 0x81cdc9a

/* Dispatcher_RegisterToBlackList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RegisterToBlackList::process
          (Dispatcher_RegisterToBlackList *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  CMonitorServerProxy *this_00;
  CGuildServerProxy *this_01;
  Packet_Register_To_BlackList local_40 [10];
  undefined4 local_36;
  char acStack_32 [30];
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (0 < *(int *)(local_14 + 4)) {
    return 0;
  }
  if (-1 < *(int *)(local_14 + 4)) {
    local_10 = param_2;
    Packet_Register_To_BlackList::Packet_Register_To_BlackList(local_40);
    local_36 = CUser::get_acc_id(param_1);
    strncpy(acStack_32,(char *)(local_10 + 0x14),*(size_t *)(local_10 + 0x10));
    iVar3 = G_CEnvironment();
    if ((*(int *)(iVar3 + 0x378) == 3) &&
       ((iVar3 = strncmp(acStack_32,&DAT_08bc17d6,0x1d), iVar3 == 0 ||
        (iVar3 = strncmp(acStack_32,&DAT_08bc17dd,0x1d), iVar3 == 0)))) {
      *(undefined4 *)(local_14 + 4) = 0x7fffffff;
    }
    else {
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendPacket(this_00,(char *)local_40,0x2c);
      uVar1 = CUser::GetServerGroup(param_1);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar1);
      CGuildServerProxy::SendPacket(this_01,(char *)local_40,0x2c);
    }
    return 0;
  }
  uVar2 = CUser::get_acc_id(param_1);
  uVar1 = LineFunc(0x269f,
                   "virtual int Dispatcher_RegisterToBlackList::process(CUser*, MSG_BASE&, ParamBase&)"
                   ,*(int *)(local_14 + 4),uVar2);
  return uVar1;
}
```
