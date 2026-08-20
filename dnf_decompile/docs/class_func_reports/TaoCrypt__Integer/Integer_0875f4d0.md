# Integer

`_ZN8TaoCrypt7IntegerC1El`

`TaoCrypt::Integer::Integer(long)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f4d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f4d0  _ZN8TaoCrypt7IntegerC1El
#           TaoCrypt::Integer::Integer(long)
# range [0x0875f4d0, 0x0875f58a]
0875f4d0 +0x00:  push   %ebp
0875f4d1 +0x01:  mov    %esp,%ebp
0875f4d3 +0x03:  sub    $0x48,%esp
0875f4d6 +0x06:  mov    %esi,-0x8(%ebp)
0875f4d9 +0x09:  mov    0x8(%ebp),%esi
0875f4dc +0x0c:  mov    %ebx,-0xc(%ebp)
0875f4df +0x0f:  mov    0xc(%ebp),%edx
0875f4e2 +0x12:  mov    %edi,-0x4(%ebp)
0875f4e5 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f4ea +0x1a:  add    $0xc0d6ae,%ebx
0875f4f0 +0x20:  movl   $0x2,(%esi)
0875f4f6 +0x26:  mov    %edx,-0x1c(%ebp)
0875f4f9 +0x29:  movb   $0x0,0x4(%esp)
0875f4fe +0x2e:  movl   $0x8,(%esp)
0875f505 +0x35:  call   08767790 <_ZnajN8TaoCrypt5new_tE>  ; operator new[](unsigned int, TaoCrypt::new_t)
0875f50a +0x3a:  mov    (%esi),%edi
0875f50c +0x3c:  mov    %eax,0x4(%esi)
0875f50f +0x3f:  mov    %eax,0x4(%esp)
0875f513 +0x43:  lea    0x8(%esi),%eax
0875f516 +0x46:  mov    %edi,0xc(%esp)
0875f51a +0x4a:  mov    %edi,0x8(%esp)
0875f51e +0x4e:  movl   $0x0,0x10(%esp)
0875f526 +0x56:  mov    %eax,(%esp)
0875f529 +0x59:  call   08763cc0 <_ZNK8TaoCrypt7Integer8IsSquareEv+0x4a0>  ; TaoCrypt::Integer::IsSquare() const+0x4a0
0875f52e +0x5e:  mov    %edi,(%esi)
0875f530 +0x60:  shl    $0x2,%edi
0875f533 +0x63:  mov    %eax,0x4(%esi)
0875f536 +0x66:  mov    %edi,0x8(%esp)
0875f53a +0x6a:  movl   $0x0,0x4(%esp)
0875f542 +0x72:  mov    %eax,(%esp)
0875f545 +0x75:  call   0807dcc0 <_init+0x5b8>
0875f54a +0x7a:  mov    -0x1c(%ebp),%edx
0875f54d +0x7d:  test   %edx,%edx
0875f54f +0x7f:  js     0875f578 <+0xa8>
0875f551 +0x81:  movl   $0x0,0xc(%esi)
0875f558 +0x88:  mov    0x4(%esi),%eax
0875f55b +0x8b:  mov    %edx,(%eax)
0875f55d +0x8d:  movl   $0x0,0x4(%eax)
0875f564 +0x94:  mov    -0xc(%ebp),%ebx
0875f567 +0x97:  mov    -0x8(%ebp),%esi
0875f56a +0x9a:  mov    -0x4(%ebp),%edi
0875f56d +0x9d:  mov    %ebp,%esp
0875f56f +0x9f:  pop    %ebp
0875f570 +0xa0:  ret
0875f571 +0xa1:  lea    0x0(%esi,%eiz,1),%esi
0875f578 +0xa8:  movl   $0x1,0xc(%esi)
0875f57f +0xaf:  neg    %edx
0875f581 +0xb1:  jmp    0875f558 <+0x88>
0875f583 +0xb3:  nop
0875f584 +0xb4:  lea    0x0(%esi),%esi
0875f58a +0xba:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::Integer @ 0x875f4d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Integer(long) */

void __thiscall TaoCrypt::Integer::Integer(Integer *this,long param_1)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  void *__s;
  uint in_stack_ffffffb8;
  
  *(undefined4 *)this = 2;
  puVar3 = operator_new__(8,in_stack_ffffffb8 & 0xffffff00);
  uVar1 = *(uint *)this;
  *(uint **)(this + 4) = puVar3;
  __s = (void *)AllocatorWithCleanup<unsigned_int>::reallocate
                          ((AllocatorWithCleanup<unsigned_int> *)(this + 8),puVar3,uVar1,uVar1,false
                          );
  *(uint *)this = uVar1;
  *(void **)(this + 4) = __s;
  memset(__s,0,uVar1 << 2);
  if (param_1 < 0) {
    *(undefined4 *)(this + 0xc) = 1;
    param_1 = -param_1;
  }
  else {
    *(undefined4 *)(this + 0xc) = 0;
  }
  piVar2 = *(int **)(this + 4);
  *piVar2 = param_1;
  piVar2[1] = 0;
  return;
}
```
