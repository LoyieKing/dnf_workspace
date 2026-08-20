# GetContext

`_ZNK5yaSSL8Security10GetContextEv`

`yaSSL::Security::GetContext() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Security` | `0x0874ea00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ea00  _ZNK5yaSSL8Security10GetContextEv
#           yaSSL::Security::GetContext() const
# range [0x0874ea00, 0x0874ea0e]
0874ea00 +0x00:  push   %ebp
0874ea01 +0x01:  mov    %esp,%ebp
0874ea03 +0x03:  mov    0x8(%ebp),%eax
0874ea06 +0x06:  pop    %ebp
0874ea07 +0x07:  mov    0x87c(%eax),%eax
0874ea0d +0x0d:  ret
0874ea0e +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Security::GetContext @ 0x874ea00

/* yaSSL::Security::GetContext() const */

undefined4 __thiscall yaSSL::Security::GetContext(Security *this)

{
  return *(undefined4 *)(this + 0x87c);
}
```
