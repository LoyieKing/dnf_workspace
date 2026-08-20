# dispatch_sig

`_ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij`

`TimerGeneratePowerUpNotiTime::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerGeneratePowerUpNotiTime` | `0x0863835a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863835a  _ZN28TimerGeneratePowerUpNotiTime12dispatch_sigEiij
#           TimerGeneratePowerUpNotiTime::dispatch_sig(int, int, unsigned int)
# range [0x0863835a, 0x0863847d]
0863835a +0x000:  push   %ebp
0863835b +0x001:  mov    %esp,%ebp
0863835d +0x003:  push   %ebx
0863835e +0x004:  sub    $0x34,%esp
08638361 +0x007:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08638366 +0x00c:  add    $0xa648,%eax
0863836b +0x011:  mov    %eax,(%esp)
0863836e +0x014:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08638373 +0x019:  mov    %eax,-0x1c(%ebp)
08638376 +0x01c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0863837b +0x021:  mov    %eax,(%esp)
0863837e +0x024:  call   0863bdac <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2bd>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2bd
08638383 +0x029:  mov    %eax,-0x18(%ebp)
08638386 +0x02c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0863838b +0x031:  mov    %eax,(%esp)
0863838e +0x034:  call   0863bdb8 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x2c9>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x2c9
08638393 +0x039:  mov    %eax,-0x14(%ebp)
08638396 +0x03c:  movb   $0x1,-0xd(%ebp)
0863839a +0x040:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0863839f +0x045:  mov    %eax,(%esp)
086383a2 +0x048:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
086383a7 +0x04d:  test   %al,%al
086383a9 +0x04f:  je     086383b8 <+0x5e>
086383ab +0x051:  cmpl   $0x0,-0x1c(%ebp)
086383af +0x055:  je     086383b8 <+0x5e>
086383b1 +0x057:  mov    $0x1,%eax
086383b6 +0x05c:  jmp    086383bd <+0x63>
086383b8 +0x05e:  mov    $0x0,%eax
086383bd +0x063:  test   %al,%al
086383bf +0x065:  je     08638461 <+0x107>
086383c5 +0x06b:  mov    -0x14(%ebp),%eax
086383c8 +0x06e:  cmp    -0x1c(%ebp),%eax
086383cb +0x071:  jge    08638461 <+0x107>
086383d1 +0x077:  subl   $0x5,-0x18(%ebp)
086383d5 +0x07b:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086383da +0x080:  mov    -0x18(%ebp),%edx
086383dd +0x083:  mov    %edx,0x4(%esp)
086383e1 +0x087:  mov    %eax,(%esp)
086383e4 +0x08a:  call   082688be <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x24f>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x24f
086383e9 +0x08f:  mov    -0x14(%ebp),%ebx
086383ec +0x092:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086383f1 +0x097:  add    $0xa648,%eax
086383f6 +0x09c:  mov    %ebx,0x4(%esp)
086383fa +0x0a0:  mov    %eax,(%esp)
086383fd +0x0a3:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08638402 +0x0a8:  mov    (%eax),%eax
08638404 +0x0aa:  mov    %eax,-0xc(%ebp)
08638407 +0x0ad:  mov    -0xc(%ebp),%eax
0863840a +0x0b0:  cmp    -0x18(%ebp),%eax
0863840d +0x0b3:  jl     08638461 <+0x107>
0863840f +0x0b5:  mov    -0xc(%ebp),%eax
08638412 +0x0b8:  mov    %eax,0x4(%esp)
08638416 +0x0bc:  mov    0x8(%ebp),%eax
08638419 +0x0bf:  mov    %eax,(%esp)
0863841c +0x0c2:  call   086384c2 <_ZN28TimerGeneratePowerUpNotiTime14send_noti_timeEi>  ; TimerGeneratePowerUpNotiTime::send_noti_time(int)
08638421 +0x0c7:  addl   $0x1,-0x14(%ebp)
08638425 +0x0cb:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0863842a +0x0d0:  mov    -0x14(%ebp),%edx
0863842d +0x0d3:  mov    %edx,0x4(%esp)
08638431 +0x0d7:  mov    %eax,(%esp)
08638434 +0x0da:  call   082688cc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x25d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x25d
08638439 +0x0df:  mov    -0x14(%ebp),%eax
0863843c +0x0e2:  cmp    -0x1c(%ebp),%eax
0863843f +0x0e5:  jl     08638461 <+0x107>
08638441 +0x0e7:  movl   $0x0,-0x14(%ebp)
08638448 +0x0ee:  movb   $0x0,-0xd(%ebp)
0863844c +0x0f2:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08638451 +0x0f7:  movl   $0x0,0x4(%esp)
08638459 +0x0ff:  mov    %eax,(%esp)
0863845c +0x102:  call   082688cc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x25d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x25d
08638461 +0x107:  cmpb   $0x0,-0xd(%ebp)
08638465 +0x10b:  je     08638473 <+0x119>
08638467 +0x10d:  movl   $0x5,(%esp)
0863846e +0x114:  call   0863847e <_ZN28TimerGeneratePowerUpNotiTime15registNextTimerEl>  ; TimerGeneratePowerUpNotiTime::registNextTimer(long)
08638473 +0x119:  mov    $0x1,%eax
08638478 +0x11e:  add    $0x34,%esp
0863847b +0x121:  pop    %ebx
0863847c +0x122:  pop    %ebp
0863847d +0x123:  ret
```

## 反编译 C

```c
// TimerGeneratePowerUpNotiTime::dispatch_sig @ 0x863835a

/* TimerGeneratePowerUpNotiTime::dispatch_sig(int, int, unsigned int) */

undefined4 TimerGeneratePowerUpNotiTime::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  iVar4 = G_CDataManager();
  iVar4 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(iVar4 + 0xa648));
  iVar5 = CPowerManager::GetPowerUpRemainTime(GlobalData::s_power_manager);
  uVar6 = CPowerManager::GetPowerUpTimerPeriod(GlobalData::s_power_manager);
  bVar2 = true;
  cVar3 = CPowerManager::IsPowerWarEventOn();
  if ((cVar3 == '\0') || (iVar4 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar1) && ((int)uVar6 < iVar4)) {
    CPowerManager::SetPowerUpRemainTime(GlobalData::s_power_manager,iVar5 + -5);
    iVar7 = G_CDataManager();
    piVar8 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(iVar7 + 0xa648),uVar6);
    if (iVar5 + -5 <= *piVar8) {
      send_noti_time((TimerGeneratePowerUpNotiTime *)param_1,*piVar8);
      CPowerManager::SetPowerUpTimerPeriod(GlobalData::s_power_manager,uVar6 + 1);
      if (iVar4 <= (int)(uVar6 + 1)) {
        bVar2 = false;
        CPowerManager::SetPowerUpTimerPeriod(GlobalData::s_power_manager,0);
      }
    }
  }
  if (bVar2) {
    registNextTimer(5);
  }
  return 1;
}
```
