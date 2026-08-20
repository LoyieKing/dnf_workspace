# dispatch_sig

`_ZN44Inter_TOD_ReturnToMonitor_APCSettingComplete12dispatch_sigEP5CUserPci`

`Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_TOD_ReturnToMonitor_APCSettingComplete` | `0x084e4d90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4d90  _ZN44Inter_TOD_ReturnToMonitor_APCSettingComplete12dispatch_sigEP5CUserPci
#           Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig(CUser*, char*, int)
# range [0x084e4d90, 0x084e4e25]
084e4d90 +0x00:  push   %ebp
084e4d91 +0x01:  mov    %esp,%ebp
084e4d93 +0x03:  push   %ebx
084e4d94 +0x04:  sub    $0x34,%esp
084e4d97 +0x07:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084e4d9c +0x0c:  mov    %eax,(%esp)
084e4d9f +0x0f:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
084e4da4 +0x14:  mov    %eax,-0xc(%ebp)
084e4da7 +0x17:  mov    -0xc(%ebp),%ebx
084e4daa +0x1a:  movl   $0x5,0xc(%esp)
084e4db2 +0x22:  movl   $0x61f7,0x8(%esp)
084e4dba +0x2a:  movl   $&_ZZN44Inter_TOD_ReturnToMonitor_APCSettingComplete12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e4dc2 +0x32:  lea    -0x1c(%ebp),%eax
084e4dc5 +0x35:  mov    %eax,(%esp)
084e4dc8 +0x38:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e4dcd +0x3d:  mov    %ebx,0x8(%esp)
084e4dd1 +0x41:  movl   $"TOD Random Select Complete. send->monitor group(%d)",0x4(%esp)
084e4dd9 +0x49:  lea    -0x1c(%ebp),%eax
084e4ddc +0x4c:  mov    %eax,(%esp)
084e4ddf +0x4f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e4de4 +0x54:  lea    -0x26(%ebp),%eax
084e4de7 +0x57:  mov    %eax,(%esp)
084e4dea +0x5a:  call   084e954c <_GLOBAL__I__Z7getUserj+0x4fe>  ; global constructors keyed to getUser(unsigned int)+0x4fe
084e4def +0x5f:  lea    -0x26(%ebp),%ebx
084e4df2 +0x62:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
084e4df7 +0x67:  mov    -0xc(%ebp),%edx
084e4dfa +0x6a:  mov    %edx,0x4(%esp)
084e4dfe +0x6e:  mov    %eax,(%esp)
084e4e01 +0x71:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084e4e06 +0x76:  movl   $0xa,0x8(%esp)
084e4e0e +0x7e:  mov    %ebx,0x4(%esp)
084e4e12 +0x82:  mov    %eax,(%esp)
084e4e15 +0x85:  call   08470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>  ; CMonitorServerProxy::SendTcpPacket(char*, int)
084e4e1a +0x8a:  mov    $0x0,%eax
084e4e1f +0x8f:  add    $0x34,%esp
084e4e22 +0x92:  pop    %ebx
084e4e23 +0x93:  pop    %ebp
084e4e24 +0x94:  ret
084e4e25 +0x95:  nop
```

## 反编译 C

```c
// Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig @ 0x84e4d90

/* Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CEnvironment *this;
  undefined4 uVar1;
  CMonitorServerProxy *this_00;
  Packet_TOD_DoRandomSelect local_2a [10];
  cMyTrace local_20 [16];
  undefined4 local_10;
  
  this = (CEnvironment *)G_CEnvironment();
  uVar1 = CEnvironment::get_server_group(this);
  local_10 = uVar1;
  cMyTrace::cMyTrace(local_20,
                     "virtual int Inter_TOD_ReturnToMonitor_APCSettingComplete::dispatch_sig(CUser*, char*, int)"
                     ,0x61f7,5);
  cMyTrace::operator()(local_20,"TOD Random Select Complete. send->monitor group(%d)",uVar1);
  Packet_TOD_DoRandomSelect::Packet_TOD_DoRandomSelect(local_2a);
  this_00 = (CMonitorServerProxy *)
            CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                      (GlobalData::s_monitor_proxy_mgr,local_10);
  CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_2a,10);
  return 0;
}
```
