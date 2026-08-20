# clear

`_ZN23BlueMarbleScriptManager5clearEv`

`BlueMarbleScriptManager::clear()`

| 类 | 地址 |
|---|---|
| `BlueMarbleScriptManager` | `0x088d622c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088d622c  _ZN23BlueMarbleScriptManager5clearEv
#           BlueMarbleScriptManager::clear()
# range [0x088d622c, 0x088d626d]
088d622c +0x00:  push   %ebp
088d622d +0x01:  mov    %esp,%ebp
088d622f +0x03:  sub    $0x18,%esp
088d6232 +0x06:  mov    0x8(%ebp),%eax
088d6235 +0x09:  mov    %eax,(%esp)
088d6238 +0x0c:  call   088bad3a <_ZN16STScriptFileList5ClearEv>  ; STScriptFileList::Clear()
088d623d +0x11:  mov    0x8(%ebp),%eax
088d6240 +0x14:  add    $0x18,%eax
088d6243 +0x17:  mov    %eax,(%esp)
088d6246 +0x1a:  call   088bad3a <_ZN16STScriptFileList5ClearEv>  ; STScriptFileList::Clear()
088d624b +0x1f:  mov    0x8(%ebp),%eax
088d624e +0x22:  add    $0xbc,%eax
088d6253 +0x27:  mov    %eax,(%esp)
088d6256 +0x2a:  call   088d6c74 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x4f6>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x4f6
088d625b +0x2f:  mov    0x8(%ebp),%eax
088d625e +0x32:  add    $0xd4,%eax
088d6263 +0x37:  mov    %eax,(%esp)
088d6266 +0x3a:  call   088d6c88 <_GLOBAL__I__ZN20BlueMarbleTileScriptC2Ev+0x50a>  ; global constructors keyed to BlueMarbleTileScript::BlueMarbleTileScript()+0x50a
088d626b +0x3f:  leave
088d626c +0x40:  ret
088d626d +0x41:  nop
```

## 反编译 C

```c
// BlueMarbleScriptManager::clear @ 0x88d622c

/* BlueMarbleScriptManager::clear() */

void __thiscall BlueMarbleScriptManager::clear(BlueMarbleScriptManager *this)

{
  STScriptFileList::Clear((STScriptFileList *)this);
  STScriptFileList::Clear((STScriptFileList *)(this + 0x18));
  std::
  map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
  ::clear((map<int,BlueMarbleTileScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleTileScript*>>>
           *)(this + 0xbc));
  std::
  map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
  ::clear((map<int,BlueMarbleMapScript*,std::less<int>,std::allocator<std::pair<int_const,BlueMarbleMapScript*>>>
           *)(this + 0xd4));
  return;
}
```
