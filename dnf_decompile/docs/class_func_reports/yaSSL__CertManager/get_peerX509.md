# get_peerX509

`_ZNK5yaSSL11CertManager12get_peerX509Ev`

`yaSSL::CertManager::get_peerX509() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x087974b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087974b0  _ZNK5yaSSL11CertManager12get_peerX509Ev
#           yaSSL::CertManager::get_peerX509() const
# range [0x087974b0, 0x087974bc]
087974b0 +0x00:  push   %ebp
087974b1 +0x01:  mov    %esp,%ebp
087974b3 +0x03:  mov    0x8(%ebp),%eax
087974b6 +0x06:  pop    %ebp
087974b7 +0x07:  mov    0x38(%eax),%eax
087974ba +0x0a:  ret
087974bb +0x0b:  nop
087974bc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::get_peerX509 @ 0x87974b0

/* yaSSL::CertManager::get_peerX509() const */

undefined4 __thiscall yaSSL::CertManager::get_peerX509(CertManager *this)

{
  return *(undefined4 *)(this + 0x38);
}
```
