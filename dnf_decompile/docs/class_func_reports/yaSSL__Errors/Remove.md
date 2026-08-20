# Remove

`_ZN5yaSSL6Errors6RemoveEv`

`yaSSL::Errors::Remove()`

| 类 | 地址 |
|---|---|
| `yaSSL::Errors` | `0x08753470` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08753470  _ZN5yaSSL6Errors6RemoveEv
#           yaSSL::Errors::Remove()
# range [0x08753470, 0x08753549]
08753470 +0x00:  push   %ebp
08753471 +0x01:  mov    %esp,%ebp
08753473 +0x03:  push   %esi
08753474 +0x04:  push   %ebx
08753475 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
0875347a +0x0a:  add    $0xc1971e,%ebx
08753480 +0x10:  sub    $0x10,%esp
08753483 +0x13:  mov    0x8(%ebp),%esi
08753486 +0x16:  call   0874f7b0 <_ZN5yaSSL20yassl_int_cpp_local27GetSelfEv>  ; yaSSL::yassl_int_cpp_local2::GetSelf()
0875348b +0x1b:  mov    (%esi),%ecx
0875348d +0x1d:  test   %ecx,%ecx
0875348f +0x1f:  je     087534cd <+0x5d>
08753491 +0x21:  cmp    0x8(%ecx),%eax
08753494 +0x24:  mov    %ecx,%edx
08753496 +0x26:  je     087534d8 <+0x68>
08753498 +0x28:  mov    0x4(%edx),%edx
0875349b +0x2b:  test   %edx,%edx
0875349d +0x2d:  je     087534cd <+0x5d>
0875349f +0x2f:  cmp    0x8(%edx),%eax
087534a2 +0x32:  jne    08753498 <+0x28>
087534a4 +0x34:  cmp    %edx,%ecx
087534a6 +0x36:  je     087534d8 <+0x68>
087534a8 +0x38:  mov    0x4(%esi),%eax
087534ab +0x3b:  cmp    %edx,%eax
087534ad +0x3d:  je     08753500 <+0x90>
087534af +0x3f:  mov    (%edx),%eax
087534b1 +0x41:  mov    0x4(%edx),%ecx
087534b4 +0x44:  mov    %ecx,0x4(%eax)
087534b7 +0x47:  mov    0x4(%edx),%ecx
087534ba +0x4a:  mov    %eax,(%ecx)
087534bc +0x4c:  movb   $0x0,0x4(%esp)
087534c1 +0x51:  mov    %edx,(%esp)
087534c4 +0x54:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
087534c9 +0x59:  subl   $0x1,0x8(%esi)
087534cd +0x5d:  add    $0x10,%esp
087534d0 +0x60:  pop    %ebx
087534d1 +0x61:  pop    %esi
087534d2 +0x62:  pop    %ebp
087534d3 +0x63:  ret
087534d4 +0x64:  lea    0x0(%esi,%eiz,1),%esi
087534d8 +0x68:  cmp    0x4(%esi),%ecx
087534db +0x6b:  je     08753523 <+0xb3>
087534dd +0x6d:  mov    0x4(%ecx),%eax
087534e0 +0x70:  mov    %eax,(%esi)
087534e2 +0x72:  movl   $0x0,(%eax)
087534e8 +0x78:  movb   $0x0,0x4(%esp)
087534ed +0x7d:  mov    %ecx,(%esp)
087534f0 +0x80:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
087534f5 +0x85:  subl   $0x1,0x8(%esi)
087534f9 +0x89:  jmp    087534cd <+0x5d>
087534fb +0x8b:  nop
087534fc +0x8c:  lea    0x0(%esi,%eiz,1),%esi
08753500 +0x90:  cmp    %edx,%ecx
08753502 +0x92:  je     08753532 <+0xc2>
08753504 +0x94:  mov    (%edx),%edx
08753506 +0x96:  mov    %edx,0x4(%esi)
08753509 +0x99:  movl   $0x0,0x4(%edx)
08753510 +0xa0:  movb   $0x0,0x4(%esp)
08753515 +0xa5:  mov    %eax,(%esp)
08753518 +0xa8:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0875351d +0xad:  subl   $0x1,0x8(%esi)
08753521 +0xb1:  jmp    087534cd <+0x5d>
08753523 +0xb3:  movl   $0x0,0x4(%esi)
0875352a +0xba:  movl   $0x0,(%esi)
08753530 +0xc0:  jmp    087534e8 <+0x78>
08753532 +0xc2:  movl   $0x0,(%esi)
08753538 +0xc8:  movl   $0x0,0x4(%esi)
0875353f +0xcf:  jmp    08753510 <+0xa0>
08753541 +0xd1:  nop
08753542 +0xd2:  lea    0x0(%esi,%eiz,1),%esi
08753549 +0xd9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Errors::Remove @ 0x8753470

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Errors::Remove() */

void __thiscall yaSSL::Errors::Remove(Errors *this)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = yassl_int_cpp_local2::GetSelf();
  piVar1 = *(int **)this;
  if (piVar1 != (int *)0x0) {
    piVar5 = piVar1;
    if (iVar4 != piVar1[2]) {
      do {
        piVar5 = (int *)piVar5[1];
        if (piVar5 == (int *)0x0) {
          return;
        }
      } while (iVar4 != piVar5[2]);
      if (piVar1 != piVar5) {
        piVar2 = *(int **)(this + 4);
        if (piVar2 != piVar5) {
          iVar4 = *piVar5;
          *(int *)(iVar4 + 4) = piVar5[1];
          *(int *)piVar5[1] = iVar4;
          operator_delete__(piVar5,0);
          *(int *)(this + 8) = *(int *)(this + 8) + -1;
          return;
        }
        if (piVar1 == piVar5) {
          *(undefined4 *)this = 0;
          *(undefined4 *)(this + 4) = 0;
        }
        else {
          iVar4 = *piVar5;
          *(int *)(this + 4) = iVar4;
          *(undefined4 *)(iVar4 + 4) = 0;
        }
        operator_delete__(piVar2,0);
        *(int *)(this + 8) = *(int *)(this + 8) + -1;
        return;
      }
    }
    if (piVar1 == *(int **)(this + 4)) {
      *(undefined4 *)(this + 4) = 0;
      *(undefined4 *)this = 0;
    }
    else {
      puVar3 = (undefined4 *)piVar1[1];
      *(undefined4 **)this = puVar3;
      *puVar3 = 0;
    }
    operator_delete__(piVar1,0);
    *(int *)(this + 8) = *(int *)(this + 8) + -1;
  }
  return;
}
```
