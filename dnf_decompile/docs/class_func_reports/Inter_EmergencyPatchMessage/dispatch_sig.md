# dispatch_sig

`_ZN27Inter_EmergencyPatchMessage12dispatch_sigEP5CUserPci`

`Inter_EmergencyPatchMessage::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_EmergencyPatchMessage` | `0x084e7b84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7b84  _ZN27Inter_EmergencyPatchMessage12dispatch_sigEP5CUserPci
#           Inter_EmergencyPatchMessage::dispatch_sig(CUser*, char*, int)
# range [0x084e7b84, 0x084e7bfd]
084e7b84 +0x00:  push   %ebp
084e7b85 +0x01:  mov    %esp,%ebp
084e7b87 +0x03:  push   %esi
084e7b88 +0x04:  push   %ebx
084e7b89 +0x05:  sub    $0x20,%esp
084e7b8c +0x08:  mov    0x10(%ebp),%eax
084e7b8f +0x0b:  mov    %eax,-0xc(%ebp)
084e7b92 +0x0e:  call   080f61b8 <_Z30GameserverDemonManagerInstancev>  ; GameserverDemonManagerInstance()
084e7b97 +0x13:  mov    %eax,(%esp)
084e7b9a +0x16:  call   084ed404 <_GLOBAL__I__Z7getUserj+0x43b6>  ; global constructors keyed to getUser(unsigned int)+0x43b6
084e7b9f +0x1b:  test   %al,%al
084e7ba1 +0x1d:  je     084e7baa <+0x26>
084e7ba3 +0x1f:  mov    $0x0,%eax
084e7ba8 +0x24:  jmp    084e7bf6 <+0x72>
084e7baa +0x26:  call   080f61b8 <_Z30GameserverDemonManagerInstancev>  ; GameserverDemonManagerInstance()
084e7baf +0x2b:  movl   $0x1,0x4(%esp)
084e7bb7 +0x33:  mov    %eax,(%esp)
084e7bba +0x36:  call   080f6222 <_ZN22GameServerDemonManager19SetUserProhibitFlagEb>  ; GameServerDemonManager::SetUserProhibitFlag(bool)
084e7bbf +0x3b:  mov    -0xc(%ebp),%eax
084e7bc2 +0x3e:  lea    0xb(%eax),%esi
084e7bc5 +0x41:  mov    -0xc(%ebp),%eax
084e7bc8 +0x44:  movzbl 0xa(%eax),%eax
084e7bcc +0x48:  movzbl %al,%ebx
084e7bcf +0x4b:  call   080f61b8 <_Z30GameserverDemonManagerInstancev>  ; GameserverDemonManagerInstance()
084e7bd4 +0x50:  mov    %esi,0x8(%esp)
084e7bd8 +0x54:  mov    %ebx,0x4(%esp)
084e7bdc +0x58:  mov    %eax,(%esp)
084e7bdf +0x5b:  call   080f6280 <_ZN22GameServerDemonManager16SetNoticeMessageEhPc>  ; GameServerDemonManager::SetNoticeMessage(unsigned char, char*)
084e7be4 +0x60:  call   080f61b8 <_Z30GameserverDemonManagerInstancev>  ; GameserverDemonManagerInstance()
084e7be9 +0x65:  mov    %eax,(%esp)
084e7bec +0x68:  call   080f623a <_ZN22GameServerDemonManager26Notice10MinShutDownMessageEv>  ; GameServerDemonManager::Notice10MinShutDownMessage()
084e7bf1 +0x6d:  mov    $0x0,%eax
084e7bf6 +0x72:  add    $0x20,%esp
084e7bf9 +0x75:  pop    %ebx
084e7bfa +0x76:  pop    %esi
084e7bfb +0x77:  pop    %ebp
084e7bfc +0x78:  ret
084e7bfd +0x79:  nop
```

## 反编译 C

```c
// Inter_EmergencyPatchMessage::dispatch_sig @ 0x84e7b84

/* Inter_EmergencyPatchMessage::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_EmergencyPatchMessage::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uchar uVar1;
  char cVar2;
  GameServerDemonManager *pGVar3;
  
  pGVar3 = (GameServerDemonManager *)GameserverDemonManagerInstance();
  cVar2 = GameServerDemonManager::IsProhibitConnectState(pGVar3);
  if (cVar2 == '\0') {
    pGVar3 = (GameServerDemonManager *)GameserverDemonManagerInstance();
    GameServerDemonManager::SetUserProhibitFlag(pGVar3,true);
    uVar1 = *(uchar *)(param_3 + 10);
    pGVar3 = (GameServerDemonManager *)GameserverDemonManagerInstance();
    GameServerDemonManager::SetNoticeMessage(pGVar3,uVar1,(char *)(param_3 + 0xb));
    GameserverDemonManagerInstance();
    GameServerDemonManager::Notice10MinShutDownMessage();
  }
  return 0;
}
```
