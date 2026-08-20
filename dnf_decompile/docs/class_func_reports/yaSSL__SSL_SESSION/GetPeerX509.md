# GetPeerX509

`_ZNK5yaSSL11SSL_SESSION11GetPeerX509Ev`

`yaSSL::SSL_SESSION::GetPeerX509() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x0874e350` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e350  _ZNK5yaSSL11SSL_SESSION11GetPeerX509Ev
#           yaSSL::SSL_SESSION::GetPeerX509() const
# range [0x0874e350, 0x0874e35c]
0874e350 +0x00:  push   %ebp
0874e351 +0x01:  mov    %esp,%ebp
0874e353 +0x03:  mov    0x8(%ebp),%eax
0874e356 +0x06:  pop    %ebp
0874e357 +0x07:  mov    0x60(%eax),%eax
0874e35a +0x0a:  ret
0874e35b +0x0b:  nop
0874e35c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::GetPeerX509 @ 0x874e350

/* yaSSL::SSL_SESSION::GetPeerX509() const */

undefined4 __thiscall yaSSL::SSL_SESSION::GetPeerX509(SSL_SESSION *this)

{
  return *(undefined4 *)(this + 0x60);
}
```
