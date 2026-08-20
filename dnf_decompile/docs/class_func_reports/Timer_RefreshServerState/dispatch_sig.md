# dispatch_sig

`_ZN24Timer_RefreshServerState12dispatch_sigEiij`

`Timer_RefreshServerState::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_RefreshServerState` | `0x0863b90e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b90e  _ZN24Timer_RefreshServerState12dispatch_sigEiij
#           Timer_RefreshServerState::dispatch_sig(int, int, unsigned int)
# range [0x0863b90e, 0x0863b927]
0863b90e +0x00:  push   %ebp
0863b90f +0x01:  mov    %esp,%ebp
0863b911 +0x03:  sub    $0x18,%esp
0863b914 +0x06:  mov    &_ZN10GlobalData21s_serverStateManager_E,%eax
0863b919 +0x0b:  mov    %eax,(%esp)
0863b91c +0x0e:  call   081a95dc <_ZN4ARAD23Arad_ServerStateManager13checkContinusEv>  ; ARAD::Arad_ServerStateManager::checkContinus()
0863b921 +0x13:  mov    $0x1,%eax
0863b926 +0x18:  leave
0863b927 +0x19:  ret
```

## 反编译 C

```c
// Timer_RefreshServerState::dispatch_sig @ 0x863b90e

/* Timer_RefreshServerState::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_RefreshServerState::dispatch_sig(int param_1,int param_2,uint param_3)

{
  ARAD::Arad_ServerStateManager::checkContinus(GlobalData::s_serverStateManager_);
  return 1;
}
```
