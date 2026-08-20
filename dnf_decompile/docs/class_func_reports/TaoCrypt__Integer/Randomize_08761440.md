# Randomize

`_ZN8TaoCrypt7Integer9RandomizeERNS_21RandomNumberGeneratorERKS0_S4_`

`TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x08761440` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08761440  _ZN8TaoCrypt7Integer9RandomizeERNS_21RandomNumberGeneratorERKS0_S4_
#           TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x08761440, 0x087614ef]
08761440 +0x00:  push   %ebp
08761441 +0x01:  mov    %esp,%ebp
08761443 +0x03:  push   %edi
08761444 +0x04:  push   %esi
08761445 +0x05:  push   %ebx
08761446 +0x06:  sub    $0x3c,%esp
08761449 +0x09:  mov    0x10(%ebp),%eax
0876144c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08761451 +0x11:  add    $0xc0b747,%ebx
08761457 +0x17:  lea    -0x28(%ebp),%edi
0876145a +0x1a:  mov    0x8(%ebp),%esi
0876145d +0x1d:  mov    %edi,(%esp)
08761460 +0x20:  mov    %eax,0x8(%esp)
08761464 +0x24:  mov    0x14(%ebp),%eax
08761467 +0x27:  mov    %eax,0x4(%esp)
0876146b +0x2b:  call   087600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>  ; TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
08761470 +0x30:  sub    $0x4,%esp
08761473 +0x33:  mov    %edi,(%esp)
08761476 +0x36:  call   0875ebe0 <_ZNK8TaoCrypt7Integer8BitCountEv>  ; TaoCrypt::Integer::BitCount() const
0876147b +0x3b:  mov    %edi,-0x30(%ebp)
0876147e +0x3e:  mov    0xc(%ebp),%edi
08761481 +0x41:  mov    %eax,-0x2c(%ebp)
08761484 +0x44:  lea    0x0(%esi,%eiz,1),%esi
08761488 +0x48:  mov    -0x2c(%ebp),%eax
0876148b +0x4b:  mov    %edi,0x4(%esp)
0876148f +0x4f:  mov    %esi,(%esp)
08761492 +0x52:  mov    %eax,0x8(%esp)
08761496 +0x56:  call   08761380 <_ZN8TaoCrypt7Integer9RandomizeERNS_21RandomNumberGeneratorEj>  ; TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, unsigned int)
0876149b +0x5b:  mov    -0x30(%ebp),%eax
0876149e +0x5e:  mov    %esi,(%esp)
087614a1 +0x61:  mov    %eax,0x4(%esp)
087614a5 +0x65:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
087614aa +0x6a:  test   %eax,%eax
087614ac +0x6c:  jg     08761488 <+0x48>
087614ae +0x6e:  mov    0x10(%ebp),%eax
087614b1 +0x71:  mov    %esi,(%esp)
087614b4 +0x74:  mov    %eax,0x4(%esp)
087614b8 +0x78:  call   0875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>  ; TaoCrypt::Integer::operator+=(TaoCrypt::Integer const&)
087614bd +0x7d:  mov    -0x28(%ebp),%eax
087614c0 +0x80:  mov    -0x24(%ebp),%esi
087614c3 +0x83:  movl   $0x0,0x4(%esp)
087614cb +0x8b:  shl    $0x2,%eax
087614ce +0x8e:  mov    %esi,(%esp)
087614d1 +0x91:  mov    %eax,0x8(%esp)
087614d5 +0x95:  call   0807dcc0 <_init+0x5b8>
087614da +0x9a:  mov    %esi,(%esp)
087614dd +0x9d:  movb   $0x0,0x4(%esp)
087614e2 +0xa2:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
087614e7 +0xa7:  lea    -0xc(%ebp),%esp
087614ea +0xaa:  pop    %ebx
087614eb +0xab:  pop    %esi
087614ec +0xac:  pop    %edi
087614ed +0xad:  pop    %ebp
087614ee +0xae:  ret
087614ef +0xaf:  nop
```

## 反编译 C

```c
// TaoCrypt::Integer::Randomize @ 0x8761440

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&) */

void TaoCrypt::Integer::Randomize(RandomNumberGenerator *param_1,Integer *param_2,Integer *param_3)

{
  uint uVar1;
  int iVar2;
  int local_2c;
  void *local_28;
  
  Minus((Integer *)&local_2c);
  uVar1 = BitCount((Integer *)&local_2c);
  do {
    Randomize((Integer *)param_1,(RandomNumberGenerator *)param_2,uVar1);
    iVar2 = Compare((Integer *)param_1,(Integer *)&local_2c);
  } while (0 < iVar2);
  operator+=((Integer *)param_1,param_3);
  uVar1 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar1 & 0xffffff00);
  return;
}
```
