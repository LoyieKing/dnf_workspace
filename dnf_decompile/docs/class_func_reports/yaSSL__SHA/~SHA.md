# ~SHA

`_ZN5yaSSL3SHAD1Ev`

`yaSSL::SHA::~SHA()`

| 类 | 地址 |
|---|---|
| `yaSSL::SHA` | `0x08798cb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798cb0  _ZN5yaSSL3SHAD1Ev
#           yaSSL::SHA::~SHA()
# range [0x08798cb0, 0x08798d0a]
08798cb0 +0x00:  push   %ebp
08798cb1 +0x01:  mov    %esp,%ebp
08798cb3 +0x03:  sub    $0x18,%esp
08798cb6 +0x06:  mov    %ebx,-0x8(%ebp)
08798cb9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08798cbe +0x0e:  add    $0xbd3eda,%ebx
08798cc4 +0x14:  mov    %esi,-0x4(%ebp)
08798cc7 +0x17:  mov    0x8(%ebp),%esi
08798cca +0x1a:  mov    -0x424(%ebx),%eax
08798cd0 +0x20:  add    $0x8,%eax
08798cd3 +0x23:  mov    %eax,(%esi)
08798cd5 +0x25:  mov    0x4(%esi),%eax
08798cd8 +0x28:  test   %eax,%eax
08798cda +0x2a:  je     08798ce7 <+0x37>
08798cdc +0x2c:  mov    -0x3c(%ebx),%edx
08798ce2 +0x32:  add    $0x8,%edx
08798ce5 +0x35:  mov    %edx,(%eax)
08798ce7 +0x37:  mov    %eax,(%esp)
08798cea +0x3a:  movb   $0x0,0x4(%esp)
08798cef +0x3f:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08798cf4 +0x44:  mov    -0x4d8(%ebx),%eax
08798cfa +0x4a:  add    $0x8,%eax
08798cfd +0x4d:  mov    %eax,(%esi)
08798cff +0x4f:  mov    -0x8(%ebp),%ebx
08798d02 +0x52:  mov    -0x4(%ebp),%esi
08798d05 +0x55:  mov    %ebp,%esp
08798d07 +0x57:  pop    %ebp
08798d08 +0x58:  ret
08798d09 +0x59:  nop
08798d0a +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SHA::~SHA @ 0x8798cb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SHA::~SHA() */

void __thiscall yaSSL::SHA::~SHA(SHA *this)

{
  undefined4 *puVar1;
  
  *(undefined **)this = PTR_vtable_0936c774 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = PTR_vtable_0936cb5c + 8;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c6c0 + 8;
  return;
}
```
