# process

`_ZN31Dispatcher_PrecheckSoloTeleport7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_PrecheckSoloTeleport::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PrecheckSoloTeleport` | `0x081e19ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e19ca  _ZN31Dispatcher_PrecheckSoloTeleport7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_PrecheckSoloTeleport::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e19ca, 0x081e1a9d]
081e19ca +0x00:  push   %ebp
081e19cb +0x01:  mov    %esp,%ebp
081e19cd +0x03:  push   %ebx
081e19ce +0x04:  sub    $0x44,%esp
081e19d1 +0x07:  mov    0x14(%ebp),%eax
081e19d4 +0x0a:  mov    %eax,-0x14(%ebp)
081e19d7 +0x0d:  mov    0x10(%ebp),%eax
081e19da +0x10:  mov    %eax,-0x10(%ebp)
081e19dd +0x13:  mov    0x14(%ebp),%eax
081e19e0 +0x16:  mov    %eax,0xc(%esp)
081e19e4 +0x1a:  mov    0x10(%ebp),%eax
081e19e7 +0x1d:  mov    %eax,0x8(%esp)
081e19eb +0x21:  mov    0xc(%ebp),%eax
081e19ee +0x24:  mov    %eax,0x4(%esp)
081e19f2 +0x28:  mov    0x8(%ebp),%eax
081e19f5 +0x2b:  mov    %eax,(%esp)
081e19f8 +0x2e:  call   081e1a9e <_ZN31Dispatcher_PrecheckSoloTeleport11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_PrecheckSoloTeleport::check_error(CUser*, MSG_BASE&, ParamBase&)
081e19fd +0x33:  mov    %eax,-0xc(%ebp)
081e1a00 +0x36:  cmpl   $0x0,-0xc(%ebp)
081e1a04 +0x3a:  jle    081e1a11 <+0x47>
081e1a06 +0x3c:  mov    -0x14(%ebp),%eax
081e1a09 +0x3f:  mov    -0xc(%ebp),%edx
081e1a0c +0x42:  mov    %edx,0x4(%eax)
081e1a0f +0x45:  jmp    081e1a1e <+0x54>
081e1a11 +0x47:  cmpl   $0x0,-0xc(%ebp)
081e1a15 +0x4b:  jns    081e1a1e <+0x54>
081e1a17 +0x4d:  mov    $0xffffffff,%eax
081e1a1c +0x52:  jmp    081e1a98 <+0xce>
081e1a1e +0x54:  cmpl   $0x0,-0xc(%ebp)
081e1a22 +0x58:  jne    081e1a93 <+0xc9>
081e1a24 +0x5a:  lea    -0x37(%ebp),%eax
081e1a27 +0x5d:  mov    %eax,(%esp)
081e1a2a +0x60:  call   0822c5d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1c7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1c7c
081e1a2f +0x65:  mov    -0x10(%ebp),%eax
081e1a32 +0x68:  mov    0x2c(%eax),%eax
081e1a35 +0x6b:  mov    -0x10(%ebp),%edx
081e1a38 +0x6e:  add    $0xd,%edx
081e1a3b +0x71:  mov    %eax,0x8(%esp)
081e1a3f +0x75:  mov    %edx,0x4(%esp)
081e1a43 +0x79:  lea    -0x37(%ebp),%eax
081e1a46 +0x7c:  add    $0xa,%eax
081e1a49 +0x7f:  mov    %eax,(%esp)
081e1a4c +0x82:  call   0807d8d0 <_init+0x1c8>
081e1a51 +0x87:  mov    0xc(%ebp),%eax
081e1a54 +0x8a:  mov    %eax,(%esp)
081e1a57 +0x8d:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081e1a5c +0x92:  mov    %eax,-0x18(%ebp)
081e1a5f +0x95:  lea    -0x37(%ebp),%ebx
081e1a62 +0x98:  mov    0xc(%ebp),%eax
081e1a65 +0x9b:  mov    %eax,(%esp)
081e1a68 +0x9e:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081e1a6d +0xa3:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081e1a73 +0xa9:  mov    %eax,0x4(%esp)
081e1a77 +0xad:  mov    %edx,(%esp)
081e1a7a +0xb0:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081e1a7f +0xb5:  movl   $0x23,0x8(%esp)
081e1a87 +0xbd:  mov    %ebx,0x4(%esp)
081e1a8b +0xc1:  mov    %eax,(%esp)
081e1a8e +0xc4:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
081e1a93 +0xc9:  mov    $0x0,%eax
081e1a98 +0xce:  add    $0x44,%esp
081e1a9b +0xd1:  pop    %ebx
081e1a9c +0xd2:  pop    %ebp
081e1a9d +0xd3:  ret
```

## 反编译 C

```c
// Dispatcher_PrecheckSoloTeleport::process @ 0x81e19ca

/* Dispatcher_PrecheckSoloTeleport::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PrecheckSoloTeleport::process
          (Dispatcher_PrecheckSoloTeleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  undefined4 uVar1;
  CMonitorServerProxy *this_00;
  Packet_Monitor_Request_Charac_Info local_3b [10];
  char acStack_31 [21];
  undefined4 local_1c;
  ParamBase *local_18;
  MSG_BASE *local_14;
  int local_10;
  
  local_18 = param_3;
  local_14 = param_2;
  local_10 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (local_10 < 1) {
    if (local_10 < 0) {
      return 0xffffffff;
    }
  }
  else {
    *(int *)(local_18 + 4) = local_10;
  }
  if (local_10 == 0) {
    Packet_Monitor_Request_Charac_Info::Packet_Monitor_Request_Charac_Info(local_3b);
    strncpy(acStack_31,(char *)(local_14 + 0xd),*(size_t *)(local_14 + 0x2c));
    local_1c = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar1 = CUser::GetServerGroup(param_1);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar1);
    CMonitorServerProxy::SendPacket(this_00,(char *)local_3b,0x23);
  }
  return 0;
}
```
