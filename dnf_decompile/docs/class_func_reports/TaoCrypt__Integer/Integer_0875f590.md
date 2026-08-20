# Integer

`_ZN8TaoCrypt7IntegerC1Ev`

`TaoCrypt::Integer::Integer()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f590` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f590  _ZN8TaoCrypt7IntegerC1Ev
#           TaoCrypt::Integer::Integer()
# range [0x0875f590, 0x0875f629]
0875f590 +0x00:  push   %ebp
0875f591 +0x01:  mov    %esp,%ebp
0875f593 +0x03:  sub    $0x38,%esp
0875f596 +0x06:  mov    %esi,-0x8(%ebp)
0875f599 +0x09:  mov    0x8(%ebp),%esi
0875f59c +0x0c:  mov    %ebx,-0xc(%ebp)
0875f59f +0x0f:  mov    %edi,-0x4(%ebp)
0875f5a2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f5a7 +0x17:  add    $0xc0d5f1,%ebx
0875f5ad +0x1d:  movl   $0x2,(%esi)
0875f5b3 +0x23:  movb   $0x0,0x4(%esp)
0875f5b8 +0x28:  movl   $0x8,(%esp)
0875f5bf +0x2f:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0875f5c4 +0x34:  mov    (%esi),%edi
0875f5c6 +0x36:  mov    %eax,0x4(%esi)
0875f5c9 +0x39:  mov    %eax,0x4(%esp)
0875f5cd +0x3d:  lea    0x8(%esi),%eax
0875f5d0 +0x40:  mov    %edi,0xc(%esp)
0875f5d4 +0x44:  mov    %edi,0x8(%esp)
0875f5d8 +0x48:  movl   $0x0,0x10(%esp)
0875f5e0 +0x50:  mov    %eax,(%esp)
0875f5e3 +0x53:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875f5e8 +0x58:  mov    %edi,(%esi)
0875f5ea +0x5a:  shl    $0x2,%edi
0875f5ed +0x5d:  mov    %eax,0x4(%esi)
0875f5f0 +0x60:  mov    %edi,0x8(%esp)
0875f5f4 +0x64:  movl   $0x0,0x4(%esp)
0875f5fc +0x6c:  mov    %eax,(%esp)
0875f5ff +0x6f:  call   0807dcc0 <_init+0x5b8>
0875f604 +0x74:  mov    0x4(%esi),%eax
0875f607 +0x77:  movl   $0x0,0xc(%esi)
0875f60e +0x7e:  movl   $0x0,0x4(%eax)
0875f615 +0x85:  movl   $0x0,(%eax)
0875f61b +0x8b:  mov    -0xc(%ebp),%ebx
0875f61e +0x8e:  mov    -0x8(%ebp),%esi
0875f621 +0x91:  mov    -0x4(%ebp),%edi
0875f624 +0x94:  mov    %ebp,%esp
0875f626 +0x96:  pop    %ebp
0875f627 +0x97:  ret
0875f628 +0x98:  nop
0875f629 +0x99:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::Integer @ 0x875f590

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer() */

void __thiscall TaoCrypt::Integer::Integer(Integer *this)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  void *__s;
  uint in_stack_ffffffc8;
  
  *(undefined4 *)this = 2;
  puVar3 = operator_new__(8,in_stack_ffffffc8 & 0xffffff00);
  uVar1 = *(uint *)this;
  *(uint **)(this + 4) = puVar3;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar3,uVar1,uVar1,false
                          );
  *(uint *)this = uVar1;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar1 << 2);
  puVar2 = *(undefined4 **)(this + 4);
  *(undefined4 *)(this + 0xc) = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  return;
}
```
