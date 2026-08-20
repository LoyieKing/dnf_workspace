# beginPolicy

`_ZN10NullPolicy11beginPolicyERKSs`

`NullPolicy::beginPolicy(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)`

| 类 | 地址 |
|---|---|
| `NullPolicy` | `0x0816d656` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816d656  _ZN10NullPolicy11beginPolicyERKSs
#           NullPolicy::beginPolicy(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
# range [0x0816d656, 0x0816d65f]
0816d656 +0x00:  push   %ebp
0816d657 +0x01:  mov    %esp,%ebp
0816d659 +0x03:  mov    $0x1,%eax
0816d65e +0x08:  pop    %ebp
0816d65f +0x09:  ret
```

## 反编译 C

```c
// NullPolicy::beginPolicy @ 0x816d656

/* NullPolicy::beginPolicy(std::string const&) */

undefined4 NullPolicy::beginPolicy(string *param_1)

{
  return 1;
}
```
