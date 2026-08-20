# process

`_ZN29Dispatcher_CompatibilityIndex7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_CompatibilityIndex::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_CompatibilityIndex` | `0x081e2664` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e2664  _ZN29Dispatcher_CompatibilityIndex7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_CompatibilityIndex::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e2664, 0x081e277f]
081e2664 +0x000:  push   %ebp
081e2665 +0x001:  mov    %esp,%ebp
081e2667 +0x003:  push   %ebx
081e2668 +0x004:  sub    $0x44,%esp
081e266b +0x007:  mov    0x10(%ebp),%eax
081e266e +0x00a:  mov    %eax,-0x10(%ebp)
081e2671 +0x00d:  mov    0x14(%ebp),%eax
081e2674 +0x010:  mov    %eax,0xc(%esp)
081e2678 +0x014:  mov    0x10(%ebp),%eax
081e267b +0x017:  mov    %eax,0x8(%esp)
081e267f +0x01b:  mov    0xc(%ebp),%eax
081e2682 +0x01e:  mov    %eax,0x4(%esp)
081e2686 +0x022:  mov    0x8(%ebp),%eax
081e2689 +0x025:  mov    %eax,(%esp)
081e268c +0x028:  call   081e23e0 <_ZN29Dispatcher_CompatibilityIndex11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_CompatibilityIndex::check_error(CUser*, MSG_BASE&, ParamBase&)
081e2691 +0x02d:  mov    %eax,-0xc(%ebp)
081e2694 +0x030:  cmpl   $0x0,-0xc(%ebp)
081e2698 +0x034:  jle    081e26a4 <+0x40>
081e269a +0x036:  mov    $0x0,%eax
081e269f +0x03b:  jmp    081e2779 <+0x115>
081e26a4 +0x040:  cmpl   $0x0,-0xc(%ebp)
081e26a8 +0x044:  jns    081e26d2 <+0x6e>
081e26aa +0x046:  movl   $0x0,0xc(%esp)
081e26b2 +0x04e:  mov    -0xc(%ebp),%eax
081e26b5 +0x051:  mov    %eax,0x8(%esp)
081e26b9 +0x055:  movl   $&_ZZN29Dispatcher_CompatibilityIndex7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e26c1 +0x05d:  movl   $0x58f8,(%esp)
081e26c8 +0x064:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e26cd +0x069:  jmp    081e2779 <+0x115>
081e26d2 +0x06e:  lea    -0x2e(%ebp),%eax
081e26d5 +0x071:  mov    %eax,(%esp)
081e26d8 +0x074:  call   0822c61e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1cc8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1cc8
081e26dd +0x079:  mov    0xc(%ebp),%eax
081e26e0 +0x07c:  mov    %eax,(%esp)
081e26e3 +0x07f:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081e26e8 +0x084:  mov    %eax,-0x24(%ebp)
081e26eb +0x087:  mov    -0x10(%ebp),%eax
081e26ee +0x08a:  mov    0x10(%eax),%eax
081e26f1 +0x08d:  mov    %eax,-0x1e(%ebp)
081e26f4 +0x090:  mov    -0x10(%ebp),%eax
081e26f7 +0x093:  movzbl 0xe(%eax),%eax
081e26fb +0x097:  mov    %al,-0x1f(%ebp)
081e26fe +0x09a:  mov    -0x10(%ebp),%eax
081e2701 +0x09d:  movzbl 0xd(%eax),%eax
081e2705 +0x0a1:  mov    %al,-0x20(%ebp)
081e2708 +0x0a4:  mov    -0x10(%ebp),%eax
081e270b +0x0a7:  movzwl 0x14(%eax),%eax
081e270f +0x0ab:  mov    %ax,-0x1a(%ebp)
081e2713 +0x0af:  mov    -0x10(%ebp),%eax
081e2716 +0x0b2:  movzwl 0x16(%eax),%eax
081e271a +0x0b6:  mov    %ax,-0x18(%ebp)
081e271e +0x0ba:  mov    -0x10(%ebp),%eax
081e2721 +0x0bd:  movzwl 0x1a(%eax),%eax
081e2725 +0x0c1:  mov    %ax,-0x14(%ebp)
081e2729 +0x0c5:  mov    -0x10(%ebp),%eax
081e272c +0x0c8:  movzwl 0x18(%eax),%eax
081e2730 +0x0cc:  mov    %ax,-0x16(%ebp)
081e2734 +0x0d0:  mov    -0x10(%ebp),%eax
081e2737 +0x0d3:  movzbl 0x1c(%eax),%eax
081e273b +0x0d7:  mov    %al,-0x12(%ebp)
081e273e +0x0da:  mov    -0x10(%ebp),%eax
081e2741 +0x0dd:  movzbl 0x1d(%eax),%eax
081e2745 +0x0e1:  mov    %al,-0x11(%ebp)
081e2748 +0x0e4:  lea    -0x2e(%ebp),%ebx
081e274b +0x0e7:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
081e2750 +0x0ec:  movl   $0x0,0x4(%esp)
081e2758 +0x0f4:  mov    %eax,(%esp)
081e275b +0x0f7:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
081e2760 +0x0fc:  movl   $0x1e,0x8(%esp)
081e2768 +0x104:  mov    %ebx,0x4(%esp)
081e276c +0x108:  mov    %eax,(%esp)
081e276f +0x10b:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
081e2774 +0x110:  mov    $0x0,%eax
081e2779 +0x115:  add    $0x44,%esp
081e277c +0x118:  pop    %ebx
081e277d +0x119:  pop    %ebp
081e277e +0x11a:  ret
081e277f +0x11b:  nop
```

## 反编译 C

```c
// Dispatcher_CompatibilityIndex::process @ 0x81e2664

/* Dispatcher_CompatibilityIndex::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CompatibilityIndex::process
          (Dispatcher_CompatibilityIndex *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_Stat_Compatibility_Index local_32 [10];
  undefined4 local_28;
  MSG_BASE local_24;
  MSG_BASE local_23;
  undefined4 local_22;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  MSG_BASE local_16;
  MSG_BASE local_15;
  MSG_BASE *local_14;
  int local_10;
  
  local_14 = param_2;
  local_10 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  if (local_10 < 1) {
    if (local_10 < 0) {
      uVar1 = LineFunc(0x58f8,
                       "virtual int Dispatcher_CompatibilityIndex::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,local_10,0);
    }
    else {
      Packet_Stat_Compatibility_Index::Packet_Stat_Compatibility_Index(local_32);
      local_28 = CUser::get_acc_id(param_1);
      local_22 = *(undefined4 *)(local_14 + 0x10);
      local_23 = local_14[0xe];
      local_24 = local_14[0xd];
      local_1e = *(undefined2 *)(local_14 + 0x14);
      local_1c = *(undefined2 *)(local_14 + 0x16);
      local_18 = *(undefined2 *)(local_14 + 0x1a);
      local_1a = *(undefined2 *)(local_14 + 0x18);
      local_16 = local_14[0x1c];
      local_15 = local_14[0x1d];
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0,param_2,param_3);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_32,0x1e);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
