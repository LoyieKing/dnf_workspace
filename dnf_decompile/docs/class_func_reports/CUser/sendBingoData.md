# sendBingoData

`_ZN5CUser13sendBingoDataEv`

`CUser::sendBingoData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0869134e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0869134e  _ZN5CUser13sendBingoDataEv
#           CUser::sendBingoData()
# range [0x0869134e, 0x0869146f]
0869134e +0x000:  push   %ebp
0869134f +0x001:  mov    %esp,%ebp
08691351 +0x003:  push   %esi
08691352 +0x004:  push   %ebx
08691353 +0x005:  sub    $0x30,%esp
08691356 +0x008:  movl   $0x0,-0x10(%ebp)
0869135d +0x00f:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08691362 +0x014:  movl   $0x6a,0x4(%esp)
0869136a +0x01c:  mov    %eax,(%esp)
0869136d +0x01f:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08691372 +0x024:  mov    %eax,-0xc(%ebp)
08691375 +0x027:  cmpl   $0x0,-0xc(%ebp)
08691379 +0x02b:  je     08691399 <+0x4b>
0869137b +0x02d:  mov    -0xc(%ebp),%eax
0869137e +0x030:  mov    %eax,(%esp)
08691381 +0x033:  call   080c9fea <_ZN10BingoEvent14getBingoSystemEv>  ; BingoEvent::getBingoSystem()
08691386 +0x038:  mov    %eax,(%esp)
08691389 +0x03b:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
0869138e +0x040:  mov    %eax,(%esp)
08691391 +0x043:  call   080ca936 <_ZN6CBingo8getTodayEv>  ; CBingo::getToday()
08691396 +0x048:  mov    %eax,-0x10(%ebp)
08691399 +0x04b:  lea    -0x1c(%ebp),%eax
0869139c +0x04e:  mov    %eax,(%esp)
0869139f +0x051:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086913a4 +0x056:  lea    -0x1c(%ebp),%eax
086913a7 +0x059:  mov    %eax,(%esp)
086913aa +0x05c:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086913af +0x061:  movl   $0x1c2,0x8(%esp)
086913b7 +0x069:  movl   $0x0,0x4(%esp)
086913bf +0x071:  lea    -0x1c(%ebp),%eax
086913c2 +0x074:  mov    %eax,(%esp)
086913c5 +0x077:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086913ca +0x07c:  mov    -0x10(%ebp),%eax
086913cd +0x07f:  movsbl %al,%eax
086913d0 +0x082:  mov    %eax,0x4(%esp)
086913d4 +0x086:  lea    -0x1c(%ebp),%eax
086913d7 +0x089:  mov    %eax,(%esp)
086913da +0x08c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086913df +0x091:  mov    0x8(%ebp),%eax
086913e2 +0x094:  mov    %eax,(%esp)
086913e5 +0x097:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
086913ea +0x09c:  mov    (%eax),%eax
086913ec +0x09e:  mov    %eax,0x4(%esp)
086913f0 +0x0a2:  lea    -0x1c(%ebp),%eax
086913f3 +0x0a5:  mov    %eax,(%esp)
086913f6 +0x0a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086913fb +0x0ad:  mov    0x8(%ebp),%eax
086913fe +0x0b0:  mov    %eax,(%esp)
08691401 +0x0b3:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
08691406 +0x0b8:  movzbl 0x5(%eax),%eax
0869140a +0x0bc:  movzbl %al,%eax
0869140d +0x0bf:  mov    %eax,0x4(%esp)
08691411 +0x0c3:  lea    -0x1c(%ebp),%eax
08691414 +0x0c6:  mov    %eax,(%esp)
08691417 +0x0c9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0869141c +0x0ce:  movl   $0x1,0x4(%esp)
08691424 +0x0d6:  lea    -0x1c(%ebp),%eax
08691427 +0x0d9:  mov    %eax,(%esp)
0869142a +0x0dc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0869142f +0x0e1:  lea    -0x1c(%ebp),%eax
08691432 +0x0e4:  mov    %eax,0x4(%esp)
08691436 +0x0e8:  mov    0x8(%ebp),%eax
08691439 +0x0eb:  mov    %eax,(%esp)
0869143c +0x0ee:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08691441 +0x0f3:  jmp    0869145e <+0x110>
08691443 +0x0f5:  mov    %edx,%ebx
08691445 +0x0f7:  mov    %eax,%esi
08691447 +0x0f9:  lea    -0x1c(%ebp),%eax
0869144a +0x0fc:  mov    %eax,(%esp)
0869144d +0x0ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691452 +0x104:  mov    %esi,%eax
08691454 +0x106:  mov    %ebx,%edx
08691456 +0x108:  mov    %eax,(%esp)
08691459 +0x10b:  call   08ae3750 <_Unwind_Resume>
0869145e +0x110:  lea    -0x1c(%ebp),%eax
08691461 +0x113:  mov    %eax,(%esp)
08691464 +0x116:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08691469 +0x11b:  add    $0x30,%esp
0869146c +0x11e:  pop    %ebx
0869146d +0x11f:  pop    %esi
0869146e +0x120:  pop    %ebp
0869146f +0x121:  ret
```

## 反编译 C

```c
// CUser::sendBingoData @ 0x869134e

/* CUser::sendBingoData() */

void __thiscall CUser::sendBingoData(CUser *this)

{
  shared_ptr<CBingo> *this_00;
  CBingo *this_01;
  int *piVar1;
  int iVar2;
  PacketGuard local_20 [12];
  undefined4 local_14;
  BingoEvent *local_10;
  
  local_14 = 0;
  local_10 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
  if (local_10 != (BingoEvent *)0x0) {
    this_00 = (shared_ptr<CBingo> *)BingoEvent::getBingoSystem(local_10);
    this_01 = (CBingo *)boost::shared_ptr<CBingo>::operator->(this_00);
    local_14 = CBingo::getToday(this_01);
  }
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 086913aa to 08691440 has its CatchHandler @ 08691443 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x1c2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)(char)local_14);
  piVar1 = (int *)getBingoData(this);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*piVar1);
  iVar2 = getBingoData(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(iVar2 + 5));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  Send(this,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}
```
