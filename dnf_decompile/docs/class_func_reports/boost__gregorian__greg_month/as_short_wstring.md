# as_short_wstring

`_ZNK5boost9gregorian10greg_month16as_short_wstringEv`

`boost::gregorian::greg_month::as_short_wstring() const`

| 类 | 地址 |
|---|---|
| `boost::gregorian::greg_month` | `0x087dc9b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dc9b0  _ZNK5boost9gregorian10greg_month16as_short_wstringEv
#           boost::gregorian::greg_month::as_short_wstring() const
# range [0x087dc9b0, 0x087dc9c9]
087dc9b0 +0x00:  push   %ebp
087dc9b1 +0x01:  mov    %esp,%ebp
087dc9b3 +0x03:  mov    0x8(%ebp),%eax
087dc9b6 +0x06:  pop    %ebp
087dc9b7 +0x07:  movzwl (%eax),%eax
087dc9ba +0x0a:  mov    ""(,%eax,4),%eax
087dc9c1 +0x11:  ret
087dc9c2 +0x12:  lea    0x0(%esi,%eiz,1),%esi
087dc9c9 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// boost::gregorian::greg_month::as_short_wstring @ 0x87dc9b0

/* boost::gregorian::greg_month::as_short_wstring() const */

undefined4 __thiscall boost::gregorian::greg_month::as_short_wstring(greg_month *this)

{
  return *(undefined4 *)(&DAT_08de077c + (uint)*(ushort *)this * 4);
}
```
