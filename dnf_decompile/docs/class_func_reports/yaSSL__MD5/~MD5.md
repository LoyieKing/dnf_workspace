# ~MD5

`_ZN5yaSSL3MD5D1Ev`

`yaSSL::MD5::~MD5()`

| 类 | 地址 |
|---|---|
| `yaSSL::MD5` | `0x08798d40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798d40  _ZN5yaSSL3MD5D1Ev
#           yaSSL::MD5::~MD5()
# range [0x08798d40, 0x08798d9a]
08798d40 +0x00:  push   %ebp
08798d41 +0x01:  mov    %esp,%ebp
08798d43 +0x03:  sub    $0x18,%esp
08798d46 +0x06:  mov    %ebx,-0x8(%ebp)
08798d49 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08798d4e +0x0e:  add    $0xbd3e4a,%ebx
08798d54 +0x14:  mov    %esi,-0x4(%ebp)
08798d57 +0x17:  mov    0x8(%ebp),%esi
08798d5a +0x1a:  mov    -0x4f4(%ebx),%eax
08798d60 +0x20:  add    $0x8,%eax
08798d63 +0x23:  mov    %eax,(%esi)
08798d65 +0x25:  mov    0x4(%esi),%eax
08798d68 +0x28:  test   %eax,%eax
08798d6a +0x2a:  je     08798d77 <+0x37>
08798d6c +0x2c:  mov    -0x3c(%ebx),%edx
08798d72 +0x32:  add    $0x8,%edx
08798d75 +0x35:  mov    %edx,(%eax)
08798d77 +0x37:  mov    %eax,(%esp)
08798d7a +0x3a:  movb   $0x0,0x4(%esp)
08798d7f +0x3f:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08798d84 +0x44:  mov    -0x4d8(%ebx),%eax
08798d8a +0x4a:  add    $0x8,%eax
08798d8d +0x4d:  mov    %eax,(%esi)
08798d8f +0x4f:  mov    -0x8(%ebp),%ebx
08798d92 +0x52:  mov    -0x4(%ebp),%esi
08798d95 +0x55:  mov    %ebp,%esp
08798d97 +0x57:  pop    %ebp
08798d98 +0x58:  ret
08798d99 +0x59:  nop
08798d9a +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::MD5::~MD5 @ 0x8798d40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::MD5::~MD5() */

void __thiscall yaSSL::MD5::~MD5(MD5 *this)

{
  undefined4 *puVar1;
  
  *(undefined **)this = PTR_vtable_0936c6a4 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = PTR_vtable_0936cb5c + 8;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c6c0 + 8;
  return;
}
```
