# set_resuming

`_ZN5yaSSL8Security12set_resumingEb`

`yaSSL::Security::set_resuming(bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::Security` | `0x0874efc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874efc0  _ZN5yaSSL8Security12set_resumingEb
#           yaSSL::Security::set_resuming(bool)
# range [0x0874efc0, 0x0874efd9]
0874efc0 +0x00:  push   %ebp
0874efc1 +0x01:  mov    %esp,%ebp
0874efc3 +0x03:  mov    0xc(%ebp),%edx
0874efc6 +0x06:  mov    0x8(%ebp),%eax
0874efc9 +0x09:  mov    %dl,0x880(%eax)
0874efcf +0x0f:  pop    %ebp
0874efd0 +0x10:  ret
0874efd1 +0x11:  nop
0874efd2 +0x12:  lea    0x0(%esi,%eiz,1),%esi
0874efd9 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Security::set_resuming @ 0x874efc0

/* yaSSL::Security::set_resuming(bool) */

void __thiscall yaSSL::Security::set_resuming(Security *this,bool param_1)

{
  this[0x880] = (Security)param_1;
  return;
}
```
