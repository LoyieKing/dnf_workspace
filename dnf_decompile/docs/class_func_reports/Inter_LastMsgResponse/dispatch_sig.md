# dispatch_sig

`_ZN21Inter_LastMsgResponse12dispatch_sigEP5CUserPci`

`Inter_LastMsgResponse::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LastMsgResponse` | `0x084d0598` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d0598  _ZN21Inter_LastMsgResponse12dispatch_sigEP5CUserPci
#           Inter_LastMsgResponse::dispatch_sig(CUser*, char*, int)
# range [0x084d0598, 0x084d0647]
084d0598 +0x00:  push   %ebp
084d0599 +0x01:  mov    %esp,%ebp
084d059b +0x03:  push   %esi
084d059c +0x04:  push   %ebx
084d059d +0x05:  sub    $0x20,%esp
084d05a0 +0x08:  call   082a6fbb <_GLOBAL__I__ZN4CLog5this_E+0x33e2>  ; global constructors keyed to CLog::this_+0x33e2
084d05a5 +0x0d:  mov    %eax,(%esp)
084d05a8 +0x10:  call   084ed1ea <_GLOBAL__I__Z7getUserj+0x419c>  ; global constructors keyed to getUser(unsigned int)+0x419c
084d05ad +0x15:  call   082a6fbb <_GLOBAL__I__ZN4CLog5this_E+0x33e2>  ; global constructors keyed to CLog::this_+0x33e2
084d05b2 +0x1a:  mov    %eax,(%esp)
084d05b5 +0x1d:  call   084ed20a <_GLOBAL__I__Z7getUserj+0x41bc>  ; global constructors keyed to getUser(unsigned int)+0x41bc
084d05ba +0x22:  mov    %eax,%esi
084d05bc +0x24:  call   082a6fbb <_GLOBAL__I__ZN4CLog5this_E+0x33e2>  ; global constructors keyed to CLog::this_+0x33e2
084d05c1 +0x29:  mov    %eax,(%esp)
084d05c4 +0x2c:  call   084ed1fe <_GLOBAL__I__Z7getUserj+0x41b0>  ; global constructors keyed to getUser(unsigned int)+0x41b0
084d05c9 +0x31:  mov    %eax,%ebx
084d05cb +0x33:  movl   $0x0,0xc(%esp)
084d05d3 +0x3b:  movl   $0x2eb2,0x8(%esp)
084d05db +0x43:  movl   $&_ZZN21Inter_LastMsgResponse12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d05e3 +0x4b:  lea    -0x18(%ebp),%eax
084d05e6 +0x4e:  mov    %eax,(%esp)
084d05e9 +0x51:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d05ee +0x56:  mov    %esi,0xc(%esp)
084d05f2 +0x5a:  mov    %ebx,0x8(%esp)
084d05f6 +0x5e:  movl   $"last msg (%d) response(%d)\n",0x4(%esp)
084d05fe +0x66:  lea    -0x18(%ebp),%eax
084d0601 +0x69:  mov    %eax,(%esp)
084d0604 +0x6c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d0609 +0x71:  call   082a6fbb <_GLOBAL__I__ZN4CLog5this_E+0x33e2>  ; global constructors keyed to CLog::this_+0x33e2
084d060e +0x76:  mov    %eax,(%esp)
084d0611 +0x79:  call   084ed1fe <_GLOBAL__I__Z7getUserj+0x41b0>  ; global constructors keyed to getUser(unsigned int)+0x41b0
084d0616 +0x7e:  mov    %eax,%ebx
084d0618 +0x80:  call   082a6fbb <_GLOBAL__I__ZN4CLog5this_E+0x33e2>  ; global constructors keyed to CLog::this_+0x33e2
084d061d +0x85:  mov    %eax,(%esp)
084d0620 +0x88:  call   084ed20a <_GLOBAL__I__Z7getUserj+0x41bc>  ; global constructors keyed to getUser(unsigned int)+0x41bc
084d0625 +0x8d:  cmp    %eax,%ebx
084d0627 +0x8f:  setle  %al
084d062a +0x92:  test   %al,%al
084d062c +0x94:  je     084d063b <+0xa3>
084d062e +0x96:  call   082a6fbb <_GLOBAL__I__ZN4CLog5this_E+0x33e2>  ; global constructors keyed to CLog::this_+0x33e2
084d0633 +0x9b:  mov    %eax,(%esp)
084d0636 +0x9e:  call   082a36bc <_ZN15CShutdowManager15OnAllUserLogoutEv>  ; CShutdowManager::OnAllUserLogout()
084d063b +0xa3:  mov    $0x0,%eax
084d0640 +0xa8:  add    $0x20,%esp
084d0643 +0xab:  pop    %ebx
084d0644 +0xac:  pop    %esi
084d0645 +0xad:  pop    %ebp
084d0646 +0xae:  ret
084d0647 +0xaf:  nop
```

## 反编译 C

```c
// Inter_LastMsgResponse::dispatch_sig @ 0x84d0598

/* Inter_LastMsgResponse::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LastMsgResponse::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CShutdowManager *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  cMyTrace local_1c [16];
  
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  CShutdowManager::IncrementLastMsgResponseCount(pCVar1);
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  uVar2 = CShutdowManager::GetLastMsgResponseCount(pCVar1);
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  uVar3 = CShutdowManager::GetLastMsgCount(pCVar1);
  cMyTrace::cMyTrace(local_1c,"virtual int Inter_LastMsgResponse::dispatch_sig(CUser*, char*, int)",
                     0x2eb2,0);
  cMyTrace::operator()(local_1c,"last msg (%d) response(%d)\n",uVar3,uVar2);
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  iVar4 = CShutdowManager::GetLastMsgCount(pCVar1);
  pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
  iVar5 = CShutdowManager::GetLastMsgResponseCount(pCVar1);
  if (iVar4 <= iVar5) {
    pCVar1 = (CShutdowManager *)GetInstanceShutdowManager();
    CShutdowManager::OnAllUserLogout(pCVar1);
  }
  return 0;
}
```
