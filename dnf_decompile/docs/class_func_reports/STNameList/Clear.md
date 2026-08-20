# Clear

`_ZN10STNameList5ClearEv`

`STNameList::Clear()`

| 类 | 地址 |
|---|---|
| `STNameList` | `0x088baf34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088baf34  _ZN10STNameList5ClearEv
#           STNameList::Clear()
# range [0x088baf34, 0x088baf47]
088baf34 +0x00:  push   %ebp
088baf35 +0x01:  mov    %esp,%ebp
088baf37 +0x03:  sub    $0x18,%esp
088baf3a +0x06:  mov    0x8(%ebp),%eax
088baf3d +0x09:  mov    %eax,(%esp)
088baf40 +0x0c:  call   08080966 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x98c>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x98c
088baf45 +0x11:  leave
088baf46 +0x12:  ret
088baf47 +0x13:  nop
```

## 反编译 C

```c
// STNameList::Clear @ 0x88baf34

/* STNameList::Clear() */

void __thiscall STNameList::Clear(STNameList *this)

{
  StringUnorderedMap<CharStringHashTrait,int>::clear
            ((StringUnorderedMap<CharStringHashTrait,int> *)this);
  return;
}
```
