# dispatch_sig

`_ZN26Inter_ReloadPowerWarRanker12dispatch_sigEP5CUserPci`

`Inter_ReloadPowerWarRanker::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReloadPowerWarRanker` | `0x084dceec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084dceec  _ZN26Inter_ReloadPowerWarRanker12dispatch_sigEP5CUserPci
#           Inter_ReloadPowerWarRanker::dispatch_sig(CUser*, char*, int)
# range [0x084dceec, 0x084dcf49]
084dceec +0x00:  push   %ebp
084dceed +0x01:  mov    %esp,%ebp
084dceef +0x03:  sub    $0x28,%esp
084dcef2 +0x06:  movl   $0x0,0xc(%esp)
084dcefa +0x0e:  movl   $0x482b,0x8(%esp)
084dcf02 +0x16:  movl   $&_ZZN26Inter_ReloadPowerWarRanker12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084dcf0a +0x1e:  lea    -0x18(%ebp),%eax
084dcf0d +0x21:  mov    %eax,(%esp)
084dcf10 +0x24:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084dcf15 +0x29:  movl   $"Receive Packet_Request_Reload_Power_War_Ranker",0x4(%esp)
084dcf1d +0x31:  lea    -0x18(%ebp),%eax
084dcf20 +0x34:  mov    %eax,(%esp)
084dcf23 +0x37:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084dcf28 +0x3c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084dcf2d +0x41:  mov    %eax,(%esp)
084dcf30 +0x44:  call   0847f5de <_ZN13CPowerManager12ClearMVPInfoEv>  ; CPowerManager::ClearMVPInfo()
084dcf35 +0x49:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084dcf3a +0x4e:  mov    %eax,(%esp)
084dcf3d +0x51:  call   0847f4fe <_ZN13CPowerManager14LoadRankerInfoEv>  ; CPowerManager::LoadRankerInfo()
084dcf42 +0x56:  mov    $0x0,%eax
084dcf47 +0x5b:  leave
084dcf48 +0x5c:  ret
084dcf49 +0x5d:  nop
```

## 反编译 C

```c
// Inter_ReloadPowerWarRanker::dispatch_sig @ 0x84dceec

/* Inter_ReloadPowerWarRanker::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReloadPowerWarRanker::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,
                     "virtual int Inter_ReloadPowerWarRanker::dispatch_sig(CUser*, char*, int)",
                     0x482b,0);
  cMyTrace::operator()(local_1c,"Receive Packet_Request_Reload_Power_War_Ranker");
  CPowerManager::ClearMVPInfo(GlobalData::s_power_manager);
  CPowerManager::LoadRankerInfo();
  return 0;
}
```
