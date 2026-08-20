# dispatch_sig

`_ZN25Inter_Hack_CheckMyAccount12dispatch_sigEP5CUserPci`

`Inter_Hack_CheckMyAccount::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Hack_CheckMyAccount` | `0x084e08fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e08fc  _ZN25Inter_Hack_CheckMyAccount12dispatch_sigEP5CUserPci
#           Inter_Hack_CheckMyAccount::dispatch_sig(CUser*, char*, int)
# range [0x084e08fc, 0x084e0971]
084e08fc +0x00:  push   %ebp
084e08fd +0x01:  mov    %esp,%ebp
084e08ff +0x03:  push   %ebx
084e0900 +0x04:  sub    $0x34,%esp
084e0903 +0x07:  mov    0x10(%ebp),%eax
084e0906 +0x0a:  mov    %eax,-0xc(%ebp)
084e0909 +0x0d:  mov    -0xc(%ebp),%eax
084e090c +0x10:  mov    (%eax),%eax
084e090e +0x12:  test   %eax,%eax
084e0910 +0x14:  jne    084e0967 <+0x6b>
084e0912 +0x16:  mov    -0xc(%ebp),%eax
084e0915 +0x19:  mov    0x8(%eax),%eax
084e0918 +0x1c:  mov    %eax,0x8(%esp)
084e091c +0x20:  movl   $0x2c5,0x4(%esp)
084e0924 +0x28:  mov    0xc(%ebp),%eax
084e0927 +0x2b:  mov    %eax,(%esp)
084e092a +0x2e:  call   080f9968 <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x174>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x174
084e092f +0x33:  mov    %eax,%ebx
084e0931 +0x35:  mov    0xc(%ebp),%eax
084e0934 +0x38:  mov    %eax,(%esp)
084e0937 +0x3b:  call   080f995a <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x166>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x166
084e093c +0x40:  movl   $0x0,0x14(%esp)
084e0944 +0x48:  mov    %ebx,0x10(%esp)
084e0948 +0x4c:  movl   $0x1,0xc(%esp)
084e0950 +0x54:  movl   $0x2c5,0x8(%esp)
084e0958 +0x5c:  mov    0xc(%ebp),%edx
084e095b +0x5f:  mov    %edx,0x4(%esp)
084e095f +0x63:  mov    %eax,(%esp)
084e0962 +0x66:  call   080f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>  ; WongWork::CHackAnalyzer::addServerHackCnt(CUser*, WongWork::ENUM_HACKTYPE, unsigned int, unsigned int, unsigned int)
084e0967 +0x6b:  mov    $0x0,%eax
084e096c +0x70:  add    $0x34,%esp
084e096f +0x73:  pop    %ebx
084e0970 +0x74:  pop    %ebp
084e0971 +0x75:  ret
```

## 反编译 C

```c
// Inter_Hack_CheckMyAccount::dispatch_sig @ 0x84e08fc

/* Inter_Hack_CheckMyAccount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Hack_CheckMyAccount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  
  if (*(int *)param_3 == 0) {
    uVar1 = CUser::SetETC((CUser *)param_2,0x2c5,*(int *)(param_3 + 8));
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_2,0x2c5,1,uVar1,0);
  }
  return 0;
}
```
