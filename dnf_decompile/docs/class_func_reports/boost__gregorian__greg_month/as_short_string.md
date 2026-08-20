# as_short_string

`_ZNK5boost9gregorian10greg_month15as_short_stringEv`

`boost::gregorian::greg_month::as_short_string() const`

| 类 | 地址 |
|---|---|
| `boost::gregorian::greg_month` | `0x087dc970` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087dc970  _ZNK5boost9gregorian10greg_month15as_short_stringEv
#           boost::gregorian::greg_month::as_short_string() const
# range [0x087dc970, 0x087dc989]
087dc970 +0x00:  push   %ebp
087dc971 +0x01:  mov    %esp,%ebp
087dc973 +0x03:  mov    0x8(%ebp),%eax
087dc976 +0x06:  pop    %ebp
087dc977 +0x07:  movzwl (%eax),%eax
087dc97a +0x0a:  mov    ""(,%eax,4),%eax
087dc981 +0x11:  ret
087dc982 +0x12:  lea    0x0(%esi,%eiz,1),%esi
087dc989 +0x19:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// boost::gregorian::greg_month::as_short_string @ 0x87dc970

/* boost::gregorian::greg_month::as_short_string() const */

undefined4 __thiscall boost::gregorian::greg_month::as_short_string(greg_month *this)

{
  return *(undefined4 *)(&DAT_08de085c + (uint)*(ushort *)this * 4);
}
```
