# dispatch_sig

`_ZN26Inter_LoadCleanPadPointReq12dispatch_sigEP5CUserPci`

`Inter_LoadCleanPadPointReq::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadCleanPadPointReq` | `0x084d553e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d553e  _ZN26Inter_LoadCleanPadPointReq12dispatch_sigEP5CUserPci
#           Inter_LoadCleanPadPointReq::dispatch_sig(CUser*, char*, int)
# range [0x084d553e, 0x084d5585]
084d553e +0x00:  push   %ebp
084d553f +0x01:  mov    %esp,%ebp
084d5541 +0x03:  sub    $0x28,%esp
084d5544 +0x06:  call   0842efa0 <_ZN20DB_LoadCleanPadPoint11makeRequestEv>  ; DB_LoadCleanPadPoint::makeRequest()
084d5549 +0x0b:  movl   $0x0,0xc(%esp)
084d5551 +0x13:  movl   $0x371d,0x8(%esp)
084d5559 +0x1b:  movl   $&_ZZN26Inter_LoadCleanPadPointReq12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d5561 +0x23:  lea    -0x18(%ebp),%eax
084d5564 +0x26:  mov    %eax,(%esp)
084d5567 +0x29:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d556c +0x2e:  movl   $"Get CleanPad point Request",0x4(%esp)
084d5574 +0x36:  lea    -0x18(%ebp),%eax
084d5577 +0x39:  mov    %eax,(%esp)
084d557a +0x3c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d557f +0x41:  mov    $0x0,%eax
084d5584 +0x46:  leave
084d5585 +0x47:  ret
```

## 反编译 C

```c
// Inter_LoadCleanPadPointReq::dispatch_sig @ 0x84d553e

/* Inter_LoadCleanPadPointReq::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadCleanPadPointReq::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  cMyTrace local_1c [24];
  
  DB_LoadCleanPadPoint::makeRequest();
  cMyTrace::cMyTrace(local_1c,
                     "virtual int Inter_LoadCleanPadPointReq::dispatch_sig(CUser*, char*, int)",
                     0x371d,0);
  cMyTrace::operator()(local_1c,"Get CleanPad point Request");
  return 0;
}
```
