# getMapTotalCount

`_ZN23BlueMarbleScriptManager16getMapTotalCountEv`

`BlueMarbleScriptManager::getMapTotalCount()`

| 类 | 地址 |
|---|---|
| `BlueMarbleScriptManager` | `0x088d6726` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d6726  _ZN23BlueMarbleScriptManager16getMapTotalCountEv
#           BlueMarbleScriptManager::getMapTotalCount()
# range [0x088d6726, 0x088d673d]
088d6726 +0x00:  push   %ebp
088d6727 +0x01:  mov    %esp,%ebp
088d6729 +0x03:  sub    $0x18,%esp
088d672c +0x06:  mov    0x8(%ebp),%eax
088d672f +0x09:  add    $0xd4,%eax
088d6734 +0x0e:  mov    %eax,(%esp)
088d6737 +0x11:  call   088d6f70 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x7f2>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x7f2
088d673c +0x16:  leave
088d673d +0x17:  ret
```

## 反编译 C

```c
// BlueMarbleScriptManager::getMapTotalCount @ 0x88d6726

/* BlueMarbleScriptManager::getMapTotalCount() */

void __thiscall BlueMarbleScriptManager::getMapTotalCount(BlueMarbleScriptManager *this)

{
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::size((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
          *)(this + 0xd4));
  return;
}
```
