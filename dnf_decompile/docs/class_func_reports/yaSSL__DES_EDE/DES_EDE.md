# DES_EDE

`_ZN5yaSSL7DES_EDEC1Ev`

`yaSSL::DES_EDE::DES_EDE()`

| 类 | 地址 |
|---|---|
| `yaSSL::DES_EDE` | `0x087986e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087986e0  _ZN5yaSSL7DES_EDEC1Ev
#           yaSSL::DES_EDE::DES_EDE()
# range [0x087986e0, 0x0879878a]
087986e0 +0x00:  push   %ebp
087986e1 +0x01:  mov    %esp,%ebp
087986e3 +0x03:  push   %esi
087986e4 +0x04:  push   %ebx
087986e5 +0x05:  call   08722df8 <__i686.get_pc_thunk.bx>
087986ea +0x0a:  add    $0xbd44ae,%ebx
087986f0 +0x10:  sub    $0x10,%esp
087986f3 +0x13:  mov    0x8(%ebp),%esi
087986f6 +0x16:  mov    -0x5c0(%ebx),%eax
087986fc +0x1c:  add    $0x8,%eax
087986ff +0x1f:  mov    %eax,(%esi)
08798701 +0x21:  movb   $0x0,0x4(%esp)
08798706 +0x26:  movl   $0x370,(%esp)
0879870d +0x2d:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08798712 +0x32:  lea    0x10(%eax),%edx
08798715 +0x35:  mov    %edx,0x8(%eax)
08798718 +0x38:  lea    0x20(%eax),%edx
0879871b +0x3b:  mov    %edx,0xc(%eax)
0879871e +0x3e:  mov    -0x5b8(%ebx),%edx
08798724 +0x44:  lea    0x1c8(%eax),%ecx
0879872a +0x4a:  mov    %ecx,0x1c0(%eax)
08798730 +0x50:  lea    0x1d8(%eax),%ecx
08798736 +0x56:  movl   $0x8,0x4(%eax)
0879873d +0x5d:  movl   $0x0,0x30(%eax)
08798744 +0x64:  add    $0x8,%edx
08798747 +0x67:  movl   $0x1,0x34(%eax)
0879874e +0x6e:  mov    %edx,(%eax)
08798750 +0x70:  movl   $0x8,0x1bc(%eax)
0879875a +0x7a:  mov    %ecx,0x1c4(%eax)
08798760 +0x80:  movl   $0x1,0x1e8(%eax)
0879876a +0x8a:  movl   $0x1,0x1ec(%eax)
08798774 +0x94:  mov    %edx,0x1b8(%eax)
0879877a +0x9a:  mov    %eax,0x4(%esi)
0879877d +0x9d:  add    $0x10,%esp
08798780 +0xa0:  pop    %ebx
08798781 +0xa1:  pop    %esi
08798782 +0xa2:  pop    %ebp
08798783 +0xa3:  ret
08798784 +0xa4:  lea    0x0(%esi),%esi
0879878a +0xaa:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::DES_EDE::DES_EDE @ 0x87986e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::DES_EDE() */

void __thiscall yaSSL::DES_EDE::DES_EDE(DES_EDE *this)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c5d8 + 8;
  puVar2 = operator_new(0x370,0);
  puVar2[2] = puVar2 + 4;
  puVar2[3] = puVar2 + 8;
  puVar1 = PTR_vtable_0936c5e0;
  puVar2[0x70] = puVar2 + 0x72;
  puVar2[1] = 8;
  puVar2[0xc] = 0;
  puVar2[0xd] = 1;
  *puVar2 = puVar1 + 8;
  puVar2[0x6f] = 8;
  puVar2[0x71] = puVar2 + 0x76;
  puVar2[0x7a] = 1;
  puVar2[0x7b] = 1;
  puVar2[0x6e] = puVar1 + 8;
  *(undefined4 **)(this + 4) = puVar2;
  return;
}
```
