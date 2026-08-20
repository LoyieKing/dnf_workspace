# getKeyLength

`_ZNK5yaSSL17ServerKeyExchange12getKeyLengthEv`

`yaSSL::ServerKeyExchange::getKeyLength() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x08746fe0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746fe0  _ZNK5yaSSL17ServerKeyExchange12getKeyLengthEv
#           yaSSL::ServerKeyExchange::getKeyLength() const
# range [0x08746fe0, 0x08746ff9]
08746fe0 +0x00:  push   %ebp
08746fe1 +0x01:  mov    %esp,%ebp
08746fe3 +0x03:  sub    $0x18,%esp
08746fe6 +0x06:  mov    0x8(%ebp),%eax
08746fe9 +0x09:  mov    0x8(%eax),%eax
08746fec +0x0c:  mov    (%eax),%edx
08746fee +0x0e:  mov    %eax,(%esp)
08746ff1 +0x11:  call   *0x10(%edx)
08746ff4 +0x14:  leave
08746ff5 +0x15:  ret
08746ff6 +0x16:  lea    0x0(%esi),%esi
08746ff9 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::getKeyLength @ 0x8746fe0

/* yaSSL::ServerKeyExchange::getKeyLength() const */

void __thiscall yaSSL::ServerKeyExchange::getKeyLength(ServerKeyExchange *this)

{
  (**(code **)(**(int **)(this + 8) + 0x10))(*(int **)(this + 8));
  return;
}
```
