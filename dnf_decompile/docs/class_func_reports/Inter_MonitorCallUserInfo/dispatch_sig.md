# dispatch_sig

`_ZN25Inter_MonitorCallUserInfo12dispatch_sigEP5CUserPci`

`Inter_MonitorCallUserInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorCallUserInfo` | `0x084c89b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c89b2  _ZN25Inter_MonitorCallUserInfo12dispatch_sigEP5CUserPci
#           Inter_MonitorCallUserInfo::dispatch_sig(CUser*, char*, int)
# range [0x084c89b2, 0x084c8a6f]
084c89b2 +0x00:  push   %ebp
084c89b3 +0x01:  mov    %esp,%ebp
084c89b5 +0x03:  push   %ebx
084c89b6 +0x04:  sub    $0x44,%esp
084c89b9 +0x07:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c89be +0x0c:  test   %eax,%eax
084c89c0 +0x0e:  sete   %al
084c89c3 +0x11:  test   %al,%al
084c89c5 +0x13:  je     084c89ff <+0x4d>
084c89c7 +0x15:  movl   $0x5,0xc(%esp)
084c89cf +0x1d:  movl   $0x2220,0x8(%esp)
084c89d7 +0x25:  movl   $&_ZZN25Inter_MonitorCallUserInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c89df +0x2d:  lea    -0x2c(%ebp),%eax
084c89e2 +0x30:  mov    %eax,(%esp)
084c89e5 +0x33:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c89ea +0x38:  movl   $"Inter_MonitorCallUserInfo::dispatch_sig()  G_CGameManager() is null",0x4(%esp)
084c89f2 +0x40:  lea    -0x2c(%ebp),%eax
084c89f5 +0x43:  mov    %eax,(%esp)
084c89f8 +0x46:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c89fd +0x4b:  jmp    084c8a64 <+0xb2>
084c89ff +0x4d:  mov    0x10(%ebp),%eax
084c8a02 +0x50:  mov    %eax,-0xc(%ebp)
084c8a05 +0x53:  mov    -0xc(%ebp),%eax
084c8a08 +0x56:  movzbl 0xa(%eax),%eax
084c8a0c +0x5a:  movzbl %al,%ebx
084c8a0f +0x5d:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084c8a14 +0x62:  mov    %ebx,0x4(%esp)
084c8a18 +0x66:  mov    %eax,(%esp)
084c8a1b +0x69:  call   082961be <_ZN12CGameManager30Send_userinfos_to_upper_serverEh>  ; CGameManager::Send_userinfos_to_upper_server(unsigned char)
084c8a20 +0x6e:  mov    -0xc(%ebp),%eax
084c8a23 +0x71:  movzbl 0xa(%eax),%eax
084c8a27 +0x75:  movzbl %al,%ebx
084c8a2a +0x78:  movl   $0x0,0xc(%esp)
084c8a32 +0x80:  movl   $0x2230,0x8(%esp)
084c8a3a +0x88:  movl   $&_ZZN25Inter_MonitorCallUserInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c8a42 +0x90:  lea    -0x1c(%ebp),%eax
084c8a45 +0x93:  mov    %eax,(%esp)
084c8a48 +0x96:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c8a4d +0x9b:  mov    %ebx,0x8(%esp)
084c8a51 +0x9f:  movl   $"%d Server Call UserInfo Arrived\n",0x4(%esp)
084c8a59 +0xa7:  lea    -0x1c(%ebp),%eax
084c8a5c +0xaa:  mov    %eax,(%esp)
084c8a5f +0xad:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c8a64 +0xb2:  mov    $0x0,%eax
084c8a69 +0xb7:  add    $0x44,%esp
084c8a6c +0xba:  pop    %ebx
084c8a6d +0xbb:  pop    %ebp
084c8a6e +0xbc:  ret
084c8a6f +0xbd:  nop
```

## 反编译 C

```c
// Inter_MonitorCallUserInfo::dispatch_sig @ 0x84c89b2

/* Inter_MonitorCallUserInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallUserInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uchar uVar1;
  byte bVar2;
  int iVar3;
  CGameManager *this;
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  int local_10;
  
  iVar3 = G_CGameManager();
  if (iVar3 == 0) {
    cMyTrace::cMyTrace(local_30,
                       "virtual int Inter_MonitorCallUserInfo::dispatch_sig(CUser*, char*, int)",
                       0x2220,5);
    cMyTrace::operator()
              (local_30,"Inter_MonitorCallUserInfo::dispatch_sig()  G_CGameManager() is null");
  }
  else {
    local_10 = param_3;
    uVar1 = *(uchar *)(param_3 + 10);
    this = (CGameManager *)G_CGameManager();
    CGameManager::Send_userinfos_to_upper_server(this,uVar1);
    bVar2 = *(byte *)(local_10 + 10);
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_MonitorCallUserInfo::dispatch_sig(CUser*, char*, int)",
                       0x2230,0);
    cMyTrace::operator()(local_20,"%d Server Call UserInfo Arrived\n",(uint)bVar2);
  }
  return 0;
}
```
