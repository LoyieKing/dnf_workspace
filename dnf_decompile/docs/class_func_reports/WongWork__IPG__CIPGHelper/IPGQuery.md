# IPGQuery

`_ZN8WongWork3IPG10CIPGHelper8IPGQueryEP5CUser`

`WongWork::IPG::CIPGHelper::IPGQuery(CUser*)`

| 类 | 地址 |
|---|---|
| `WongWork::IPG::CIPGHelper` | `0x08100790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08100790  _ZN8WongWork3IPG10CIPGHelper8IPGQueryEP5CUser
#           WongWork::IPG::CIPGHelper::IPGQuery(CUser*)
# range [0x08100790, 0x081007e7]
08100790 +0x00:  push   %ebp
08100791 +0x01:  mov    %esp,%ebp
08100793 +0x03:  sub    $0x28,%esp
08100796 +0x06:  movl   $0x1,0xc(%esp)
0810079e +0x0e:  movl   $0x4,0x8(%esp)
081007a6 +0x16:  mov    0xc(%ebp),%eax
081007a9 +0x19:  mov    %eax,0x4(%esp)
081007ad +0x1d:  mov    0x8(%ebp),%eax
081007b0 +0x20:  mov    %eax,(%esp)
081007b3 +0x23:  call   08100a2e <_ZN8WongWork3IPG10CIPGHelper11_SetIPGDataEP5CUserNS0_13IPG_DATA_TYPEEb>  ; WongWork::IPG::CIPGHelper::_SetIPGData(CUser*, WongWork::IPG::IPG_DATA_TYPE, bool)
081007b8 +0x28:  mov    %eax,-0xc(%ebp)
081007bb +0x2b:  mov    -0xc(%ebp),%eax
081007be +0x2e:  movl   $0x0,0x2d8(%eax)
081007c8 +0x38:  mov    0x8(%ebp),%eax
081007cb +0x3b:  mov    0x4(%eax),%eax
081007ce +0x3e:  movl   $0x1,0x8(%esp)
081007d6 +0x46:  mov    -0xc(%ebp),%edx
081007d9 +0x49:  mov    %edx,0x4(%esp)
081007dd +0x4d:  mov    %eax,(%esp)
081007e0 +0x50:  call   08104754 <_ZN8WongWork3IPG7CIPGMgr13PutIPGRequestEPNS0_8SIPGDataEb>  ; WongWork::IPG::CIPGMgr::PutIPGRequest(WongWork::IPG::SIPGData*, bool)
081007e5 +0x55:  leave
081007e6 +0x56:  ret
081007e7 +0x57:  nop
```

## 反编译 C

```c
// WongWork::IPG::CIPGHelper::IPGQuery @ 0x8100790

/* WongWork::IPG::CIPGHelper::IPGQuery(CUser*) */

void __thiscall WongWork::IPG::CIPGHelper::IPGQuery(CIPGHelper *this,CUser *param_1)

{
  SIPGData *pSVar1;
  
  pSVar1 = (SIPGData *)_SetIPGData(this,param_1,4,1);
  *(undefined4 *)(pSVar1 + 0x2d8) = 0;
  CIPGMgr::PutIPGRequest(*(CIPGMgr **)(this + 4),pSVar1,true);
  return;
}
```
