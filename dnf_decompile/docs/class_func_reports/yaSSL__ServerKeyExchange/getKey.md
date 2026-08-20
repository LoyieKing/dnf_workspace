# getKey

`_ZNK5yaSSL17ServerKeyExchange6getKeyEv`

`yaSSL::ServerKeyExchange::getKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerKeyExchange` | `0x08746fc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08746fc0  _ZNK5yaSSL17ServerKeyExchange6getKeyEv
#           yaSSL::ServerKeyExchange::getKey() const
# range [0x08746fc0, 0x08746fd9]
08746fc0 +0x00:  push   %ebp
08746fc1 +0x01:  mov    %esp,%ebp
08746fc3 +0x03:  sub    $0x18,%esp
08746fc6 +0x06:  mov    0x8(%ebp),%eax
08746fc9 +0x09:  mov    0x8(%eax),%eax
08746fcc +0x0c:  mov    (%eax),%edx
08746fce +0x0e:  mov    %eax,(%esp)
08746fd1 +0x11:  call   *0x14(%edx)
08746fd4 +0x14:  leave
08746fd5 +0x15:  ret
08746fd6 +0x16:  lea    0x0(%esi),%esi
08746fd9 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ServerKeyExchange::getKey @ 0x8746fc0

/* yaSSL::ServerKeyExchange::getKey() const */

void __thiscall yaSSL::ServerKeyExchange::getKey(ServerKeyExchange *this)

{
  (**(code **)(**(int **)(this + 8) + 0x14))(*(int **)(this + 8));
  return;
}
```
