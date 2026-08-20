# DiffieHellman

`_ZN5yaSSL13DiffieHellmanC1EPKhjS2_jS2_jRKNS_10RandomPoolE`

`yaSSL::DiffieHellman::DiffieHellman(unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, yaSSL::RandomPool const&)`

| 类 | 地址 |
|---|---|
| `yaSSL::DiffieHellman` | `0x0879a980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879a980  _ZN5yaSSL13DiffieHellmanC1EPKhjS2_jS2_jRKNS_10RandomPoolE
#           yaSSL::DiffieHellman::DiffieHellman(unsigned char const*, unsigned int, unsigned char const*, unsigned int, unsigned char const*, unsigned int, yaSSL::RandomPool const&)
# range [0x0879a980, 0x0879aada]
0879a980 +0x000:  push   %ebp
0879a981 +0x001:  mov    %esp,%ebp
0879a983 +0x003:  push   %edi
0879a984 +0x004:  push   %esi
0879a985 +0x005:  push   %ebx
0879a986 +0x006:  sub    $0x4c,%esp
0879a989 +0x009:  mov    0x8(%ebp),%esi
0879a98c +0x00c:  call   08722df8 <__i686.get_pc_thunk.bx>
0879a991 +0x011:  add    $0xbd2207,%ebx
0879a997 +0x017:  movb   $0x0,0x4(%esp)
0879a99c +0x01c:  movl   $0x30,(%esp)
0879a9a3 +0x023:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879a9a8 +0x028:  mov    %eax,%edi
0879a9aa +0x02a:  mov    0x24(%ebp),%eax
0879a9ad +0x02d:  mov    (%eax),%eax
0879a9af +0x02f:  mov    %edi,(%esp)
0879a9b2 +0x032:  mov    %eax,-0x3c(%ebp)
0879a9b5 +0x035:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879a9ba +0x03a:  lea    0x10(%edi),%edx
0879a9bd +0x03d:  mov    %edx,(%esp)
0879a9c0 +0x040:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879a9c5 +0x045:  mov    -0x3c(%ebp),%eax
0879a9c8 +0x048:  lea    -0x28(%ebp),%edx
0879a9cb +0x04b:  mov    %edi,(%esi)
0879a9cd +0x04d:  movl   $0x0,0x24(%edi)
0879a9d4 +0x054:  movl   $0x0,0x28(%edi)
0879a9db +0x05b:  mov    %eax,0x20(%edi)
0879a9de +0x05e:  mov    0x18(%ebp),%eax
0879a9e1 +0x061:  movl   $0x0,0x2c(%edi)
0879a9e8 +0x068:  mov    %edx,-0x40(%ebp)
0879a9eb +0x06b:  mov    %edx,(%esp)
0879a9ee +0x06e:  mov    %eax,0x8(%esp)
0879a9f2 +0x072:  mov    0x14(%ebp),%eax
0879a9f5 +0x075:  movl   $0x0,0xc(%esp)
0879a9fd +0x07d:  mov    %eax,0x4(%esp)
0879aa01 +0x081:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
0879aa06 +0x086:  mov    0x10(%ebp),%eax
0879aa09 +0x089:  movl   $0x0,0xc(%esp)
0879aa11 +0x091:  mov    %eax,0x8(%esp)
0879aa15 +0x095:  mov    0xc(%ebp),%eax
0879aa18 +0x098:  mov    %eax,0x4(%esp)
0879aa1c +0x09c:  lea    -0x38(%ebp),%eax
0879aa1f +0x09f:  mov    %eax,(%esp)
0879aa22 +0x0a2:  mov    %eax,-0x3c(%ebp)
0879aa25 +0x0a5:  call   08761300 <_ZN8TaoCrypt7IntegerC1EPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Integer(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
0879aa2a +0x0aa:  mov    (%esi),%edi
0879aa2c +0x0ac:  mov    -0x3c(%ebp),%eax
0879aa2f +0x0af:  mov    %edi,(%esp)
0879aa32 +0x0b2:  add    $0x10,%edi
0879aa35 +0x0b5:  mov    %eax,0x4(%esp)
0879aa39 +0x0b9:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0879aa3e +0x0be:  mov    -0x40(%ebp),%edx
0879aa41 +0x0c1:  mov    %edi,(%esp)
0879aa44 +0x0c4:  mov    %edx,0x4(%esp)
0879aa48 +0x0c8:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
0879aa4d +0x0cd:  mov    -0x38(%ebp),%eax
0879aa50 +0x0d0:  mov    -0x34(%ebp),%edi
0879aa53 +0x0d3:  movl   $0x0,0x4(%esp)
0879aa5b +0x0db:  shl    $0x2,%eax
0879aa5e +0x0de:  mov    %edi,(%esp)
0879aa61 +0x0e1:  mov    %eax,0x8(%esp)
0879aa65 +0x0e5:  call   0807dcc0 <_init+0x5b8>
0879aa6a +0x0ea:  mov    %edi,(%esp)
0879aa6d +0x0ed:  movb   $0x0,0x4(%esp)
0879aa72 +0x0f2:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879aa77 +0x0f7:  mov    -0x28(%ebp),%eax
0879aa7a +0x0fa:  mov    -0x24(%ebp),%edi
0879aa7d +0x0fd:  movl   $0x0,0x4(%esp)
0879aa85 +0x105:  shl    $0x2,%eax
0879aa88 +0x108:  mov    %eax,0x8(%esp)
0879aa8c +0x10c:  mov    %edi,(%esp)
0879aa8f +0x10f:  call   0807dcc0 <_init+0x5b8>
0879aa94 +0x114:  movb   $0x0,0x4(%esp)
0879aa99 +0x119:  mov    %edi,(%esp)
0879aa9c +0x11c:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0879aaa1 +0x121:  mov    0x20(%ebp),%eax
0879aaa4 +0x124:  mov    (%esi),%edi
0879aaa6 +0x126:  movb   $0x0,0x4(%esp)
0879aaab +0x12b:  mov    %eax,(%esp)
0879aaae +0x12e:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879aab3 +0x133:  mov    0x20(%ebp),%edx
0879aab6 +0x136:  mov    %eax,0x24(%edi)
0879aab9 +0x139:  mov    (%esi),%eax
0879aabb +0x13b:  mov    0x24(%eax),%eax
0879aabe +0x13e:  mov    %edx,0x8(%esp)
0879aac2 +0x142:  mov    0x1c(%ebp),%edx
0879aac5 +0x145:  mov    %eax,(%esp)
0879aac8 +0x148:  mov    %edx,0x4(%esp)
0879aacc +0x14c:  call   0807d8a0 <_init+0x198>
0879aad1 +0x151:  add    $0x4c,%esp
0879aad4 +0x154:  pop    %ebx
0879aad5 +0x155:  pop    %esi
0879aad6 +0x156:  pop    %edi
0879aad7 +0x157:  pop    %ebp
0879aad8 +0x158:  ret
0879aad9 +0x159:  nop
0879aada +0x15a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::DiffieHellman::DiffieHellman @ 0x879a980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DiffieHellman::DiffieHellman(unsigned char const*, unsigned int, unsigned char const*,
   unsigned int, unsigned char const*, unsigned int, yaSSL::RandomPool const&) */

void __thiscall
yaSSL::DiffieHellman::DiffieHellman
          (DiffieHellman *this,uchar *param_1,uint param_2,uchar *param_3,uint param_4,
          uchar *param_5,uint param_6,RandomPool *param_7)

{
  undefined4 uVar1;
  int iVar2;
  Integer *pIVar3;
  void *pvVar4;
  uint in_stack_ffffffa8;
  uint uVar5;
  int local_3c;
  void *local_38;
  int local_2c;
  void *local_28;
  
  pIVar3 = operator_new(0x30,in_stack_ffffffa8 & 0xffffff00);
  uVar1 = *(undefined4 *)param_7;
  TaoCrypt::Integer::Integer(pIVar3);
  TaoCrypt::Integer::Integer(pIVar3 + 0x10);
  *(Integer **)this = pIVar3;
  *(undefined4 *)(pIVar3 + 0x24) = 0;
  *(undefined4 *)(pIVar3 + 0x28) = 0;
  *(undefined4 *)(pIVar3 + 0x20) = uVar1;
  *(undefined4 *)(pIVar3 + 0x2c) = 0;
  TaoCrypt::Integer::Integer((Integer *)&local_2c,param_3,param_4,0);
  TaoCrypt::Integer::Integer((Integer *)&local_3c,param_1,param_2,0);
  pIVar3 = *(Integer **)this;
  TaoCrypt::Integer::operator=(pIVar3,(Integer *)&local_3c);
  TaoCrypt::Integer::operator=(pIVar3 + 0x10,(Integer *)&local_2c);
  uVar5 = 0;
  memset(local_38,0,local_3c << 2);
  operator_delete__(local_38,uVar5 & 0xffffff00);
  uVar5 = 0;
  memset(local_28,0,local_2c << 2);
  uVar5 = uVar5 & 0xffffff00;
  operator_delete__(local_28,uVar5);
  iVar2 = *(int *)this;
  pvVar4 = operator_new__(param_6,uVar5 & 0xffffff00);
  *(void **)(iVar2 + 0x24) = pvVar4;
  memcpy(*(void **)(*(int *)this + 0x24),param_5,param_6);
  return;
}
```
