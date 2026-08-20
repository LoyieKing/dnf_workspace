# get_SHA

`_ZNK5yaSSL9sslHashes7get_SHAEv`

`yaSSL::sslHashes::get_SHA() const`

| 类 | 地址 |
|---|---|
| `yaSSL::sslHashes` | `0x0874e840` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e840  _ZNK5yaSSL9sslHashes7get_SHAEv
#           yaSSL::sslHashes::get_SHA() const
# range [0x0874e840, 0x0874e84c]
0874e840 +0x00:  push   %ebp
0874e841 +0x01:  mov    %esp,%ebp
0874e843 +0x03:  mov    0x8(%ebp),%eax
0874e846 +0x06:  pop    %ebp
0874e847 +0x07:  add    $0x8,%eax
0874e84a +0x0a:  ret
0874e84b +0x0b:  nop
0874e84c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::sslHashes::get_SHA @ 0x874e840

/* yaSSL::sslHashes::get_SHA() const */

sslHashes * __thiscall yaSSL::sslHashes::get_SHA(sslHashes *this)

{
  return this + 8;
}
```
