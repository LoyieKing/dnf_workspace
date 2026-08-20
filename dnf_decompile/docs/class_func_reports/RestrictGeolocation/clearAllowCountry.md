# clearAllowCountry

`_ZN19RestrictGeolocation17clearAllowCountryEv`

`RestrictGeolocation::clearAllowCountry()`

| 类 | 地址 |
|---|---|
| `RestrictGeolocation` | `0x08170b16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08170b16  _ZN19RestrictGeolocation17clearAllowCountryEv
#           RestrictGeolocation::clearAllowCountry()
# range [0x08170b16, 0x08170b2b]
08170b16 +0x00:  push   %ebp
08170b17 +0x01:  mov    %esp,%ebp
08170b19 +0x03:  sub    $0x18,%esp
08170b1c +0x06:  mov    0x8(%ebp),%eax
08170b1f +0x09:  add    $0x4,%eax
08170b22 +0x0c:  mov    %eax,(%esp)
08170b25 +0x0f:  call   0817151e <_GLOBAL__I__ZN19RestrictGeolocationC2Ev+0x3e3>  ; global constructors keyed to RestrictGeolocation::RestrictGeolocation()+0x3e3
08170b2a +0x14:  leave
08170b2b +0x15:  ret
```

## 反编译 C

```c
// RestrictGeolocation::clearAllowCountry @ 0x8170b16

/* RestrictGeolocation::clearAllowCountry() */

void __thiscall RestrictGeolocation::clearAllowCountry(RestrictGeolocation *this)

{
  boost::unordered::
  unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
  ::clear((unordered_set<std::string,boost::hash<std::string>,std::equal_to<std::string>,std::allocator<std::string>>
           *)(this + 4));
  return;
}
```
