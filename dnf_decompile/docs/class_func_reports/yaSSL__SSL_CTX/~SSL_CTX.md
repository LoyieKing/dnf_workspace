# ~SSL_CTX

`_ZN5yaSSL7SSL_CTXD1Ev`

`yaSSL::SSL_CTX::~SSL_CTX()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x08752bf0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752bf0  _ZN5yaSSL7SSL_CTXD1Ev
#           yaSSL::SSL_CTX::~SSL_CTX()
# range [0x08752bf0, 0x08752cd9]
08752bf0 +0x00:  push   %ebp
08752bf1 +0x01:  mov    %esp,%ebp
08752bf3 +0x03:  push   %edi
08752bf4 +0x04:  push   %esi
08752bf5 +0x05:  push   %ebx
08752bf6 +0x06:  sub    $0x1c,%esp
08752bf9 +0x09:  mov    0x8(%ebp),%edx
08752bfc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08752c01 +0x11:  add    $0xc19f97,%ebx
08752c07 +0x17:  mov    (%edx),%eax
08752c09 +0x19:  movb   $0x0,0x4(%esp)
08752c0e +0x1e:  mov    %eax,(%esp)
08752c11 +0x21:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752c16 +0x26:  mov    0x8(%ebp),%eax
08752c19 +0x29:  mov    0x4(%eax),%esi
08752c1c +0x2c:  test   %esi,%esi
08752c1e +0x2e:  je     08752c28 <+0x38>
08752c20 +0x30:  mov    %esi,(%esp)
08752c23 +0x33:  call   08797850 <_ZN5yaSSL4x509D1Ev>  ; yaSSL::x509::~x509()
08752c28 +0x38:  mov    %esi,(%esp)
08752c2b +0x3b:  movb   $0x0,0x4(%esp)
08752c30 +0x40:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752c35 +0x45:  mov    0x8(%ebp),%edx
08752c38 +0x48:  mov    0x8(%edx),%esi
08752c3b +0x4b:  test   %esi,%esi
08752c3d +0x4d:  je     08752c47 <+0x57>
08752c3f +0x4f:  mov    %esi,(%esp)
08752c42 +0x52:  call   08797850 <_ZN5yaSSL4x509D1Ev>  ; yaSSL::x509::~x509()
08752c47 +0x57:  mov    %esi,(%esp)
08752c4a +0x5a:  movb   $0x0,0x4(%esp)
08752c4f +0x5f:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752c54 +0x64:  mov    0x8(%ebp),%eax
08752c57 +0x67:  mov    0xc(%eax),%esi
08752c5a +0x6a:  test   %esi,%esi
08752c5c +0x6c:  je     08752c8a <+0x9a>
08752c5e +0x6e:  xchg   %ax,%ax
08752c60 +0x70:  mov    0x8(%esi),%edi
08752c63 +0x73:  movl   $0x0,0x8(%esi)
08752c6a +0x7a:  test   %edi,%edi
08752c6c +0x7c:  je     08752c76 <+0x86>
08752c6e +0x7e:  mov    %edi,(%esp)
08752c71 +0x81:  call   08797850 <_ZN5yaSSL4x509D1Ev>  ; yaSSL::x509::~x509()
08752c76 +0x86:  movb   $0x0,0x4(%esp)
08752c7b +0x8b:  mov    %edi,(%esp)
08752c7e +0x8e:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752c83 +0x93:  mov    0x4(%esi),%esi
08752c86 +0x96:  test   %esi,%esi
08752c88 +0x98:  jne    08752c60 <+0x70>
08752c8a +0x9a:  mov    0x8(%ebp),%eax
08752c8d +0x9d:  add    $0xa4,%eax
08752c92 +0xa2:  mov    %eax,(%esp)
08752c95 +0xa5:  call   0879ae80 <_ZN5yaSSL7IntegerD1Ev>  ; yaSSL::Integer::~Integer()
08752c9a +0xaa:  mov    0x8(%ebp),%eax
08752c9d +0xad:  add    $0xa0,%eax
08752ca2 +0xb2:  mov    %eax,(%esp)
08752ca5 +0xb5:  call   0879ae80 <_ZN5yaSSL7IntegerD1Ev>  ; yaSSL::Integer::~Integer()
08752caa +0xba:  mov    0x8(%ebp),%edx
08752cad +0xbd:  mov    0xc(%edx),%eax
08752cb0 +0xc0:  test   %eax,%eax
08752cb2 +0xc2:  jne    08752cba <+0xca>
08752cb4 +0xc4:  jmp    08752cce <+0xde>
08752cb6 +0xc6:  xchg   %ax,%ax
08752cb8 +0xc8:  mov    %esi,%eax
08752cba +0xca:  mov    0x4(%eax),%esi
08752cbd +0xcd:  movb   $0x0,0x4(%esp)
08752cc2 +0xd2:  mov    %eax,(%esp)
08752cc5 +0xd5:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08752cca +0xda:  test   %esi,%esi
08752ccc +0xdc:  jne    08752cb8 <+0xc8>
08752cce +0xde:  add    $0x1c,%esp
08752cd1 +0xe1:  pop    %ebx
08752cd2 +0xe2:  pop    %esi
08752cd3 +0xe3:  pop    %edi
08752cd4 +0xe4:  pop    %ebp
08752cd5 +0xe5:  ret
08752cd6 +0xe6:  lea    0x0(%esi),%esi
08752cd9 +0xe9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::~SSL_CTX @ 0x8752bf0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL_CTX::~SSL_CTX() */

void __thiscall yaSSL::SSL_CTX::~SSL_CTX(SSL_CTX *this)

{
  x509 *pxVar1;
  int iVar2;
  int iVar3;
  
  operator_delete(*(undefined4 *)this,0);
  pxVar1 = *(x509 **)(this + 4);
  if (pxVar1 != (x509 *)0x0) {
    yaSSL::x509::~x509(pxVar1);
  }
  operator_delete(pxVar1,0);
  pxVar1 = *(x509 **)(this + 8);
  if (pxVar1 != (x509 *)0x0) {
    yaSSL::x509::~x509(pxVar1);
  }
  operator_delete(pxVar1,0);
  for (iVar2 = *(int *)(this + 0xc); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    pxVar1 = *(x509 **)(iVar2 + 8);
    *(undefined4 *)(iVar2 + 8) = 0;
    if (pxVar1 != (x509 *)0x0) {
      yaSSL::x509::~x509(pxVar1);
    }
    operator_delete(pxVar1,0);
  }
  Integer::~Integer((Integer *)(this + 0xa4));
  Integer::~Integer((Integer *)(this + 0xa0));
  iVar2 = *(int *)(this + 0xc);
  while (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4);
    operator_delete__(iVar2,0);
    iVar2 = iVar3;
  }
  return;
}
```
