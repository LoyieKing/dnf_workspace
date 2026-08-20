# process

`_ZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CollectItems::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CollectItems` | `0x081e343c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e343c  _ZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CollectItems::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e343c, 0x081e360b]
081e343c +0x000:  push   %ebp
081e343d +0x001:  mov    %esp,%ebp
081e343f +0x003:  push   %esi
081e3440 +0x004:  push   %ebx
081e3441 +0x005:  sub    $0x70,%esp
081e3444 +0x008:  mov    0x10(%ebp),%eax
081e3447 +0x00b:  mov    %eax,-0x10(%ebp)
081e344a +0x00e:  mov    0x14(%ebp),%eax
081e344d +0x011:  mov    %eax,-0xc(%ebp)
081e3450 +0x014:  mov    0x14(%ebp),%eax
081e3453 +0x017:  mov    %eax,0xc(%esp)
081e3457 +0x01b:  mov    0x10(%ebp),%eax
081e345a +0x01e:  mov    %eax,0x8(%esp)
081e345e +0x022:  mov    0xc(%ebp),%eax
081e3461 +0x025:  mov    %eax,0x4(%esp)
081e3465 +0x029:  mov    0x8(%ebp),%eax
081e3468 +0x02c:  mov    %eax,(%esp)
081e346b +0x02f:  call   081e329e <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_CollectItems::check_error(CUser*, MSG_BASE&, ParamBase&)
081e3470 +0x034:  mov    %eax,%edx
081e3472 +0x036:  mov    -0xc(%ebp),%eax
081e3475 +0x039:  mov    %edx,0x4(%eax)
081e3478 +0x03c:  mov    -0xc(%ebp),%eax
081e347b +0x03f:  mov    0x4(%eax),%eax
081e347e +0x042:  test   %eax,%eax
081e3480 +0x044:  jle    081e348c <+0x50>
081e3482 +0x046:  mov    $0x0,%eax
081e3487 +0x04b:  jmp    081e3604 <+0x1c8>
081e348c +0x050:  mov    -0xc(%ebp),%eax
081e348f +0x053:  mov    0x4(%eax),%eax
081e3492 +0x056:  test   %eax,%eax
081e3494 +0x058:  jns    081e34c1 <+0x85>
081e3496 +0x05a:  mov    -0xc(%ebp),%eax
081e3499 +0x05d:  mov    0x4(%eax),%eax
081e349c +0x060:  movl   $0x0,0xc(%esp)
081e34a4 +0x068:  mov    %eax,0x8(%esp)
081e34a8 +0x06c:  movl   $&_ZZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e34b0 +0x074:  movl   $0x5aa2,(%esp)
081e34b7 +0x07b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e34bc +0x080:  jmp    081e3604 <+0x1c8>
081e34c1 +0x085:  mov    -0x10(%ebp),%eax
081e34c4 +0x088:  movzwl 0x10(%eax),%eax
081e34c8 +0x08c:  movzwl %ax,%esi
081e34cb +0x08f:  mov    -0x10(%ebp),%eax
081e34ce +0x092:  movzwl 0xe(%eax),%eax
081e34d2 +0x096:  movswl %ax,%ebx
081e34d5 +0x099:  mov    0xc(%ebp),%eax
081e34d8 +0x09c:  mov    %eax,(%esp)
081e34db +0x09f:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
081e34e0 +0x0a4:  movl   $0x1,0x14(%esp)
081e34e8 +0x0ac:  movl   $0x3,0x10(%esp)
081e34f0 +0x0b4:  mov    %esi,0xc(%esp)
081e34f4 +0x0b8:  mov    %ebx,0x8(%esp)
081e34f8 +0x0bc:  movl   $0x1,0x4(%esp)
081e3500 +0x0c4:  mov    %eax,(%esp)
081e3503 +0x0c7:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
081e3508 +0x0cc:  xor    $0x1,%eax
081e350b +0x0cf:  test   %al,%al
081e350d +0x0d1:  je     081e3538 <+0xfc>
081e350f +0x0d3:  movl   $0x0,0xc(%esp)
081e3517 +0x0db:  movl   $0x0,0x8(%esp)
081e351f +0x0e3:  movl   $&_ZZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e3527 +0x0eb:  movl   $0x5aa7,(%esp)
081e352e +0x0f2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e3533 +0x0f7:  jmp    081e3604 <+0x1c8>
081e3538 +0x0fc:  mov    -0x10(%ebp),%eax
081e353b +0x0ff:  movzwl 0xe(%eax),%edx
081e353f +0x103:  mov    -0xc(%ebp),%eax
081e3542 +0x106:  mov    %dx,0x8(%eax)
081e3546 +0x10a:  mov    -0x10(%ebp),%eax
081e3549 +0x10d:  movzwl 0x10(%eax),%edx
081e354d +0x111:  mov    -0xc(%ebp),%eax
081e3550 +0x114:  mov    %dx,0xa(%eax)
081e3554 +0x118:  lea    -0x49(%ebp),%eax
081e3557 +0x11b:  mov    %eax,(%esp)
081e355a +0x11e:  call   0822c75a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1e04>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1e04
081e355f +0x123:  mov    -0x10(%ebp),%eax
081e3562 +0x126:  movzwl 0x10(%eax),%eax
081e3566 +0x12a:  movzwl %ax,%eax
081e3569 +0x12d:  mov    %eax,-0x37(%ebp)
081e356c +0x130:  movl   $0xffffffff,0x4(%esp)
081e3574 +0x138:  mov    0xc(%ebp),%eax
081e3577 +0x13b:  mov    %eax,(%esp)
081e357a +0x13e:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e357f +0x143:  mov    %eax,-0x33(%ebp)
081e3582 +0x146:  mov    0xc(%ebp),%eax
081e3585 +0x149:  mov    %eax,(%esp)
081e3588 +0x14c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e358d +0x151:  mov    %eax,-0x3b(%ebp)
081e3590 +0x154:  mov    0xc(%ebp),%eax
081e3593 +0x157:  mov    %eax,(%esp)
081e3596 +0x15a:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081e359b +0x15f:  mov    %eax,(%esp)
081e359e +0x162:  call   0807e3b0 <_init+0xca8>
081e35a3 +0x167:  mov    %al,-0x2f(%ebp)
081e35a6 +0x16a:  mov    0xc(%ebp),%eax
081e35a9 +0x16d:  mov    %eax,(%esp)
081e35ac +0x170:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081e35b1 +0x175:  movl   $0x1d,0x8(%esp)
081e35b9 +0x17d:  mov    %eax,0x4(%esp)
081e35bd +0x181:  lea    -0x49(%ebp),%eax
081e35c0 +0x184:  add    $0x1b,%eax
081e35c3 +0x187:  mov    %eax,(%esp)
081e35c6 +0x18a:  call   0807d8d0 <_init+0x1c8>
081e35cb +0x18f:  lea    -0x49(%ebp),%ebx
081e35ce +0x192:  mov    0xc(%ebp),%eax
081e35d1 +0x195:  mov    %eax,(%esp)
081e35d4 +0x198:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081e35d9 +0x19d:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
081e35df +0x1a3:  mov    %eax,0x4(%esp)
081e35e3 +0x1a7:  mov    %edx,(%esp)
081e35e6 +0x1aa:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
081e35eb +0x1af:  movl   $0x39,0x8(%esp)
081e35f3 +0x1b7:  mov    %ebx,0x4(%esp)
081e35f7 +0x1bb:  mov    %eax,(%esp)
081e35fa +0x1be:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
081e35ff +0x1c3:  mov    $0x0,%eax
081e3604 +0x1c8:  add    $0x70,%esp
081e3607 +0x1cb:  pop    %ebx
081e3608 +0x1cc:  pop    %esi
081e3609 +0x1cd:  pop    %ebp
081e360a +0x1ce:  ret
081e360b +0x1cf:  nop
```

## 反编译 C

```c
// Dispatcher_CollectItems::process @ 0x81e343c

/* Dispatcher_CollectItems::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CollectItems::process
          (Dispatcher_CollectItems *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 uVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  char *pcVar6;
  size_t sVar7;
  CMonitorServerProxy *this_00;
  Packet_CollectItems local_4d [14];
  undefined4 local_3f;
  uint local_3b;
  undefined4 local_37;
  undefined1 local_33;
  char acStack_32 [30];
  MSG_BASE *local_14;
  ParamBase *local_10;
  
  local_14 = param_2;
  local_10 = param_3;
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_10 + 4) = uVar4;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar4 = LineFunc(0x5aa2,
                       "virtual int Dispatcher_CollectItems::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_10 + 4),0);
    }
    else {
      uVar1 = *(undefined2 *)(local_14 + 0x10);
      sVar2 = *(short *)(local_14 + 0xe);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::delete_item(pCVar5,1,(int)sVar2,uVar1,3,1);
      if (cVar3 == '\x01') {
        *(undefined2 *)(local_10 + 8) = *(undefined2 *)(local_14 + 0xe);
        *(undefined2 *)(local_10 + 10) = *(undefined2 *)(local_14 + 0x10);
        Packet_CollectItems::Packet_CollectItems(local_4d);
        local_3b = (uint)*(ushort *)(local_14 + 0x10);
        local_37 = CUser::get_charac_no(param_1,-1);
        local_3f = CUser::get_acc_id(param_1);
        pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        sVar7 = strlen(pcVar6);
        local_33 = (undefined1)sVar7;
        pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        strncpy(acStack_32,pcVar6,0x1d);
        uVar4 = CUser::GetServerGroup(param_1);
        this_00 = (CMonitorServerProxy *)
                  CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                            (GlobalData::s_monitor_proxy_mgr,uVar4);
        CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_4d,0x39);
        uVar4 = 0;
      }
      else {
        uVar4 = LineFunc(0x5aa7,
                         "virtual int Dispatcher_CollectItems::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,0);
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
