# UpdateMiniCraneSeed

`_ZN9GameWorld19UpdateMiniCraneSeedEv`

`GameWorld::UpdateMiniCraneSeed()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086d1480` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086d1480  _ZN9GameWorld19UpdateMiniCraneSeedEv
#           GameWorld::UpdateMiniCraneSeed()
# range [0x086d1480, 0x086d14d3]
086d1480 +0x00:  push   %ebp
086d1481 +0x01:  mov    %esp,%ebp
086d1483 +0x03:  push   %ebx
086d1484 +0x04:  sub    $0x34,%esp
086d1487 +0x07:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
086d148c +0x0c:  mov    %eax,(%esp)
086d148f +0x0f:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
086d1494 +0x14:  mov    %eax,-0xc(%ebp)
086d1497 +0x17:  lea    -0x1a(%ebp),%eax
086d149a +0x1a:  mov    %eax,(%esp)
086d149d +0x1d:  call   086d1d18 <_GLOBAL__I_MAX_VILLAGE_NUM+0x549>  ; global constructors keyed to MAX_VILLAGE_NUM+0x549
086d14a2 +0x22:  lea    -0x1a(%ebp),%ebx
086d14a5 +0x25:  mov    -0xc(%ebp),%edx
086d14a8 +0x28:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
086d14ad +0x2d:  mov    %edx,0x4(%esp)
086d14b1 +0x31:  mov    %eax,(%esp)
086d14b4 +0x34:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
086d14b9 +0x39:  movl   $0xe,0x8(%esp)
086d14c1 +0x41:  mov    %ebx,0x4(%esp)
086d14c5 +0x45:  mov    %eax,(%esp)
086d14c8 +0x48:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
086d14cd +0x4d:  add    $0x34,%esp
086d14d0 +0x50:  pop    %ebx
086d14d1 +0x51:  pop    %ebp
086d14d2 +0x52:  ret
086d14d3 +0x53:  nop
```

## 反编译 C

```c
// GameWorld::UpdateMiniCraneSeed @ 0x86d1480

/* GameWorld::UpdateMiniCraneSeed() */

void GameWorld::UpdateMiniCraneSeed(void)

{
  CEnvironment *this;
  CMonitorServerProxy *this_00;
  Packet_MiniCraneSeed local_1e [14];
  undefined4 local_10;
  
  this = (CEnvironment *)G_CEnvironment();
  local_10 = CEnvironment::get_server_group(this);
  Packet_MiniCraneSeed::Packet_MiniCraneSeed(local_1e);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,local_10);
  CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_1e,0xe);
  return;
}
```
