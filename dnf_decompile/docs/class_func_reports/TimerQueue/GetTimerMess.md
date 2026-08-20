# GetTimerMess

`_ZN10TimerQueue12GetTimerMessER10TimerEntry`

`TimerQueue::GetTimerMess(TimerEntry&)`

| 类 | 地址 |
|---|---|
| `TimerQueue` | `0x08630ecc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630ecc  _ZN10TimerQueue12GetTimerMessER10TimerEntry
#           TimerQueue::GetTimerMess(TimerEntry&)
# range [0x08630ecc, 0x0863101d]
08630ecc +0x000:  push   %ebp
08630ecd +0x001:  mov    %esp,%ebp
08630ecf +0x003:  push   %esi
08630ed0 +0x004:  push   %ebx
08630ed1 +0x005:  sub    $0x30,%esp
08630ed4 +0x008:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08630edb +0x00f:  call   081458ac <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x32f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x32f
08630ee0 +0x014:  mov    %eax,-0xc(%ebp)
08630ee3 +0x017:  mov    0x8(%ebp),%eax
08630ee6 +0x01a:  add    $0x10,%eax
08630ee9 +0x01d:  mov    %eax,0x4(%esp)
08630eed +0x021:  lea    -0x18(%ebp),%eax
08630ef0 +0x024:  mov    %eax,(%esp)
08630ef3 +0x027:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08630ef8 +0x02c:  mov    0x8(%ebp),%eax
08630efb +0x02f:  mov    %eax,(%esp)
08630efe +0x032:  call   0863d1fc <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x170d>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x170d
08630f03 +0x037:  test   %al,%al
08630f05 +0x039:  je     08630f11 <+0x45>
08630f07 +0x03b:  mov    $0x0,%ebx
08630f0c +0x040:  jmp    08631006 <+0x13a>
08630f11 +0x045:  mov    0x8(%ebp),%eax
08630f14 +0x048:  mov    %eax,(%esp)
08630f17 +0x04b:  call   0863d210 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1721>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1721
08630f1c +0x050:  mov    0xc(%ebp),%edx
08630f1f +0x053:  mov    (%eax),%ecx
08630f21 +0x055:  mov    %ecx,(%edx)
08630f23 +0x057:  mov    0x4(%eax),%ecx
08630f26 +0x05a:  mov    %ecx,0x4(%edx)
08630f29 +0x05d:  mov    0x8(%eax),%ecx
08630f2c +0x060:  mov    %ecx,0x8(%edx)
08630f2f +0x063:  mov    0xc(%eax),%ecx
08630f32 +0x066:  mov    %ecx,0xc(%edx)
08630f35 +0x069:  mov    0x10(%eax),%ecx
08630f38 +0x06c:  mov    %ecx,0x10(%edx)
08630f3b +0x06f:  mov    0x14(%eax),%ecx
08630f3e +0x072:  mov    %ecx,0x14(%edx)
08630f41 +0x075:  mov    0x18(%eax),%eax
08630f44 +0x078:  mov    %eax,0x18(%edx)
08630f47 +0x07b:  mov    0xc(%ebp),%eax
08630f4a +0x07e:  mov    0xc(%eax),%ecx
08630f4d +0x081:  mov    0x10(%eax),%ebx
08630f50 +0x084:  mov    -0xc(%ebp),%eax
08630f53 +0x087:  mov    $0x0,%edx
08630f58 +0x08c:  cmp    %edx,%ebx
08630f5a +0x08e:  jg     08630fe4 <+0x118>
08630f60 +0x094:  cmp    %edx,%ebx
08630f62 +0x096:  jl     08630f68 <+0x9c>
08630f64 +0x098:  cmp    %eax,%ecx
08630f66 +0x09a:  ja     08630fe4 <+0x118>
08630f68 +0x09c:  mov    0x8(%ebp),%eax
08630f6b +0x09f:  mov    %eax,(%esp)
08630f6e +0x0a2:  call   0863d224 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1735>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1735
08630f73 +0x0a7:  mov    0xc(%ebp),%eax
08630f76 +0x0aa:  mov    0x8(%eax),%eax
08630f79 +0x0ad:  mov    %eax,-0x14(%ebp)
08630f7c +0x0b0:  mov    0x8(%ebp),%eax
08630f7f +0x0b3:  lea    0x28(%eax),%ecx
08630f82 +0x0b6:  lea    -0x1c(%ebp),%eax
08630f85 +0x0b9:  lea    -0x14(%ebp),%edx
08630f88 +0x0bc:  mov    %edx,0x8(%esp)
08630f8c +0x0c0:  mov    %ecx,0x4(%esp)
08630f90 +0x0c4:  mov    %eax,(%esp)
08630f93 +0x0c7:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08630f98 +0x0cc:  sub    $0x4,%esp
08630f9b +0x0cf:  mov    0x8(%ebp),%eax
08630f9e +0x0d2:  lea    0x28(%eax),%edx
08630fa1 +0x0d5:  lea    -0x10(%ebp),%eax
08630fa4 +0x0d8:  mov    %edx,0x4(%esp)
08630fa8 +0x0dc:  mov    %eax,(%esp)
08630fab +0x0df:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08630fb0 +0x0e4:  sub    $0x4,%esp
08630fb3 +0x0e7:  lea    -0x10(%ebp),%eax
08630fb6 +0x0ea:  mov    %eax,0x4(%esp)
08630fba +0x0ee:  lea    -0x1c(%ebp),%eax
08630fbd +0x0f1:  mov    %eax,(%esp)
08630fc0 +0x0f4:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08630fc5 +0x0f9:  test   %al,%al
08630fc7 +0x0fb:  je     08630fdd <+0x111>
08630fc9 +0x0fd:  lea    -0x1c(%ebp),%eax
08630fcc +0x100:  mov    %eax,(%esp)
08630fcf +0x103:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08630fd4 +0x108:  mov    0x4(%eax),%edx
08630fd7 +0x10b:  sub    $0x1,%edx
08630fda +0x10e:  mov    %edx,0x4(%eax)
08630fdd +0x111:  mov    $0x1,%ebx
08630fe2 +0x116:  jmp    08631006 <+0x13a>
08630fe4 +0x118:  mov    $0x0,%ebx
08630fe9 +0x11d:  jmp    08631006 <+0x13a>
08630feb +0x11f:  mov    %edx,%ebx
08630fed +0x121:  mov    %eax,%esi
08630fef +0x123:  lea    -0x18(%ebp),%eax
08630ff2 +0x126:  mov    %eax,(%esp)
08630ff5 +0x129:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08630ffa +0x12e:  mov    %esi,%eax
08630ffc +0x130:  mov    %ebx,%edx
08630ffe +0x132:  mov    %eax,(%esp)
08631001 +0x135:  call   08ae3750 <_Unwind_Resume>
08631006 +0x13a:  lea    -0x18(%ebp),%eax
08631009 +0x13d:  mov    %eax,(%esp)
0863100c +0x140:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08631011 +0x145:  mov    %ebx,%eax
08631013 +0x147:  lea    -0x8(%ebp),%esp
08631016 +0x14a:  add    $0x0,%esp
08631019 +0x14d:  pop    %ebx
0863101a +0x14e:  pop    %esi
0863101b +0x14f:  pop    %ebp
0863101c +0x150:  ret
0863101d +0x151:  nop
```

## 反编译 C

```c
// TimerQueue::GetTimerMess @ 0x8630ecc

/* TimerQueue::GetTimerMess(TimerEntry&) */

undefined4 __thiscall TimerQueue::GetTimerMess(TimerQueue *this,TimerEntry *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  _Rb_tree_iterator<std::pair<int_const,int>> local_20 [4];
  Guard<Mutex> local_1c [4];
  undefined4 local_18;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [4];
  uint local_10;
  
  local_10 = CSystemTime::getCurTickCount((CSystemTime *)GlobalData::s_systemTime_);
  Guard<Mutex>::Guard(local_1c,(Mutex *)(this + 0x10));
                    /* try { // try from 08630efe to 08630faf has its CatchHandler @ 08630feb */
  cVar1 = std::
          priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
          ::empty();
  if (cVar1 == '\0') {
    puVar2 = (undefined4 *)
             std::
             priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
             ::top();
    *(undefined4 *)param_1 = *puVar2;
    *(undefined4 *)(param_1 + 4) = puVar2[1];
    *(undefined4 *)(param_1 + 8) = puVar2[2];
    *(undefined4 *)(param_1 + 0xc) = puVar2[3];
    *(undefined4 *)(param_1 + 0x10) = puVar2[4];
    *(undefined4 *)(param_1 + 0x14) = puVar2[5];
    *(undefined4 *)(param_1 + 0x18) = puVar2[6];
    if ((*(int *)(param_1 + 0x10) < 1) &&
       ((*(int *)(param_1 + 0x10) < 0 || (*(uint *)(param_1 + 0xc) <= local_10)))) {
      std::
      priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
      ::pop((priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
             *)this);
      local_18 = *(undefined4 *)(param_1 + 8);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                ((int *)local_20);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        (local_20,(_Rb_tree_iterator *)local_14);
      if (cVar1 != '\0') {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_20);
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  Guard<Mutex>::~Guard(local_1c);
  return uVar4;
}
```
