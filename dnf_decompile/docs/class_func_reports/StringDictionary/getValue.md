# getValue

`_ZNK16StringDictionary8getValueEi`

`StringDictionary::getValue(int) const`

| 类 | 地址 |
|---|---|
| `StringDictionary` | `0x08ab2668` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab2668  _ZNK16StringDictionary8getValueEi
#           StringDictionary::getValue(int) const
# range [0x08ab2668, 0x08ab26a7]
08ab2668 +0x00:  push   %ebp
08ab2669 +0x01:  mov    %esp,%ebp
08ab266b +0x03:  sub    $0x18,%esp
08ab266e +0x06:  cmpl   $0x0,0xc(%ebp)
08ab2672 +0x0a:  js     08ab26a1 <+0x39>
08ab2674 +0x0c:  mov    0x8(%ebp),%eax
08ab2677 +0x0f:  add    $0x14,%eax
08ab267a +0x12:  mov    %eax,(%esp)
08ab267d +0x15:  call   08ab2dbe <_ZN16StringDictionary9addStringEPKc+0x64c>  ; StringDictionary::addString(char const*)+0x64c
08ab2682 +0x1a:  cmp    0xc(%ebp),%eax
08ab2685 +0x1d:  jle    08ab26a1 <+0x39>
08ab2687 +0x1f:  mov    0xc(%ebp),%eax
08ab268a +0x22:  mov    0x8(%ebp),%edx
08ab268d +0x25:  add    $0x14,%edx
08ab2690 +0x28:  mov    %eax,0x4(%esp)
08ab2694 +0x2c:  mov    %edx,(%esp)
08ab2697 +0x2f:  call   08ab2de0 <_ZN16StringDictionary9addStringEPKc+0x66e>  ; StringDictionary::addString(char const*)+0x66e
08ab269c +0x34:  mov    0x8(%eax),%eax
08ab269f +0x37:  jmp    08ab26a6 <+0x3e>
08ab26a1 +0x39:  mov    $0x0,%eax
08ab26a6 +0x3e:  leave
08ab26a7 +0x3f:  ret
```

## 反编译 C

```c
// StringDictionary::getValue @ 0x8ab2668

/* StringDictionary::getValue(int) const */

undefined4 __thiscall StringDictionary::getValue(StringDictionary *this,int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) &&
     (iVar1 = std::
              vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>
              ::size((vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>
                      *)(this + 0x14)), param_1 < iVar1)) {
    iVar1 = std::
            vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>::
            operator[]((vector<StringDictionary::StringEntity,std::allocator<StringDictionary::StringEntity>>
                        *)(this + 0x14),param_1);
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}
```
