# GetCommand

`_ZN11game_master14CGameMasterMgr10GetCommandERSs`

`game_master::CGameMasterMgr::GetCommand(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `game_master::CGameMasterMgr` | `0x084a8cb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8cb0  _ZN11game_master14CGameMasterMgr10GetCommandERSs
#           game_master::CGameMasterMgr::GetCommand(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x084a8cb0, 0x084a8ccd]
084a8cb0 +0x00:  push   %ebp
084a8cb1 +0x01:  mov    %esp,%ebp
084a8cb3 +0x03:  sub    $0x18,%esp
084a8cb6 +0x06:  mov    0x8(%ebp),%eax
084a8cb9 +0x09:  lea    0x8(%eax),%edx
084a8cbc +0x0c:  mov    0xc(%ebp),%eax
084a8cbf +0x0f:  mov    %eax,0x4(%esp)
084a8cc3 +0x13:  mov    %edx,(%esp)
084a8cc6 +0x16:  call   084b402c <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0xdf>  ; global constructors keyed to game_master::CMacro::Reset()+0xdf
084a8ccb +0x1b:  leave
084a8ccc +0x1c:  ret
084a8ccd +0x1d:  nop
```

## 反编译 C

```c
// game_master::CGameMasterMgr::GetCommand @ 0x84a8cb0

/* game_master::CGameMasterMgr::GetCommand(std::string&) */

void game_master::CGameMasterMgr::GetCommand(string *param_1)

{
  CCommandMap::get(param_1 + 2);
  return;
}
```
