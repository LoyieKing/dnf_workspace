# ~EncryptedPreMasterSecret

`_ZN5yaSSL24EncryptedPreMasterSecretD1Ev`

`yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret()`

| 类 | 地址 |
|---|---|
| `yaSSL::EncryptedPreMasterSecret` | `0x0874bac0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874bac0  _ZN5yaSSL24EncryptedPreMasterSecretD1Ev
#           yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret()
# range [0x0874bac0, 0x0874bb0a]
0874bac0 +0x00:  push   %ebp
0874bac1 +0x01:  mov    %esp,%ebp
0874bac3 +0x03:  sub    $0x18,%esp
0874bac6 +0x06:  mov    %ebx,-0x8(%ebp)
0874bac9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874bace +0x0e:  add    $0xc210ca,%ebx
0874bad4 +0x14:  mov    %esi,-0x4(%ebp)
0874bad7 +0x17:  mov    0x8(%ebp),%esi
0874bada +0x1a:  mov    -0x1c(%ebx),%eax
0874bae0 +0x20:  add    $0x8,%eax
0874bae3 +0x23:  mov    %eax,(%esi)
0874bae5 +0x25:  movb   $0x0,0x4(%esp)
0874baea +0x2a:  mov    0x4(%esi),%eax
0874baed +0x2d:  mov    %eax,(%esp)
0874baf0 +0x30:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874baf5 +0x35:  mov    -0x18(%ebx),%eax
0874bafb +0x3b:  add    $0x8,%eax
0874bafe +0x3e:  mov    %eax,(%esi)
0874bb00 +0x40:  mov    -0x8(%ebp),%ebx
0874bb03 +0x43:  mov    -0x4(%ebp),%esi
0874bb06 +0x46:  mov    %ebp,%esp
0874bb08 +0x48:  pop    %ebp
0874bb09 +0x49:  ret
0874bb0a +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret @ 0x874bac0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret() */

void __thiscall
yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret(EncryptedPreMasterSecret *this)

{
  *(undefined **)this = PTR_vtable_0936cb7c + 8;
  operator_delete__(*(undefined4 *)(this + 4),0);
  *(undefined **)this = PTR_vtable_0936cb80 + 8;
  return;
}
```
