# get_clientKey

`_ZNK5yaSSL24EncryptedPreMasterSecret13get_clientKeyEv`

`yaSSL::EncryptedPreMasterSecret::get_clientKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::EncryptedPreMasterSecret` | `0x087469b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087469b0  _ZNK5yaSSL24EncryptedPreMasterSecret13get_clientKeyEv
#           yaSSL::EncryptedPreMasterSecret::get_clientKey() const
# range [0x087469b0, 0x087469bc]
087469b0 +0x00:  push   %ebp
087469b1 +0x01:  mov    %esp,%ebp
087469b3 +0x03:  mov    0x8(%ebp),%eax
087469b6 +0x06:  pop    %ebp
087469b7 +0x07:  mov    0x4(%eax),%eax
087469ba +0x0a:  ret
087469bb +0x0b:  nop
087469bc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::EncryptedPreMasterSecret::get_clientKey @ 0x87469b0

/* yaSSL::EncryptedPreMasterSecret::get_clientKey() const */

undefined4 __thiscall yaSSL::EncryptedPreMasterSecret::get_clientKey(EncryptedPreMasterSecret *this)

{
  return *(undefined4 *)(this + 4);
}
```
