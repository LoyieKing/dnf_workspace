# loadData

`_ZN13TOD_UserState8loadDataEP5CUserPc`

`TOD_UserState::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x086434fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086434fc  _ZN13TOD_UserState8loadDataEP5CUserPc
#           TOD_UserState::loadData(CUser*, char*)
# range [0x086434fc, 0x086435c9]
086434fc +0x00:  push   %ebp
086434fd +0x01:  mov    %esp,%ebp
086434ff +0x03:  push   %esi
08643500 +0x04:  push   %ebx
08643501 +0x05:  sub    $0x20,%esp
08643504 +0x08:  mov    0x8(%ebp),%eax
08643507 +0x0b:  mov    (%eax),%eax
08643509 +0x0d:  add    $0x1c,%eax
0864350c +0x10:  mov    (%eax),%edx
0864350e +0x12:  mov    0x8(%ebp),%eax
08643511 +0x15:  mov    %eax,(%esp)
08643514 +0x18:  call   *%edx
08643516 +0x1a:  mov    0x10(%ebp),%eax
08643519 +0x1d:  mov    %eax,-0xc(%ebp)
0864351c +0x20:  mov    0x8(%ebp),%eax
0864351f +0x23:  mov    -0xc(%ebp),%edx
08643522 +0x26:  mov    (%edx),%ecx
08643524 +0x28:  mov    %ecx,0x8(%eax)
08643527 +0x2b:  mov    0x4(%edx),%ecx
0864352a +0x2e:  mov    %ecx,0xc(%eax)
0864352d +0x31:  mov    0x8(%edx),%ecx
08643530 +0x34:  mov    %ecx,0x10(%eax)
08643533 +0x37:  mov    0xc(%edx),%ecx
08643536 +0x3a:  mov    %ecx,0x14(%eax)
08643539 +0x3d:  mov    0x10(%edx),%ecx
0864353c +0x40:  mov    %ecx,0x18(%eax)
0864353f +0x43:  mov    0x14(%edx),%edx
08643542 +0x46:  mov    %edx,0x1c(%eax)
08643545 +0x49:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0864354c +0x50:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08643551 +0x55:  mov    %eax,%esi
08643553 +0x57:  mov    0xc(%ebp),%eax
08643556 +0x5a:  mov    %eax,(%esp)
08643559 +0x5d:  call   082a66aa <_GLOBAL__I__ZN4CLog5this_E+0x2ad1>  ; global constructors keyed to CLog::this_+0x2ad1
0864355e +0x62:  mov    %eax,%ebx
08643560 +0x64:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08643565 +0x69:  mov    0x37c(%eax),%eax
0864356b +0x6f:  mov    %esi,0x8(%esp)
0864356f +0x73:  mov    %ebx,0x4(%esp)
08643573 +0x77:  mov    %eax,(%esp)
08643576 +0x7a:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
0864357b +0x7f:  test   %al,%al
0864357d +0x81:  je     08643591 <+0x95>
0864357f +0x83:  mov    0x8(%ebp),%eax
08643582 +0x86:  mov    (%eax),%eax
08643584 +0x88:  add    $0xc,%eax
08643587 +0x8b:  mov    (%eax),%edx
08643589 +0x8d:  mov    0x8(%ebp),%eax
0864358c +0x90:  mov    %eax,(%esp)
0864358f +0x93:  call   *%edx
08643591 +0x95:  mov    0x8(%ebp),%eax
08643594 +0x98:  movzwl 0x16(%eax),%eax
08643598 +0x9c:  test   %ax,%ax
0864359b +0x9f:  je     086435be <+0xc2>
0864359d +0xa1:  mov    0x8(%ebp),%eax
086435a0 +0xa4:  mov    0x18(%eax),%eax
086435a3 +0xa7:  cmp    $0x4e275df0,%eax
086435a8 +0xac:  jg     086435b3 <+0xb7>
086435aa +0xae:  mov    0x8(%ebp),%eax
086435ad +0xb1:  movw   $0x0,0x16(%eax)
086435b3 +0xb7:  mov    0x8(%ebp),%eax
086435b6 +0xba:  mov    %eax,(%esp)
086435b9 +0xbd:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
086435be +0xc2:  mov    $0x1,%eax
086435c3 +0xc7:  add    $0x20,%esp
086435c6 +0xca:  pop    %ebx
086435c7 +0xcb:  pop    %esi
086435c8 +0xcc:  pop    %ebp
086435c9 +0xcd:  ret
```

## 反编译 C

```c
// TOD_UserState::loadData @ 0x86434fc

/* TOD_UserState::loadData(CUser*, char*) */

undefined4 __thiscall TOD_UserState::loadData(TOD_UserState *this,CUser *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  *(undefined4 *)(this + 8) = *(undefined4 *)param_2;
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_2 + 0x14);
  lVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  lVar3 = CUserCharacInfo::getCurCharacLastPlayTick((CUserCharacInfo *)param_1);
  iVar4 = G_CEnvironment();
  cVar1 = CheckDailyScheduleTime(*(int *)(iVar4 + 0x37c),lVar3,lVar2);
  if (cVar1 != '\0') {
    (**(code **)(*(int *)this + 0xc))(this);
  }
  if (*(short *)(this + 0x16) != 0) {
    if (*(int *)(this + 0x18) < 0x4e275df1) {
      *(undefined2 *)(this + 0x16) = 0;
    }
    charac_expand::CData::alter((CData *)this);
  }
  return 1;
}
```
