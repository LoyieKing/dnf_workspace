# STNameList

`_ZN10STNameListC1Ev`

`STNameList::STNameList()`

| 类 | 地址 |
|---|---|
| `STNameList` | `0x088baef2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088baef2  _ZN10STNameListC1Ev
#           STNameList::STNameList()
# range [0x088baef2, 0x088baf33]
088baef2 +0x00:  push   %ebp
088baef3 +0x01:  mov    %esp,%ebp
088baef5 +0x03:  push   %esi
088baef6 +0x04:  push   %ebx
088baef7 +0x05:  sub    $0x10,%esp
088baefa +0x08:  mov    0x8(%ebp),%eax
088baefd +0x0b:  mov    %eax,(%esp)
088baf00 +0x0e:  call   08080348 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x36e>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x36e
088baf05 +0x13:  mov    0x8(%ebp),%eax
088baf08 +0x16:  mov    %eax,(%esp)
088baf0b +0x19:  call   088baf34 <_ZN10STNameList5ClearEv>  ; STNameList::Clear()
088baf10 +0x1e:  jmp    088baf2d <+0x3b>
088baf12 +0x20:  mov    %edx,%ebx
088baf14 +0x22:  mov    %eax,%esi
088baf16 +0x24:  mov    0x8(%ebp),%eax
088baf19 +0x27:  mov    %eax,(%esp)
088baf1c +0x2a:  call   080803b2 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x3d8>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x3d8
088baf21 +0x2f:  mov    %esi,%eax
088baf23 +0x31:  mov    %ebx,%edx
088baf25 +0x33:  mov    %eax,(%esp)
088baf28 +0x36:  call   08ae3750 <_Unwind_Resume>
088baf2d +0x3b:  add    $0x10,%esp
088baf30 +0x3e:  pop    %ebx
088baf31 +0x3f:  pop    %esi
088baf32 +0x40:  pop    %ebp
088baf33 +0x41:  ret
```

## 反编译 C

```c
// STNameList::STNameList @ 0x88baef2

/* STNameList::STNameList() */

void __thiscall STNameList::STNameList(STNameList *this)

{
  StringUnorderedMap<CharStringHashTrait,int>::StringUnorderedMap
            ((StringUnorderedMap<CharStringHashTrait,int> *)this);
                    /* try { // try from 088baf0b to 088baf0f has its CatchHandler @ 088baf12 */
  Clear(this);
  return;
}
```
