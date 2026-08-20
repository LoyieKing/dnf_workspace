# send

`_ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase`

`Dispatcher_Client_Spec_Statistic::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Client_Spec_Statistic` | `0x081ce794` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ce794  _ZN32Dispatcher_Client_Spec_Statistic4sendEP5CUserR9ParamBase
#           Dispatcher_Client_Spec_Statistic::send(CUser*, ParamBase&)
# range [0x081ce794, 0x081ce8bb]
081ce794 +0x000:  push   %ebp
081ce795 +0x001:  mov    %esp,%ebp
081ce797 +0x003:  push   %esi
081ce798 +0x004:  push   %ebx
081ce799 +0x005:  sub    $0xc20,%esp
081ce79f +0x00b:  cmpl   $0x0,0xc(%ebp)
081ce7a3 +0x00f:  je     081ce8b0 <+0x11c>
081ce7a9 +0x015:  mov    0x10(%ebp),%eax
081ce7ac +0x018:  mov    %eax,-0x10(%ebp)
081ce7af +0x01b:  mov    0xc(%ebp),%eax
081ce7b2 +0x01e:  mov    %eax,(%esp)
081ce7b5 +0x021:  call   0822fcd6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5380>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5380
081ce7ba +0x026:  mov    %eax,-0xc(%ebp)
081ce7bd +0x029:  mov    -0xc(%ebp),%eax
081ce7c0 +0x02c:  movzbl (%eax),%eax
081ce7c3 +0x02f:  test   %al,%al
081ce7c5 +0x031:  je     081ce7e1 <+0x4d>
081ce7c7 +0x033:  mov    -0x10(%ebp),%eax
081ce7ca +0x036:  movzbl 0x4(%eax),%eax
081ce7ce +0x03a:  cmp    $0x1,%al
081ce7d0 +0x03c:  je     081ce7e1 <+0x4d>
081ce7d2 +0x03e:  mov    -0x10(%ebp),%eax
081ce7d5 +0x041:  movzbl 0x4(%eax),%eax
081ce7d9 +0x045:  cmp    $0x81,%al
081ce7db +0x047:  jne    081ce8b1 <+0x11d>
081ce7e1 +0x04d:  lea    -0xc16(%ebp),%eax
081ce7e7 +0x053:  mov    %eax,(%esp)
081ce7ea +0x056:  call   0822bc18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x12c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x12c2
081ce7ef +0x05b:  mov    -0x10(%ebp),%eax
081ce7f2 +0x05e:  movzbl 0x4(%eax),%eax
081ce7f6 +0x062:  cmp    $0x1,%al
081ce7f8 +0x064:  je     081ce805 <+0x71>
081ce7fa +0x066:  mov    -0x10(%ebp),%eax
081ce7fd +0x069:  movzbl 0x4(%eax),%eax
081ce801 +0x06d:  cmp    $0x81,%al
081ce803 +0x06f:  jne    081ce80e <+0x7a>
081ce805 +0x071:  movb   $0x2,-0xc0c(%ebp)
081ce80c +0x078:  jmp    081ce815 <+0x81>
081ce80e +0x07a:  movb   $0x0,-0xc0c(%ebp)
081ce815 +0x081:  mov    -0xc(%ebp),%eax
081ce818 +0x084:  movzbl 0x1(%eax),%eax
081ce81c +0x088:  mov    %al,-0xc0b(%ebp)
081ce822 +0x08e:  movzbl -0xc0b(%ebp),%eax
081ce829 +0x095:  movzbl %al,%edx
081ce82c +0x098:  mov    %edx,%eax
081ce82e +0x09a:  add    %eax,%eax
081ce830 +0x09c:  add    %edx,%eax
081ce832 +0x09e:  shl    $0x2,%eax
081ce835 +0x0a1:  mov    -0xc(%ebp),%edx
081ce838 +0x0a4:  add    $0x4,%edx
081ce83b +0x0a7:  mov    %eax,0x8(%esp)
081ce83f +0x0ab:  mov    %edx,0x4(%esp)
081ce843 +0x0af:  lea    -0xc16(%ebp),%eax
081ce849 +0x0b5:  add    $0x12,%eax
081ce84c +0x0b8:  mov    %eax,(%esp)
081ce84f +0x0bb:  call   0807d8a0 <_init+0x198>
081ce854 +0x0c0:  movzbl -0xc0b(%ebp),%eax
081ce85b +0x0c7:  movzbl %al,%edx
081ce85e +0x0ca:  mov    %edx,%eax
081ce860 +0x0cc:  add    %eax,%eax
081ce862 +0x0ce:  add    %edx,%eax
081ce864 +0x0d0:  shl    $0x2,%eax
081ce867 +0x0d3:  add    $0x12,%eax
081ce86a +0x0d6:  mov    %ax,-0xc14(%ebp)
081ce871 +0x0dd:  movzwl -0xc14(%ebp),%eax
081ce878 +0x0e4:  movzwl %ax,%esi
081ce87b +0x0e7:  lea    -0xc16(%ebp),%ebx
081ce881 +0x0ed:  mov    0xc(%ebp),%eax
081ce884 +0x0f0:  mov    %eax,(%esp)
081ce887 +0x0f3:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081ce88c +0x0f8:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
081ce892 +0x0fe:  mov    %eax,0x4(%esp)
081ce896 +0x102:  mov    %edx,(%esp)
081ce899 +0x105:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
081ce89e +0x10a:  mov    %esi,0x8(%esp)
081ce8a2 +0x10e:  mov    %ebx,0x4(%esp)
081ce8a6 +0x112:  mov    %eax,(%esp)
081ce8a9 +0x115:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
081ce8ae +0x11a:  jmp    081ce8b1 <+0x11d>
081ce8b0 +0x11c:  nop
081ce8b1 +0x11d:  add    $0xc20,%esp
081ce8b7 +0x123:  pop    %ebx
081ce8b8 +0x124:  pop    %esi
081ce8b9 +0x125:  pop    %ebp
081ce8ba +0x126:  ret
081ce8bb +0x127:  nop
```

## 反编译 C

```c
// Dispatcher_Client_Spec_Statistic::send @ 0x81ce794

/* Dispatcher_Client_Spec_Statistic::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Client_Spec_Statistic::send
          (Dispatcher_Client_Spec_Statistic *this,CUser *param_1,ParamBase *param_2)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  uint uVar2;
  Packet_Client_Spec_Statistic local_c1a [2];
  ushort local_c18;
  undefined1 local_c10;
  byte local_c0f;
  undefined1 auStack_c08 [3060];
  ParamBase *local_14;
  char *local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_14 = param_2;
    local_10 = (char *)CUser::getClientHWSpec(param_1);
    if (((*local_10 == '\0') || (local_14[4] == (ParamBase)0x1)) || (local_14[4] == (ParamBase)0x81)
       ) {
      Packet_Client_Spec_Statistic::Packet_Client_Spec_Statistic(local_c1a);
      if ((local_14[4] == (ParamBase)0x1) || (local_14[4] == (ParamBase)0x81)) {
        local_c10 = 2;
      }
      else {
        local_c10 = 0;
      }
      local_c0f = local_10[1];
      memcpy(auStack_c08,local_10 + 4,(uint)local_c0f * 0xc);
      local_c18 = (ushort)local_c0f * 0xc + 0x12;
      uVar2 = (uint)local_c18;
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar1);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_c1a,uVar2);
    }
  }
  return;
}
```
