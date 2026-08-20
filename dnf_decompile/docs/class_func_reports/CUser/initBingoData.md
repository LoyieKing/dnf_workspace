# initBingoData

`_ZN5CUser13initBingoDataEv`

`CUser::initBingoData()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086912be` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086912be  _ZN5CUser13initBingoDataEv
#           CUser::initBingoData()
# range [0x086912be, 0x0869134d]
086912be +0x00:  push   %ebp
086912bf +0x01:  mov    %esp,%ebp
086912c1 +0x03:  push   %ebx
086912c2 +0x04:  sub    $0x24,%esp
086912c5 +0x07:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086912ca +0x0c:  movl   $0x6a,0x4(%esp)
086912d2 +0x14:  mov    %eax,(%esp)
086912d5 +0x17:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086912da +0x1c:  mov    (%eax),%edx
086912dc +0x1e:  add    $0x34,%edx
086912df +0x21:  mov    (%edx),%edx
086912e1 +0x23:  movl   $0x0,0x4(%esp)
086912e9 +0x2b:  mov    %eax,(%esp)
086912ec +0x2e:  call   *%edx
086912ee +0x30:  test   %al,%al
086912f0 +0x32:  je     08691347 <+0x89>
086912f2 +0x34:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086912f7 +0x39:  movl   $0x6a,0x4(%esp)
086912ff +0x41:  mov    %eax,(%esp)
08691302 +0x44:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08691307 +0x49:  mov    %eax,-0xc(%ebp)
0869130a +0x4c:  cmpl   $0x0,-0xc(%ebp)
0869130e +0x50:  je     08691347 <+0x89>
08691310 +0x52:  mov    0x8(%ebp),%eax
08691313 +0x55:  mov    %eax,(%esp)
08691316 +0x58:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
0869131b +0x5d:  mov    %eax,%ebx
0869131d +0x5f:  mov    -0xc(%ebp),%eax
08691320 +0x62:  mov    %eax,(%esp)
08691323 +0x65:  call   080c9fea <_ZN10BingoEvent14getBingoSystemEv>  ; BingoEvent::getBingoSystem()
08691328 +0x6a:  mov    %eax,(%esp)
0869132b +0x6d:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
08691330 +0x72:  mov    %ebx,0x4(%esp)
08691334 +0x76:  mov    %eax,(%esp)
08691337 +0x79:  call   080cadd4 <_ZN6CBingo12initUserDataER9BingoData>  ; CBingo::initUserData(BingoData&)
0869133c +0x7e:  mov    0x8(%ebp),%eax
0869133f +0x81:  mov    %eax,(%esp)
08691342 +0x84:  call   0869134e <_ZN5CUser13sendBingoDataEv>  ; CUser::sendBingoData()
08691347 +0x89:  add    $0x24,%esp
0869134a +0x8c:  pop    %ebx
0869134b +0x8d:  pop    %ebp
0869134c +0x8e:  ret
0869134d +0x8f:  nop
```

## 反编译 C

```c
// CUser::initBingoData @ 0x86912be

/* CUser::initBingoData() */

void __thiscall CUser::initBingoData(CUser *this)

{
  char cVar1;
  int *piVar2;
  BingoEvent *this_00;
  BingoData *pBVar3;
  shared_ptr<CBingo> *this_01;
  CBingo *this_02;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    this_00 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a);
    if (this_00 != (BingoEvent *)0x0) {
      pBVar3 = (BingoData *)getBingoData(this);
      this_01 = (shared_ptr<CBingo> *)BingoEvent::getBingoSystem(this_00);
      this_02 = (CBingo *)boost::shared_ptr<CBingo>::operator->(this_01);
      CBingo::initUserData(this_02,pBVar3);
      sendBingoData(this);
    }
  }
  return;
}
```
