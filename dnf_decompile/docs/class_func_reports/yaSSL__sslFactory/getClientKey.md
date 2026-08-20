# getClientKey

`_ZNK5yaSSL10sslFactory12getClientKeyEv`

`yaSSL::sslFactory::getClientKey() const`

| 类 | 地址 |
|---|---|
| `yaSSL::sslFactory` | `0x0874dfb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874dfb0  _ZNK5yaSSL10sslFactory12getClientKeyEv
#           yaSSL::sslFactory::getClientKey() const
# range [0x0874dfb0, 0x0874dfbc]
0874dfb0 +0x00:  push   %ebp
0874dfb1 +0x01:  mov    %esp,%ebp
0874dfb3 +0x03:  mov    0x8(%ebp),%eax
0874dfb6 +0x06:  pop    %ebp
0874dfb7 +0x07:  add    $0x24,%eax
0874dfba +0x0a:  ret
0874dfbb +0x0b:  nop
0874dfbc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslFactory::getClientKey @ 0x874dfb0

/* yaSSL::sslFactory::getClientKey() const */

sslFactory * __thiscall yaSSL::sslFactory::getClientKey(sslFactory *this)

{
  return this + 0x24;
}
```
