# dispatch_sig

`_ZN23Inter_BlackIPMonitorReq12dispatch_sigEP5CUserPci`

`Inter_BlackIPMonitorReq::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_BlackIPMonitorReq` | `0x084d8608` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d8608  _ZN23Inter_BlackIPMonitorReq12dispatch_sigEP5CUserPci
#           Inter_BlackIPMonitorReq::dispatch_sig(CUser*, char*, int)
# range [0x084d8608, 0x084d864f]
084d8608 +0x00:  push   %ebp
084d8609 +0x01:  mov    %esp,%ebp
084d860b +0x03:  sub    $0x28,%esp
084d860e +0x06:  call   08432e80 <_ZN17DB_BlackIPMonitor11makeRequestEv>  ; DB_BlackIPMonitor::makeRequest()
084d8613 +0x0b:  movl   $0x0,0xc(%esp)
084d861b +0x13:  movl   $0x3f28,0x8(%esp)
084d8623 +0x1b:  movl   $&_ZZN23Inter_BlackIPMonitorReq12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d862b +0x23:  lea    -0x18(%ebp),%eax
084d862e +0x26:  mov    %eax,(%esp)
084d8631 +0x29:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d8636 +0x2e:  movl   $"Get BlackIPMonitor Request",0x4(%esp)
084d863e +0x36:  lea    -0x18(%ebp),%eax
084d8641 +0x39:  mov    %eax,(%esp)
084d8644 +0x3c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d8649 +0x41:  mov    $0x0,%eax
084d864e +0x46:  leave
084d864f +0x47:  ret
```

## 反编译 C

```c
// Inter_BlackIPMonitorReq::dispatch_sig @ 0x84d8608

/* Inter_BlackIPMonitorReq::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BlackIPMonitorReq::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  cMyTrace local_1c [24];
  
  DB_BlackIPMonitor::makeRequest();
  cMyTrace::cMyTrace(local_1c,
                     "virtual int Inter_BlackIPMonitorReq::dispatch_sig(CUser*, char*, int)",0x3f28,
                     0);
  cMyTrace::operator()(local_1c,"Get BlackIPMonitor Request");
  return 0;
}
```
