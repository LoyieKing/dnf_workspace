# Integer

`_ZN8TaoCrypt7IntegerC1ENS0_4SignEjj`

`TaoCrypt::Integer::Integer(TaoCrypt::Integer::Sign, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f050` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f050  _ZN8TaoCrypt7IntegerC1ENS0_4SignEjj
#           TaoCrypt::Integer::Integer(TaoCrypt::Integer::Sign, unsigned int, unsigned int)
# range [0x0875f050, 0x0875f0e9]
0875f050 +0x00:  push   %ebp
0875f051 +0x01:  mov    %esp,%ebp
0875f053 +0x03:  sub    $0x38,%esp
0875f056 +0x06:  mov    %esi,-0x8(%ebp)
0875f059 +0x09:  mov    0x8(%ebp),%esi
0875f05c +0x0c:  mov    %ebx,-0xc(%ebp)
0875f05f +0x0f:  mov    %edi,-0x4(%ebp)
0875f062 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f067 +0x17:  add    $0xc0db31,%ebx
0875f06d +0x1d:  movl   $0x2,(%esi)
0875f073 +0x23:  movb   $0x0,0x4(%esp)
0875f078 +0x28:  movl   $0x8,(%esp)
0875f07f +0x2f:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0875f084 +0x34:  mov    (%esi),%edi
0875f086 +0x36:  mov    %eax,0x4(%esi)
0875f089 +0x39:  mov    %eax,0x4(%esp)
0875f08d +0x3d:  lea    0x8(%esi),%eax
0875f090 +0x40:  mov    %edi,0xc(%esp)
0875f094 +0x44:  mov    %edi,0x8(%esp)
0875f098 +0x48:  movl   $0x0,0x10(%esp)
0875f0a0 +0x50:  mov    %eax,(%esp)
0875f0a3 +0x53:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875f0a8 +0x58:  mov    %edi,(%esi)
0875f0aa +0x5a:  shl    $0x2,%edi
0875f0ad +0x5d:  mov    %eax,0x4(%esi)
0875f0b0 +0x60:  mov    %edi,0x8(%esp)
0875f0b4 +0x64:  movl   $0x0,0x4(%esp)
0875f0bc +0x6c:  mov    %eax,(%esp)
0875f0bf +0x6f:  call   0807dcc0 <_init+0x5b8>
0875f0c4 +0x74:  mov    0xc(%ebp),%eax
0875f0c7 +0x77:  mov    0x14(%ebp),%edx
0875f0ca +0x7a:  mov    %eax,0xc(%esi)
0875f0cd +0x7d:  mov    0x4(%esi),%eax
0875f0d0 +0x80:  mov    %edx,(%eax)
0875f0d2 +0x82:  mov    0x10(%ebp),%edx
0875f0d5 +0x85:  mov    %edx,0x4(%eax)
0875f0d8 +0x88:  mov    -0xc(%ebp),%ebx
0875f0db +0x8b:  mov    -0x8(%ebp),%esi
0875f0de +0x8e:  mov    -0x4(%ebp),%edi
0875f0e1 +0x91:  mov    %ebp,%esp
0875f0e3 +0x93:  pop    %ebp
0875f0e4 +0x94:  ret
0875f0e5 +0x95:  nop
0875f0e6 +0x96:  lea    0x0(%esi),%esi
0875f0e9 +0x99:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::Integer @ 0x875f050

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(TaoCrypt::Integer::Sign, unsigned int, unsigned int) */

void __thiscall
TaoCrypt::Integer::Integer(Integer *this,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  *(undefined4 *)(this + 0xc) = param_2;
  puVar2 = *(undefined4 **)(this + 4);
  *puVar2 = param_4;
  puVar2[1] = param_3;
  return;
}
```
