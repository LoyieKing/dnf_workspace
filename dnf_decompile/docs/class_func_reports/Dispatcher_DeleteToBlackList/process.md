# process

`_ZN28Dispatcher_DeleteToBlackList7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_DeleteToBlackList::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_DeleteToBlackList` | `0x081cdf0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cdf0a  _ZN28Dispatcher_DeleteToBlackList7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_DeleteToBlackList::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cdf0a, 0x081ce03b]
081cdf0a +0x000:  push   %ebp
081cdf0b +0x001:  mov    %esp,%ebp
081cdf0d +0x003:  push   %ebx
081cdf0e +0x004:  sub    $0x54,%esp
081cdf11 +0x007:  mov    0x14(%ebp),%eax
081cdf14 +0x00a:  mov    %eax,-0x10(%ebp)
081cdf17 +0x00d:  mov    0x10(%ebp),%eax
081cdf1a +0x010:  mov    %eax,0x8(%esp)
081cdf1e +0x014:  mov    0xc(%ebp),%eax
081cdf21 +0x017:  mov    %eax,0x4(%esp)
081cdf25 +0x01b:  mov    0x8(%ebp),%eax
081cdf28 +0x01e:  mov    %eax,(%esp)
081cdf2b +0x021:  call   081cdee0 <_ZN28Dispatcher_DeleteToBlackList11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_DeleteToBlackList::check_error(CUser*, MSG_BASE&)
081cdf30 +0x026:  mov    %eax,%edx
081cdf32 +0x028:  mov    -0x10(%ebp),%eax
081cdf35 +0x02b:  mov    %edx,0x4(%eax)
081cdf38 +0x02e:  mov    -0x10(%ebp),%eax
081cdf3b +0x031:  mov    0x4(%eax),%eax
081cdf3e +0x034:  test   %eax,%eax
081cdf40 +0x036:  jle    081cdf4c <+0x42>
081cdf42 +0x038:  mov    $0x0,%eax
081cdf47 +0x03d:  jmp    081ce036 <+0x12c>
081cdf4c +0x042:  mov    -0x10(%ebp),%eax
081cdf4f +0x045:  mov    0x4(%eax),%eax
081cdf52 +0x048:  test   %eax,%eax
081cdf54 +0x04a:  jns    081cdf88 <+0x7e>
081cdf56 +0x04c:  mov    0xc(%ebp),%eax
081cdf59 +0x04f:  mov    %eax,(%esp)
081cdf5c +0x052:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cdf61 +0x057:  mov    -0x10(%ebp),%edx
081cdf64 +0x05a:  mov    0x4(%edx),%edx
081cdf67 +0x05d:  mov    %eax,0xc(%esp)
081cdf6b +0x061:  mov    %edx,0x8(%esp)
081cdf6f +0x065:  movl   $&_ZZN28Dispatcher_DeleteToBlackList7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cdf77 +0x06d:  movl   $0x26ea,(%esp)
081cdf7e +0x074:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cdf83 +0x079:  jmp    081ce036 <+0x12c>
081cdf88 +0x07e:  mov    0x10(%ebp),%eax
081cdf8b +0x081:  mov    %eax,-0xc(%ebp)
081cdf8e +0x084:  lea    -0x3c(%ebp),%eax
081cdf91 +0x087:  mov    %eax,(%esp)
081cdf94 +0x08a:  call   0822bb70 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x121a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x121a
081cdf99 +0x08f:  mov    0xc(%ebp),%eax
081cdf9c +0x092:  mov    %eax,(%esp)
081cdf9f +0x095:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cdfa4 +0x09a:  mov    %eax,-0x32(%ebp)
081cdfa7 +0x09d:  mov    -0xc(%ebp),%eax
081cdfaa +0x0a0:  mov    0x10(%eax),%eax
081cdfad +0x0a3:  mov    -0xc(%ebp),%edx
081cdfb0 +0x0a6:  add    $0x14,%edx
081cdfb3 +0x0a9:  mov    %eax,0x8(%esp)
081cdfb7 +0x0ad:  mov    %edx,0x4(%esp)
081cdfbb +0x0b1:  lea    -0x3c(%ebp),%eax
081cdfbe +0x0b4:  add    $0xe,%eax
081cdfc1 +0x0b7:  mov    %eax,(%esp)
081cdfc4 +0x0ba:  call   0807d8d0 <_init+0x1c8>
081cdfc9 +0x0bf:  lea    -0x3c(%ebp),%ebx
081cdfcc +0x0c2:  mov    0xc(%ebp),%eax
081cdfcf +0x0c5:  mov    %eax,(%esp)
081cdfd2 +0x0c8:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081cdfd7 +0x0cd:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081cdfdd +0x0d3:  mov    %eax,0x4(%esp)
081cdfe1 +0x0d7:  mov    %edx,(%esp)
081cdfe4 +0x0da:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081cdfe9 +0x0df:  movl   $0x2c,0x8(%esp)
081cdff1 +0x0e7:  mov    %ebx,0x4(%esp)
081cdff5 +0x0eb:  mov    %eax,(%esp)
081cdff8 +0x0ee:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
081cdffd +0x0f3:  lea    -0x3c(%ebp),%ebx
081ce000 +0x0f6:  mov    0xc(%ebp),%eax
081ce003 +0x0f9:  mov    %eax,(%esp)
081ce006 +0x0fc:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081ce00b +0x101:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081ce011 +0x107:  mov    %eax,0x4(%esp)
081ce015 +0x10b:  mov    %edx,(%esp)
081ce018 +0x10e:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081ce01d +0x113:  movl   $0x2c,0x8(%esp)
081ce025 +0x11b:  mov    %ebx,0x4(%esp)
081ce029 +0x11f:  mov    %eax,(%esp)
081ce02c +0x122:  call   0846dc7e <_ZN17CGuildServerProxy10SendPacketEPci>  ; CGuildServerProxy::SendPacket(char*, int)
081ce031 +0x127:  mov    $0x0,%eax
081ce036 +0x12c:  add    $0x54,%esp
081ce039 +0x12f:  pop    %ebx
081ce03a +0x130:  pop    %ebp
081ce03b +0x131:  ret
```

## 反编译 C

```c
// Dispatcher_DeleteToBlackList::process @ 0x81cdf0a

/* Dispatcher_DeleteToBlackList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_DeleteToBlackList::process
          (Dispatcher_DeleteToBlackList *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  CGuildServerProxy *this_01;
  Packet_Delete_To_BlackList local_40 [10];
  undefined4 local_36;
  char acStack_32 [30];
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x26ea,
                       "virtual int Dispatcher_DeleteToBlackList::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),uVar2);
    }
    else {
      local_10 = param_2;
      Packet_Delete_To_BlackList::Packet_Delete_To_BlackList(local_40);
      local_36 = CUser::get_acc_id(param_1);
      strncpy(acStack_32,(char *)(local_10 + 0x14),*(size_t *)(local_10 + 0x10));
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
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
