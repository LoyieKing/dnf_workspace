# getCount

`_ZNK16StringDictionary8getCountEv`

`StringDictionary::getCount() const`

| 类 | 地址 |
|---|---|
| `StringDictionary` | `0x08ab2612` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab2612  _ZNK16StringDictionary8getCountEv
#           StringDictionary::getCount() const
# range [0x08ab2612, 0x08ab2627]
08ab2612 +0x00:  push   %ebp
08ab2613 +0x01:  mov    %esp,%ebp
08ab2615 +0x03:  sub    $0x18,%esp
08ab2618 +0x06:  mov    0x8(%ebp),%eax
08ab261b +0x09:  add    $0x14,%eax
08ab261e +0x0c:  mov    %eax,(%esp)
08ab2621 +0x0f:  call   08ab2dbe <_ZN16StringDictionary9addStringEPKc+0x64c>  ; StringDictionary::addString(char const*)+0x64c
08ab2626 +0x14:  leave
08ab2627 +0x15:  ret
```

## 反编译 C

```c
// StringDictionary::getCount @ 0x8ab2612

/* StringDictionary::getCount() const */

void __thiscall StringDictionary::getCount(StringDictionary *this)

{
  std::vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::size
            ((vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>
              *)(this + 0x14));
  return;
}
```
