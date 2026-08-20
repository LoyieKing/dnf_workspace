# registNextTimer

`_ZN30TimerDeathTowerTopRankerReload15registNextTimerEl`

`TimerDeathTowerTopRankerReload::registNextTimer(long)`

| 类 | 地址 |
|---|---|
| `TimerDeathTowerTopRankerReload` | `0x08637854` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637854  _ZN30TimerDeathTowerTopRankerReload15registNextTimerEl
#           TimerDeathTowerTopRankerReload::registNextTimer(long)
# range [0x08637854, 0x08637935]
08637854 +0x00:  push   %ebp
08637855 +0x01:  mov    %esp,%ebp
08637857 +0x03:  push   %ebx
08637858 +0x04:  sub    $0x64,%esp
0863785b +0x07:  mov    0x8(%ebp),%eax
0863785e +0x0a:  test   %eax,%eax
08637860 +0x0c:  jne    08637884 <+0x30>
08637862 +0x0e:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08637869 +0x15:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0863786e +0x1a:  mov    %eax,%ebx
08637870 +0x1c:  movl   $0x12c,(%esp)
08637877 +0x23:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0863787c +0x28:  lea    (%ebx,%eax,1),%eax
0863787f +0x2b:  mov    %eax,0x8(%ebp)
08637882 +0x2e:  jmp    086378c4 <+0x70>
08637884 +0x30:  lea    -0x3c(%ebp),%eax
08637887 +0x33:  mov    %eax,0x4(%esp)
0863788b +0x37:  lea    0x8(%ebp),%eax
0863788e +0x3a:  mov    %eax,(%esp)
08637891 +0x3d:  call   0807e360 <_init+0xc58>
08637896 +0x42:  movl   $0x4,-0x34(%ebp)
0863789d +0x49:  movl   $0x12c,(%esp)
086378a4 +0x50:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086378a9 +0x55:  add    $0x1e,%eax
086378ac +0x58:  mov    %eax,-0x38(%ebp)
086378af +0x5b:  movl   $0x0,-0x3c(%ebp)
086378b6 +0x62:  lea    -0x3c(%ebp),%eax
086378b9 +0x65:  mov    %eax,(%esp)
086378bc +0x68:  call   0807e820 <_init+0x1118>
086378c1 +0x6d:  mov    %eax,0x8(%ebp)
086378c4 +0x70:  mov    0x8(%ebp),%ebx
086378c7 +0x73:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
086378ce +0x7a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
086378d3 +0x7f:  mov    %ebx,%edx
086378d5 +0x81:  sub    %eax,%edx
086378d7 +0x83:  mov    %edx,%eax
086378d9 +0x85:  mov    %eax,-0x10(%ebp)
086378dc +0x88:  movl   $0x1,-0xc(%ebp)
086378e3 +0x8f:  lea    -0x10(%ebp),%eax
086378e6 +0x92:  mov    %eax,0x4(%esp)
086378ea +0x96:  lea    -0xc(%ebp),%eax
086378ed +0x99:  mov    %eax,(%esp)
086378f0 +0x9c:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
086378f5 +0xa1:  mov    (%eax),%ebx
086378f7 +0xa3:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086378fc +0xa8:  movl   $0x0,0x18(%esp)
08637904 +0xb0:  movl   $0x0,0x14(%esp)
0863790c +0xb8:  mov    %ebx,0x10(%esp)
08637910 +0xbc:  movl   $0x73,0xc(%esp)
08637918 +0xc4:  movl   $0x0,0x8(%esp)
08637920 +0xcc:  movl   $0x6,0x4(%esp)
08637928 +0xd4:  mov    %eax,(%esp)
0863792b +0xd7:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08637930 +0xdc:  add    $0x64,%esp
08637933 +0xdf:  pop    %ebx
08637934 +0xe0:  pop    %ebp
08637935 +0xe1:  ret
```

## 反编译 C

```c
// TimerDeathTowerTopRankerReload::registNextTimer @ 0x8637854

/* TimerDeathTowerTopRankerReload::registNextTimer(long) */

void TimerDeathTowerTopRankerReload::registNextTimer(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  TimerQueue *pTVar5;
  tm local_40;
  int local_14 [3];
  
  if (param_1 == 0) {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    iVar3 = get_rand_int(300);
    param_1 = iVar2 + iVar3;
  }
  else {
    localtime_r(&param_1,&local_40);
    local_40.tm_hour = 4;
    local_40.tm_min = get_rand_int(300);
    local_40.tm_min = local_40.tm_min + 0x1e;
    local_40.tm_sec = 0;
    param_1 = mktime(&local_40);
  }
  lVar1 = param_1;
  local_14[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14[0] = lVar1 - local_14[0];
  local_14[1] = 1;
  piVar4 = std::max<int>(local_14 + 1,local_14);
  iVar2 = *piVar4;
  pTVar5 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar5,6,0,0x73,iVar2,0,0);
  return;
}
```
