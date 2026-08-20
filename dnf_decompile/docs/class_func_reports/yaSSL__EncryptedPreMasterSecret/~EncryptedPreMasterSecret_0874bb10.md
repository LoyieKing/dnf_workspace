# ~EncryptedPreMasterSecret

`_ZN5yaSSL24EncryptedPreMasterSecretD0Ev`

`yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret()`

| 类 | 地址 |
|---|---|
| `yaSSL::EncryptedPreMasterSecret` | `0x0874bb10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874bb10  _ZN5yaSSL24EncryptedPreMasterSecretD0Ev
#           yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret()
# range [0x0874bb10, 0x0874bb3a]
0874bb10 +0x00:  push   %ebp
0874bb11 +0x01:  mov    %esp,%ebp
0874bb13 +0x03:  push   %ebx
0874bb14 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874bb19 +0x09:  add    $0xc2107f,%ebx
0874bb1f +0x0f:  sub    $0x14,%esp
0874bb22 +0x12:  mov    0x8(%ebp),%eax
0874bb25 +0x15:  mov    %eax,(%esp)
0874bb28 +0x18:  call   0874bac0 <_ZN5yaSSL24EncryptedPreMasterSecretD1Ev>  ; yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret()
0874bb2d +0x1d:  add    $0x14,%esp
0874bb30 +0x20:  pop    %ebx
0874bb31 +0x21:  pop    %ebp
0874bb32 +0x22:  ret
0874bb33 +0x23:  nop
0874bb34 +0x24:  lea    0x0(%esi),%esi
0874bb3a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret @ 0x874bb10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret() */

void __thiscall
yaSSL::EncryptedPreMasterSecret::~EncryptedPreMasterSecret(EncryptedPreMasterSecret *this)

{
  ~EncryptedPreMasterSecret(this);
  return;
}
```
