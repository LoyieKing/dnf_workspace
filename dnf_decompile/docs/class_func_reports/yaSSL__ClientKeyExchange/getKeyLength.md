# getKeyLength

`_ZNK5yaSSL17ClientKeyExchange12getKeyLengthEv`

`yaSSL::ClientKeyExchange::getKeyLength() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x08747150` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747150  _ZNK5yaSSL17ClientKeyExchange12getKeyLengthEv
#           yaSSL::ClientKeyExchange::getKeyLength() const
# range [0x08747150, 0x08747169]
08747150 +0x00:  push   %ebp
08747151 +0x01:  mov    %esp,%ebp
08747153 +0x03:  sub    $0x18,%esp
08747156 +0x06:  mov    0x8(%ebp),%eax
08747159 +0x09:  mov    0x8(%eax),%eax
0874715c +0x0c:  mov    (%eax),%edx
0874715e +0x0e:  mov    %eax,(%esp)
08747161 +0x11:  call   *0x10(%edx)
08747164 +0x14:  leave
08747165 +0x15:  ret
08747166 +0x16:  lea    0x0(%esi),%esi
08747169 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::getKeyLength @ 0x8747150

/* yaSSL::ClientKeyExchange::getKeyLength() const */

void __thiscall yaSSL::ClientKeyExchange::getKeyLength(ClientKeyExchange *this)

{
  (**(code **)(**(int **)(this + 8) + 0x10))(*(int **)(this + 8));
  return;
}
```
