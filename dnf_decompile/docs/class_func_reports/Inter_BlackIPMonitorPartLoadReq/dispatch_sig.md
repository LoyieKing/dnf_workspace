# dispatch_sig

`_ZN31Inter_BlackIPMonitorPartLoadReq12dispatch_sigEP5CUserPci`

`Inter_BlackIPMonitorPartLoadReq::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_BlackIPMonitorPartLoadReq` | `0x084d87a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d87a0  _ZN31Inter_BlackIPMonitorPartLoadReq12dispatch_sigEP5CUserPci
#           Inter_BlackIPMonitorPartLoadReq::dispatch_sig(CUser*, char*, int)
# range [0x084d87a0, 0x084d87e7]
084d87a0 +0x00:  push   %ebp
084d87a1 +0x01:  mov    %esp,%ebp
084d87a3 +0x03:  sub    $0x28,%esp
084d87a6 +0x06:  call   0843351e <_ZN25DB_BlackIPMonitorPartLoad11makeRequestEv>  ; DB_BlackIPMonitorPartLoad::makeRequest()
084d87ab +0x0b:  movl   $0x0,0xc(%esp)
084d87b3 +0x13:  movl   $0x3f63,0x8(%esp)
084d87bb +0x1b:  movl   $&_ZZN31Inter_BlackIPMonitorPartLoadReq12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d87c3 +0x23:  lea    -0x18(%ebp),%eax
084d87c6 +0x26:  mov    %eax,(%esp)
084d87c9 +0x29:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d87ce +0x2e:  movl   $"Get BlackIPMonitor Request Part Load",0x4(%esp)
084d87d6 +0x36:  lea    -0x18(%ebp),%eax
084d87d9 +0x39:  mov    %eax,(%esp)
084d87dc +0x3c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d87e1 +0x41:  mov    $0x0,%eax
084d87e6 +0x46:  leave
084d87e7 +0x47:  ret
```

## 反编译 C

```c
// Inter_BlackIPMonitorPartLoadReq::dispatch_sig @ 0x84d87a0

/* Inter_BlackIPMonitorPartLoadReq::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BlackIPMonitorPartLoadReq::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  cMyTrace local_1c [24];
  
  DB_BlackIPMonitorPartLoad::makeRequest();
  cMyTrace::cMyTrace(local_1c,
                     "virtual int Inter_BlackIPMonitorPartLoadReq::dispatch_sig(CUser*, char*, int)"
                     ,0x3f63,0);
  cMyTrace::operator()(local_1c,"Get BlackIPMonitor Request Part Load");
  return 0;
}
```
