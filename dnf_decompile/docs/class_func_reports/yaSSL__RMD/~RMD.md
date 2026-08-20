# ~RMD

`_ZN5yaSSL3RMDD1Ev`

`yaSSL::RMD::~RMD()`

| 类 | 地址 |
|---|---|
| `yaSSL::RMD` | `0x08798c20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798c20  _ZN5yaSSL3RMDD1Ev
#           yaSSL::RMD::~RMD()
# range [0x08798c20, 0x08798c7a]
08798c20 +0x00:  push   %ebp
08798c21 +0x01:  mov    %esp,%ebp
08798c23 +0x03:  sub    $0x18,%esp
08798c26 +0x06:  mov    %ebx,-0x8(%ebp)
08798c29 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08798c2e +0x0e:  add    $0xbd3f6a,%ebx
08798c34 +0x14:  mov    %esi,-0x4(%ebp)
08798c37 +0x17:  mov    0x8(%ebp),%esi
08798c3a +0x1a:  mov    -0x544(%ebx),%eax
08798c40 +0x20:  add    $0x8,%eax
08798c43 +0x23:  mov    %eax,(%esi)
08798c45 +0x25:  mov    0x4(%esi),%eax
08798c48 +0x28:  test   %eax,%eax
08798c4a +0x2a:  je     08798c57 <+0x37>
08798c4c +0x2c:  mov    -0x3c(%ebx),%edx
08798c52 +0x32:  add    $0x8,%edx
08798c55 +0x35:  mov    %edx,(%eax)
08798c57 +0x37:  mov    %eax,(%esp)
08798c5a +0x3a:  movb   $0x0,0x4(%esp)
08798c5f +0x3f:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08798c64 +0x44:  mov    -0x4d8(%ebx),%eax
08798c6a +0x4a:  add    $0x8,%eax
08798c6d +0x4d:  mov    %eax,(%esi)
08798c6f +0x4f:  mov    -0x8(%ebp),%ebx
08798c72 +0x52:  mov    -0x4(%ebp),%esi
08798c75 +0x55:  mov    %ebp,%esp
08798c77 +0x57:  pop    %ebp
08798c78 +0x58:  ret
08798c79 +0x59:  nop
08798c7a +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::RMD::~RMD @ 0x8798c20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RMD::~RMD() */

void __thiscall yaSSL::RMD::~RMD(RMD *this)

{
  undefined4 *puVar1;
  
  *(undefined **)this = PTR_vtable_0936c654 + 8;
  puVar1 = *(undefined4 **)(this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = PTR_vtable_0936cb5c + 8;
  }
  operator_delete(puVar1,0);
  *(undefined **)this = PTR_vtable_0936c6c0 + 8;
  return;
}
```
