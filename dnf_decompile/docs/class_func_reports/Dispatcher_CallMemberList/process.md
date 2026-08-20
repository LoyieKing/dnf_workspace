# process

`_ZN25Dispatcher_CallMemberList7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CallMemberList::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CallMemberList` | `0x081cbda2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cbda2  _ZN25Dispatcher_CallMemberList7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CallMemberList::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cbda2, 0x081cbe83]
081cbda2 +0x00:  push   %ebp
081cbda3 +0x01:  mov    %esp,%ebp
081cbda5 +0x03:  push   %ebx
081cbda6 +0x04:  sub    $0x34,%esp
081cbda9 +0x07:  mov    0x14(%ebp),%eax
081cbdac +0x0a:  mov    %eax,-0xc(%ebp)
081cbdaf +0x0d:  mov    0x10(%ebp),%eax
081cbdb2 +0x10:  mov    %eax,0x8(%esp)
081cbdb6 +0x14:  mov    0xc(%ebp),%eax
081cbdb9 +0x17:  mov    %eax,0x4(%esp)
081cbdbd +0x1b:  mov    0x8(%ebp),%eax
081cbdc0 +0x1e:  mov    %eax,(%esp)
081cbdc3 +0x21:  call   081cbd44 <_ZN25Dispatcher_CallMemberList11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_CallMemberList::check_error(CUser*, MSG_BASE&)
081cbdc8 +0x26:  mov    %eax,%edx
081cbdca +0x28:  mov    -0xc(%ebp),%eax
081cbdcd +0x2b:  mov    %edx,0x4(%eax)
081cbdd0 +0x2e:  mov    -0xc(%ebp),%eax
081cbdd3 +0x31:  mov    0x4(%eax),%eax
081cbdd6 +0x34:  test   %eax,%eax
081cbdd8 +0x36:  jle    081cbde4 <+0x42>
081cbdda +0x38:  mov    $0x0,%eax
081cbddf +0x3d:  jmp    081cbe7d <+0xdb>
081cbde4 +0x42:  mov    -0xc(%ebp),%eax
081cbde7 +0x45:  mov    0x4(%eax),%eax
081cbdea +0x48:  test   %eax,%eax
081cbdec +0x4a:  jns    081cbe1d <+0x7b>
081cbdee +0x4c:  mov    0xc(%ebp),%eax
081cbdf1 +0x4f:  mov    %eax,(%esp)
081cbdf4 +0x52:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cbdf9 +0x57:  mov    -0xc(%ebp),%edx
081cbdfc +0x5a:  mov    0x4(%edx),%edx
081cbdff +0x5d:  mov    %eax,0xc(%esp)
081cbe03 +0x61:  mov    %edx,0x8(%esp)
081cbe07 +0x65:  movl   $&_ZZN25Dispatcher_CallMemberList7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cbe0f +0x6d:  movl   $0x225b,(%esp)
081cbe16 +0x74:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cbe1b +0x79:  jmp    081cbe7d <+0xdb>
081cbe1d +0x7b:  lea    -0x1e(%ebp),%eax
081cbe20 +0x7e:  mov    %eax,(%esp)
081cbe23 +0x81:  call   0822ba76 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1120>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1120
081cbe28 +0x86:  mov    0xc(%ebp),%eax
081cbe2b +0x89:  mov    %eax,(%esp)
081cbe2e +0x8c:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cbe33 +0x91:  mov    %eax,-0x14(%ebp)
081cbe36 +0x94:  mov    0xc(%ebp),%eax
081cbe39 +0x97:  mov    %eax,(%esp)
081cbe3c +0x9a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081cbe41 +0x9f:  mov    %eax,-0x10(%ebp)
081cbe44 +0xa2:  lea    -0x1e(%ebp),%ebx
081cbe47 +0xa5:  mov    0xc(%ebp),%eax
081cbe4a +0xa8:  mov    %eax,(%esp)
081cbe4d +0xab:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081cbe52 +0xb0:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081cbe58 +0xb6:  mov    %eax,0x4(%esp)
081cbe5c +0xba:  mov    %edx,(%esp)
081cbe5f +0xbd:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081cbe64 +0xc2:  movl   $0x12,0x8(%esp)
081cbe6c +0xca:  mov    %ebx,0x4(%esp)
081cbe70 +0xce:  mov    %eax,(%esp)
081cbe73 +0xd1:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
081cbe78 +0xd6:  mov    $0x0,%eax
081cbe7d +0xdb:  add    $0x34,%esp
081cbe80 +0xde:  pop    %ebx
081cbe81 +0xdf:  pop    %ebp
081cbe82 +0xe0:  ret
081cbe83 +0xe1:  nop
```

## 反编译 C

```c
// Dispatcher_CallMemberList::process @ 0x81cbda2

/* Dispatcher_CallMemberList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CallMemberList::process
          (Dispatcher_CallMemberList *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Call_Member_List local_22 [10];
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_10 + 4) = uVar1;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x225b,
                       "virtual int Dispatcher_CallMemberList::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_10 + 4),uVar2);
    }
    else {
      Packet_Monitor_Call_Member_List::Packet_Monitor_Call_Member_List(local_22);
      local_18 = CUser::GetUID(param_1);
      local_14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendPacket(this_00,(char *)local_22,0x12);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
