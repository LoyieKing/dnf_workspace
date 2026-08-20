# ~HMAC_MD5

`_ZN5yaSSL8HMAC_MD5D1Ev`

`yaSSL::HMAC_MD5::~HMAC_MD5()`

| 类 | 地址 |
|---|---|
| `yaSSL::HMAC_MD5` | `0x08798b90` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798b90  _ZN5yaSSL8HMAC_MD5D1Ev
#           yaSSL::HMAC_MD5::~HMAC_MD5()
# range [0x08798b90, 0x08798bea]
08798b90 +0x00:  push   %ebp
08798b91 +0x01:  mov    %esp,%ebp
08798b93 +0x03:  sub    $0x18,%esp
08798b96 +0x06:  mov    %ebx,-0x8(%ebp)
08798b99 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08798b9e +0x0e:  add    $0xbd3ffa,%ebx
08798ba4 +0x14:  mov    %esi,-0x4(%ebp)
08798ba7 +0x17:  mov    0x8(%ebp),%esi
08798baa +0x1a:  mov    -0x3c8(%ebx),%eax
08798bb0 +0x20:  add    $0x8,%eax
08798bb3 +0x23:  mov    %eax,(%esi)
08798bb5 +0x25:  mov    0x4(%esi),%eax
08798bb8 +0x28:  test   %eax,%eax
08798bba +0x2a:  je     08798bc8 <+0x38>
08798bbc +0x2c:  mov    -0x3c(%ebx),%edx
08798bc2 +0x32:  add    $0x8,%edx
08798bc5 +0x35:  mov    %edx,0x10(%eax)
08798bc8 +0x38:  mov    %eax,(%esp)
08798bcb +0x3b:  movb   $0x0,0x4(%esp)
08798bd0 +0x40:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08798bd5 +0x45:  mov    -0x4d8(%ebx),%eax
08798bdb +0x4b:  add    $0x8,%eax
08798bde +0x4e:  mov    %eax,(%esi)
08798be0 +0x50:  mov    -0x8(%ebp),%ebx
08798be3 +0x53:  mov    -0x4(%ebp),%esi
08798be6 +0x56:  mov    %ebp,%esp
08798be8 +0x58:  pop    %ebp
08798be9 +0x59:  ret
08798bea +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::HMAC_MD5::~HMAC_MD5 @ 0x8798b90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HMAC_MD5::~HMAC_MD5() */

void __thiscall yaSSL::HMAC_MD5::~HMAC_MD5(HMAC_MD5 *this)

{
  int iVar1;
  
  *(undefined **)this = PTR_vtable_0936c7d0 + 8;
  iVar1 = *(int *)(this + 4);
  if (iVar1 != 0) {
    *(undefined **)(iVar1 + 0x10) = PTR_vtable_0936cb5c + 8;
  }
  operator_delete(iVar1,0);
  *(undefined **)this = PTR_vtable_0936c6c0 + 8;
  return;
}
```
