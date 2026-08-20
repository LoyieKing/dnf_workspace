# ~HMAC_RMD

`_ZN5yaSSL8HMAC_RMDD1Ev`

`yaSSL::HMAC_RMD::~HMAC_RMD()`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_RMD` | `0x08798a70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798a70  _ZN5yaSSL8HMAC_RMDD1Ev
#           yaSSL::HMAC_RMD::~HMAC_RMD()
# range [0x08798a70, 0x08798aca]
08798a70 +0x00:  push   %ebp
08798a71 +0x01:  mov    %esp,%ebp
08798a73 +0x03:  sub    $0x18,%esp
08798a76 +0x06:  mov    %ebx,-0x8(%ebp)
08798a79 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08798a7e +0x0e:  add    $0xbd411a,%ebx
08798a84 +0x14:  mov    %esi,-0x4(%ebp)
08798a87 +0x17:  mov    0x8(%ebp),%esi
08798a8a +0x1a:  mov    -0x408(%ebx),%eax
08798a90 +0x20:  add    $0x8,%eax
08798a93 +0x23:  mov    %eax,(%esi)
08798a95 +0x25:  mov    0x4(%esi),%eax
08798a98 +0x28:  test   %eax,%eax
08798a9a +0x2a:  je     08798aa8 <+0x38>
08798a9c +0x2c:  mov    -0x3c(%ebx),%edx
08798aa2 +0x32:  add    $0x8,%edx
08798aa5 +0x35:  mov    %edx,0x10(%eax)
08798aa8 +0x38:  mov    %eax,(%esp)
08798aab +0x3b:  movb   $0x0,0x4(%esp)
08798ab0 +0x40:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08798ab5 +0x45:  mov    -0x4d8(%ebx),%eax
08798abb +0x4b:  add    $0x8,%eax
08798abe +0x4e:  mov    %eax,(%esi)
08798ac0 +0x50:  mov    -0x8(%ebp),%ebx
08798ac3 +0x53:  mov    -0x4(%ebp),%esi
08798ac6 +0x56:  mov    %ebp,%esp
08798ac8 +0x58:  pop    %ebp
08798ac9 +0x59:  ret
08798aca +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HMAC_RMD::~HMAC_RMD @ 0x8798a70

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_RMD::~HMAC_RMD() */

void __thiscall yaSSL::HMAC_RMD::~HMAC_RMD(HMAC_RMD *this)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_0936c790 + 8;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 0x10) = PTR_vtable_0936cb5c + 8;
  }
  operator_delete(iVar1,0);
  *(undefined **)this = PTR_vtable_0936c6c0 + 8;
  return;
}
```
