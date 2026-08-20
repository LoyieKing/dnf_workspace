# reset

`_ZN13StatisticsPvP5resetEv`

`StatisticsPvP::reset()`

| 类 | 地址 |
|---|---|
| `StatisticsPvP` | `0x0860c582` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860c582  _ZN13StatisticsPvP5resetEv
#           StatisticsPvP::reset()
# range [0x0860c582, 0x0860c5d9]
0860c582 +0x00:  push   %ebp
0860c583 +0x01:  mov    %esp,%ebp
0860c585 +0x03:  push   %esi
0860c586 +0x04:  push   %ebx
0860c587 +0x05:  sub    $0x20,%esp
0860c58a +0x08:  mov    0x8(%ebp),%eax
0860c58d +0x0b:  mov    %eax,0x4(%esp)
0860c591 +0x0f:  lea    -0xc(%ebp),%eax
0860c594 +0x12:  mov    %eax,(%esp)
0860c597 +0x15:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860c59c +0x1a:  mov    0x8(%ebp),%eax
0860c59f +0x1d:  add    $0x18,%eax
0860c5a2 +0x20:  mov    %eax,(%esp)
0860c5a5 +0x23:  call   08610ce0 <_GLOBAL__I__ZN10StatisticsC2Ev+0xd5e>  ; global constructors keyed to Statistics::Statistics()+0xd5e
0860c5aa +0x28:  jmp    0860c5c7 <+0x45>
0860c5ac +0x2a:  mov    %edx,%ebx
0860c5ae +0x2c:  mov    %eax,%esi
0860c5b0 +0x2e:  lea    -0xc(%ebp),%eax
0860c5b3 +0x31:  mov    %eax,(%esp)
0860c5b6 +0x34:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c5bb +0x39:  mov    %esi,%eax
0860c5bd +0x3b:  mov    %ebx,%edx
0860c5bf +0x3d:  mov    %eax,(%esp)
0860c5c2 +0x40:  call   08ae3750 <_Unwind_Resume>
0860c5c7 +0x45:  lea    -0xc(%ebp),%eax
0860c5ca +0x48:  mov    %eax,(%esp)
0860c5cd +0x4b:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860c5d2 +0x50:  add    $0x20,%esp
0860c5d5 +0x53:  pop    %ebx
0860c5d6 +0x54:  pop    %esi
0860c5d7 +0x55:  pop    %ebp
0860c5d8 +0x56:  ret
0860c5d9 +0x57:  nop
```

## 反编译 C

```c
// StatisticsPvP::reset @ 0x860c582

/* StatisticsPvP::reset() */

void __thiscall StatisticsPvP::reset(StatisticsPvP *this)

{
  Guard<Mutex> local_10 [4];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)this);
                    /* try { // try from 0860c5a5 to 0860c5a9 has its CatchHandler @ 0860c5ac */
  std::
  map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
  ::clear((map<StatisticsPvP::PvP_Key,StatisticsPvP::PvP_Room,std::less<StatisticsPvP::PvP_Key>,std::allocator<std::pair<StatisticsPvP::PvP_Key_const,StatisticsPvP::PvP_Room>>>
           *)(this + 0x18));
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
