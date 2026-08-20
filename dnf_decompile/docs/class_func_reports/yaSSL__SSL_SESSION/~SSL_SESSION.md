# ~SSL_SESSION

`_ZN5yaSSL11SSL_SESSIOND1Ev`

`yaSSL::SSL_SESSION::~SSL_SESSION()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x08752de0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752de0  _ZN5yaSSL11SSL_SESSIOND1Ev
#           yaSSL::SSL_SESSION::~SSL_SESSION()
# range [0x08752de0, 0x08752e5a]
08752de0 +0x00:  push   %ebp
08752de1 +0x01:  mov    %esp,%ebp
08752de3 +0x03:  push   %esi
08752de4 +0x04:  push   %ebx
08752de5 +0x05:  sub    $0x10,%esp
08752de8 +0x08:  mov    0x8(%ebp),%esi
08752deb +0x0b:  call   08722df8 <__i686.get_pc_thunk.bx>
08752df0 +0x10:  add    $0xc19da8,%ebx
08752df6 +0x16:  mov    0x5c(%esi),%eax
08752df9 +0x19:  movl   $0x30,0x4(%esp)
08752e01 +0x21:  mov    %eax,0x8(%esp)
08752e05 +0x25:  lea    0x20(%esi),%eax
08752e08 +0x28:  mov    %eax,(%esp)
08752e0b +0x2b:  call   08747c30 <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE>  ; yaSSL::clean(unsigned char volatile*, unsigned int, yaSSL::RandomPool&)
08752e10 +0x30:  mov    0x60(%esi),%esi
08752e13 +0x33:  test   %esi,%esi
08752e15 +0x35:  je     08752e40 <+0x60>
08752e17 +0x37:  lea    0x34(%esi),%eax
08752e1a +0x3a:  mov    %eax,(%esp)
08752e1d +0x3d:  call   08750c20 <_ZN5yaSSL12StringHolderD1Ev>  ; yaSSL::StringHolder::~StringHolder()
08752e22 +0x42:  lea    0x28(%esi),%eax
08752e25 +0x45:  mov    %eax,(%esp)
08752e28 +0x48:  call   08750c20 <_ZN5yaSSL12StringHolderD1Ev>  ; yaSSL::StringHolder::~StringHolder()
08752e2d +0x4d:  lea    0x14(%esi),%eax
08752e30 +0x50:  mov    %eax,(%esp)
08752e33 +0x53:  call   08750c50 <_ZN5yaSSL9X509_NAMED1Ev>  ; yaSSL::X509_NAME::~X509_NAME()
08752e38 +0x58:  mov    %esi,(%esp)
08752e3b +0x5b:  call   08750c50 <_ZN5yaSSL9X509_NAMED1Ev>  ; yaSSL::X509_NAME::~X509_NAME()
08752e40 +0x60:  mov    %esi,(%esp)
08752e43 +0x63:  movb   $0x0,0x4(%esp)
08752e48 +0x68:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752e4d +0x6d:  add    $0x10,%esp
08752e50 +0x70:  pop    %ebx
08752e51 +0x71:  pop    %esi
08752e52 +0x72:  pop    %ebp
08752e53 +0x73:  ret
08752e54 +0x74:  lea    0x0(%esi),%esi
08752e5a +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::~SSL_SESSION @ 0x8752de0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_SESSION::~SSL_SESSION() */

void __thiscall yaSSL::SSL_SESSION::~SSL_SESSION(SSL_SESSION *this)

{
  X509_NAME *this_00;
  uint uVar1;
  
  uVar1 = 0;
  clean((uchar *)(this + 0x20),0x30,*(RandomPool **)(this + 0x5c));
  this_00 = *(X509_NAME **)(this + 0x60);
  if (this_00 != (X509_NAME *)0x0) {
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x34));
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x28));
    X509_NAME::~X509_NAME(this_00 + 0x14);
    X509_NAME::~X509_NAME(this_00);
  }
  operator_delete(this_00,uVar1 & 0xffffff00);
  return;
}
```
