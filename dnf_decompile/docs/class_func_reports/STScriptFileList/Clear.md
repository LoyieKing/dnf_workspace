# Clear

`_ZN16STScriptFileList5ClearEv`

`STScriptFileList::Clear()`

| 类 | 地址 |
|---|---|
| `STScriptFileList` | `0x088bad3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088bad3a  _ZN16STScriptFileList5ClearEv
#           STScriptFileList::Clear()
# range [0x088bad3a, 0x088bad4d]
088bad3a +0x00:  push   %ebp
088bad3b +0x01:  mov    %esp,%ebp
088bad3d +0x03:  sub    $0x18,%esp
088bad40 +0x06:  mov    0x8(%ebp),%eax
088bad43 +0x09:  mov    %eax,(%esp)
088bad46 +0x0c:  call   080c6bd6 <_GLOBAL__I_g_ServerString_+0x141>  ; global constructors keyed to g_ServerString_+0x141
088bad4b +0x11:  leave
088bad4c +0x12:  ret
088bad4d +0x13:  nop
```

## 反编译 C

```c
// STScriptFileList::Clear @ 0x88bad3a

/* STScriptFileList::Clear() */

void __thiscall STScriptFileList::Clear(STScriptFileList *this)

{
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::clear
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )this);
  return;
}
```
