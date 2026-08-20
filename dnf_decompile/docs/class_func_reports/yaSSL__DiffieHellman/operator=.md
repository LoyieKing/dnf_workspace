# operator=

`_ZN5yaSSL13DiffieHellmanaSERKS0_`

`yaSSL::DiffieHellman::operator=(yaSSL::DiffieHellman const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x0879ad90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879ad90  _ZN5yaSSL13DiffieHellmanaSERKS0_
#           yaSSL::DiffieHellman::operator=(yaSSL::DiffieHellman const&)
# range [0x0879ad90, 0x0879ae7a]
0879ad90 +0x00:  push   %ebp
0879ad91 +0x01:  mov    %esp,%ebp
0879ad93 +0x03:  push   %edi
0879ad94 +0x04:  push   %esi
0879ad95 +0x05:  push   %ebx
0879ad96 +0x06:  sub    $0x4c,%esp
0879ad99 +0x09:  mov    0xc(%ebp),%eax
0879ad9c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879ada1 +0x11:  add    $0xbd1df7,%ebx
0879ada7 +0x17:  mov    0x8(%ebp),%esi
0879adaa +0x1a:  lea    -0x38(%ebp),%edx
0879adad +0x1d:  mov    %edx,-0x40(%ebp)
0879adb0 +0x20:  mov    (%eax),%eax
0879adb2 +0x22:  mov    (%esi),%edi
0879adb4 +0x24:  mov    %edx,(%esp)
0879adb7 +0x27:  mov    %eax,0x4(%esp)
0879adbb +0x2b:  mov    %eax,-0x3c(%ebp)
0879adbe +0x2e:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879adc3 +0x33:  mov    -0x3c(%ebp),%eax
0879adc6 +0x36:  add    $0x10,%eax
0879adc9 +0x39:  mov    %eax,0x4(%esp)
0879adcd +0x3d:  lea    -0x28(%ebp),%eax
0879add0 +0x40:  mov    %eax,(%esp)
0879add3 +0x43:  mov    %eax,-0x3c(%ebp)
0879add6 +0x46:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879addb +0x4b:  mov    -0x40(%ebp),%edx
0879adde +0x4e:  mov    %edi,(%esp)
0879ade1 +0x51:  add    $0x10,%edi
0879ade4 +0x54:  mov    %edx,0x4(%esp)
0879ade8 +0x58:  call   0875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>  ; TaoCrypt::Integer::Swap(TaoCrypt::Integer&)
0879aded +0x5d:  mov    -0x3c(%ebp),%eax
0879adf0 +0x60:  mov    %edi,(%esp)
0879adf3 +0x63:  mov    %eax,0x4(%esp)
0879adf7 +0x67:  call   0875d590 <_ZN8TaoCrypt7Integer4SwapERS0_>  ; TaoCrypt::Integer::Swap(TaoCrypt::Integer&)
0879adfc +0x6c:  mov    -0x28(%ebp),%eax
0879adff +0x6f:  mov    -0x24(%ebp),%edi
0879ae02 +0x72:  movl   $0x0,0x4(%esp)
0879ae0a +0x7a:  shl    $0x2,%eax
0879ae0d +0x7d:  mov    %edi,(%esp)
0879ae10 +0x80:  mov    %eax,0x8(%esp)
0879ae14 +0x84:  call   0807dcc0 <_init+0x5b8>
0879ae19 +0x89:  mov    %edi,(%esp)
0879ae1c +0x8c:  movb   $0x0,0x4(%esp)
0879ae21 +0x91:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ae26 +0x96:  mov    -0x38(%ebp),%eax
0879ae29 +0x99:  mov    -0x34(%ebp),%edi
0879ae2c +0x9c:  movl   $0x0,0x4(%esp)
0879ae34 +0xa4:  shl    $0x2,%eax
0879ae37 +0xa7:  mov    %edi,(%esp)
0879ae3a +0xaa:  mov    %eax,0x8(%esp)
0879ae3e +0xae:  call   0807dcc0 <_init+0x5b8>
0879ae43 +0xb3:  mov    %edi,(%esp)
0879ae46 +0xb6:  movb   $0x0,0x4(%esp)
0879ae4b +0xbb:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879ae50 +0xc0:  mov    (%esi),%eax
0879ae52 +0xc2:  mov    0x24(%eax),%edx
0879ae55 +0xc5:  mov    %edx,0xc(%esp)
0879ae59 +0xc9:  mov    0x28(%eax),%edx
0879ae5c +0xcc:  mov    %edx,0x8(%esp)
0879ae60 +0xd0:  mov    0x20(%eax),%edx
0879ae63 +0xd3:  mov    %eax,(%esp)
0879ae66 +0xd6:  mov    %edx,0x4(%esp)
0879ae6a +0xda:  call   087a8c70 <_ZN8TaoCrypt2DH15GenerateKeyPairERNS_21RandomNumberGeneratorEPhS3_>  ; TaoCrypt::DH::GenerateKeyPair(TaoCrypt::RandomNumberGenerator&, unsigned char*, unsigned char*)
0879ae6f +0xdf:  add    $0x4c,%esp
0879ae72 +0xe2:  mov    %esi,%eax
0879ae74 +0xe4:  pop    %ebx
0879ae75 +0xe5:  pop    %esi
0879ae76 +0xe6:  pop    %edi
0879ae77 +0xe7:  pop    %ebp
0879ae78 +0xe8:  ret
0879ae79 +0xe9:  nop
0879ae7a +0xea:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::DiffieHellman::operator= @ 0x879ad90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::TEMPNAMEPLACEHOLDERVALUE(yaSSL::DiffieHellman const&) */

DiffieHellman * __thiscall
yaSSL::DiffieHellman::operator=(DiffieHellman *this,DiffieHellman *param_1)

{
  Integer *pIVar1;
  Integer *this_00;
  DH *this_01;
  uint uVar2;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  pIVar1 = *(Integer **)param_1;
  this_00 = *(Integer **)this;
  TaoCrypt::Integer::Integer((Integer *)&local_3c,pIVar1);
  TaoCrypt::Integer::Integer((Integer *)&local_2c,pIVar1 + 0x10);
  TaoCrypt::Integer::Swap(this_00,(Integer *)&local_3c);
  TaoCrypt::Integer::Swap(this_00 + 0x10,(Integer *)&local_2c);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  uVar2 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar2 & 0xffffff00);
  this_01 = *(DH **)this;
  TaoCrypt::DH::GenerateKeyPair
            (this_01,*(RandomNumberGenerator **)(this_01 + 0x20),*(uchar **)(this_01 + 0x28),
             *(uchar **)(this_01 + 0x24));
  return this;
}
```
