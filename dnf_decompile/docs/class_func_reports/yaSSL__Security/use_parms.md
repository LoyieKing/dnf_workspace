# use_parms

`_ZN5yaSSL8Security9use_parmsEv`

`yaSSL::Security::use_parms()`

| 类 | 地址 |
|---|---|
| `yaSSL::Security` | `0x0874eea0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874eea0  _ZN5yaSSL8Security9use_parmsEv
#           yaSSL::Security::use_parms()
# range [0x0874eea0, 0x0874eeae]
0874eea0 +0x00:  push   %ebp
0874eea1 +0x01:  mov    %esp,%ebp
0874eea3 +0x03:  mov    0x8(%ebp),%eax
0874eea6 +0x06:  pop    %ebp
0874eea7 +0x07:  add    $0x138,%eax
0874eeac +0x0c:  ret
0874eead +0x0d:  nop
0874eeae +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Security::use_parms @ 0x874eea0

/* yaSSL::Security::use_parms() */

Security * __thiscall yaSSL::Security::use_parms(Security *this)

{
  return this + 0x138;
}
```
