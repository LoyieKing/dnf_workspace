# get_UserCount_InWorld

`_ZN9GameWorld21get_UserCount_InWorldEv`

`GameWorld::get_UserCount_InWorld()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c4550` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c4550  _ZN9GameWorld21get_UserCount_InWorldEv
#           GameWorld::get_UserCount_InWorld()
# range [0x086c4550, 0x086c4567]
086c4550 +0x00:  push   %ebp
086c4551 +0x01:  mov    %esp,%ebp
086c4553 +0x03:  sub    $0x18,%esp
086c4556 +0x06:  mov    0x8(%ebp),%eax
086c4559 +0x09:  add    $0x134,%eax
086c455e +0x0e:  mov    %eax,(%esp)
086c4561 +0x11:  call   08106cfc <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x17e>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x17e
086c4566 +0x16:  leave
086c4567 +0x17:  ret
```

## 反编译 C

```c
// GameWorld::get_UserCount_InWorld @ 0x86c4550

/* GameWorld::get_UserCount_InWorld() */

void __thiscall GameWorld::get_UserCount_InWorld(GameWorld *this)

{
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::size((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          *)(this + 0x134));
  return;
}
```
