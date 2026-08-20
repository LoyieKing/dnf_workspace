# fairPvpPingStat

`_ZN28DisPatcher_UdpCharacteristic15fairPvpPingStatEP5CUserRtS2_`

`DisPatcher_UdpCharacteristic::fairPvpPingStat(CUser*, unsigned short&, unsigned short&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UdpCharacteristic` | `0x0821b02a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821b02a  _ZN28DisPatcher_UdpCharacteristic15fairPvpPingStatEP5CUserRtS2_
#           DisPatcher_UdpCharacteristic::fairPvpPingStat(CUser*, unsigned short&, unsigned short&)
# range [0x0821b02a, 0x0821b097]
0821b02a +0x00:  push   %ebp
0821b02b +0x01:  mov    %esp,%ebp
0821b02d +0x03:  push   %ebx
0821b02e +0x04:  sub    $0x24,%esp
0821b031 +0x07:  lea    -0x16(%ebp),%eax
0821b034 +0x0a:  mov    %eax,(%esp)
0821b037 +0x0d:  call   0822c808 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1eb2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1eb2
0821b03c +0x12:  mov    0x10(%ebp),%eax
0821b03f +0x15:  movzwl (%eax),%eax
0821b042 +0x18:  mov    %ax,-0xc(%ebp)
0821b046 +0x1c:  mov    0x14(%ebp),%eax
0821b049 +0x1f:  movzwl (%eax),%edx
0821b04c +0x22:  mov    0x10(%ebp),%eax
0821b04f +0x25:  movzwl (%eax),%eax
0821b052 +0x28:  lea    (%edx,%eax,1),%eax
0821b055 +0x2b:  mov    %ax,-0xa(%ebp)
0821b059 +0x2f:  lea    -0x16(%ebp),%ebx
0821b05c +0x32:  mov    0xc(%ebp),%eax
0821b05f +0x35:  mov    %eax,(%esp)
0821b062 +0x38:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821b067 +0x3d:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0821b06d +0x43:  mov    %eax,0x4(%esp)
0821b071 +0x47:  mov    %edx,(%esp)
0821b074 +0x4a:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0821b079 +0x4f:  movl   $0xe,0x8(%esp)
0821b081 +0x57:  mov    %ebx,0x4(%esp)
0821b085 +0x5b:  mov    %eax,(%esp)
0821b088 +0x5e:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0821b08d +0x63:  mov    $0x0,%eax
0821b092 +0x68:  add    $0x24,%esp
0821b095 +0x6b:  pop    %ebx
0821b096 +0x6c:  pop    %ebp
0821b097 +0x6d:  ret
```

## 反编译 C

```c
// DisPatcher_UdpCharacteristic::fairPvpPingStat @ 0x821b02a

/* DisPatcher_UdpCharacteristic::fairPvpPingStat(CUser*, unsigned short&, unsigned short&) */

undefined4 __thiscall
DisPatcher_UdpCharacteristic::fairPvpPingStat
          (DisPatcher_UdpCharacteristic *this,CUser *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_Fair_Pvp_Ping_Statistic local_1a [10];
  ushort local_10;
  short local_e;
  
  Packet_Fair_Pvp_Ping_Statistic::Packet_Fair_Pvp_Ping_Statistic(local_1a);
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
