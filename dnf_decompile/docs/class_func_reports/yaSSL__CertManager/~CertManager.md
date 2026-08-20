# ~CertManager

`_ZN5yaSSL11CertManagerD1Ev`

`yaSSL::CertManager::~CertManager()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x08797970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797970  _ZN5yaSSL11CertManagerD1Ev
#           yaSSL::CertManager::~CertManager()
# range [0x08797970, 0x08797af9]
08797970 +0x000:  push   %ebp
08797971 +0x001:  mov    %esp,%ebp
08797973 +0x003:  push   %edi
08797974 +0x004:  push   %esi
08797975 +0x005:  push   %ebx
08797976 +0x006:  sub    $0x1c,%esp
08797979 +0x009:  mov    0x8(%ebp),%eax
0879797c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
08797981 +0x011:  add    $0xbd5217,%ebx
08797987 +0x017:  mov    0x38(%eax),%esi
0879798a +0x01a:  test   %esi,%esi
0879798c +0x01c:  je     087979b7 <+0x47>
0879798e +0x01e:  lea    0x34(%esi),%eax
08797991 +0x021:  mov    %eax,(%esp)
08797994 +0x024:  call   08750c20 <_ZN5yaSSL12StringHolderD1Ev>  ; yaSSL::StringHolder::~StringHolder()
08797999 +0x029:  lea    0x28(%esi),%eax
0879799c +0x02c:  mov    %eax,(%esp)
0879799f +0x02f:  call   08750c20 <_ZN5yaSSL12StringHolderD1Ev>  ; yaSSL::StringHolder::~StringHolder()
087979a4 +0x034:  lea    0x14(%esi),%eax
087979a7 +0x037:  mov    %eax,(%esp)
087979aa +0x03a:  call   08750c50 <_ZN5yaSSL9X509_NAMED1Ev>  ; yaSSL::X509_NAME::~X509_NAME()
087979af +0x03f:  mov    %esi,(%esp)
087979b2 +0x042:  call   08750c50 <_ZN5yaSSL9X509_NAMED1Ev>  ; yaSSL::X509_NAME::~X509_NAME()
087979b7 +0x047:  mov    %esi,(%esp)
087979ba +0x04a:  movb   $0x0,0x4(%esp)
087979bf +0x04f:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087979c4 +0x054:  mov    0x8(%ebp),%edx
087979c7 +0x057:  mov    0x44(%edx),%esi
087979ca +0x05a:  test   %esi,%esi
087979cc +0x05c:  je     087979fa <+0x8a>
087979ce +0x05e:  xchg   %ax,%ax
087979d0 +0x060:  mov    0x8(%esi),%edi
087979d3 +0x063:  movl   $0x0,0x8(%esi)
087979da +0x06a:  test   %edi,%edi
087979dc +0x06c:  je     087979e6 <+0x76>
087979de +0x06e:  mov    %edi,(%esp)
087979e1 +0x071:  call   08754230 <_ZN8TaoCrypt6SignerD1Ev>  ; TaoCrypt::Signer::~Signer()
087979e6 +0x076:  movb   $0x0,0x4(%esp)
087979eb +0x07b:  mov    %edi,(%esp)
087979ee +0x07e:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
087979f3 +0x083:  mov    0x4(%esi),%esi
087979f6 +0x086:  test   %esi,%esi
087979f8 +0x088:  jne    087979d0 <+0x60>
087979fa +0x08a:  mov    0x8(%ebp),%eax
087979fd +0x08d:  mov    0x1c(%eax),%esi
08797a00 +0x090:  test   %esi,%esi
08797a02 +0x092:  je     08797a32 <+0xc2>
08797a04 +0x094:  lea    0x0(%esi,%eiz,1),%esi
08797a08 +0x098:  mov    0x8(%esi),%edi
08797a0b +0x09b:  movl   $0x0,0x8(%esi)
08797a12 +0x0a2:  test   %edi,%edi
08797a14 +0x0a4:  je     08797a1e <+0xae>
08797a16 +0x0a6:  mov    %edi,(%esp)
08797a19 +0x0a9:  call   08797850 <_ZN5yaSSL4x509D1Ev>  ; yaSSL::x509::~x509()
08797a1e +0x0ae:  movb   $0x0,0x4(%esp)
08797a23 +0x0b3:  mov    %edi,(%esp)
08797a26 +0x0b6:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08797a2b +0x0bb:  mov    0x4(%esi),%esi
08797a2e +0x0be:  test   %esi,%esi
08797a30 +0x0c0:  jne    08797a08 <+0x98>
08797a32 +0x0c2:  mov    0x8(%ebp),%edx
08797a35 +0x0c5:  mov    (%edx),%esi
08797a37 +0x0c7:  test   %esi,%esi
08797a39 +0x0c9:  je     08797a6a <+0xfa>
08797a3b +0x0cb:  nop
08797a3c +0x0cc:  lea    0x0(%esi,%eiz,1),%esi
08797a40 +0x0d0:  mov    0x8(%esi),%edi
08797a43 +0x0d3:  movl   $0x0,0x8(%esi)
08797a4a +0x0da:  test   %edi,%edi
08797a4c +0x0dc:  je     08797a56 <+0xe6>
08797a4e +0x0de:  mov    %edi,(%esp)
08797a51 +0x0e1:  call   08797850 <_ZN5yaSSL4x509D1Ev>  ; yaSSL::x509::~x509()
08797a56 +0x0e6:  movb   $0x0,0x4(%esp)
08797a5b +0x0eb:  mov    %edi,(%esp)
08797a5e +0x0ee:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08797a63 +0x0f3:  mov    0x4(%esi),%esi
08797a66 +0x0f6:  test   %esi,%esi
08797a68 +0x0f8:  jne    08797a40 <+0xd0>
08797a6a +0x0fa:  mov    0x8(%ebp),%edx
08797a6d +0x0fd:  mov    0x44(%edx),%eax
08797a70 +0x100:  test   %eax,%eax
08797a72 +0x102:  jne    08797a7a <+0x10a>
08797a74 +0x104:  jmp    08797a8e <+0x11e>
08797a76 +0x106:  xchg   %ax,%ax
08797a78 +0x108:  mov    %esi,%eax
08797a7a +0x10a:  mov    0x4(%eax),%esi
08797a7d +0x10d:  movb   $0x0,0x4(%esp)
08797a82 +0x112:  mov    %eax,(%esp)
08797a85 +0x115:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08797a8a +0x11a:  test   %esi,%esi
08797a8c +0x11c:  jne    08797a78 <+0x108>
08797a8e +0x11e:  mov    0x8(%ebp),%eax
08797a91 +0x121:  add    $0x28,%eax
08797a94 +0x124:  mov    %eax,(%esp)
08797a97 +0x127:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
08797a9c +0x12c:  mov    0x8(%ebp),%edx
08797a9f +0x12f:  mov    0x1c(%edx),%eax
08797aa2 +0x132:  test   %eax,%eax
08797aa4 +0x134:  jne    08797aaa <+0x13a>
08797aa6 +0x136:  jmp    08797abe <+0x14e>
08797aa8 +0x138:  mov    %esi,%eax
08797aaa +0x13a:  mov    0x4(%eax),%esi
08797aad +0x13d:  movb   $0x0,0x4(%esp)
08797ab2 +0x142:  mov    %eax,(%esp)
08797ab5 +0x145:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08797aba +0x14a:  test   %esi,%esi
08797abc +0x14c:  jne    08797aa8 <+0x138>
08797abe +0x14e:  mov    0x8(%ebp),%eax
08797ac1 +0x151:  add    $0xc,%eax
08797ac4 +0x154:  mov    %eax,(%esp)
08797ac7 +0x157:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
08797acc +0x15c:  mov    0x8(%ebp),%edx
08797acf +0x15f:  mov    (%edx),%eax
08797ad1 +0x161:  test   %eax,%eax
08797ad3 +0x163:  jne    08797ada <+0x16a>
08797ad5 +0x165:  jmp    08797aee <+0x17e>
08797ad7 +0x167:  nop
08797ad8 +0x168:  mov    %esi,%eax
08797ada +0x16a:  mov    0x4(%eax),%esi
08797add +0x16d:  movb   $0x0,0x4(%esp)
08797ae2 +0x172:  mov    %eax,(%esp)
08797ae5 +0x175:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08797aea +0x17a:  test   %esi,%esi
08797aec +0x17c:  jne    08797ad8 <+0x168>
08797aee +0x17e:  add    $0x1c,%esp
08797af1 +0x181:  pop    %ebx
08797af2 +0x182:  pop    %esi
08797af3 +0x183:  pop    %edi
08797af4 +0x184:  pop    %ebp
08797af5 +0x185:  ret
08797af6 +0x186:  lea    0x0(%esi),%esi
08797af9 +0x189:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertManager::~CertManager @ 0x8797970

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertManager::~CertManager() */

void __thiscall yaSSL::CertManager::~CertManager(CertManager *this)

{
  X509_NAME *this_00;
  int iVar1;
  Signer *this_01;
  x509 *pxVar2;
  int iVar3;
  
  this_00 = *(X509_NAME **)(this + 0x38);
  if (this_00 != (X509_NAME *)0x0) {
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x34));
    StringHolder::~StringHolder((StringHolder *)(this_00 + 0x28));
    X509_NAME::~X509_NAME(this_00 + 0x14);
    X509_NAME::~X509_NAME(this_00);
  }
  operator_delete(this_00,0);
  for (iVar1 = *(int *)(this + 0x44); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    this_01 = *(Signer **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (this_01 != (Signer *)0x0) {
      TaoCrypt::Signer::~Signer(this_01);
    }
    operator_delete(this_01,0);
  }
  for (iVar1 = *(int *)(this + 0x1c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    pxVar2 = *(x509 **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (pxVar2 != (x509 *)0x0) {
      yaSSL::x509::~x509(pxVar2);
    }
    operator_delete(pxVar2,0);
  }
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    pxVar2 = *(x509 **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (pxVar2 != (x509 *)0x0) {
      yaSSL::x509::~x509(pxVar2);
    }
    operator_delete(pxVar2,0);
  }
  iVar1 = *(int *)(this + 0x44);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  input_buffer::~input_buffer((input_buffer *)(this + 0x28));
  iVar1 = *(int *)(this + 0x1c);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  input_buffer::~input_buffer((input_buffer *)(this + 0xc));
  iVar1 = *(int *)this;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  return;
}
```
