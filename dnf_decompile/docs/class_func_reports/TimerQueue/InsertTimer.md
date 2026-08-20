# InsertTimer

`_ZN10TimerQueue11InsertTimerER10TimerEntry`

`TimerQueue::InsertTimer(TimerEntry&)`

| 类 | 地址 |
|---|---|
| `TimerQueue` | `0x08630cec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08630cec  _ZN10TimerQueue11InsertTimerER10TimerEntry
#           TimerQueue::InsertTimer(TimerEntry&)
# range [0x08630cec, 0x08630e15]
08630cec +0x000:  push   %ebp
08630ced +0x001:  mov    %esp,%ebp
08630cef +0x003:  push   %esi
08630cf0 +0x004:  push   %ebx
08630cf1 +0x005:  sub    $0x40,%esp
08630cf4 +0x008:  mov    0x8(%ebp),%eax
08630cf7 +0x00b:  add    $0x10,%eax
08630cfa +0x00e:  mov    %eax,0x4(%esp)
08630cfe +0x012:  lea    -0x34(%ebp),%eax
08630d01 +0x015:  mov    %eax,(%esp)
08630d04 +0x018:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
08630d09 +0x01d:  mov    0x8(%ebp),%eax
08630d0c +0x020:  mov    0xc(%ebp),%edx
08630d0f +0x023:  mov    %edx,0x4(%esp)
08630d13 +0x027:  mov    %eax,(%esp)
08630d16 +0x02a:  call   0863d19e <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x16af>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x16af
08630d1b +0x02f:  mov    0xc(%ebp),%eax
08630d1e +0x032:  mov    0x8(%eax),%eax
08630d21 +0x035:  mov    %eax,-0x30(%ebp)
08630d24 +0x038:  mov    0x8(%ebp),%eax
08630d27 +0x03b:  lea    0x28(%eax),%ecx
08630d2a +0x03e:  lea    -0x38(%ebp),%eax
08630d2d +0x041:  lea    -0x30(%ebp),%edx
08630d30 +0x044:  mov    %edx,0x8(%esp)
08630d34 +0x048:  mov    %ecx,0x4(%esp)
08630d38 +0x04c:  mov    %eax,(%esp)
08630d3b +0x04f:  call   080cd2ee <_GLOBAL__I__ZN10BingoEventC2Ev+0x213b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x213b
08630d40 +0x054:  sub    $0x4,%esp
08630d43 +0x057:  mov    0x8(%ebp),%eax
08630d46 +0x05a:  lea    0x28(%eax),%edx
08630d49 +0x05d:  lea    -0x2c(%ebp),%eax
08630d4c +0x060:  mov    %edx,0x4(%esp)
08630d50 +0x064:  mov    %eax,(%esp)
08630d53 +0x067:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
08630d58 +0x06c:  sub    $0x4,%esp
08630d5b +0x06f:  lea    -0x2c(%ebp),%eax
08630d5e +0x072:  mov    %eax,0x4(%esp)
08630d62 +0x076:  lea    -0x38(%ebp),%eax
08630d65 +0x079:  mov    %eax,(%esp)
08630d68 +0x07c:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
08630d6d +0x081:  test   %al,%al
08630d6f +0x083:  je     08630d87 <+0x9b>
08630d71 +0x085:  lea    -0x38(%ebp),%eax
08630d74 +0x088:  mov    %eax,(%esp)
08630d77 +0x08b:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
08630d7c +0x090:  mov    0x4(%eax),%edx
08630d7f +0x093:  add    $0x1,%edx
08630d82 +0x096:  mov    %edx,0x4(%eax)
08630d85 +0x099:  jmp    08630e01 <+0x115>
08630d87 +0x09b:  movl   $0x1,-0x10(%ebp)
08630d8e +0x0a2:  mov    0xc(%ebp),%eax
08630d91 +0x0a5:  mov    0x8(%eax),%eax
08630d94 +0x0a8:  mov    %eax,-0xc(%ebp)
08630d97 +0x0ab:  lea    -0x18(%ebp),%eax
08630d9a +0x0ae:  lea    -0x10(%ebp),%edx
08630d9d +0x0b1:  mov    %edx,0x8(%esp)
08630da1 +0x0b5:  lea    -0xc(%ebp),%edx
08630da4 +0x0b8:  mov    %edx,0x4(%esp)
08630da8 +0x0bc:  mov    %eax,(%esp)
08630dab +0x0bf:  call   081b8d41 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x548>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x548
08630db0 +0x0c4:  sub    $0x4,%esp
08630db3 +0x0c7:  lea    -0x18(%ebp),%eax
08630db6 +0x0ca:  mov    %eax,0x4(%esp)
08630dba +0x0ce:  lea    -0x20(%ebp),%eax
08630dbd +0x0d1:  mov    %eax,(%esp)
08630dc0 +0x0d4:  call   080c6d20 <_GLOBAL__I_g_ServerString_+0x28b>  ; global constructors keyed to g_ServerString_+0x28b
08630dc5 +0x0d9:  mov    0x8(%ebp),%eax
08630dc8 +0x0dc:  lea    0x28(%eax),%ecx
08630dcb +0x0df:  lea    -0x28(%ebp),%eax
08630dce +0x0e2:  lea    -0x20(%ebp),%edx
08630dd1 +0x0e5:  mov    %edx,0x8(%esp)
08630dd5 +0x0e9:  mov    %ecx,0x4(%esp)
08630dd9 +0x0ed:  mov    %eax,(%esp)
08630ddc +0x0f0:  call   080c6d50 <_GLOBAL__I_g_ServerString_+0x2bb>  ; global constructors keyed to g_ServerString_+0x2bb
08630de1 +0x0f5:  sub    $0x4,%esp
08630de4 +0x0f8:  jmp    08630e01 <+0x115>
08630de6 +0x0fa:  mov    %edx,%ebx
08630de8 +0x0fc:  mov    %eax,%esi
08630dea +0x0fe:  lea    -0x34(%ebp),%eax
08630ded +0x101:  mov    %eax,(%esp)
08630df0 +0x104:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08630df5 +0x109:  mov    %esi,%eax
08630df7 +0x10b:  mov    %ebx,%edx
08630df9 +0x10d:  mov    %eax,(%esp)
08630dfc +0x110:  call   08ae3750 <_Unwind_Resume>
08630e01 +0x115:  lea    -0x34(%ebp),%eax
08630e04 +0x118:  mov    %eax,(%esp)
08630e07 +0x11b:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
08630e0c +0x120:  lea    -0x8(%ebp),%esp
08630e0f +0x123:  add    $0x0,%esp
08630e12 +0x126:  pop    %ebx
08630e13 +0x127:  pop    %esi
08630e14 +0x128:  pop    %ebp
08630e15 +0x129:  ret
```

## 反编译 C

```c
// TimerQueue::InsertTimer @ 0x8630cec

/* TimerQueue::InsertTimer(TimerEntry&) */

void __thiscall TimerQueue::InsertTimer(TimerQueue *this,TimerEntry *param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,int>> local_3c [4];
  Guard<Mutex> local_38 [4];
  undefined4 local_34;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_30 [4];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c [2];
  undefined4 local_14;
  int local_10;
  
  Guard<Mutex>::Guard(local_38,(Mutex *)(this + 0x10));
                    /* try { // try from 08630d16 to 08630de0 has its CatchHandler @ 08630de6 */
  std::
  priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
  ::push((priority_queue<TimerEntry,std::vector<TimerEntry,std::allocator<TimerEntry>>,std::less<TimerEntry>>
          *)this,param_1);
  local_34 = *(undefined4 *)(param_1 + 8);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_3c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_30);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_3c,(_Rb_tree_iterator *)local_30);
  if (cVar1 == '\0') {
    local_14 = 1;
    local_10 = *(int *)(param_1 + 8);
    std::make_pair<int,int>(local_1c,&local_10);
    std::pair<int_const,int>::pair<int,int>(local_24,(pair *)local_1c);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_3c);
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  Guard<Mutex>::~Guard(local_38);
  return;
}
```
