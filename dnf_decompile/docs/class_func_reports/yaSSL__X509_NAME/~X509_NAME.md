# ~X509_NAME

`_ZN5yaSSL9X509_NAMED1Ev`

`yaSSL::X509_NAME::~X509_NAME()`

| 类 | 地址 |
|---|---|
| `yaSSL::X509_NAME` | `0x08750c50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08750c50  _ZN5yaSSL9X509_NAMED1Ev
#           yaSSL::X509_NAME::~X509_NAME()
# range [0x08750c50, 0x08750c99]
08750c50 +0x00:  push   %ebp
08750c51 +0x01:  mov    %esp,%ebp
08750c53 +0x03:  sub    $0x18,%esp
08750c56 +0x06:  mov    %esi,-0x4(%ebp)
08750c59 +0x09:  mov    0x8(%ebp),%esi
08750c5c +0x0c:  mov    %ebx,-0x8(%ebp)
08750c5f +0x0f:  call   08722df8 <__i686.get_pc_thunk.bx>
08750c64 +0x14:  add    $0xc1bf34,%ebx
08750c6a +0x1a:  movb   $0x0,0x4(%esp)
08750c6f +0x1f:  mov    (%esi),%eax
08750c71 +0x21:  mov    %eax,(%esp)
08750c74 +0x24:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08750c79 +0x29:  movb   $0x0,0x4(%esp)
08750c7e +0x2e:  mov    0x10(%esi),%eax
08750c81 +0x31:  mov    %eax,(%esp)
08750c84 +0x34:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08750c89 +0x39:  mov    -0x8(%ebp),%ebx
08750c8c +0x3c:  mov    -0x4(%ebp),%esi
08750c8f +0x3f:  mov    %ebp,%esp
08750c91 +0x41:  pop    %ebp
08750c92 +0x42:  ret
08750c93 +0x43:  lea    0x0(%esi),%esi
08750c99 +0x49:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::X509_NAME::~X509_NAME @ 0x8750c50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509_NAME::~X509_NAME() */

void __thiscall yaSSL::X509_NAME::~X509_NAME(X509_NAME *this)

{
  operator_delete__(*(undefined4 *)this,0);
  operator_delete__(*(undefined4 *)(this + 0x10),0);
  return;
}
```
