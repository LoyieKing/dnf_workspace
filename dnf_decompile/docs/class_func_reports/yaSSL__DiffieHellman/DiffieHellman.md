# DiffieHellman

`_ZN5yaSSL13DiffieHellmanC1ERKNS_7IntegerES3_RKNS_10RandomPoolE`

`yaSSL::DiffieHellman::DiffieHellman(yaSSL::Integer const&, yaSSL::Integer const&, yaSSL::RandomPool const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x0879a010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a010  _ZN5yaSSL13DiffieHellmanC1ERKNS_7IntegerES3_RKNS_10RandomPoolE
#           yaSSL::DiffieHellman::DiffieHellman(yaSSL::Integer const&, yaSSL::Integer const&, yaSSL::RandomPool const&)
# range [0x0879a010, 0x0879a10e]
0879a010 +0x00:  push   %ebp
0879a011 +0x01:  mov    %esp,%ebp
0879a013 +0x03:  push   %edi
0879a014 +0x04:  push   %esi
0879a015 +0x05:  push   %ebx
0879a016 +0x06:  sub    $0x2c,%esp
0879a019 +0x09:  mov    0x8(%ebp),%esi
0879a01c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a021 +0x11:  add    $0xbd2b77,%ebx
0879a027 +0x17:  movb   $0x0,0x4(%esp)
0879a02c +0x1c:  movl   $0x30,(%esp)
0879a033 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879a038 +0x28:  mov    0x14(%ebp),%edx
0879a03b +0x2b:  mov    (%edx),%edx
0879a03d +0x2d:  mov    %eax,-0x20(%ebp)
0879a040 +0x30:  mov    %eax,(%esp)
0879a043 +0x33:  mov    %edx,-0x1c(%ebp)
0879a046 +0x36:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879a04b +0x3b:  mov    -0x20(%ebp),%eax
0879a04e +0x3e:  lea    0x10(%eax),%edi
0879a051 +0x41:  mov    %edi,(%esp)
0879a054 +0x44:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879a059 +0x49:  mov    -0x20(%ebp),%eax
0879a05c +0x4c:  mov    -0x1c(%ebp),%edx
0879a05f +0x4f:  mov    0xc(%ebp),%ecx
0879a062 +0x52:  mov    %eax,(%esi)
0879a064 +0x54:  mov    %edx,0x20(%eax)
0879a067 +0x57:  mov    0x10(%ebp),%edx
0879a06a +0x5a:  mov    (%ecx),%ecx
0879a06c +0x5c:  movl   $0x0,0x24(%eax)
0879a073 +0x63:  movl   $0x0,0x28(%eax)
0879a07a +0x6a:  mov    (%edx),%edx
0879a07c +0x6c:  movl   $0x0,0x2c(%eax)
0879a083 +0x73:  mov    %ecx,0x4(%esp)
0879a087 +0x77:  mov    %eax,(%esp)
0879a08a +0x7a:  mov    %edx,-0x1c(%ebp)
0879a08d +0x7d:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0879a092 +0x82:  mov    -0x1c(%ebp),%edx
0879a095 +0x85:  mov    %edi,(%esp)
0879a098 +0x88:  mov    %edx,0x4(%esp)
0879a09c +0x8c:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0879a0a1 +0x91:  mov    (%esi),%eax
0879a0a3 +0x93:  mov    %eax,(%esp)
0879a0a6 +0x96:  call   0875ec30 <_ZNK8TaoCrypt7Integer9ByteCountEv>  ; TaoCrypt::Integer::ByteCount() const
0879a0ab +0x9b:  mov    (%esi),%edi
0879a0ad +0x9d:  movb   $0x0,0x4(%esp)
0879a0b2 +0xa2:  mov    %eax,(%esp)
0879a0b5 +0xa5:  mov    %eax,-0x1c(%ebp)
0879a0b8 +0xa8:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879a0bd +0xad:  mov    %eax,0x24(%edi)
0879a0c0 +0xb0:  mov    -0x1c(%ebp),%edx
0879a0c3 +0xb3:  movb   $0x0,0x4(%esp)
0879a0c8 +0xb8:  mov    %edx,(%esp)
0879a0cb +0xbb:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879a0d0 +0xc0:  mov    %eax,0x28(%edi)
0879a0d3 +0xc3:  mov    -0x1c(%ebp),%edx
0879a0d6 +0xc6:  movb   $0x0,0x4(%esp)
0879a0db +0xcb:  mov    %edx,(%esp)
0879a0de +0xce:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879a0e3 +0xd3:  mov    %eax,0x2c(%edi)
0879a0e6 +0xd6:  mov    (%esi),%eax
0879a0e8 +0xd8:  mov    0x24(%eax),%edx
0879a0eb +0xdb:  mov    %edx,0xc(%esp)
0879a0ef +0xdf:  mov    0x28(%eax),%edx
0879a0f2 +0xe2:  mov    %edx,0x8(%esp)
0879a0f6 +0xe6:  mov    0x20(%eax),%edx
0879a0f9 +0xe9:  mov    %eax,(%esp)
0879a0fc +0xec:  mov    %edx,0x4(%esp)
0879a100 +0xf0:  call   087a8c70 <_ZN8TaoCrypt2DH15GenerateKeyPairERNS_21RandomNumberGeneratorEPhS3_>  ; TaoCrypt::DH::GenerateKeyPair(TaoCrypt::RandomNumberGenerator&, unsigned char*, unsigned char*)
0879a105 +0xf5:  add    $0x2c,%esp
0879a108 +0xf8:  pop    %ebx
0879a109 +0xf9:  pop    %esi
0879a10a +0xfa:  pop    %edi
0879a10b +0xfb:  pop    %ebp
0879a10c +0xfc:  ret
0879a10d +0xfd:  nop
0879a10e +0xfe:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::DiffieHellman::DiffieHellman @ 0x879a010

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::DiffieHellman(yaSSL::Integer const&, yaSSL::Integer const&,
   yaSSL::RandomPool const&) */

void __thiscall
yaSSL::DiffieHellman::DiffieHellman
          (DiffieHellman *this,Integer *param_1,Integer *param_2,RandomPool *param_3)

{
  Integer *pIVar1;
  int iVar2;
  DH *this_00;
  Integer *this_01;
  undefined4 uVar3;
  void *pvVar4;
  uint in_stack_ffffffc8;
  Integer *pIVar5;
  uint uVar6;
  
  this_01 = operator_new(0x30,in_stack_ffffffc8 & 0xffffff00);
  uVar3 = *(undefined4 *)param_3;
  TaoCrypt::Integer::Integer(this_01);
  TaoCrypt::Integer::Integer(this_01 + 0x10);
  *(Integer **)this = this_01;
  *(undefined4 *)(this_01 + 0x20) = uVar3;
  pIVar1 = *(Integer **)param_1;
  *(undefined4 *)(this_01 + 0x24) = 0;
  *(undefined4 *)(this_01 + 0x28) = 0;
  pIVar5 = *(Integer **)param_2;
  *(undefined4 *)(this_01 + 0x2c) = 0;
  TaoCrypt::Integer::operator=(this_01,pIVar1);
  TaoCrypt::Integer::operator=(this_01 + 0x10,pIVar5);
  uVar3 = TaoCrypt::Integer::ByteCount(*(Integer **)this);
  iVar2 = *(int *)this;
  uVar6 = (uint)pIVar5 & 0xffffff00;
  pvVar4 = operator_new__(uVar3,uVar6);
  *(void **)(iVar2 + 0x24) = pvVar4;
  uVar6 = uVar6 & 0xffffff00;
  pvVar4 = operator_new__(uVar3,uVar6);
  *(void **)(iVar2 + 0x28) = pvVar4;
  pvVar4 = operator_new__(uVar3,uVar6 & 0xffffff00);
  *(void **)(iVar2 + 0x2c) = pvVar4;
  this_00 = *(DH **)this;
  TaoCrypt::DH::GenerateKeyPair
            (this_00,*(RandomNumberGenerator **)(this_00 + 0x20),*(uchar **)(this_00 + 0x28),
             *(uchar **)(this_00 + 0x24));
  return;
}
```
