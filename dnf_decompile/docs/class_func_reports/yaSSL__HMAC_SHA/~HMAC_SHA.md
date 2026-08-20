# ~HMAC_SHA

`_ZN5yaSSL8HMAC_SHAD1Ev`

`yaSSL::HMAC_SHA::~HMAC_SHA()`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_SHA` | `0x08798b00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798b00  _ZN5yaSSL8HMAC_SHAD1Ev
#           yaSSL::HMAC_SHA::~HMAC_SHA()
# range [0x08798b00, 0x08798b5a]
08798b00 +0x00:  push   %ebp
08798b01 +0x01:  mov    %esp,%ebp
08798b03 +0x03:  sub    $0x18,%esp
08798b06 +0x06:  mov    %ebx,-0x8(%ebp)
08798b09 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08798b0e +0x0e:  add    $0xbd408a,%ebx
08798b14 +0x14:  mov    %esi,-0x4(%ebp)
08798b17 +0x17:  mov    0x8(%ebp),%esi
08798b1a +0x1a:  mov    -0x28c(%ebx),%eax
08798b20 +0x20:  add    $0x8,%eax
08798b23 +0x23:  mov    %eax,(%esi)
08798b25 +0x25:  mov    0x4(%esi),%eax
08798b28 +0x28:  test   %eax,%eax
08798b2a +0x2a:  je     08798b38 <+0x38>
08798b2c +0x2c:  mov    -0x3c(%ebx),%edx
08798b32 +0x32:  add    $0x8,%edx
08798b35 +0x35:  mov    %edx,0x10(%eax)
08798b38 +0x38:  mov    %eax,(%esp)
08798b3b +0x3b:  movb   $0x0,0x4(%esp)
08798b40 +0x40:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08798b45 +0x45:  mov    -0x4d8(%ebx),%eax
08798b4b +0x4b:  add    $0x8,%eax
08798b4e +0x4e:  mov    %eax,(%esi)
08798b50 +0x50:  mov    -0x8(%ebp),%ebx
08798b53 +0x53:  mov    -0x4(%ebp),%esi
08798b56 +0x56:  mov    %ebp,%esp
08798b58 +0x58:  pop    %ebp
08798b59 +0x59:  ret
08798b5a +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HMAC_SHA::~HMAC_SHA @ 0x8798b00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_SHA::~HMAC_SHA() */

void __thiscall yaSSL::HMAC_SHA::~HMAC_SHA(HMAC_SHA *this)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_0936c90c + 8;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 0x10) = PTR_vtable_0936cb5c + 8;
  }
  operator_delete(iVar1,0);
  *(undefined **)this = PTR_vtable_0936c6c0 + 8;
  return;
}
```
