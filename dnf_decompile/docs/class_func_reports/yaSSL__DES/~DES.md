# ~DES

`_ZN5yaSSL3DESD1Ev`

`yaSSL::DES::~DES()`

| 类 | 地址 |
|---|---|
| `yaSSL::DES` | `0x087989e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087989e0  _ZN5yaSSL3DESD1Ev
#           yaSSL::DES::~DES()
# range [0x087989e0, 0x08798a3f]
087989e0 +0x00:  push   %ebp
087989e1 +0x01:  mov    %esp,%ebp
087989e3 +0x03:  sub    $0x18,%esp
087989e6 +0x06:  mov    %ebx,-0x8(%ebp)
087989e9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087989ee +0x0e:  add    $0xbd41aa,%ebx
087989f4 +0x14:  mov    %esi,-0x4(%ebp)
087989f7 +0x17:  mov    0x8(%ebp),%esi
087989fa +0x1a:  mov    -0x5c4(%ebx),%eax
08798a00 +0x20:  add    $0x8,%eax
08798a03 +0x23:  mov    %eax,(%esi)
08798a05 +0x25:  mov    0x4(%esi),%eax
08798a08 +0x28:  test   %eax,%eax
08798a0a +0x2a:  je     08798a1d <+0x3d>
08798a0c +0x2c:  mov    -0x474(%ebx),%edx
08798a12 +0x32:  add    $0x8,%edx
08798a15 +0x35:  mov    %edx,0xb8(%eax)
08798a1b +0x3b:  mov    %edx,(%eax)
08798a1d +0x3d:  mov    %eax,(%esp)
08798a20 +0x40:  movb   $0x0,0x4(%esp)
08798a25 +0x45:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08798a2a +0x4a:  mov    -0x520(%ebx),%eax
08798a30 +0x50:  add    $0x8,%eax
08798a33 +0x53:  mov    %eax,(%esi)
08798a35 +0x55:  mov    -0x8(%ebp),%ebx
08798a38 +0x58:  mov    -0x4(%ebp),%esi
08798a3b +0x5b:  mov    %ebp,%esp
08798a3d +0x5d:  pop    %ebp
08798a3e +0x5e:  ret
08798a3f +0x5f:  nop
```

## 反编译 C

```c
// yaSSL::DES::~DES @ 0x87989e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DES::~DES() */

void __thiscall yaSSL::DES::~DES(DES *this)

{
  undefined4 *puVar1;
  undefined *puVar2;
  
  *(undefined **)this = PTR_vtable_0936c5d4 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = PTR_vtable_0936c724 + 8;
    puVar1[0x2e] = puVar2;
    *puVar1 = puVar2;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c678 + 8;
  return;
}
```
