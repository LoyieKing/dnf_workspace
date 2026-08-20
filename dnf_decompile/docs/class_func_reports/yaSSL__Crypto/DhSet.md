# DhSet

`_ZN5yaSSL6Crypto5DhSetEv`

`yaSSL::Crypto::DhSet()`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e800` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e800  _ZN5yaSSL6Crypto5DhSetEv
#           yaSSL::Crypto::DhSet()
# range [0x0874e800, 0x0874e80f]
0874e800 +0x00:  push   %ebp
0874e801 +0x01:  mov    %esp,%ebp
0874e803 +0x03:  mov    0x8(%ebp),%eax
0874e806 +0x06:  pop    %ebp
0874e807 +0x07:  mov    0x8(%eax),%edx
0874e80a +0x0a:  test   %edx,%edx
0874e80c +0x0c:  setne  %al
0874e80f +0x0f:  ret
```

## 反编译 C

```c
// yaSSL::Crypto::DhSet @ 0x874e800

/* yaSSL::Crypto::DhSet() */

bool __thiscall yaSSL::Crypto::DhSet(Crypto *this)

{
  return *(int *)(this + 8) != 0;
}
```
