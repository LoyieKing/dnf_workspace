# check_elevator_timer

`_ZN13CBattle_Field20check_elevator_timerEv`

`CBattle_Field::check_elevator_timer()`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830d902` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830d902  _ZN13CBattle_Field20check_elevator_timerEv
#           CBattle_Field::check_elevator_timer()
# range [0x0830d902, 0x0830d9bf]
0830d902 +0x00:  push   %ebp
0830d903 +0x01:  mov    %esp,%ebp
0830d905 +0x03:  push   %esi
0830d906 +0x04:  push   %ebx
0830d907 +0x05:  sub    $0x20,%esp
0830d90a +0x08:  mov    0x8(%ebp),%eax
0830d90d +0x0b:  movzbl 0x139(%eax),%eax
0830d914 +0x12:  lea    0x1(%eax),%edx
0830d917 +0x15:  mov    0x8(%ebp),%eax
0830d91a +0x18:  mov    %dl,0x139(%eax)
0830d920 +0x1e:  mov    0x8(%ebp),%eax
0830d923 +0x21:  movzbl 0x139(%eax),%eax
0830d92a +0x28:  cmp    $0x3,%al
0830d92c +0x2a:  jg     0830d997 <+0x95>
0830d92e +0x2c:  mov    0x8(%ebp),%eax
0830d931 +0x2f:  movzbl 0x138(%eax),%eax
0830d938 +0x36:  cmp    $0x2,%al
0830d93a +0x38:  jne    0830d997 <+0x95>
0830d93c +0x3a:  mov    0x8(%ebp),%eax
0830d93f +0x3d:  mov    (%eax),%eax
0830d941 +0x3f:  movl   $0x28,0x4(%esp)
0830d949 +0x47:  mov    %eax,(%esp)
0830d94c +0x4a:  call   0859ae76 <_ZN6CParty13gen_timer_keyE13TIMER_MESSAGE>  ; CParty::gen_timer_key(TIMER_MESSAGE)
0830d951 +0x4f:  mov    %eax,%esi
0830d953 +0x51:  mov    0x8(%ebp),%eax
0830d956 +0x54:  mov    (%eax),%eax
0830d958 +0x56:  mov    %eax,(%esp)
0830d95b +0x59:  call   0822d846 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2ef0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2ef0
0830d960 +0x5e:  mov    %eax,%ebx
0830d962 +0x60:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0830d967 +0x65:  movl   $0x0,0x18(%esp)
0830d96f +0x6d:  mov    %esi,0x14(%esp)
0830d973 +0x71:  movl   $0xf,0x10(%esp)
0830d97b +0x79:  movl   $0x28,0xc(%esp)
0830d983 +0x81:  mov    %ebx,0x8(%esp)
0830d987 +0x85:  movl   $0x1,0x4(%esp)
0830d98f +0x8d:  mov    %eax,(%esp)
0830d992 +0x90:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0830d997 +0x95:  mov    0x8(%ebp),%eax
0830d99a +0x98:  movzbl 0x138(%eax),%eax
0830d9a1 +0x9f:  cmp    $0x2,%al
0830d9a3 +0xa1:  jne    0830d9b8 <+0xb6>
0830d9a5 +0xa3:  movl   $0x0,0x4(%esp)
0830d9ad +0xab:  mov    0x8(%ebp),%eax
0830d9b0 +0xae:  mov    %eax,(%esp)
0830d9b3 +0xb1:  call   0830d848 <_ZN13CBattle_Field25send_elevator_time_packetEc>  ; CBattle_Field::send_elevator_time_packet(char)
0830d9b8 +0xb6:  add    $0x20,%esp
0830d9bb +0xb9:  pop    %ebx
0830d9bc +0xba:  pop    %esi
0830d9bd +0xbb:  pop    %ebp
0830d9be +0xbc:  ret
0830d9bf +0xbd:  nop
```

## 反编译 C

```c
// CBattle_Field::check_elevator_timer @ 0x830d902

/* CBattle_Field::check_elevator_timer() */

void __thiscall CBattle_Field::check_elevator_timer(CBattle_Field *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  TimerQueue *pTVar3;
  
  this[0x139] = (CBattle_Field)((char)this[0x139] + '\x01');
  if (((char)this[0x139] < '\x04') && (this[0x138] == (CBattle_Field)0x2)) {
    uVar1 = CParty::gen_timer_key(*(CParty **)this,0x28);
    uVar2 = CParty::GetPartyIndex(*(CParty **)this);
    pTVar3 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar3,1,uVar2,0x28,0xf,uVar1,0);
  }
  if (this[0x138] == (CBattle_Field)0x2) {
    send_elevator_time_packet(this,'\0');
  }
  return;
}
```
