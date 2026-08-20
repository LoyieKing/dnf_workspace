# STScriptFileList

`_ZN16STScriptFileListC1Ev`

`STScriptFileList::STScriptFileList()`

| 类 | 地址 |
|---|---|
| `STScriptFileList` | `0x088bacf8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088bacf8  _ZN16STScriptFileListC1Ev
#           STScriptFileList::STScriptFileList()
# range [0x088bacf8, 0x088bad39]
088bacf8 +0x00:  push   %ebp
088bacf9 +0x01:  mov    %esp,%ebp
088bacfb +0x03:  push   %esi
088bacfc +0x04:  push   %ebx
088bacfd +0x05:  sub    $0x10,%esp
088bad00 +0x08:  mov    0x8(%ebp),%eax
088bad03 +0x0b:  mov    %eax,(%esp)
088bad06 +0x0e:  call   080c6bea <_GLOBAL__I_g_ServerString_+0x155>  ; global constructors keyed to g_ServerString_+0x155
088bad0b +0x13:  mov    0x8(%ebp),%eax
088bad0e +0x16:  mov    %eax,(%esp)
088bad11 +0x19:  call   088bad3a <_ZN16STScriptFileList5ClearEv>  ; STScriptFileList::Clear()
088bad16 +0x1e:  jmp    088bad33 <+0x3b>
088bad18 +0x20:  mov    %edx,%ebx
088bad1a +0x22:  mov    %eax,%esi
088bad1c +0x24:  mov    0x8(%ebp),%eax
088bad1f +0x27:  mov    %eax,(%esp)
088bad22 +0x2a:  call   080c6ab2 <_GLOBAL__I_g_ServerString_+0x1d>  ; global constructors keyed to g_ServerString_+0x1d
088bad27 +0x2f:  mov    %esi,%eax
088bad29 +0x31:  mov    %ebx,%edx
088bad2b +0x33:  mov    %eax,(%esp)
088bad2e +0x36:  call   08ae3750 <_Unwind_Resume>
088bad33 +0x3b:  add    $0x10,%esp
088bad36 +0x3e:  pop    %ebx
088bad37 +0x3f:  pop    %esi
088bad38 +0x40:  pop    %ebp
088bad39 +0x41:  ret
```

## 反编译 C

```c
// STScriptFileList::STScriptFileList @ 0x88bacf8

/* STScriptFileList::STScriptFileList() */

void __thiscall STScriptFileList::STScriptFileList(STScriptFileList *this)

{
  std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::map
            ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> *
             )this);
                    /* try { // try from 088bad11 to 088bad15 has its CatchHandler @ 088bad18 */
  Clear(this);
  return;
}
```
