# WouldBlock

`_ZNK5yaSSL6Socket10WouldBlockEv`

`yaSSL::Socket::WouldBlock() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a14f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a14f0  _ZNK5yaSSL6Socket10WouldBlockEv
#           yaSSL::Socket::WouldBlock() const
# range [0x087a14f0, 0x087a14fc]
087a14f0 +0x00:  push   %ebp
087a14f1 +0x01:  mov    %esp,%ebp
087a14f3 +0x03:  mov    0x8(%ebp),%eax
087a14f6 +0x06:  pop    %ebp
087a14f7 +0x07:  movzbl 0x4(%eax),%eax
087a14fb +0x0b:  ret
087a14fc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Socket::WouldBlock @ 0x87a14f0

/* yaSSL::Socket::WouldBlock() const */

Socket __thiscall yaSSL::Socket::WouldBlock(Socket *this)

{
  return this[4];
}
```
