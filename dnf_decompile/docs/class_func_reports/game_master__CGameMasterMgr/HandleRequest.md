# HandleRequest

`_ZN11game_master14CGameMasterMgr13HandleRequestEPNS_8CCommandE`

`game_master::CGameMasterMgr::HandleRequest(game_master::CCommand*)`

| 类 | 地址 |
|---|---|
| `game_master::CGameMasterMgr` | `0x084a8c6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a8c6e  _ZN11game_master14CGameMasterMgr13HandleRequestEPNS_8CCommandE
#           game_master::CGameMasterMgr::HandleRequest(game_master::CCommand*)
# range [0x084a8c6e, 0x084a8c91]
084a8c6e +0x00:  push   %ebp
084a8c6f +0x01:  mov    %esp,%ebp
084a8c71 +0x03:  sub    $0x18,%esp
084a8c74 +0x06:  mov    0x8(%ebp),%eax
084a8c77 +0x09:  mov    0x4(%eax),%eax
084a8c7a +0x0c:  mov    (%eax),%eax
084a8c7c +0x0e:  mov    (%eax),%ecx
084a8c7e +0x10:  mov    0x8(%ebp),%eax
084a8c81 +0x13:  mov    0x4(%eax),%eax
084a8c84 +0x16:  mov    0xc(%ebp),%edx
084a8c87 +0x19:  mov    %edx,0x4(%esp)
084a8c8b +0x1d:  mov    %eax,(%esp)
084a8c8e +0x20:  call   *%ecx
084a8c90 +0x22:  leave
084a8c91 +0x23:  ret
```

## 反编译 C

```c
// game_master::CGameMasterMgr::HandleRequest @ 0x84a8c6e

/* game_master::CGameMasterMgr::HandleRequest(game_master::CCommand*) */

void __thiscall game_master::CGameMasterMgr::HandleRequest(CGameMasterMgr *this,CCommand *param_1)

{
  (**(code **)**(undefined4 **)(this + 4))(*(undefined4 *)(this + 4),param_1);
  return;
}
```
