# AES

`_ZN5yaSSL3AESC1Ej`

`yaSSL::AES::AES(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::AES` | `0x087985e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087985e0  _ZN5yaSSL3AESC1Ej
#           yaSSL::AES::AES(unsigned int)
# range [0x087985e0, 0x0879868e]
087985e0 +0x00:  push   %ebp
087985e1 +0x01:  mov    %esp,%ebp
087985e3 +0x03:  push   %esi
087985e4 +0x04:  push   %ebx
087985e5 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
087985ea +0x0a:  add    $0xbd45ae,%ebx
087985f0 +0x10:  sub    $0x10,%esp
087985f3 +0x13:  mov    0x8(%ebp),%esi
087985f6 +0x16:  mov    -0x598(%ebx),%eax
087985fc +0x1c:  add    $0x8,%eax
087985ff +0x1f:  mov    %eax,(%esi)
08798601 +0x21:  movb   $0x0,0x4(%esp)
08798606 +0x26:  movl   $0x25c,(%esp)
0879860d +0x2d:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08798612 +0x32:  lea    0x10(%eax),%edx
08798615 +0x35:  mov    %edx,0x8(%eax)
08798618 +0x38:  lea    0x20(%eax),%edx
0879861b +0x3b:  mov    %edx,0xc(%eax)
0879861e +0x3e:  mov    -0xac(%ebx),%edx
08798624 +0x44:  lea    0x13c(%eax),%ecx
0879862a +0x4a:  mov    %ecx,0x134(%eax)
08798630 +0x50:  lea    0x14c(%eax),%ecx
08798636 +0x56:  movl   $0x10,0x4(%eax)
0879863d +0x5d:  movl   $0x0,0x30(%eax)
08798644 +0x64:  add    $0x8,%edx
08798647 +0x67:  mov    %edx,(%eax)
08798649 +0x69:  mov    %edx,0x12c(%eax)
0879864f +0x6f:  mov    0xc(%ebp),%edx
08798652 +0x72:  movl   $0x1,0x34(%eax)
08798659 +0x79:  movl   $0x10,0x130(%eax)
08798663 +0x83:  mov    %ecx,0x138(%eax)
08798669 +0x89:  movl   $0x1,0x15c(%eax)
08798673 +0x93:  movl   $0x1,0x160(%eax)
0879867d +0x9d:  mov    %edx,0x258(%eax)
08798683 +0xa3:  mov    %eax,0x4(%esi)
08798686 +0xa6:  add    $0x10,%esp
08798689 +0xa9:  pop    %ebx
0879868a +0xaa:  pop    %esi
0879868b +0xab:  pop    %ebp
0879868c +0xac:  ret
0879868d +0xad:  nop
0879868e +0xae:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::AES::AES @ 0x87985e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::AES::AES(unsigned int) */

void __thiscall yaSSL::AES::AES(AES *this,uint param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c600 + 8;
  puVar2 = operator_new(0x25c,0);
  puVar2[2] = puVar2 + 4;
  puVar2[3] = puVar2 + 8;
  puVar1 = PTR_vtable_0936caec;
  puVar2[0x4d] = puVar2 + 0x4f;
  puVar2[1] = 0x10;
  puVar2[0xc] = 0;
  *puVar2 = puVar1 + 8;
  puVar2[0x4b] = puVar1 + 8;
  puVar2[0xd] = 1;
  puVar2[0x4c] = 0x10;
  puVar2[0x4e] = puVar2 + 0x53;
  puVar2[0x57] = 1;
  puVar2[0x58] = 1;
  puVar2[0x96] = param_1;
  *(undefined4 **)(this + 4) = puVar2;
  return;
}
```
