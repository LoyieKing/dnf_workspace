# Integer

`_ZN8TaoCrypt7IntegerC1ERNS_6SourceE`

`TaoCrypt::Integer::Integer(TaoCrypt::Source&)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x087603c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087603c0  _ZN8TaoCrypt7IntegerC1ERNS_6SourceE
#           TaoCrypt::Integer::Integer(TaoCrypt::Source&)
# range [0x087603c0, 0x08760459]
087603c0 +0x00:  push   %ebp
087603c1 +0x01:  mov    %esp,%ebp
087603c3 +0x03:  sub    $0x38,%esp
087603c6 +0x06:  mov    %esi,-0x8(%ebp)
087603c9 +0x09:  mov    0x8(%ebp),%esi
087603cc +0x0c:  mov    %ebx,-0xc(%ebp)
087603cf +0x0f:  mov    %edi,-0x4(%ebp)
087603d2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087603d7 +0x17:  add    $0xc0c7c1,%ebx
087603dd +0x1d:  movl   $0x2,(%esi)
087603e3 +0x23:  movb   $0x0,0x4(%esp)
087603e8 +0x28:  movl   $0x8,(%esp)
087603ef +0x2f:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
087603f4 +0x34:  mov    (%esi),%edi
087603f6 +0x36:  mov    %eax,0x4(%esi)
087603f9 +0x39:  mov    %eax,0x4(%esp)
087603fd +0x3d:  lea    0x8(%esi),%eax
08760400 +0x40:  mov    %edi,0xc(%esp)
08760404 +0x44:  mov    %edi,0x8(%esp)
08760408 +0x48:  movl   $0x0,0x10(%esp)
08760410 +0x50:  mov    %eax,(%esp)
08760413 +0x53:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
08760418 +0x58:  mov    %edi,(%esi)
0876041a +0x5a:  shl    $0x2,%edi
0876041d +0x5d:  mov    %eax,0x4(%esi)
08760420 +0x60:  mov    %edi,0x8(%esp)
08760424 +0x64:  movl   $0x0,0x4(%esp)
0876042c +0x6c:  mov    %eax,(%esp)
0876042f +0x6f:  call   0807dcc0 <_init+0x5b8>
08760434 +0x74:  mov    0xc(%ebp),%eax
08760437 +0x77:  movl   $0x0,0xc(%esi)
0876043e +0x7e:  mov    %esi,(%esp)
08760441 +0x81:  mov    %eax,0x4(%esp)
08760445 +0x85:  call   08760280 <_ZN8TaoCrypt7Integer6DecodeERNS_6SourceE>  ; TaoCrypt::Integer::Decode(TaoCrypt::Source&)
0876044a +0x8a:  mov    -0xc(%ebp),%ebx
0876044d +0x8d:  mov    -0x8(%ebp),%esi
08760450 +0x90:  mov    -0x4(%ebp),%edi
08760453 +0x93:  mov    %ebp,%esp
08760455 +0x95:  pop    %ebp
08760456 +0x96:  ret
08760457 +0x97:  nop
08760458 +0x98:  nop
08760459 +0x99:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::Integer::Integer @ 0x87603c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(TaoCrypt::Source&) */

void __thiscall TaoCrypt::Integer::Integer(Integer *this,Source *param_1)

{
  uint uVar1;
  uint *puVar2;
  void *__s;
  uint in_stack_ffffffc8;
  
  *(undefined4 *)this = 2;
  puVar2 = operator_new__(8,in_stack_ffffffc8 & 0xffffff00);
  uVar1 = *(uint *)this;
  *(uint **)(this + 4) = puVar2;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar2,uVar1,uVar1,false
                          );
  *(uint *)this = uVar1;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar1 << 2);
  *(undefined4 *)(this + 0xc) = 0;
  Decode(this,param_1);
  return;
}
```
