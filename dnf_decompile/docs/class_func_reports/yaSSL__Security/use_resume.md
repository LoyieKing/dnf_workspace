# use_resume

`_ZN5yaSSL8Security10use_resumeEv`

`yaSSL::Security::use_resume()`

| 类 | 地址 |
|---|---|
| `yaSSL::Security` | `0x0874efb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874efb0  _ZN5yaSSL8Security10use_resumeEv
#           yaSSL::Security::use_resume()
# range [0x0874efb0, 0x0874efbe]
0874efb0 +0x00:  push   %ebp
0874efb1 +0x01:  mov    %esp,%ebp
0874efb3 +0x03:  mov    0x8(%ebp),%eax
0874efb6 +0x06:  pop    %ebp
0874efb7 +0x07:  add    $0x818,%eax
0874efbc +0x0c:  ret
0874efbd +0x0d:  nop
0874efbe +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Security::use_resume @ 0x874efb0

/* yaSSL::Security::use_resume() */

Security * __thiscall yaSSL::Security::use_resume(Security *this)

{
  return this + 0x818;
}
```
