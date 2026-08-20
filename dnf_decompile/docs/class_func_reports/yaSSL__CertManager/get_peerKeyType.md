# get_peerKeyType

`_ZNK5yaSSL11CertManager15get_peerKeyTypeEv`

`yaSSL::CertManager::get_peerKeyType() const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertManager` | `0x087974c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087974c0  _ZNK5yaSSL11CertManager15get_peerKeyTypeEv
#           yaSSL::CertManager::get_peerKeyType() const
# range [0x087974c0, 0x087974cc]
087974c0 +0x00:  push   %ebp
087974c1 +0x01:  mov    %esp,%ebp
087974c3 +0x03:  mov    0x8(%ebp),%eax
087974c6 +0x06:  pop    %ebp
087974c7 +0x07:  mov    0x40(%eax),%eax
087974ca +0x0a:  ret
087974cb +0x0b:  nop
087974cc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::CertManager::get_peerKeyType @ 0x87974c0

/* yaSSL::CertManager::get_peerKeyType() const */

undefined4 __thiscall yaSSL::CertManager::get_peerKeyType(CertManager *this)

{
  return *(undefined4 *)(this + 0x40);
}
```
