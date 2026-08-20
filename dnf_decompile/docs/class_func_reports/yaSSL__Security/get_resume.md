# get_resume

`_ZNK5yaSSL8Security10get_resumeEv`

`yaSSL::Security::get_resume() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Security` | `0x0874ece0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ece0  _ZNK5yaSSL8Security10get_resumeEv
#           yaSSL::Security::get_resume() const
# range [0x0874ece0, 0x0874ecee]
0874ece0 +0x00:  push   %ebp
0874ece1 +0x01:  mov    %esp,%ebp
0874ece3 +0x03:  mov    0x8(%ebp),%eax
0874ece6 +0x06:  pop    %ebp
0874ece7 +0x07:  add    $0x818,%eax
0874ecec +0x0c:  ret
0874eced +0x0d:  nop
0874ecee +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Security::get_resume @ 0x874ece0

/* yaSSL::Security::get_resume() const */

Security * __thiscall yaSSL::Security::get_resume(Security *this)

{
  return this + 0x818;
}
```
