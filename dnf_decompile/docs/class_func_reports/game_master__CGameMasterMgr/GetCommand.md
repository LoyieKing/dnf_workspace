# GetCommand

`_ZN11game_master14CGameMasterMgr10GetCommandEi`

`game_master::CGameMasterMgr::GetCommand(int)`

| 类 | 地址 |
|---|---|
| `game_master::CGameMasterMgr` | `0x084a8c92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8c92  _ZN11game_master14CGameMasterMgr10GetCommandEi
#           game_master::CGameMasterMgr::GetCommand(int)
# range [0x084a8c92, 0x084a8caf]
084a8c92 +0x00:  push   %ebp
084a8c93 +0x01:  mov    %esp,%ebp
084a8c95 +0x03:  sub    $0x18,%esp
084a8c98 +0x06:  mov    0x8(%ebp),%eax
084a8c9b +0x09:  lea    0x8(%eax),%edx
084a8c9e +0x0c:  mov    0xc(%ebp),%eax
084a8ca1 +0x0f:  mov    %eax,0x4(%esp)
084a8ca5 +0x13:  mov    %edx,(%esp)
084a8ca8 +0x16:  call   084b3fc8 <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x7b>  ; global constructors keyed to game_master::CMacro::Reset()+0x7b
084a8cad +0x1b:  leave
084a8cae +0x1c:  ret
084a8caf +0x1d:  nop
```

## 反编译 C

```c
// game_master::CGameMasterMgr::GetCommand @ 0x84a8c92

/* game_master::CGameMasterMgr::GetCommand(int) */

void game_master::CGameMasterMgr::GetCommand(int param_1)

{
  CCommandMap::get(param_1 + 8);
  return;
}
```
