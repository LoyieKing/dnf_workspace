# CleanUp

`_ZN8TaoCrypt7CleanUpEv`

`TaoCrypt::CleanUp()`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x0875ece0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875ece0  _ZN8TaoCrypt7CleanUpEv
#           TaoCrypt::CleanUp()
# range [0x0875ece0, 0x0875ed9c]
0875ece0 +0x00:  push   %ebp
0875ece1 +0x01:  mov    %esp,%ebp
0875ece3 +0x03:  sub    $0x28,%esp
0875ece6 +0x06:  mov    %ebx,-0xc(%ebp)
0875ece9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875ecee +0x0e:  add    $0xc0deaa,%ebx
0875ecf4 +0x14:  mov    %esi,-0x8(%ebp)
0875ecf7 +0x17:  mov    %edi,-0x4(%ebp)
0875ecfa +0x1a:  mov    0x124c94(%ebx),%esi
0875ed00 +0x20:  test   %esi,%esi
0875ed02 +0x22:  je     0875ed2d <+0x4d>
0875ed04 +0x24:  mov    (%esi),%eax
0875ed06 +0x26:  mov    0x4(%esi),%edi
0875ed09 +0x29:  movl   $0x0,0x4(%esp)
0875ed11 +0x31:  shl    $0x2,%eax
0875ed14 +0x34:  mov    %eax,0x8(%esp)
0875ed18 +0x38:  mov    %edi,(%esp)
0875ed1b +0x3b:  call   0807dcc0 <_init+0x5b8>
0875ed20 +0x40:  movb   $0x0,0x4(%esp)
0875ed25 +0x45:  mov    %edi,(%esp)
0875ed28 +0x48:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875ed2d +0x4d:  mov    %esi,(%esp)
0875ed30 +0x50:  movb   $0x0,0x4(%esp)
0875ed35 +0x55:  call   087676f0 <_ZdlPvN8TaoCrypt5new_tE>  ; operator delete(void*, TaoCrypt::new_t)
0875ed3a +0x5a:  mov    0x124c98(%ebx),%esi
0875ed40 +0x60:  test   %esi,%esi
0875ed42 +0x62:  je     0875ed6d <+0x8d>
0875ed44 +0x64:  mov    (%esi),%eax
0875ed46 +0x66:  mov    0x4(%esi),%edi
0875ed49 +0x69:  movl   $0x0,0x4(%esp)
0875ed51 +0x71:  shl    $0x2,%eax
0875ed54 +0x74:  mov    %eax,0x8(%esp)
0875ed58 +0x78:  mov    %edi,(%esp)
0875ed5b +0x7b:  call   0807dcc0 <_init+0x5b8>
0875ed60 +0x80:  movb   $0x0,0x4(%esp)
0875ed65 +0x85:  mov    %edi,(%esp)
0875ed68 +0x88:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
0875ed6d +0x8d:  mov    %esi,(%esp)
0875ed70 +0x90:  movb   $0x0,0x4(%esp)
0875ed75 +0x95:  call   087676f0 <_ZdlPvN8TaoCrypt5new_tE>  ; operator delete(void*, TaoCrypt::new_t)
0875ed7a +0x9a:  mov    -0x8(%ebp),%esi
0875ed7d +0x9d:  movl   $0x0,0x124c94(%ebx)
0875ed87 +0xa7:  mov    -0x4(%ebp),%edi
0875ed8a +0xaa:  movl   $0x0,0x124c98(%ebx)
0875ed94 +0xb4:  mov    -0xc(%ebp),%ebx
0875ed97 +0xb7:  mov    %ebp,%esp
0875ed99 +0xb9:  pop    %ebp
0875ed9a +0xba:  ret
0875ed9b +0xbb:  nop
0875ed9c +0xbc:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::CleanUp @ 0x875ece0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::CleanUp() */

void TaoCrypt::CleanUp(void)

{
  void *pvVar1;
  int *piVar2;
  uint in_stack_ffffffd8;
  uint uVar3;
  
  piVar2 = one;
  if (one != (int *)0x0) {
    pvVar1 = (void *)one[1];
    uVar3 = 0;
    memset(pvVar1,0,*one << 2);
    in_stack_ffffffd8 = uVar3 & 0xffffff00;
    operator_delete__(pvVar1,in_stack_ffffffd8);
  }
  uVar3 = in_stack_ffffffd8 & 0xffffff00;
  operator_delete(piVar2,uVar3);
  piVar2 = zero;
  if (zero != (int *)0x0) {
    pvVar1 = (void *)zero[1];
    uVar3 = 0;
    memset(pvVar1,0,*zero << 2);
    uVar3 = uVar3 & 0xffffff00;
    operator_delete__(pvVar1,uVar3);
  }
  operator_delete(piVar2,uVar3 & 0xffffff00);
  one = (int *)0x0;
  zero = (int *)0x0;
  return;
}
```
