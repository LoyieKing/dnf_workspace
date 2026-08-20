# checkDungeonInoutTime

`_ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi`

`Timer_DungeonInoutOpenTime::checkDungeonInoutTime(int)`

| 类 | 地址 |
|---|---|
| `Timer_DungeonInoutOpenTime` | `0x08639a12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639a12  _ZN26Timer_DungeonInoutOpenTime21checkDungeonInoutTimeEi
#           Timer_DungeonInoutOpenTime::checkDungeonInoutTime(int)
# range [0x08639a12, 0x08639b1f]
08639a12 +0x000:  push   %ebp
08639a13 +0x001:  mov    %esp,%ebp
08639a15 +0x003:  sub    $0x68,%esp
08639a18 +0x006:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08639a1f +0x00d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08639a24 +0x012:  mov    %eax,-0x20(%ebp)
08639a27 +0x015:  lea    -0x50(%ebp),%eax
08639a2a +0x018:  mov    %eax,0x4(%esp)
08639a2e +0x01c:  lea    -0x20(%ebp),%eax
08639a31 +0x01f:  mov    %eax,(%esp)
08639a34 +0x022:  call   0807e360 <_init+0xc58>
08639a39 +0x027:  mov    %eax,-0x18(%ebp)
08639a3c +0x02a:  mov    -0x18(%ebp),%eax
08639a3f +0x02d:  mov    0x8(%eax),%eax
08639a42 +0x030:  mov    %eax,-0x14(%ebp)
08639a45 +0x033:  mov    -0x18(%ebp),%eax
08639a48 +0x036:  mov    0x4(%eax),%eax
08639a4b +0x039:  mov    %eax,-0x10(%ebp)
08639a4e +0x03c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08639a53 +0x041:  lea    0x130(%eax),%edx
08639a59 +0x047:  lea    -0x24(%ebp),%eax
08639a5c +0x04a:  lea    0x8(%ebp),%ecx
08639a5f +0x04d:  mov    %ecx,0x8(%esp)
08639a63 +0x051:  mov    %edx,0x4(%esp)
08639a67 +0x055:  mov    %eax,(%esp)
08639a6a +0x058:  call   0863d304 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1815>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1815
08639a6f +0x05d:  sub    $0x4,%esp
08639a72 +0x060:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08639a77 +0x065:  lea    0x130(%eax),%edx
08639a7d +0x06b:  lea    -0x1c(%ebp),%eax
08639a80 +0x06e:  mov    %edx,0x4(%esp)
08639a84 +0x072:  mov    %eax,(%esp)
08639a87 +0x075:  call   0863d330 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1841>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1841
08639a8c +0x07a:  sub    $0x4,%esp
08639a8f +0x07d:  lea    -0x1c(%ebp),%eax
08639a92 +0x080:  mov    %eax,0x4(%esp)
08639a96 +0x084:  lea    -0x24(%ebp),%eax
08639a99 +0x087:  mov    %eax,(%esp)
08639a9c +0x08a:  call   0863d356 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1867>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1867
08639aa1 +0x08f:  test   %al,%al
08639aa3 +0x091:  je     08639b18 <+0x106>
08639aa5 +0x093:  lea    -0x24(%ebp),%eax
08639aa8 +0x096:  mov    %eax,(%esp)
08639aab +0x099:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639ab0 +0x09e:  mov    (%eax),%eax
08639ab2 +0x0a0:  mov    %eax,-0xc(%ebp)
08639ab5 +0x0a3:  lea    -0x24(%ebp),%eax
08639ab8 +0x0a6:  mov    %eax,(%esp)
08639abb +0x0a9:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639ac0 +0x0ae:  mov    0x4(%eax),%eax
08639ac3 +0x0b1:  cmp    -0x14(%ebp),%eax
08639ac6 +0x0b4:  jg     08639b08 <+0xf6>
08639ac8 +0x0b6:  lea    -0x24(%ebp),%eax
08639acb +0x0b9:  mov    %eax,(%esp)
08639ace +0x0bc:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639ad3 +0x0c1:  mov    0x8(%eax),%eax
08639ad6 +0x0c4:  cmp    -0x14(%ebp),%eax
08639ad9 +0x0c7:  jl     08639b08 <+0xf6>
08639adb +0x0c9:  lea    -0x24(%ebp),%eax
08639ade +0x0cc:  mov    %eax,(%esp)
08639ae1 +0x0cf:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639ae6 +0x0d4:  mov    0xc(%eax),%eax
08639ae9 +0x0d7:  cmp    -0x10(%ebp),%eax
08639aec +0x0da:  jg     08639b08 <+0xf6>
08639aee +0x0dc:  lea    -0x24(%ebp),%eax
08639af1 +0x0df:  mov    %eax,(%esp)
08639af4 +0x0e2:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639af9 +0x0e7:  mov    0x10(%eax),%eax
08639afc +0x0ea:  cmp    -0x10(%ebp),%eax
08639aff +0x0ed:  jle    08639b08 <+0xf6>
08639b01 +0x0ef:  mov    $0x1,%eax
08639b06 +0x0f4:  jmp    08639b0d <+0xfb>
08639b08 +0x0f6:  mov    $0x0,%eax
08639b0d +0x0fb:  test   %al,%al
08639b0f +0x0fd:  je     08639b18 <+0x106>
08639b11 +0x0ff:  mov    $0x1,%eax
08639b16 +0x104:  jmp    08639b1d <+0x10b>
08639b18 +0x106:  mov    $0x0,%eax
08639b1d +0x10b:  leave
08639b1e +0x10c:  ret
08639b1f +0x10d:  nop
```

## 反编译 C

```c
// Timer_DungeonInoutOpenTime::checkDungeonInoutTime @ 0x8639a12

/* Timer_DungeonInoutOpenTime::checkDungeonInoutTime(int) */

undefined4 Timer_DungeonInoutOpenTime::checkDungeonInoutTime(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  tm local_54;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> local_28 [4];
  time_t local_24;
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  local_20 [4];
  tm *local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_1c = localtime_r(&local_24,&local_54);
  local_18 = local_1c->tm_hour;
  local_14 = local_1c->tm_min;
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::find((int *)local_28);
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::end(local_20);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator!=
                    (local_28,(_Rb_tree_iterator *)local_20);
  if (cVar2 != '\0') {
    puVar3 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_28);
    local_10 = *puVar3;
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_28);
    if ((((local_18 < *(int *)(iVar4 + 4)) ||
         (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                            (local_28), *(int *)(iVar4 + 8) < local_18)) ||
        (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                           (local_28), local_14 < *(int *)(iVar4 + 0xc))) ||
       (iVar4 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->
                          (local_28), *(int *)(iVar4 + 0x10) <= local_14)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}
```
