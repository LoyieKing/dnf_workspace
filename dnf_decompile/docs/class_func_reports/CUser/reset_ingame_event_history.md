# reset_ingame_event_history

`_ZN5CUser26reset_ingame_event_historyEv`

`CUser::reset_ingame_event_history()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d750` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d750  _ZN5CUser26reset_ingame_event_historyEv
#           CUser::reset_ingame_event_history()
# range [0x0868d750, 0x0868d767]
0868d750 +0x00:  push   %ebp
0868d751 +0x01:  mov    %esp,%ebp
0868d753 +0x03:  sub    $0x18,%esp
0868d756 +0x06:  mov    0x8(%ebp),%eax
0868d759 +0x09:  add    $0x8eb68,%eax
0868d75e +0x0e:  mov    %eax,(%esp)
0868d761 +0x11:  call   080ec0a4 <_GLOBAL__I__ZN20CraneMinigameManagerC2Ev+0x9b>  ; global constructors keyed to CraneMinigameManager::CraneMinigameManager()+0x9b
0868d766 +0x16:  leave
0868d767 +0x17:  ret
```

## 反编译 C

```c
// CUser::reset_ingame_event_history @ 0x868d750

/* CUser::reset_ingame_event_history() */

void __thiscall CUser::reset_ingame_event_history(CUser *this)

{
  std::
  map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
  ::clear((map<int,std::pair<int,int>,std::less<int>,std::allocator<std::pair<int_const,std::pair<int,int>>>>
           *)(this + 0x8eb68));
  return;
}
```
