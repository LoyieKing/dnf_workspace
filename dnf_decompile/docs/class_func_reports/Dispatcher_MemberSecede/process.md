# process

`_ZN23Dispatcher_MemberSecede7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_MemberSecede::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MemberSecede` | `0x081cbc2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cbc2e  _ZN23Dispatcher_MemberSecede7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_MemberSecede::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cbc2e, 0x081cbd39]
081cbc2e +0x000:  push   %ebp
081cbc2f +0x001:  mov    %esp,%ebp
081cbc31 +0x003:  push   %ebx
081cbc32 +0x004:  sub    $0x54,%esp
081cbc35 +0x007:  mov    0x14(%ebp),%eax
081cbc38 +0x00a:  mov    %eax,-0x10(%ebp)
081cbc3b +0x00d:  mov    0x10(%ebp),%eax
081cbc3e +0x010:  mov    %eax,0x8(%esp)
081cbc42 +0x014:  mov    0xc(%ebp),%eax
081cbc45 +0x017:  mov    %eax,0x4(%esp)
081cbc49 +0x01b:  mov    0x8(%ebp),%eax
081cbc4c +0x01e:  mov    %eax,(%esp)
081cbc4f +0x021:  call   081cbbd0 <_ZN23Dispatcher_MemberSecede11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_MemberSecede::check_error(CUser*, MSG_BASE&)
081cbc54 +0x026:  mov    %eax,%edx
081cbc56 +0x028:  mov    -0x10(%ebp),%eax
081cbc59 +0x02b:  mov    %edx,0x4(%eax)
081cbc5c +0x02e:  mov    -0x10(%ebp),%eax
081cbc5f +0x031:  mov    0x4(%eax),%eax
081cbc62 +0x034:  test   %eax,%eax
081cbc64 +0x036:  jle    081cbc70 <+0x42>
081cbc66 +0x038:  mov    $0x0,%eax
081cbc6b +0x03d:  jmp    081cbd34 <+0x106>
081cbc70 +0x042:  mov    -0x10(%ebp),%eax
081cbc73 +0x045:  mov    0x4(%eax),%eax
081cbc76 +0x048:  test   %eax,%eax
081cbc78 +0x04a:  jns    081cbcac <+0x7e>
081cbc7a +0x04c:  mov    0xc(%ebp),%eax
081cbc7d +0x04f:  mov    %eax,(%esp)
081cbc80 +0x052:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cbc85 +0x057:  mov    -0x10(%ebp),%edx
081cbc88 +0x05a:  mov    0x4(%edx),%edx
081cbc8b +0x05d:  mov    %eax,0xc(%esp)
081cbc8f +0x061:  mov    %edx,0x8(%esp)
081cbc93 +0x065:  movl   $&_ZZN23Dispatcher_MemberSecede7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cbc9b +0x06d:  movl   $0x2228,(%esp)
081cbca2 +0x074:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cbca7 +0x079:  jmp    081cbd34 <+0x106>
081cbcac +0x07e:  mov    0x10(%ebp),%eax
081cbcaf +0x081:  mov    %eax,-0xc(%ebp)
081cbcb2 +0x084:  lea    -0x41(%ebp),%eax
081cbcb5 +0x087:  mov    %eax,(%esp)
081cbcb8 +0x08a:  call   0822ba34 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x10de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x10de
081cbcbd +0x08f:  mov    0xc(%ebp),%eax
081cbcc0 +0x092:  mov    %eax,(%esp)
081cbcc3 +0x095:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cbcc8 +0x09a:  mov    %eax,-0x37(%ebp)
081cbccb +0x09d:  mov    0xc(%ebp),%eax
081cbcce +0x0a0:  mov    %eax,(%esp)
081cbcd1 +0x0a3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081cbcd6 +0x0a8:  mov    %eax,-0x33(%ebp)
081cbcd9 +0x0ab:  mov    -0xc(%ebp),%eax
081cbcdc +0x0ae:  mov    0x10(%eax),%eax
081cbcdf +0x0b1:  mov    -0xc(%ebp),%edx
081cbce2 +0x0b4:  add    $0x14,%edx
081cbce5 +0x0b7:  mov    %eax,0x8(%esp)
081cbce9 +0x0bb:  mov    %edx,0x4(%esp)
081cbced +0x0bf:  lea    -0x41(%ebp),%eax
081cbcf0 +0x0c2:  add    $0x13,%eax
081cbcf3 +0x0c5:  mov    %eax,(%esp)
081cbcf6 +0x0c8:  call   0807d8a0 <_init+0x198>
081cbcfb +0x0cd:  lea    -0x41(%ebp),%ebx
081cbcfe +0x0d0:  mov    0xc(%ebp),%eax
081cbd01 +0x0d3:  mov    %eax,(%esp)
081cbd04 +0x0d6:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081cbd09 +0x0db:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081cbd0f +0x0e1:  mov    %eax,0x4(%esp)
081cbd13 +0x0e5:  mov    %edx,(%esp)
081cbd16 +0x0e8:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081cbd1b +0x0ed:  movl   $0x31,0x8(%esp)
081cbd23 +0x0f5:  mov    %ebx,0x4(%esp)
081cbd27 +0x0f9:  mov    %eax,(%esp)
081cbd2a +0x0fc:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
081cbd2f +0x101:  mov    $0x0,%eax
081cbd34 +0x106:  add    $0x54,%esp
081cbd37 +0x109:  pop    %ebx
081cbd38 +0x10a:  pop    %ebp
081cbd39 +0x10b:  ret
```

## 反编译 C

```c
// Dispatcher_MemberSecede::process @ 0x81cbc2e

/* Dispatcher_MemberSecede::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MemberSecede::process
          (Dispatcher_MemberSecede *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Member_Secede local_45 [10];
  undefined4 local_3b;
  undefined4 local_37;
  undefined1 auStack_32 [30];
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2228,
                       "virtual int Dispatcher_MemberSecede::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),uVar2);
    }
    else {
      local_10 = param_2;
      Packet_Monitor_Member_Secede::Packet_Monitor_Member_Secede(local_45);
      local_3b = CUser::GetUID(param_1);
      local_37 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      memcpy(auStack_32,local_10 + 0x14,*(size_t *)(local_10 + 0x10));
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_45,0x31);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
