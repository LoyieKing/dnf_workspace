# dispatch_sig

`_ZN24Inter_CutOffCallUserInfo12dispatch_sigEP5CUserPci`

`Inter_CutOffCallUserInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CutOffCallUserInfo` | `0x084c8a70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c8a70  _ZN24Inter_CutOffCallUserInfo12dispatch_sigEP5CUserPci
#           Inter_CutOffCallUserInfo::dispatch_sig(CUser*, char*, int)
# range [0x084c8a70, 0x084c8b0b]
084c8a70 +0x00:  push   %ebp
084c8a71 +0x01:  mov    %esp,%ebp
084c8a73 +0x03:  sub    $0x48,%esp
084c8a76 +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c8a7b +0x0b:  test   %eax,%eax
084c8a7d +0x0d:  sete   %al
084c8a80 +0x10:  test   %al,%al
084c8a82 +0x12:  je     084c8abc <+0x4c>
084c8a84 +0x14:  movl   $0x5,0xc(%esp)
084c8a8c +0x1c:  movl   $0x2249,0x8(%esp)
084c8a94 +0x24:  movl   $&_ZZN24Inter_CutOffCallUserInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c8a9c +0x2c:  lea    -0x2c(%ebp),%eax
084c8a9f +0x2f:  mov    %eax,(%esp)
084c8aa2 +0x32:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c8aa7 +0x37:  movl   $"Inter_MonitorCallUserInfo::dispatch_sig()  G_CGameManager() is null",0x4(%esp)
084c8aaf +0x3f:  lea    -0x2c(%ebp),%eax
084c8ab2 +0x42:  mov    %eax,(%esp)
084c8ab5 +0x45:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c8aba +0x4a:  jmp    084c8b05 <+0x95>
084c8abc +0x4c:  mov    0x10(%ebp),%eax
084c8abf +0x4f:  mov    %eax,-0xc(%ebp)
084c8ac2 +0x52:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c8ac7 +0x57:  mov    %eax,(%esp)
084c8aca +0x5a:  call   08295e84 <_ZN12CGameManager31send_userinfos_to_cutoff_serverEv>  ; CGameManager::send_userinfos_to_cutoff_server()
084c8acf +0x5f:  movl   $0x0,0xc(%esp)
084c8ad7 +0x67:  movl   $0x2252,0x8(%esp)
084c8adf +0x6f:  movl   $&_ZZN24Inter_CutOffCallUserInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c8ae7 +0x77:  lea    -0x1c(%ebp),%eax
084c8aea +0x7a:  mov    %eax,(%esp)
084c8aed +0x7d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c8af2 +0x82:  movl   $"Cut Off Server Call UserInfo Arrived",0x4(%esp)
084c8afa +0x8a:  lea    -0x1c(%ebp),%eax
084c8afd +0x8d:  mov    %eax,(%esp)
084c8b00 +0x90:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c8b05 +0x95:  mov    $0x0,%eax
084c8b0a +0x9a:  leave
084c8b0b +0x9b:  ret
```

## 反编译 C

```c
// Inter_CutOffCallUserInfo::dispatch_sig @ 0x84c8a70

/* Inter_CutOffCallUserInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CutOffCallUserInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  CGameManager *this;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  iVar1 = G_CGameManager();
  if (iVar1 == 0) {
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_CutOffCallUserInfo::dispatch_sig(CUser*, char*, int)",
                       0x2249,5);
    cMyTrace::operator()
              (local_30,"Inter_MonitorCallUserInfo::dispatch_sig()  G_CGameManager() is null");
  }
  else {
    local_10 = param_3;
    this = (CGameManager *)G_CGameManager();
    CGameManager::send_userinfos_to_cutoff_server(this);
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_CutOffCallUserInfo::dispatch_sig(CUser*, char*, int)",
                       0x2252,0);
    cMyTrace::operator()(local_20,"Cut Off Server Call UserInfo Arrived");
  }
  return 0;
}
```
