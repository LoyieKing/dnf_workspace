# Randomize

`_ZN8TaoCrypt7Integer9RandomizeERNS_21RandomNumberGeneratorEj`

`TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08761380` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08761380  _ZN8TaoCrypt7Integer9RandomizeERNS_21RandomNumberGeneratorEj
#           TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, unsigned int)
# range [0x08761380, 0x0876143a]
08761380 +0x00:  push   %ebp
08761381 +0x01:  mov    %esp,%ebp
08761383 +0x03:  sub    $0x28,%esp
08761386 +0x06:  mov    %edi,-0x4(%ebp)
08761389 +0x09:  mov    0x10(%ebp),%edi
0876138c +0x0c:  mov    %ebx,-0xc(%ebp)
0876138f +0x0f:  mov    %esi,-0x8(%ebp)
08761392 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
08761397 +0x17:  add    $0xc0b801,%ebx
0876139d +0x1d:  shr    $0x3,%edi
087613a0 +0x20:  add    $0x1,%edi
087613a3 +0x23:  mov    %edi,(%esp)
087613a6 +0x26:  movb   $0x0,0x4(%esp)
087613ab +0x2b:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087613b0 +0x30:  mov    %edi,0x8(%esp)
087613b4 +0x34:  movl   $0x0,0x4(%esp)
087613bc +0x3c:  mov    %eax,%esi
087613be +0x3e:  mov    %eax,(%esp)
087613c1 +0x41:  call   0807dcc0 <_init+0x5b8>
087613c6 +0x46:  mov    0xc(%ebp),%eax
087613c9 +0x49:  mov    %edi,0x8(%esp)
087613cd +0x4d:  mov    %esi,0x4(%esp)
087613d1 +0x51:  mov    %eax,(%esp)
087613d4 +0x54:  call   087678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>  ; TaoCrypt::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned int)
087613d9 +0x59:  mov    0x10(%ebp),%eax
087613dc +0x5c:  and    $0x7,%eax
087613df +0x5f:  mov    %eax,0x4(%esp)
087613e3 +0x63:  movzbl (%esi),%eax
087613e6 +0x66:  mov    %eax,(%esp)
087613e9 +0x69:  call   08767580 <_ZN8TaoCrypt4CropEjj>  ; TaoCrypt::Crop(unsigned int, unsigned int)
087613ee +0x6e:  mov    %al,(%esi)
087613f0 +0x70:  mov    0x8(%ebp),%eax
087613f3 +0x73:  mov    %edi,0x8(%esp)
087613f7 +0x77:  mov    %esi,0x4(%esp)
087613fb +0x7b:  movl   $0x0,0xc(%esp)
08761403 +0x83:  mov    %eax,(%esp)
08761406 +0x86:  call   08761050 <_ZN8TaoCrypt7Integer6DecodeEPKhjNS0_10SignednessE>  ; TaoCrypt::Integer::Decode(unsigned char const*, unsigned int, TaoCrypt::Integer::Signedness)
0876140b +0x8b:  mov    %edi,0x8(%esp)
0876140f +0x8f:  mov    %esi,(%esp)
08761412 +0x92:  movl   $0x0,0x4(%esp)
0876141a +0x9a:  call   0807dcc0 <_init+0x5b8>
0876141f +0x9f:  mov    %esi,(%esp)
08761422 +0xa2:  movb   $0x0,0x4(%esp)
08761427 +0xa7:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0876142c +0xac:  mov    -0xc(%ebp),%ebx
0876142f +0xaf:  mov    -0x8(%ebp),%esi
08761432 +0xb2:  mov    -0x4(%ebp),%edi
08761435 +0xb5:  mov    %ebp,%esp
08761437 +0xb7:  pop    %ebp
08761438 +0xb8:  ret
08761439 +0xb9:  nop
0876143a +0xba:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::Randomize @ 0x8761380

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, unsigned int) */

void __thiscall
TaoCrypt::Integer::Randomize(Integer *this,RandomNumberGenerator *param_1,uint param_2)

{
  byte bVar1;
  byte *__s;
  size_t __n;
  uint in_stack_ffffffd8;
  uint uVar2;
  
  __n = (param_2 >> 3) + 1;
  __s = operator_new__(__n,in_stack_ffffffd8 & 0xffffff00);
  memset(__s,0,__n);
  RandomNumberGenerator::GenerateBlock(param_1,__s,__n);
  bVar1 = Crop((uint)*__s,param_2 & 7);
  *__s = bVar1;
  Decode(this,__s,__n,0);
  uVar2 = 0;
  memset(__s,0,__n);
  operator_delete__(__s,uVar2 & 0xffffff00);
  return;
}
```
