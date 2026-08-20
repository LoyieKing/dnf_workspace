# HostChangeWarRoom

`_ZN7WarRoom17HostChangeWarRoomEP5CUsercm`

`WarRoom::HostChangeWarRoom(CUser*, char, unsigned long)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086c08a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c08a6  _ZN7WarRoom17HostChangeWarRoomEP5CUsercm
#           WarRoom::HostChangeWarRoom(CUser*, char, unsigned long)
# range [0x086c08a6, 0x086c0963]
086c08a6 +0x00:  push   %ebp
086c08a7 +0x01:  mov    %esp,%ebp
086c08a9 +0x03:  push   %esi
086c08aa +0x04:  push   %ebx
086c08ab +0x05:  sub    $0x30,%esp
086c08ae +0x08:  mov    0x10(%ebp),%eax
086c08b1 +0x0b:  mov    %al,-0xc(%ebp)
086c08b4 +0x0e:  movsbl -0xc(%ebp),%edx
086c08b8 +0x12:  mov    0x8(%ebp),%eax
086c08bb +0x15:  add    $0x48,%edx
086c08be +0x18:  mov    0xc(%eax,%edx,4),%eax
086c08c2 +0x1c:  test   %eax,%eax
086c08c4 +0x1e:  je     086c0957 <+0xb1>
086c08ca +0x24:  movsbl -0xc(%ebp),%edx
086c08ce +0x28:  mov    0x8(%ebp),%eax
086c08d1 +0x2b:  add    $0x48,%edx
086c08d4 +0x2e:  mov    0xc(%eax,%edx,4),%eax
086c08d8 +0x32:  cmp    0xc(%ebp),%eax
086c08db +0x35:  jne    086c0957 <+0xb1>
086c08dd +0x37:  movsbl -0xc(%ebp),%edx
086c08e1 +0x3b:  mov    0x8(%ebp),%eax
086c08e4 +0x3e:  lea    0x4(%edx),%ecx
086c08e7 +0x41:  mov    0x14(%ebp),%edx
086c08ea +0x44:  mov    %edx,0x4(%eax,%ecx,4)
086c08ee +0x48:  mov    0x8(%ebp),%eax
086c08f1 +0x4b:  mov    0x2c(%eax),%eax
086c08f4 +0x4e:  test   %eax,%eax
086c08f6 +0x50:  jne    086c0948 <+0xa2>
086c08f8 +0x52:  movl   $0x47,0x4(%esp)
086c0900 +0x5a:  mov    0x8(%ebp),%eax
086c0903 +0x5d:  mov    %eax,(%esp)
086c0906 +0x60:  call   086c0b24 <_GLOBAL__I__ZN7WarRoomC2Ev+0x1d>  ; global constructors keyed to WarRoom::WarRoom()+0x1d
086c090b +0x65:  mov    %eax,%ebx
086c090d +0x67:  mov    0x8(%ebp),%eax
086c0910 +0x6a:  mov    0x4(%eax),%esi
086c0913 +0x6d:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
086c0918 +0x72:  movl   $0x0,0x18(%esp)
086c0920 +0x7a:  mov    %ebx,0x14(%esp)
086c0924 +0x7e:  movl   $0x5,0x10(%esp)
086c092c +0x86:  movl   $0x47,0xc(%esp)
086c0934 +0x8e:  mov    %esi,0x8(%esp)
086c0938 +0x92:  movl   $0x3,0x4(%esp)
086c0940 +0x9a:  mov    %eax,(%esp)
086c0943 +0x9d:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
086c0948 +0xa2:  mov    0x8(%ebp),%eax
086c094b +0xa5:  mov    0x2c(%eax),%eax
086c094e +0xa8:  lea    0x1(%eax),%edx
086c0951 +0xab:  mov    0x8(%ebp),%eax
086c0954 +0xae:  mov    %edx,0x2c(%eax)
086c0957 +0xb1:  mov    $0x0,%eax
086c095c +0xb6:  add    $0x30,%esp
086c095f +0xb9:  pop    %ebx
086c0960 +0xba:  pop    %esi
086c0961 +0xbb:  pop    %ebp
086c0962 +0xbc:  ret
086c0963 +0xbd:  nop
```

## 反编译 C

```c
// WarRoom::HostChangeWarRoom @ 0x86c08a6

/* WarRoom::HostChangeWarRoom(CUser*, char, unsigned long) */

undefined4 __thiscall
WarRoom::HostChangeWarRoom(WarRoom *this,CUser *param_1,char param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  if ((*(int *)(this + (param_2 + 0x48) * 4 + 0xc) != 0) &&
     (*(CUser **)(this + (param_2 + 0x48) * 4 + 0xc) == param_1)) {
    *(ulong *)(this + (param_2 + 4) * 4 + 4) = param_3;
    if (*(int *)(this + 0x2c) == 0) {
      uVar2 = GenTimerKey(this,0x47);
      uVar1 = *(undefined4 *)(this + 4);
      pTVar3 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar3,3,uVar1,0x47,5,uVar2,0);
    }
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  return 0;
}
```
