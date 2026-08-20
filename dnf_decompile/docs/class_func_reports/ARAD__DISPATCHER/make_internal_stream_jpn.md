# make_internal_stream_jpn

`_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi`

`ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER` | `0x081977b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081977b6  _ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi
#           ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
# range [0x081977b6, 0x08197811]
081977b6 +0x00:  push   %ebp
081977b7 +0x01:  mov    %esp,%ebp
081977b9 +0x03:  push   %ebx
081977ba +0x04:  sub    $0x14,%esp
081977bd +0x07:  mov    0x8(%ebp),%eax
081977c0 +0x0a:  mov    %eax,(%esp)
081977c3 +0x0d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081977c8 +0x12:  movl   $0x2dc,0x4(%esp)
081977d0 +0x1a:  mov    %eax,(%esp)
081977d3 +0x1d:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081977d8 +0x22:  mov    0x8(%ebp),%eax
081977db +0x25:  mov    %eax,(%esp)
081977de +0x28:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081977e3 +0x2d:  mov    0x10(%ebp),%edx
081977e6 +0x30:  mov    %edx,0x4(%esp)
081977ea +0x34:  mov    %eax,(%esp)
081977ed +0x37:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081977f2 +0x3c:  mov    0xc(%ebp),%ebx
081977f5 +0x3f:  mov    0x8(%ebp),%eax
081977f8 +0x42:  mov    %eax,(%esp)
081977fb +0x45:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08197800 +0x4a:  mov    %ebx,0x4(%esp)
08197804 +0x4e:  mov    %eax,(%esp)
08197807 +0x51:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0819780c +0x56:  add    $0x14,%esp
0819780f +0x59:  pop    %ebx
08197810 +0x5a:  pop    %ebp
08197811 +0x5b:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::make_internal_stream_jpn @ 0x81977b6

/* ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int) */

void ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard *param_1,int param_2,int param_3)

{
  CStreamGuard *pCVar1;
  
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,0x2dc);
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,param_3);
  pCVar1 = (CStreamGuard *)CStreamGuard::operator*(param_1);
  CStreamGuard::operator<<(pCVar1,param_2);
  return;
}
```
