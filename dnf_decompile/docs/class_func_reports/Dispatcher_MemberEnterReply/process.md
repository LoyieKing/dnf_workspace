# process

`_ZN27Dispatcher_MemberEnterReply7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_MemberEnterReply::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MemberEnterReply` | `0x081cba34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081cba34  _ZN27Dispatcher_MemberEnterReply7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_MemberEnterReply::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081cba34, 0x081cbb25]
081cba34 +0x00:  push   %ebp
081cba35 +0x01:  mov    %esp,%ebp
081cba37 +0x03:  push   %ebx
081cba38 +0x04:  sub    $0x34,%esp
081cba3b +0x07:  mov    0x14(%ebp),%eax
081cba3e +0x0a:  mov    %eax,-0x10(%ebp)
081cba41 +0x0d:  mov    0x10(%ebp),%eax
081cba44 +0x10:  mov    %eax,0x8(%esp)
081cba48 +0x14:  mov    0xc(%ebp),%eax
081cba4b +0x17:  mov    %eax,0x4(%esp)
081cba4f +0x1b:  mov    0x8(%ebp),%eax
081cba52 +0x1e:  mov    %eax,(%esp)
081cba55 +0x21:  call   081cb9f0 <_ZN27Dispatcher_MemberEnterReply11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_MemberEnterReply::check_error(CUser*, MSG_BASE&)
081cba5a +0x26:  mov    %eax,%edx
081cba5c +0x28:  mov    -0x10(%ebp),%eax
081cba5f +0x2b:  mov    %edx,0x4(%eax)
081cba62 +0x2e:  mov    -0x10(%ebp),%eax
081cba65 +0x31:  mov    0x4(%eax),%eax
081cba68 +0x34:  test   %eax,%eax
081cba6a +0x36:  jle    081cba76 <+0x42>
081cba6c +0x38:  mov    $0x0,%eax
081cba71 +0x3d:  jmp    081cbb1f <+0xeb>
081cba76 +0x42:  mov    -0x10(%ebp),%eax
081cba79 +0x45:  mov    0x4(%eax),%eax
081cba7c +0x48:  test   %eax,%eax
081cba7e +0x4a:  jns    081cbaaf <+0x7b>
081cba80 +0x4c:  mov    0xc(%ebp),%eax
081cba83 +0x4f:  mov    %eax,(%esp)
081cba86 +0x52:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081cba8b +0x57:  mov    -0x10(%ebp),%edx
081cba8e +0x5a:  mov    0x4(%edx),%edx
081cba91 +0x5d:  mov    %eax,0xc(%esp)
081cba95 +0x61:  mov    %edx,0x8(%esp)
081cba99 +0x65:  movl   $&_ZZN27Dispatcher_MemberEnterReply7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081cbaa1 +0x6d:  movl   $0x21ef,(%esp)
081cbaa8 +0x74:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081cbaad +0x79:  jmp    081cbb1f <+0xeb>
081cbaaf +0x7b:  mov    0x10(%ebp),%eax
081cbab2 +0x7e:  mov    %eax,-0xc(%ebp)
081cbab5 +0x81:  lea    -0x23(%ebp),%eax
081cbab8 +0x84:  mov    %eax,(%esp)
081cbabb +0x87:  call   0822ba10 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x10ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x10ba
081cbac0 +0x8c:  mov    0xc(%ebp),%eax
081cbac3 +0x8f:  mov    %eax,(%esp)
081cbac6 +0x92:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081cbacb +0x97:  mov    %eax,-0x19(%ebp)
081cbace +0x9a:  mov    0xc(%ebp),%eax
081cbad1 +0x9d:  mov    %eax,(%esp)
081cbad4 +0xa0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081cbad9 +0xa5:  mov    %eax,-0x15(%ebp)
081cbadc +0xa8:  mov    -0xc(%ebp),%eax
081cbadf +0xab:  movzbl 0xd(%eax),%eax
081cbae3 +0xaf:  mov    %al,-0x11(%ebp)
081cbae6 +0xb2:  lea    -0x23(%ebp),%ebx
081cbae9 +0xb5:  mov    0xc(%ebp),%eax
081cbaec +0xb8:  mov    %eax,(%esp)
081cbaef +0xbb:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081cbaf4 +0xc0:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081cbafa +0xc6:  mov    %eax,0x4(%esp)
081cbafe +0xca:  mov    %edx,(%esp)
081cbb01 +0xcd:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081cbb06 +0xd2:  movl   $0x13,0x8(%esp)
081cbb0e +0xda:  mov    %ebx,0x4(%esp)
081cbb12 +0xde:  mov    %eax,(%esp)
081cbb15 +0xe1:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
081cbb1a +0xe6:  mov    $0x0,%eax
081cbb1f +0xeb:  add    $0x34,%esp
081cbb22 +0xee:  pop    %ebx
081cbb23 +0xef:  pop    %ebp
081cbb24 +0xf0:  ret
081cbb25 +0xf1:  nop
```

## 反编译 C

```c
// Dispatcher_MemberEnterReply::process @ 0x81cba34

/* Dispatcher_MemberEnterReply::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MemberEnterReply::process
          (Dispatcher_MemberEnterReply *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Member_Enter_Reply local_27 [10];
  undefined4 local_1d;
  undefined4 local_19;
  MSG_BASE local_15;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x21ef,
                       "virtual int Dispatcher_MemberEnterReply::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),uVar2);
    }
    else {
      local_10 = param_2;
      Packet_Monitor_Member_Enter_Reply::Packet_Monitor_Member_Enter_Reply(local_27);
      local_1d = CUser::GetUID(param_1);
      local_19 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_15 = local_10[0xd];
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CMonitorServerProxy *)
                CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                          (GlobalData::s_monitor_proxy_mgr,uVar1);
      CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_27,0x13);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
