# GetSubject

`_ZN5yaSSL4X50910GetSubjectEv`

`yaSSL::X509::GetSubject()`

| 类 | 地址 |
|---|---|
| `yaSSL::X509` | `0x0874f010` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f010  _ZN5yaSSL4X50910GetSubjectEv
#           yaSSL::X509::GetSubject()
# range [0x0874f010, 0x0874f01c]
0874f010 +0x00:  push   %ebp
0874f011 +0x01:  mov    %esp,%ebp
0874f013 +0x03:  mov    0x8(%ebp),%eax
0874f016 +0x06:  pop    %ebp
0874f017 +0x07:  add    $0x14,%eax
0874f01a +0x0a:  ret
0874f01b +0x0b:  nop
0874f01c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::X509::GetSubject @ 0x874f010

/* yaSSL::X509::GetSubject() */

X509 * __thiscall yaSSL::X509::GetSubject(X509 *this)

{
  return this + 0x14;
}
```
