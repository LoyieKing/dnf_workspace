# RegistNextTimer

`_ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv`

`Timer_DungeonInoutOpenTime::RegistNextTimer()`

| 类 | 地址 |
|---|---|
| `Timer_DungeonInoutOpenTime` | `0x08639b20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639b20  _ZN26Timer_DungeonInoutOpenTime15RegistNextTimerEv
#           Timer_DungeonInoutOpenTime::RegistNextTimer()
# range [0x08639b20, 0x08639e09]
08639b20 +0x000:  push   %ebp
08639b21 +0x001:  mov    %esp,%ebp
08639b23 +0x003:  push   %ebx
08639b24 +0x004:  sub    $0x84,%esp
08639b2a +0x00a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08639b31 +0x011:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08639b36 +0x016:  mov    %eax,-0x24(%ebp)
08639b39 +0x019:  lea    -0x5c(%ebp),%eax
08639b3c +0x01c:  mov    %eax,0x4(%esp)
08639b40 +0x020:  lea    -0x24(%ebp),%eax
08639b43 +0x023:  mov    %eax,(%esp)
08639b46 +0x026:  call   0807e360 <_init+0xc58>
08639b4b +0x02b:  mov    %eax,-0x20(%ebp)
08639b4e +0x02e:  mov    -0x20(%ebp),%eax
08639b51 +0x031:  mov    0x8(%eax),%eax
08639b54 +0x034:  mov    %eax,-0x18(%ebp)
08639b57 +0x037:  mov    -0x20(%ebp),%eax
08639b5a +0x03a:  mov    0x4(%eax),%eax
08639b5d +0x03d:  mov    %eax,-0x14(%ebp)
08639b60 +0x040:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08639b65 +0x045:  lea    0x130(%eax),%edx
08639b6b +0x04b:  lea    -0x28(%ebp),%eax
08639b6e +0x04e:  mov    %edx,0x4(%esp)
08639b72 +0x052:  mov    %eax,(%esp)
08639b75 +0x055:  call   0863d378 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1889>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1889
08639b7a +0x05a:  sub    $0x4,%esp
08639b7d +0x05d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08639b82 +0x062:  lea    0x130(%eax),%edx
08639b88 +0x068:  lea    -0x2c(%ebp),%eax
08639b8b +0x06b:  mov    %edx,0x4(%esp)
08639b8f +0x06f:  mov    %eax,(%esp)
08639b92 +0x072:  call   0863d330 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1841>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1841
08639b97 +0x077:  sub    $0x4,%esp
08639b9a +0x07a:  mov    -0x28(%ebp),%eax
08639b9d +0x07d:  mov    %eax,-0x30(%ebp)
08639ba0 +0x080:  jmp    08639de6 <+0x2c6>
08639ba5 +0x085:  lea    -0x30(%ebp),%eax
08639ba8 +0x088:  mov    %eax,(%esp)
08639bab +0x08b:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639bb0 +0x090:  mov    (%eax),%eax
08639bb2 +0x092:  mov    %eax,-0x10(%ebp)
08639bb5 +0x095:  lea    -0x30(%ebp),%eax
08639bb8 +0x098:  mov    %eax,(%esp)
08639bbb +0x09b:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639bc0 +0x0a0:  mov    0x4(%eax),%eax
08639bc3 +0x0a3:  cmp    -0x18(%ebp),%eax
08639bc6 +0x0a6:  jg     08639c08 <+0xe8>
08639bc8 +0x0a8:  lea    -0x30(%ebp),%eax
08639bcb +0x0ab:  mov    %eax,(%esp)
08639bce +0x0ae:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639bd3 +0x0b3:  mov    0x8(%eax),%eax
08639bd6 +0x0b6:  cmp    -0x18(%ebp),%eax
08639bd9 +0x0b9:  jl     08639c08 <+0xe8>
08639bdb +0x0bb:  lea    -0x30(%ebp),%eax
08639bde +0x0be:  mov    %eax,(%esp)
08639be1 +0x0c1:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639be6 +0x0c6:  mov    0xc(%eax),%eax
08639be9 +0x0c9:  cmp    -0x14(%ebp),%eax
08639bec +0x0cc:  jg     08639c08 <+0xe8>
08639bee +0x0ce:  lea    -0x30(%ebp),%eax
08639bf1 +0x0d1:  mov    %eax,(%esp)
08639bf4 +0x0d4:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639bf9 +0x0d9:  mov    0x10(%eax),%eax
08639bfc +0x0dc:  cmp    -0x14(%ebp),%eax
08639bff +0x0df:  jl     08639c08 <+0xe8>
08639c01 +0x0e1:  mov    $0x1,%eax
08639c06 +0x0e6:  jmp    08639c0d <+0xed>
08639c08 +0x0e8:  mov    $0x0,%eax
08639c0d +0x0ed:  test   %al,%al
08639c0f +0x0ef:  je     08639c41 <+0x121>
08639c11 +0x0f1:  mov    -0x20(%ebp),%eax
08639c14 +0x0f4:  movl   $0x0,0x8(%eax)
08639c1b +0x0fb:  mov    -0x20(%ebp),%eax
08639c1e +0x0fe:  movl   $0x0,0x4(%eax)
08639c25 +0x105:  mov    -0x20(%ebp),%eax
08639c28 +0x108:  movl   $0x0,(%eax)
08639c2e +0x10e:  mov    -0x20(%ebp),%eax
08639c31 +0x111:  mov    %eax,(%esp)
08639c34 +0x114:  call   0807e820 <_init+0x1118>
08639c39 +0x119:  mov    %eax,-0x1c(%ebp)
08639c3c +0x11c:  jmp    08639d84 <+0x264>
08639c41 +0x121:  lea    -0x30(%ebp),%eax
08639c44 +0x124:  mov    %eax,(%esp)
08639c47 +0x127:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639c4c +0x12c:  mov    0x4(%eax),%eax
08639c4f +0x12f:  cmp    -0x18(%ebp),%eax
08639c52 +0x132:  jge    08639ca0 <+0x180>
08639c54 +0x134:  lea    -0x30(%ebp),%eax
08639c57 +0x137:  mov    %eax,(%esp)
08639c5a +0x13a:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639c5f +0x13f:  mov    0x8(%eax),%eax
08639c62 +0x142:  cmp    -0x18(%ebp),%eax
08639c65 +0x145:  jl     08639c7a <+0x15a>
08639c67 +0x147:  lea    -0x30(%ebp),%eax
08639c6a +0x14a:  mov    %eax,(%esp)
08639c6d +0x14d:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639c72 +0x152:  mov    0xc(%eax),%eax
08639c75 +0x155:  cmp    -0x14(%ebp),%eax
08639c78 +0x158:  jg     08639ca0 <+0x180>
08639c7a +0x15a:  lea    -0x30(%ebp),%eax
08639c7d +0x15d:  mov    %eax,(%esp)
08639c80 +0x160:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639c85 +0x165:  mov    0x8(%eax),%eax
08639c88 +0x168:  cmp    -0x18(%ebp),%eax
08639c8b +0x16b:  jl     08639ca7 <+0x187>
08639c8d +0x16d:  lea    -0x30(%ebp),%eax
08639c90 +0x170:  mov    %eax,(%esp)
08639c93 +0x173:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639c98 +0x178:  mov    0x10(%eax),%eax
08639c9b +0x17b:  cmp    -0x14(%ebp),%eax
08639c9e +0x17e:  jge    08639ca7 <+0x187>
08639ca0 +0x180:  mov    $0x1,%eax
08639ca5 +0x185:  jmp    08639cac <+0x18c>
08639ca7 +0x187:  mov    $0x0,%eax
08639cac +0x18c:  test   %al,%al
08639cae +0x18e:  je     08639d3e <+0x21e>
08639cb4 +0x194:  lea    -0x30(%ebp),%eax
08639cb7 +0x197:  mov    %eax,(%esp)
08639cba +0x19a:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639cbf +0x19f:  mov    0x4(%eax),%eax
08639cc2 +0x1a2:  cmp    -0x18(%ebp),%eax
08639cc5 +0x1a5:  setg   %al
08639cc8 +0x1a8:  test   %al,%al
08639cca +0x1aa:  je     08639ce2 <+0x1c2>
08639ccc +0x1ac:  lea    -0x30(%ebp),%eax
08639ccf +0x1af:  mov    %eax,(%esp)
08639cd2 +0x1b2:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639cd7 +0x1b7:  mov    0x4(%eax),%edx
08639cda +0x1ba:  mov    -0x20(%ebp),%eax
08639cdd +0x1bd:  mov    %edx,0x8(%eax)
08639ce0 +0x1c0:  jmp    08639d11 <+0x1f1>
08639ce2 +0x1c2:  lea    -0x30(%ebp),%eax
08639ce5 +0x1c5:  mov    %eax,(%esp)
08639ce8 +0x1c8:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639ced +0x1cd:  mov    0xc(%eax),%eax
08639cf0 +0x1d0:  cmp    -0x14(%ebp),%eax
08639cf3 +0x1d3:  setg   %al
08639cf6 +0x1d6:  test   %al,%al
08639cf8 +0x1d8:  je     08639d05 <+0x1e5>
08639cfa +0x1da:  mov    -0x20(%ebp),%eax
08639cfd +0x1dd:  mov    -0x18(%ebp),%edx
08639d00 +0x1e0:  mov    %edx,0x8(%eax)
08639d03 +0x1e3:  jmp    08639d11 <+0x1f1>
08639d05 +0x1e5:  mov    -0x18(%ebp),%eax
08639d08 +0x1e8:  lea    0x1(%eax),%edx
08639d0b +0x1eb:  mov    -0x20(%ebp),%eax
08639d0e +0x1ee:  mov    %edx,0x8(%eax)
08639d11 +0x1f1:  lea    -0x30(%ebp),%eax
08639d14 +0x1f4:  mov    %eax,(%esp)
08639d17 +0x1f7:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639d1c +0x1fc:  mov    0xc(%eax),%edx
08639d1f +0x1ff:  mov    -0x20(%ebp),%eax
08639d22 +0x202:  mov    %edx,0x4(%eax)
08639d25 +0x205:  mov    -0x20(%ebp),%eax
08639d28 +0x208:  movl   $0x0,(%eax)
08639d2e +0x20e:  mov    -0x20(%ebp),%eax
08639d31 +0x211:  mov    %eax,(%esp)
08639d34 +0x214:  call   0807e820 <_init+0x1118>
08639d39 +0x219:  mov    %eax,-0x1c(%ebp)
08639d3c +0x21c:  jmp    08639d84 <+0x264>
08639d3e +0x21e:  lea    -0x30(%ebp),%eax
08639d41 +0x221:  mov    %eax,(%esp)
08639d44 +0x224:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639d49 +0x229:  mov    0x4(%eax),%edx
08639d4c +0x22c:  mov    -0x20(%ebp),%eax
08639d4f +0x22f:  mov    %edx,0x8(%eax)
08639d52 +0x232:  lea    -0x30(%ebp),%eax
08639d55 +0x235:  mov    %eax,(%esp)
08639d58 +0x238:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639d5d +0x23d:  mov    0xc(%eax),%edx
08639d60 +0x240:  mov    -0x20(%ebp),%eax
08639d63 +0x243:  mov    %edx,0x4(%eax)
08639d66 +0x246:  mov    -0x20(%ebp),%eax
08639d69 +0x249:  movl   $0x0,(%eax)
08639d6f +0x24f:  mov    -0x20(%ebp),%eax
08639d72 +0x252:  mov    %eax,(%esp)
08639d75 +0x255:  call   0807e820 <_init+0x1118>
08639d7a +0x25a:  mov    %eax,-0x1c(%ebp)
08639d7d +0x25d:  addl   $&_ZL14gUnicodeBuffer+0xac54,-0x1c(%ebp)
08639d84 +0x264:  mov    -0x24(%ebp),%eax
08639d87 +0x267:  mov    -0x1c(%ebp),%edx
08639d8a +0x26a:  mov    %edx,%ecx
08639d8c +0x26c:  sub    %eax,%ecx
08639d8e +0x26e:  mov    %ecx,%eax
08639d90 +0x270:  mov    %eax,-0xc(%ebp)
08639d93 +0x273:  cmpl   $0x0,-0xc(%ebp)
08639d97 +0x277:  jns    08639da0 <+0x280>
08639d99 +0x279:  movl   $0x0,-0xc(%ebp)
08639da0 +0x280:  mov    -0x10(%ebp),%ebx
08639da3 +0x283:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08639da8 +0x288:  mov    %ebx,0x18(%esp)
08639dac +0x28c:  movl   $0x0,0x14(%esp)
08639db4 +0x294:  mov    -0xc(%ebp),%edx
08639db7 +0x297:  mov    %edx,0x10(%esp)
08639dbb +0x29b:  movl   $0x93,0xc(%esp)
08639dc3 +0x2a3:  movl   $0x0,0x8(%esp)
08639dcb +0x2ab:  movl   $0x2,0x4(%esp)
08639dd3 +0x2b3:  mov    %eax,(%esp)
08639dd6 +0x2b6:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08639ddb +0x2bb:  lea    -0x30(%ebp),%eax
08639dde +0x2be:  mov    %eax,(%esp)
08639de1 +0x2c1:  call   0863d39e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x18af>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x18af
08639de6 +0x2c6:  lea    -0x2c(%ebp),%eax
08639de9 +0x2c9:  mov    %eax,0x4(%esp)
08639ded +0x2cd:  lea    -0x30(%ebp),%eax
08639df0 +0x2d0:  mov    %eax,(%esp)
08639df3 +0x2d3:  call   0863d356 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1867>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1867
08639df8 +0x2d8:  test   %al,%al
08639dfa +0x2da:  jne    08639ba5 <+0x85>
08639e00 +0x2e0:  mov    $0x1,%eax
08639e05 +0x2e5:  mov    -0x4(%ebp),%ebx
08639e08 +0x2e8:  leave
08639e09 +0x2e9:  ret
```

## 反编译 C

```c
// Timer_DungeonInoutOpenTime::RegistNextTimer @ 0x8639b20

/* Timer_DungeonInoutOpenTime::RegistNextTimer() */

undefined4 Timer_DungeonInoutOpenTime::RegistNextTimer(void)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  time_t tVar6;
  TimerQueue *pTVar7;
  tm local_60;
  undefined4 local_34;
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  local_30 [4];
  undefined4 local_2c;
  int local_28;
  tm *local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = localtime_r(&local_28,&local_60);
  local_1c = local_24->tm_hour;
  local_18 = local_24->tm_min;
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::begin((map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
           *)&local_2c);
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::end(local_30);
  local_34 = local_2c;
  do {
    cVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34,
                       (_Rb_tree_iterator *)local_30);
    if (cVar3 == '\0') {
      return 1;
    }
    puVar4 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
    local_14 = *puVar4;
    iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
    if (local_1c < *(int *)(iVar5 + 4)) {
LAB_08639c08:
      bVar1 = false;
    }
    else {
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
      if (*(int *)(iVar5 + 8) < local_1c) goto LAB_08639c08;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
      if (local_18 < *(int *)(iVar5 + 0xc)) goto LAB_08639c08;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
      if (*(int *)(iVar5 + 0x10) < local_18) goto LAB_08639c08;
      bVar1 = true;
    }
    if (bVar1) {
      local_24->tm_hour = 0;
      local_24->tm_min = 0;
      local_24->tm_sec = 0;
      local_20 = mktime(local_24);
    }
    else {
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
      if (*(int *)(iVar5 + 4) < local_1c) {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        if (local_1c <= *(int *)(iVar5 + 8)) {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34
                            );
          if (local_18 < *(int *)(iVar5 + 0xc)) goto LAB_08639ca0;
        }
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        if (local_1c <= *(int *)(iVar5 + 8)) {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34
                            );
          if (*(int *)(iVar5 + 0x10) < local_18) goto LAB_08639ca0;
        }
        bVar1 = false;
      }
      else {
LAB_08639ca0:
        bVar1 = true;
      }
      if (bVar1) {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        if (local_1c < *(int *)(iVar5 + 4)) {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34
                            );
          local_24->tm_hour = *(int *)(iVar5 + 4);
        }
        else {
          iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34
                            );
          if (local_18 < *(int *)(iVar5 + 0xc)) {
            local_24->tm_hour = local_1c;
          }
          else {
            local_24->tm_hour = local_1c + 1;
          }
        }
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        local_24->tm_min = *(int *)(iVar5 + 0xc);
        local_24->tm_sec = 0;
        local_20 = mktime(local_24);
      }
      else {
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        local_24->tm_hour = *(int *)(iVar5 + 4);
        iVar5 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
        local_24->tm_min = *(int *)(iVar5 + 0xc);
        local_24->tm_sec = 0;
        tVar6 = mktime(local_24);
        local_20 = tVar6 + 0x15180;
      }
    }
    uVar2 = local_14;
    local_10 = local_20 - local_28;
    if (local_10 < 0) {
      local_10 = 0;
    }
    pTVar7 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar7,2,0,0x93,local_10,0,uVar2);
    std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> *)&local_34);
  } while( true );
}
```
