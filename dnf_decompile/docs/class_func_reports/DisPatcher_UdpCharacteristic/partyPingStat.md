# partyPingStat

`_ZN28DisPatcher_UdpCharacteristic13partyPingStatEP5CUserRtS2_`

`DisPatcher_UdpCharacteristic::partyPingStat(CUser*, unsigned short&, unsigned short&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_UdpCharacteristic` | `0x0821b098` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821b098  _ZN28DisPatcher_UdpCharacteristic13partyPingStatEP5CUserRtS2_
#           DisPatcher_UdpCharacteristic::partyPingStat(CUser*, unsigned short&, unsigned short&)
# range [0x0821b098, 0x0821b105]
0821b098 +0x00:  push   %ebp
0821b099 +0x01:  mov    %esp,%ebp
0821b09b +0x03:  push   %ebx
0821b09c +0x04:  sub    $0x24,%esp
0821b09f +0x07:  lea    -0x16(%ebp),%eax
0821b0a2 +0x0a:  mov    %eax,(%esp)
0821b0a5 +0x0d:  call   0822bd84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x142e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x142e
0821b0aa +0x12:  mov    0x10(%ebp),%eax
0821b0ad +0x15:  movzwl (%eax),%eax
0821b0b0 +0x18:  mov    %ax,-0xc(%ebp)
0821b0b4 +0x1c:  mov    0x10(%ebp),%eax
0821b0b7 +0x1f:  movzwl (%eax),%edx
0821b0ba +0x22:  mov    0x14(%ebp),%eax
0821b0bd +0x25:  movzwl (%eax),%eax
0821b0c0 +0x28:  lea    (%edx,%eax,1),%eax
0821b0c3 +0x2b:  mov    %ax,-0xa(%ebp)
0821b0c7 +0x2f:  lea    -0x16(%ebp),%ebx
0821b0ca +0x32:  mov    0xc(%ebp),%eax
0821b0cd +0x35:  mov    %eax,(%esp)
0821b0d0 +0x38:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821b0d5 +0x3d:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0821b0db +0x43:  mov    %eax,0x4(%esp)
0821b0df +0x47:  mov    %edx,(%esp)
0821b0e2 +0x4a:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0821b0e7 +0x4f:  movl   $0xe,0x8(%esp)
0821b0ef +0x57:  mov    %ebx,0x4(%esp)
0821b0f3 +0x5b:  mov    %eax,(%esp)
0821b0f6 +0x5e:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0821b0fb +0x63:  mov    $0x0,%eax
0821b100 +0x68:  add    $0x24,%esp
0821b103 +0x6b:  pop    %ebx
0821b104 +0x6c:  pop    %ebp
0821b105 +0x6d:  ret
```

## 反编译 C

```c
// DisPatcher_UdpCharacteristic::partyPingStat @ 0x821b098

/* DisPatcher_UdpCharacteristic::partyPingStat(CUser*, unsigned short&, unsigned short&) */

undefined4 __thiscall
DisPatcher_UdpCharacteristic::partyPingStat
          (DisPatcher_UdpCharacteristic *this,CUser *param_1,ushort *param_2,ushort *param_3)

{
  undefined4 uVar1;
  CStatisticServerProxy *this_00;
  Packet_Party_Ping_Statistic local_1a [10];
  ushort local_10;
  short local_e;
  
  Packet_Party_Ping_Statistic::Packet_Party_Ping_Statistic(local_1a);
  local_10 = *param_2;
  local_e = *param_2 + *param_3;
  uVar1 = CUser::GetServerGroup(param_1);
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,uVar1);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_1a,0xe);
  return 0;
}
```
