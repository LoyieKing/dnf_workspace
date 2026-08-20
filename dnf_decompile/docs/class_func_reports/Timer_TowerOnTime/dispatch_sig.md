# dispatch_sig

`_ZN17Timer_TowerOnTime12dispatch_sigEiij`

`Timer_TowerOnTime::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_TowerOnTime` | `0x0863b8c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863b8c4  _ZN17Timer_TowerOnTime12dispatch_sigEiij
#           Timer_TowerOnTime::dispatch_sig(int, int, unsigned int)
# range [0x0863b8c4, 0x0863b90d]
0863b8c4 +0x00:  push   %ebp
0863b8c5 +0x01:  mov    %esp,%ebp
0863b8c7 +0x03:  sub    $0x28,%esp
0863b8ca +0x06:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
0863b8cf +0x0b:  mov    0xc(%ebp),%edx
0863b8d2 +0x0e:  mov    %edx,0x4(%esp)
0863b8d6 +0x12:  mov    %eax,(%esp)
0863b8d9 +0x15:  call   082959fa <_ZN12CGameManager12getBossTowerEi>  ; CGameManager::getBossTower(int)
0863b8de +0x1a:  mov    %eax,-0xc(%ebp)
0863b8e1 +0x1d:  cmpl   $0x0,-0xc(%ebp)
0863b8e5 +0x21:  jne    0863b8ee <+0x2a>
0863b8e7 +0x23:  mov    $0x0,%eax
0863b8ec +0x28:  jmp    0863b90c <+0x48>
0863b8ee +0x2a:  mov    0x10(%ebp),%eax
0863b8f1 +0x2d:  mov    %eax,0x8(%esp)
0863b8f5 +0x31:  mov    0x14(%ebp),%eax
0863b8f8 +0x34:  mov    %eax,0x4(%esp)
0863b8fc +0x38:  mov    -0xc(%ebp),%eax
0863b8ff +0x3b:  mov    %eax,(%esp)
0863b902 +0x3e:  call   08142cde <_ZN8WongWork10CBossTower15_onTimerProcessE13TIMER_MESSAGEj>  ; WongWork::CBossTower::_onTimerProcess(TIMER_MESSAGE, unsigned int)
0863b907 +0x43:  mov    $0x1,%eax
0863b90c +0x48:  leave
0863b90d +0x49:  ret
```

## 反编译 C

```c
// Timer_TowerOnTime::dispatch_sig @ 0x863b8c4

/* Timer_TowerOnTime::dispatch_sig(int, int, unsigned int) */

bool __thiscall
Timer_TowerOnTime::dispatch_sig(Timer_TowerOnTime *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = G_CGameManager();
  iVar1 = CGameManager::getBossTower(iVar1);
  if (iVar1 != 0) {
    WongWork::CBossTower::_onTimerProcess(iVar1,param_3,param_2);
  }
  return iVar1 != 0;
}
```
