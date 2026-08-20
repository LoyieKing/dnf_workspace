# Integer

`_ZN8TaoCrypt7IntegerC1ERNS_21RandomNumberGeneratorERKS0_S4_`

`TaoCrypt::Integer::Integer(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x087614f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087614f0  _ZN8TaoCrypt7IntegerC1ERNS_21RandomNumberGeneratorERKS0_S4_
#           TaoCrypt::Integer::Integer(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
# range [0x087614f0, 0x0876156c]
087614f0 +0x00:  push   %ebp
087614f1 +0x01:  mov    %esp,%ebp
087614f3 +0x03:  push   %esi
087614f4 +0x04:  push   %ebx
087614f5 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
087614fa +0x0a:  add    $0xc0b69e,%ebx
08761500 +0x10:  sub    $0x20,%esp
08761503 +0x13:  mov    0x8(%ebp),%esi
08761506 +0x16:  movl   $0x0,(%esi)
0876150c +0x1c:  lea    0x8(%esi),%eax
0876150f +0x1f:  movl   $0x0,0x4(%esi)
08761516 +0x26:  movl   $0x0,0x10(%esp)
0876151e +0x2e:  movl   $0x0,0xc(%esp)
08761526 +0x36:  movl   $0x0,0x8(%esp)
0876152e +0x3e:  movl   $0x0,0x4(%esp)
08761536 +0x46:  mov    %eax,(%esp)
08761539 +0x49:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0876153e +0x4e:  movl   $0x0,(%esi)
08761544 +0x54:  mov    %eax,0x4(%esi)
08761547 +0x57:  mov    0x14(%ebp),%eax
0876154a +0x5a:  mov    %esi,(%esp)
0876154d +0x5d:  mov    %eax,0xc(%esp)
08761551 +0x61:  mov    0x10(%ebp),%eax
08761554 +0x64:  mov    %eax,0x8(%esp)
08761558 +0x68:  mov    0xc(%ebp),%eax
0876155b +0x6b:  mov    %eax,0x4(%esp)
0876155f +0x6f:  call   08761440 <_ZN8TaoCrypt7Integer9RandomizeERNS_21RandomNumberGeneratorERKS0_S4_>  ; TaoCrypt::Integer::Randomize(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08761564 +0x74:  add    $0x20,%esp
08761567 +0x77:  pop    %ebx
08761568 +0x78:  pop    %esi
08761569 +0x79:  pop    %ebp
0876156a +0x7a:  ret
0876156b +0x7b:  nop
0876156c +0x7c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::Integer @ 0x87614f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(TaoCrypt::RandomNumberGenerator&, TaoCrypt::Integer const&,
   TaoCrypt::Integer const&) */

void __thiscall
TaoCrypt::Integer::Integer
          (Integer *this,RandomNumberGenerator *param_1,Integer *param_2,Integer *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  uVar1 = AllocatorWithCleanup<unsigned_int>::reallocate
                    ((AllocatorWithCleanup<unsigned_int> *)(this + 8),(uint *)0x0,0,0,false);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = uVar1;
  Randomize((RandomNumberGenerator *)this,(Integer *)param_1,param_2);
  return;
}
```
