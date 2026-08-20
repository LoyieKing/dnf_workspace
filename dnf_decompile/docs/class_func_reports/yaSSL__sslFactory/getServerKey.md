# getServerKey

`_ZNK5yaSSL10sslFactory12getServerKeyEv`

`yaSSL::sslFactory::getServerKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::sslFactory` | `0x0874dfa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874dfa0  _ZNK5yaSSL10sslFactory12getServerKeyEv
#           yaSSL::sslFactory::getServerKey() const
# range [0x0874dfa0, 0x0874dfac]
0874dfa0 +0x00:  push   %ebp
0874dfa1 +0x01:  mov    %esp,%ebp
0874dfa3 +0x03:  mov    0x8(%ebp),%eax
0874dfa6 +0x06:  pop    %ebp
0874dfa7 +0x07:  add    $0x18,%eax
0874dfaa +0x0a:  ret
0874dfab +0x0b:  nop
0874dfac +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslFactory::getServerKey @ 0x874dfa0

/* yaSSL::sslFactory::getServerKey() const */

sslFactory * __thiscall yaSSL::sslFactory::getServerKey(sslFactory *this)

{
  return this + 0x18;
}
```
