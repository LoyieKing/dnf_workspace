# dispatch_sig

`_ZN26Inter_SelectAllowProxyUser12dispatch_sigEP5CUserPci`

`Inter_SelectAllowProxyUser::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_SelectAllowProxyUser` | `0x084e8f68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e8f68  _ZN26Inter_SelectAllowProxyUser12dispatch_sigEP5CUserPci
#           Inter_SelectAllowProxyUser::dispatch_sig(CUser*, char*, int)
# range [0x084e8f68, 0x084e9003]
084e8f68 +0x00:  push   %ebp
084e8f69 +0x01:  mov    %esp,%ebp
084e8f6b +0x03:  sub    $0x28,%esp
084e8f6e +0x06:  cmpl   $0x0,0xc(%ebp)
084e8f72 +0x0a:  je     084e8f7a <+0x12>
084e8f74 +0x0c:  cmpl   $0x0,0x10(%ebp)
084e8f78 +0x10:  jne    084e8fbf <+0x57>
084e8f7a +0x12:  movl   $0x5,0xc(%esp)
084e8f82 +0x1a:  movl   $0x6e1e,0x8(%esp)
084e8f8a +0x22:  movl   $&_ZZN26Inter_SelectAllowProxyUser12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e8f92 +0x2a:  lea    -0x18(%ebp),%eax
084e8f95 +0x2d:  mov    %eax,(%esp)
084e8f98 +0x30:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e8f9d +0x35:  movl   $&_ZZN26Inter_SelectAllowProxyUser12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e8fa5 +0x3d:  movl   $"[%s] pUser or p is null.",0x4(%esp)
084e8fad +0x45:  lea    -0x18(%ebp),%eax
084e8fb0 +0x48:  mov    %eax,(%esp)
084e8fb3 +0x4b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e8fb8 +0x50:  mov    $0x6e1f,%eax
084e8fbd +0x55:  jmp    084e9002 <+0x9a>
084e8fbf +0x57:  movl   $0x7,0x8(%esp)
084e8fc7 +0x5f:  movl   $0x2,0x4(%esp)
084e8fcf +0x67:  mov    0xc(%ebp),%eax
084e8fd2 +0x6a:  mov    %eax,(%esp)
084e8fd5 +0x6d:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e8fda +0x72:  movl   $0x0,0xc(%esp)
084e8fe2 +0x7a:  movl   $0x1,0x8(%esp)
084e8fea +0x82:  movl   $0x1e,0x4(%esp)
084e8ff2 +0x8a:  mov    0xc(%ebp),%eax
084e8ff5 +0x8d:  mov    %eax,(%esp)
084e8ff8 +0x90:  call   086489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>  ; CUser::DisConnSig(DISCONN_SIG, bool, int)
084e8ffd +0x95:  mov    $0x0,%eax
084e9002 +0x9a:  leave
084e9003 +0x9b:  ret
```

## 反编译 C

```c
// Inter_SelectAllowProxyUser::dispatch_sig @ 0x84e8f68

/* Inter_SelectAllowProxyUser::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SelectAllowProxyUser::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_1c [24];
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    cMyTrace::cMyTrace(local_1c,
                       "virtual int Inter_SelectAllowProxyUser::dispatch_sig(CUser*, char*, int)",
                       0x6e1e,5);
    cMyTrace::operator()
              (local_1c,"[%s] pUser or p is null.",
               "virtual int Inter_SelectAllowProxyUser::dispatch_sig(CUser*, char*, int)");
    uVar1 = 0x6e1f;
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,2,7);
    CUser::DisConnSig((CUser *)param_2,0x1e,1,0);
    uVar1 = 0;
  }
  return uVar1;
}
```
