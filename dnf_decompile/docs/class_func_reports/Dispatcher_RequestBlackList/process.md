# process

`_ZN27Dispatcher_RequestBlackList7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_RequestBlackList::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestBlackList` | `0x081ce070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce070  _ZN27Dispatcher_RequestBlackList7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_RequestBlackList::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ce070, 0x081ce151]
081ce070 +0x00:  push   %ebp
081ce071 +0x01:  mov    %esp,%ebp
081ce073 +0x03:  push   %ebx
081ce074 +0x04:  sub    $0x34,%esp
081ce077 +0x07:  mov    0x14(%ebp),%eax
081ce07a +0x0a:  mov    %eax,-0xc(%ebp)
081ce07d +0x0d:  mov    0x10(%ebp),%eax
081ce080 +0x10:  mov    %eax,0x8(%esp)
081ce084 +0x14:  mov    0xc(%ebp),%eax
081ce087 +0x17:  mov    %eax,0x4(%esp)
081ce08b +0x1b:  mov    0x8(%ebp),%eax
081ce08e +0x1e:  mov    %eax,(%esp)
081ce091 +0x21:  call   081ce046 <_ZN27Dispatcher_RequestBlackList11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_RequestBlackList::check_error(CUser*, MSG_BASE&)
081ce096 +0x26:  mov    %eax,%edx
081ce098 +0x28:  mov    -0xc(%ebp),%eax
081ce09b +0x2b:  mov    %edx,0x4(%eax)
081ce09e +0x2e:  mov    -0xc(%ebp),%eax
081ce0a1 +0x31:  mov    0x4(%eax),%eax
081ce0a4 +0x34:  test   %eax,%eax
081ce0a6 +0x36:  jle    081ce0b2 <+0x42>
081ce0a8 +0x38:  mov    $0x0,%eax
081ce0ad +0x3d:  jmp    081ce14b <+0xdb>
081ce0b2 +0x42:  mov    -0xc(%ebp),%eax
081ce0b5 +0x45:  mov    0x4(%eax),%eax
081ce0b8 +0x48:  test   %eax,%eax
081ce0ba +0x4a:  jns    081ce0eb <+0x7b>
081ce0bc +0x4c:  mov    0xc(%ebp),%eax
081ce0bf +0x4f:  mov    %eax,(%esp)
081ce0c2 +0x52:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ce0c7 +0x57:  mov    -0xc(%ebp),%edx
081ce0ca +0x5a:  mov    0x4(%edx),%edx
081ce0cd +0x5d:  mov    %eax,0xc(%esp)
081ce0d1 +0x61:  mov    %edx,0x8(%esp)
081ce0d5 +0x65:  movl   $&_ZZN27Dispatcher_RequestBlackList7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081ce0dd +0x6d:  movl   $0x2717,(%esp)
081ce0e4 +0x74:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081ce0e9 +0x79:  jmp    081ce14b <+0xdb>
081ce0eb +0x7b:  lea    -0x1e(%ebp),%eax
081ce0ee +0x7e:  mov    %eax,(%esp)
081ce0f1 +0x81:  call   0822bbb2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x125c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x125c
081ce0f6 +0x86:  mov    0xc(%ebp),%eax
081ce0f9 +0x89:  mov    %eax,(%esp)
081ce0fc +0x8c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081ce101 +0x91:  mov    %eax,-0x14(%ebp)
081ce104 +0x94:  mov    0xc(%ebp),%eax
081ce107 +0x97:  mov    %eax,(%esp)
081ce10a +0x9a:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081ce10f +0x9f:  mov    %eax,-0x10(%ebp)
081ce112 +0xa2:  lea    -0x1e(%ebp),%ebx
081ce115 +0xa5:  mov    0xc(%ebp),%eax
081ce118 +0xa8:  mov    %eax,(%esp)
081ce11b +0xab:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081ce120 +0xb0:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081ce126 +0xb6:  mov    %eax,0x4(%esp)
081ce12a +0xba:  mov    %edx,(%esp)
081ce12d +0xbd:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081ce132 +0xc2:  movl   $0x12,0x8(%esp)
081ce13a +0xca:  mov    %ebx,0x4(%esp)
081ce13e +0xce:  mov    %eax,(%esp)
081ce141 +0xd1:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
081ce146 +0xd6:  mov    $0x0,%eax
081ce14b +0xdb:  add    $0x34,%esp
081ce14e +0xde:  pop    %ebx
081ce14f +0xdf:  pop    %ebp
081ce150 +0xe0:  ret
081ce151 +0xe1:  nop
```

## 反编译 C

```c
// Dispatcher_RequestBlackList::process @ 0x81ce070

/* Dispatcher_RequestBlackList::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RequestBlackList::process
          (Dispatcher_RequestBlackList *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CMonitorServerProxy *this_00;
  Packet_Request_BlackList local_22 [10];
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_10 + 4) = uVar1;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2717,
                       "virtual int Dispatcher_RequestBlackList::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_10 + 4),uVar2);
    }
    else {
      Packet_Request_BlackList::Packet_Request_BlackList(local_22);
      local_18 = CUser::get_acc_id(param_1);
      local_14 = CUser::GetUID(param_1);
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
