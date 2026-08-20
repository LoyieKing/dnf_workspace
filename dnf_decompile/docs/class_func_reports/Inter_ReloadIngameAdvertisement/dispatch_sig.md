# dispatch_sig

`_ZN31Inter_ReloadIngameAdvertisement12dispatch_sigEP5CUserPci`

`Inter_ReloadIngameAdvertisement::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReloadIngameAdvertisement` | `0x084c8d10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c8d10  _ZN31Inter_ReloadIngameAdvertisement12dispatch_sigEP5CUserPci
#           Inter_ReloadIngameAdvertisement::dispatch_sig(CUser*, char*, int)
# range [0x084c8d10, 0x084c8dc9]
084c8d10 +0x00:  push   %ebp
084c8d11 +0x01:  mov    %esp,%ebp
084c8d13 +0x03:  push   %ebx
084c8d14 +0x04:  sub    $0x34,%esp
084c8d17 +0x07:  mov    0x10(%ebp),%eax
084c8d1a +0x0a:  mov    %eax,-0x10(%ebp)
084c8d1d +0x0d:  call   080fc9e9 <_Z23InGameADManagerInstancev>  ; InGameADManagerInstance()
084c8d22 +0x12:  mov    %eax,(%esp)
084c8d25 +0x15:  call   080fd122 <_ZN27CInGameAdvertisementManager16InitADExposeInfoEv>  ; CInGameAdvertisementManager::InitADExposeInfo()
084c8d2a +0x1a:  movl   $0x0,-0xc(%ebp)
084c8d31 +0x21:  jmp    084c8d71 <+0x61>
084c8d33 +0x23:  mov    -0xc(%ebp),%eax
084c8d36 +0x26:  mov    -0x10(%ebp),%edx
084c8d39 +0x29:  imul   $0x84c,%eax,%eax
084c8d3f +0x2f:  lea    (%edx,%eax,1),%eax
084c8d42 +0x32:  add    $0x210,%eax
084c8d47 +0x37:  mov    (%eax),%eax
084c8d49 +0x39:  cmp    $0xffffffff,%eax
084c8d4c +0x3c:  je     084c8d81 <+0x71>
084c8d4e +0x3e:  mov    -0xc(%ebp),%eax
084c8d51 +0x41:  imul   $0x84c,%eax,%eax
084c8d57 +0x47:  mov    %eax,%ebx
084c8d59 +0x49:  add    -0x10(%ebp),%ebx
084c8d5c +0x4c:  call   080fc9e9 <_Z23InGameADManagerInstancev>  ; InGameADManagerInstance()
084c8d61 +0x51:  mov    %ebx,0x4(%esp)
084c8d65 +0x55:  mov    %eax,(%esp)
084c8d68 +0x58:  call   080fd8e4 <_ZN27CInGameAdvertisementManager18InsertADExposeInfoER25stInGameADExposeCondition>  ; CInGameAdvertisementManager::InsertADExposeInfo(stInGameADExposeCondition&)
084c8d6d +0x5d:  addl   $0x1,-0xc(%ebp)
084c8d71 +0x61:  cmpl   $0xc7,-0xc(%ebp)
084c8d78 +0x68:  setle  %al
084c8d7b +0x6b:  test   %al,%al
084c8d7d +0x6d:  jne    084c8d33 <+0x23>
084c8d7f +0x6f:  jmp    084c8d82 <+0x72>
084c8d81 +0x71:  nop
084c8d82 +0x72:  movl   $0x0,0xc(%esp)
084c8d8a +0x7a:  movl   $0x2290,0x8(%esp)
084c8d92 +0x82:  movl   $&_ZZN31Inter_ReloadIngameAdvertisement12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084c8d9a +0x8a:  lea    -0x20(%ebp),%eax
084c8d9d +0x8d:  mov    %eax,(%esp)
084c8da0 +0x90:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084c8da5 +0x95:  mov    -0xc(%ebp),%eax
084c8da8 +0x98:  mov    %eax,0x8(%esp)
084c8dac +0x9c:  movl   $"In Game Advertisement condition Reload OK, count(%d)",0x4(%esp)
084c8db4 +0xa4:  lea    -0x20(%ebp),%eax
084c8db7 +0xa7:  mov    %eax,(%esp)
084c8dba +0xaa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084c8dbf +0xaf:  mov    $0x0,%eax
084c8dc4 +0xb4:  add    $0x34,%esp
084c8dc7 +0xb7:  pop    %ebx
084c8dc8 +0xb8:  pop    %ebp
084c8dc9 +0xb9:  ret
```

## 反编译 C

```c
// Inter_ReloadIngameAdvertisement::dispatch_sig @ 0x84c8d10

/* Inter_ReloadIngameAdvertisement::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReloadIngameAdvertisement::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CInGameAdvertisementManager *pCVar1;
  stInGameADExposeCondition *psVar2;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  pCVar1 = (CInGameAdvertisementManager *)InGameADManagerInstance();
  CInGameAdvertisementManager::InitADExposeInfo(pCVar1);
  local_10 = 0;
  while ((local_10 < 200 && (*(int *)(local_14 + local_10 * 0x84c + 0x210) != -1))) {
    psVar2 = (stInGameADExposeCondition *)(local_10 * 0x84c + local_14);
    pCVar1 = (CInGameAdvertisementManager *)InGameADManagerInstance();
    CInGameAdvertisementManager::InsertADExposeInfo(pCVar1,psVar2);
    local_10 = local_10 + 1;
  }
  cMyTrace::cMyTrace(local_24,
                     "virtual int Inter_ReloadIngameAdvertisement::dispatch_sig(CUser*, char*, int)"
                     ,0x2290,0);
  cMyTrace::operator()(local_24,"In Game Advertisement condition Reload OK, count(%d)",local_10);
  return 0;
}
```
