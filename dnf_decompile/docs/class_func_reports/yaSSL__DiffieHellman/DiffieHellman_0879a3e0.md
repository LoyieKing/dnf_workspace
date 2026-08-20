# DiffieHellman

`_ZN5yaSSL13DiffieHellmanC1ERKS0_`

`yaSSL::DiffieHellman::DiffieHellman(yaSSL::DiffieHellman const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x0879a3e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a3e0  _ZN5yaSSL13DiffieHellmanC1ERKS0_
#           yaSSL::DiffieHellman::DiffieHellman(yaSSL::DiffieHellman const&)
# range [0x0879a3e0, 0x0879a4aa]
0879a3e0 +0x00:  push   %ebp
0879a3e1 +0x01:  mov    %esp,%ebp
0879a3e3 +0x03:  push   %edi
0879a3e4 +0x04:  push   %esi
0879a3e5 +0x05:  push   %ebx
0879a3e6 +0x06:  sub    $0x1c,%esp
0879a3e9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a3ee +0x0e:  add    $0xbd27aa,%ebx
0879a3f4 +0x14:  movb   $0x0,0x4(%esp)
0879a3f9 +0x19:  movl   $0x30,(%esp)
0879a400 +0x20:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879a405 +0x25:  mov    %eax,%esi
0879a407 +0x27:  mov    0xc(%ebp),%eax
0879a40a +0x2a:  mov    (%eax),%edi
0879a40c +0x2c:  mov    %esi,(%esp)
0879a40f +0x2f:  mov    %edi,0x4(%esp)
0879a413 +0x33:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879a418 +0x38:  lea    0x10(%edi),%eax
0879a41b +0x3b:  mov    %eax,0x4(%esp)
0879a41f +0x3f:  lea    0x10(%esi),%eax
0879a422 +0x42:  mov    %eax,(%esp)
0879a425 +0x45:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0879a42a +0x4a:  mov    0x20(%edi),%eax
0879a42d +0x4d:  movl   $0x0,0x24(%esi)
0879a434 +0x54:  movl   $0x0,0x28(%esi)
0879a43b +0x5b:  movl   $0x0,0x2c(%esi)
0879a442 +0x62:  mov    %eax,0x20(%esi)
0879a445 +0x65:  mov    %esi,(%esp)
0879a448 +0x68:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879a44d +0x6d:  mov    %eax,%edi
0879a44f +0x6f:  movb   $0x0,0x4(%esp)
0879a454 +0x74:  mov    %eax,(%esp)
0879a457 +0x77:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879a45c +0x7c:  mov    %eax,0x24(%esi)
0879a45f +0x7f:  movb   $0x0,0x4(%esp)
0879a464 +0x84:  mov    %edi,(%esp)
0879a467 +0x87:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879a46c +0x8c:  mov    %eax,0x28(%esi)
0879a46f +0x8f:  mov    %edi,(%esp)
0879a472 +0x92:  movb   $0x0,0x4(%esp)
0879a477 +0x97:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879a47c +0x9c:  mov    %eax,0x2c(%esi)
0879a47f +0x9f:  mov    0x8(%ebp),%eax
0879a482 +0xa2:  mov    %esi,(%eax)
0879a484 +0xa4:  mov    0x24(%esi),%eax
0879a487 +0xa7:  mov    %eax,0xc(%esp)
0879a48b +0xab:  mov    0x28(%esi),%eax
0879a48e +0xae:  mov    %eax,0x8(%esp)
0879a492 +0xb2:  mov    0x20(%esi),%eax
0879a495 +0xb5:  mov    %esi,(%esp)
0879a498 +0xb8:  mov    %eax,0x4(%esp)
0879a49c +0xbc:  call   087a8c70 <_ZN8TaoCrypt2DH15GenerateKeyPairERNS_21RandomNumberGeneratorEPhS3_>  ; TaoCrypt::DH::GenerateKeyPair(TaoCrypt::RandomNumberGenerator&, unsigned char*, unsigned char*)
0879a4a1 +0xc1:  add    $0x1c,%esp
0879a4a4 +0xc4:  pop    %ebx
0879a4a5 +0xc5:  pop    %esi
0879a4a6 +0xc6:  pop    %edi
0879a4a7 +0xc7:  pop    %ebp
0879a4a8 +0xc8:  ret
0879a4a9 +0xc9:  nop
0879a4aa +0xca:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::DiffieHellman::DiffieHellman @ 0x879a3e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::DiffieHellman(yaSSL::DiffieHellman const&) */

void __thiscall yaSSL::DiffieHellman::DiffieHellman(DiffieHellman *this,DiffieHellman *param_1)

{
  Integer *pIVar1;
  Integer *this_00;
  undefined4 uVar2;
  void *pvVar3;
  uint in_stack_ffffffd8;
  Integer *pIVar4;
  uint uVar5;
  
  this_00 = operator_new(0x30,in_stack_ffffffd8 & 0xffffff00);
  pIVar1 = *(Integer **)param_1;
  TaoCrypt::Integer::Integer(this_00,pIVar1);
  pIVar4 = pIVar1 + 0x10;
  TaoCrypt::Integer::Integer(this_00 + 0x10,pIVar4);
  uVar2 = *(undefined4 *)(pIVar1 + 0x20);
  *(undefined4 *)(this_00 + 0x24) = 0;
  *(undefined4 *)(this_00 + 0x28) = 0;
  *(undefined4 *)(this_00 + 0x2c) = 0;
  *(undefined4 *)(this_00 + 0x20) = uVar2;
  uVar2 = TaoCrypt::Integer::ByteCount(this_00);
  uVar5 = (uint)pIVar4 & 0xffffff00;
  pvVar3 = operator_new__(uVar2,uVar5);
  *(void **)(this_00 + 0x24) = pvVar3;
  uVar5 = uVar5 & 0xffffff00;
  pvVar3 = operator_new__(uVar2,uVar5);
  *(void **)(this_00 + 0x28) = pvVar3;
  pvVar3 = operator_new__(uVar2,uVar5 & 0xffffff00);
  *(void **)(this_00 + 0x2c) = pvVar3;
  *(Integer **)this = this_00;
  TaoCrypt::DH::GenerateKeyPair
            ((DH *)this_00,*(RandomNumberGenerator **)(this_00 + 0x20),*(uchar **)(this_00 + 0x28),
             *(uchar **)(this_00 + 0x24));
  return;
}
```
