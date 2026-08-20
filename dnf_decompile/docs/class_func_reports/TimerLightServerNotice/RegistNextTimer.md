# RegistNextTimer

`_ZN22TimerLightServerNotice15RegistNextTimerEi`

`TimerLightServerNotice::RegistNextTimer(int)`

| 类 | 地址 |
|---|---|
| `TimerLightServerNotice` | `0x08636c14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636c14  _ZN22TimerLightServerNotice15RegistNextTimerEi
#           TimerLightServerNotice::RegistNextTimer(int)
# range [0x08636c14, 0x08636d09]
08636c14 +0x00:  push   %ebp
08636c15 +0x01:  mov    %esp,%ebp
08636c17 +0x03:  push   %ebx
08636c18 +0x04:  sub    $0x64,%esp
08636c1b +0x07:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08636c22 +0x0e:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08636c27 +0x13:  mov    %eax,-0x1c(%ebp)
08636c2a +0x16:  lea    -0x48(%ebp),%eax
08636c2d +0x19:  mov    %eax,0x4(%esp)
08636c31 +0x1d:  lea    -0x1c(%ebp),%eax
08636c34 +0x20:  mov    %eax,(%esp)
08636c37 +0x23:  call   0807e360 <_init+0xc58>
08636c3c +0x28:  mov    %eax,-0x18(%ebp)
08636c3f +0x2b:  mov    -0x18(%ebp),%eax
08636c42 +0x2e:  mov    0x8(%eax),%eax
08636c45 +0x31:  mov    %eax,-0x14(%ebp)
08636c48 +0x34:  mov    0xc(%ebp),%ebx
08636c4b +0x37:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08636c50 +0x3c:  add    $0xa4,%eax
08636c55 +0x41:  mov    %ebx,0x4(%esp)
08636c59 +0x45:  mov    %eax,(%esp)
08636c5c +0x48:  call   0863d292 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17a3
08636c61 +0x4d:  mov    (%eax),%edx
08636c63 +0x4f:  mov    -0x18(%ebp),%eax
08636c66 +0x52:  mov    %edx,0x8(%eax)
08636c69 +0x55:  mov    0xc(%ebp),%ebx
08636c6c +0x58:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08636c71 +0x5d:  add    $0xa4,%eax
08636c76 +0x62:  mov    %ebx,0x4(%esp)
08636c7a +0x66:  mov    %eax,(%esp)
08636c7d +0x69:  call   0863d292 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17a3
08636c82 +0x6e:  mov    0x4(%eax),%edx
08636c85 +0x71:  mov    -0x18(%ebp),%eax
08636c88 +0x74:  mov    %edx,0x4(%eax)
08636c8b +0x77:  mov    -0x18(%ebp),%eax
08636c8e +0x7a:  movl   $0x0,(%eax)
08636c94 +0x80:  mov    -0x18(%ebp),%eax
08636c97 +0x83:  mov    %eax,(%esp)
08636c9a +0x86:  call   0807e820 <_init+0x1118>
08636c9f +0x8b:  mov    %eax,-0x10(%ebp)
08636ca2 +0x8e:  mov    -0x18(%ebp),%eax
08636ca5 +0x91:  mov    0x8(%eax),%eax
08636ca8 +0x94:  cmp    -0x14(%ebp),%eax
08636cab +0x97:  jg     08636cb4 <+0xa0>
08636cad +0x99:  addl   $&_ZL14gUnicodeBuffer+0xac54,-0x10(%ebp)
08636cb4 +0xa0:  mov    -0x1c(%ebp),%eax
08636cb7 +0xa3:  mov    -0x10(%ebp),%edx
08636cba +0xa6:  mov    %edx,%ecx
08636cbc +0xa8:  sub    %eax,%ecx
08636cbe +0xaa:  mov    %ecx,%eax
08636cc0 +0xac:  mov    %eax,-0xc(%ebp)
08636cc3 +0xaf:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08636cc8 +0xb4:  movl   $0x0,0x18(%esp)
08636cd0 +0xbc:  mov    0xc(%ebp),%edx
08636cd3 +0xbf:  mov    %edx,0x14(%esp)
08636cd7 +0xc3:  mov    -0xc(%ebp),%edx
08636cda +0xc6:  mov    %edx,0x10(%esp)
08636cde +0xca:  movl   $0x68,0xc(%esp)
08636ce6 +0xd2:  movl   $0x0,0x8(%esp)
08636cee +0xda:  movl   $0x2,0x4(%esp)
08636cf6 +0xe2:  mov    %eax,(%esp)
08636cf9 +0xe5:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08636cfe +0xea:  mov    $0x1,%eax
08636d03 +0xef:  add    $0x64,%esp
08636d06 +0xf2:  pop    %ebx
08636d07 +0xf3:  pop    %ebp
08636d08 +0xf4:  ret
08636d09 +0xf5:  nop
```

## 反编译 C

```c
// TimerLightServerNotice::RegistNextTimer @ 0x8636c14

/* TimerLightServerNotice::RegistNextTimer(int) */

undefined4 __thiscall
TimerLightServerNotice::RegistNextTimer(TimerLightServerNotice *this,int param_1)

{
  int iVar1;
  int *piVar2;
  TimerQueue *pTVar3;
  tm local_4c;
  int local_20;
  tm *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_20,&local_4c);
  local_18 = local_1c->tm_hour;
  iVar1 = G_CDataManager();
  piVar2 = (int *)std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::
                  operator[]((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                             (iVar1 + 0xa4),param_1);
  local_1c->tm_hour = *piVar2;
  iVar1 = G_CDataManager();
  iVar1 = std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::operator[]
                    ((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                     (iVar1 + 0xa4),param_1);
  local_1c->tm_min = *(int *)(iVar1 + 4);
  local_1c->tm_sec = 0;
  local_14 = mktime(local_1c);
  if (local_1c->tm_hour <= local_18) {
    local_14 = local_14 + 0x15180;
  }
  local_10 = local_14 - local_20;
  pTVar3 = (TimerQueue *)G_TimerQueue();
  TimerQueue::InsertTimer(pTVar3,2,0,0x68,local_10,param_1,0);
  return 1;
}
```
