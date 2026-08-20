# getKey

`_ZNK5yaSSL17ClientKeyExchange6getKeyEv`

`yaSSL::ClientKeyExchange::getKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientKeyExchange` | `0x08747130` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747130  _ZNK5yaSSL17ClientKeyExchange6getKeyEv
#           yaSSL::ClientKeyExchange::getKey() const
# range [0x08747130, 0x08747149]
08747130 +0x00:  push   %ebp
08747131 +0x01:  mov    %esp,%ebp
08747133 +0x03:  sub    $0x18,%esp
08747136 +0x06:  mov    0x8(%ebp),%eax
08747139 +0x09:  mov    0x8(%eax),%eax
0874713c +0x0c:  mov    (%eax),%edx
0874713e +0x0e:  mov    %eax,(%esp)
08747141 +0x11:  call   *0x14(%edx)
08747144 +0x14:  leave
08747145 +0x15:  ret
08747146 +0x16:  lea    0x0(%esi),%esi
08747149 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::ClientKeyExchange::getKey @ 0x8747130

/* yaSSL::ClientKeyExchange::getKey() const */

void __thiscall yaSSL::ClientKeyExchange::getKey(ClientKeyExchange *this)

{
  (**(code **)(**(int **)(this + 8) + 0x14))(*(int **)(this + 8));
  return;
}
```
