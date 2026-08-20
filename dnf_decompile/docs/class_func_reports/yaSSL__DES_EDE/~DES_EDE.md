# ~DES_EDE

`_ZN5yaSSL7DES_EDED1Ev`

`yaSSL::DES_EDE::~DES_EDE()`

| 类 | 地址 |
|---|---|
| `yaSSL::DES_EDE` | `0x08798950` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798950  _ZN5yaSSL7DES_EDED1Ev
#           yaSSL::DES_EDE::~DES_EDE()
# range [0x08798950, 0x087989af]
08798950 +0x00:  push   %ebp
08798951 +0x01:  mov    %esp,%ebp
08798953 +0x03:  sub    $0x18,%esp
08798956 +0x06:  mov    %ebx,-0x8(%ebp)
08798959 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0879895e +0x0e:  add    $0xbd423a,%ebx
08798964 +0x14:  mov    %esi,-0x4(%ebp)
08798967 +0x17:  mov    0x8(%ebp),%esi
0879896a +0x1a:  mov    -0x5c0(%ebx),%eax
08798970 +0x20:  add    $0x8,%eax
08798973 +0x23:  mov    %eax,(%esi)
08798975 +0x25:  mov    0x4(%esi),%eax
08798978 +0x28:  test   %eax,%eax
0879897a +0x2a:  je     0879898d <+0x3d>
0879897c +0x2c:  mov    -0x474(%ebx),%edx
08798982 +0x32:  add    $0x8,%edx
08798985 +0x35:  mov    %edx,0x1b8(%eax)
0879898b +0x3b:  mov    %edx,(%eax)
0879898d +0x3d:  mov    %eax,(%esp)
08798990 +0x40:  movb   $0x0,0x4(%esp)
08798995 +0x45:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
0879899a +0x4a:  mov    -0x520(%ebx),%eax
087989a0 +0x50:  add    $0x8,%eax
087989a3 +0x53:  mov    %eax,(%esi)
087989a5 +0x55:  mov    -0x8(%ebp),%ebx
087989a8 +0x58:  mov    -0x4(%ebp),%esi
087989ab +0x5b:  mov    %ebp,%esp
087989ad +0x5d:  pop    %ebp
087989ae +0x5e:  ret
087989af +0x5f:  nop
```

## 反编译 C

```c
// yaSSL::DES_EDE::~DES_EDE @ 0x8798950

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES_EDE::~DES_EDE() */

void __thiscall yaSSL::DES_EDE::~DES_EDE(DES_EDE *this)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c5d8 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = PTR_vtable_0936c724 + 8;
    puVar1[0x6e] = puVar2;
    *puVar1 = puVar2;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c678 + 8;
  return;
}
```
