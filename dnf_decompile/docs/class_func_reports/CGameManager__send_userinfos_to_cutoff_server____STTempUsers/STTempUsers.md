# STTempUsers

`_ZZN12CGameManager31send_userinfos_to_cutoff_serverEvEN11STTempUsersC1Ev`

`CGameManager::send_userinfos_to_cutoff_server()::STTempUsers::STTempUsers()`

| 类 | 地址 |
|---|---|
| `CGameManager::send_userinfos_to_cutoff_server()::STTempUsers` | `0x08295e76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08295e76  _ZZN12CGameManager31send_userinfos_to_cutoff_serverEvEN11STTempUsersC1Ev
#           CGameManager::send_userinfos_to_cutoff_server()::STTempUsers::STTempUsers()
# range [0x08295e76, 0x08295e83]
08295e76 +0x00:  push   %ebp
08295e77 +0x01:  mov    %esp,%ebp
08295e79 +0x03:  mov    0x8(%ebp),%eax
08295e7c +0x06:  movw   $0x0,(%eax)
08295e81 +0x0b:  pop    %ebp
08295e82 +0x0c:  ret
08295e83 +0x0d:  nop
```

## 反编译 C

```c
// CGameManager::send_userinfos_to_cutoff_server @ 0x8295e76

/* STTempUsers() */

void __thiscall
CGameManager::send_userinfos_to_cutoff_server()::STTempUsers::STTempUsers(STTempUsers *this)

{
  *(undefined2 *)this = 0;
  return;
}
```
