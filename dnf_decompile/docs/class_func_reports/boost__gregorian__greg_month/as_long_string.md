# as_long_string

`_ZNK5boost9gregorian10greg_month14as_long_stringEv`

`boost::gregorian::greg_month::as_long_string() const`

| 类 | 地址 |
|---|---|
| `boost::gregorian::greg_month` | `0x087dc990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dc990  _ZNK5boost9gregorian10greg_month14as_long_stringEv
#           boost::gregorian::greg_month::as_long_string() const
# range [0x087dc990, 0x087dc9a9]
087dc990 +0x00:  push   %ebp
087dc991 +0x01:  mov    %esp,%ebp
087dc993 +0x03:  mov    0x8(%ebp),%eax
087dc996 +0x06:  pop    %ebp
087dc997 +0x07:  movzwl (%eax),%eax
087dc99a +0x0a:  mov    ""(,%eax,4),%eax
087dc9a1 +0x11:  ret
087dc9a2 +0x12:  lea    0x0(%esi,%eiz,1),%esi
087dc9a9 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// boost::gregorian::greg_month::as_long_string @ 0x87dc990

/* boost::gregorian::greg_month::as_long_string() const */

undefined4 __thiscall boost::gregorian::greg_month::as_long_string(greg_month *this)

{
  return *(undefined4 *)(&DAT_08de089c + (uint)*(ushort *)this * 4);
}
```
