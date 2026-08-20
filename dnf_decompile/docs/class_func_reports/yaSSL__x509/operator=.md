# operator=

`_ZN5yaSSL4x509aSERKS0_`

`yaSSL::x509::operator=(yaSSL::x509 const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::x509` | `0x08797880` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797880  _ZN5yaSSL4x509aSERKS0_
#           yaSSL::x509::operator=(yaSSL::x509 const&)
# range [0x08797880, 0x087978d9]
08797880 +0x00:  push   %ebp
08797881 +0x01:  mov    %esp,%ebp
08797883 +0x03:  sub    $0x38,%esp
08797886 +0x06:  mov    %ebx,-0xc(%ebp)
08797889 +0x09:  mov    0xc(%ebp),%eax
0879788c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08797891 +0x11:  add    $0xbd5307,%ebx
08797897 +0x17:  mov    %edi,-0x4(%ebp)
0879789a +0x1a:  mov    0x8(%ebp),%edi
0879789d +0x1d:  mov    %esi,-0x8(%ebp)
087978a0 +0x20:  lea    -0x20(%ebp),%esi
087978a3 +0x23:  mov    %eax,0x4(%esp)
087978a7 +0x27:  mov    %esi,(%esp)
087978aa +0x2a:  call   08797650 <_ZN5yaSSL4x509C1ERKS0_>  ; yaSSL::x509::x509(yaSSL::x509 const&)
087978af +0x2f:  mov    %esi,0x4(%esp)
087978b3 +0x33:  mov    %edi,(%esp)
087978b6 +0x36:  call   087973a0 <_ZN5yaSSL4x5094SwapERS0_>  ; yaSSL::x509::Swap(yaSSL::x509&)
087978bb +0x3b:  mov    %esi,(%esp)
087978be +0x3e:  call   08797850 <_ZN5yaSSL4x509D1Ev>  ; yaSSL::x509::~x509()
087978c3 +0x43:  mov    %edi,%eax
087978c5 +0x45:  mov    -0xc(%ebp),%ebx
087978c8 +0x48:  mov    -0x8(%ebp),%esi
087978cb +0x4b:  mov    -0x4(%ebp),%edi
087978ce +0x4e:  mov    %ebp,%esp
087978d0 +0x50:  pop    %ebp
087978d1 +0x51:  ret
087978d2 +0x52:  lea    0x0(%esi,%eiz,1),%esi
087978d9 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::x509::operator= @ 0x8797880

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::x509::TEMPNAMEPLACEHOLDERVALUE(yaSSL::x509 const&) */

x509 * __thiscall yaSSL::x509::operator=(x509 *this,x509 *param_1)

{
  x509 local_24 [20];
  
  x509(local_24,param_1);
  Swap(this,local_24);
  ~x509(local_24);
  return this;
}
```
