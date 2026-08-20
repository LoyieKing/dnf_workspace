# pvpPingStat

`_ZN28DisPatcher_UdpCharacteristic11pvpPingStatEP5CUserRtS2_`

`DisPatcher_UdpCharacteristic::pvpPingStat(CUser*, unsigned short&, unsigned short&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UdpCharacteristic` | `0x0821afbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821afbc  _ZN28DisPatcher_UdpCharacteristic11pvpPingStatEP5CUserRtS2_
#           DisPatcher_UdpCharacteristic::pvpPingStat(CUser*, unsigned short&, unsigned short&)
# range [0x0821afbc, 0x0821b029]
0821afbc +0x00:  push   %ebp
0821afbd +0x01:  mov    %esp,%ebp
0821afbf +0x03:  push   %ebx
0821afc0 +0x04:  sub    $0x24,%esp
0821afc3 +0x07:  lea    -0x16(%ebp),%eax
0821afc6 +0x0a:  mov    %eax,(%esp)
0821afc9 +0x0d:  call   0822bda8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1452>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1452
0821afce +0x12:  mov    0x10(%ebp),%eax
0821afd1 +0x15:  movzwl (%eax),%eax
0821afd4 +0x18:  mov    %ax,-0xc(%ebp)
0821afd8 +0x1c:  mov    0x14(%ebp),%eax
0821afdb +0x1f:  movzwl (%eax),%edx
0821afde +0x22:  mov    0x10(%ebp),%eax
0821afe1 +0x25:  movzwl (%eax),%eax
0821afe4 +0x28:  lea    (%edx,%eax,1),%eax
0821afe7 +0x2b:  mov    %ax,-0xa(%ebp)
0821afeb +0x2f:  lea    -0x16(%ebp),%ebx
0821afee +0x32:  mov    0xc(%ebp),%eax
0821aff1 +0x35:  mov    %eax,(%esp)
0821aff4 +0x38:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821aff9 +0x3d:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0821afff +0x43:  mov    %eax,0x4(%esp)
0821b003 +0x47:  mov    %edx,(%esp)
0821b006 +0x4a:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0821b00b +0x4f:  movl   $0xe,0x8(%esp)
0821b013 +0x57:  mov    %ebx,0x4(%esp)
0821b017 +0x5b:  mov    %eax,(%esp)
0821b01a +0x5e:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0821b01f +0x63:  mov    $0x0,%eax
0821b024 +0x68:  add    $0x24,%esp
0821b027 +0x6b:  pop    %ebx
0821b028 +0x6c:  pop    %ebp
0821b029 +0x6d:  ret
```

## 反编译 C

```c
// DisPatcher_UdpCharacteristic::pvpPingStat @ 0x821afbc

/* DisPatcher_UdpCharacteristic::pvpPingStat(CUser*, unsigned short&, unsigned short&) */

undefined4 __thiscall
DisPatcher_UdpCharacteristic::pvpPingStat
          (DisPatcher_UdpCharacteristic *this,CUser *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_Pvp_Ping_Statistic local_1a [10];
  ushort local_10;
  short local_e;
  
  Packet_Pvp_Ping_Statistic::Packet_Pvp_Ping_Statistic(local_1a);
  local_10 = *param_2;
  local_e = *param_3 + *param_2;
  uVar1 = CUser::GetServerGroup(param_1);
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,uVar1);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_1a,0xe);
  return 0;
}
```
