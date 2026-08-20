# SendOneADayItemShopIndex

`_ZN5CUser24SendOneADayItemShopIndexERKSt6vectorISt4pairIiiESaIS2_EE`

`CUser::SendOneADayItemShopIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868aaea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868aaea  _ZN5CUser24SendOneADayItemShopIndexERKSt6vectorISt4pairIiiESaIS2_EE
#           CUser::SendOneADayItemShopIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&)
# range [0x0868aaea, 0x0868ac23]
0868aaea +0x000:  push   %ebp
0868aaeb +0x001:  mov    %esp,%ebp
0868aaed +0x003:  push   %esi
0868aaee +0x004:  push   %ebx
0868aaef +0x005:  sub    $0x30,%esp
0868aaf2 +0x008:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0868aaf7 +0x00d:  movl   $0x6d,0x4(%esp)
0868aaff +0x015:  mov    %eax,(%esp)
0868ab02 +0x018:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0868ab07 +0x01d:  mov    (%eax),%edx
0868ab09 +0x01f:  add    $0x34,%edx
0868ab0c +0x022:  mov    (%edx),%edx
0868ab0e +0x024:  movl   $0x0,0x4(%esp)
0868ab16 +0x02c:  mov    %eax,(%esp)
0868ab19 +0x02f:  call   *%edx
0868ab1b +0x031:  xor    $0x1,%eax
0868ab1e +0x034:  test   %al,%al
0868ab20 +0x036:  jne    0868ac1c <+0x132>
0868ab26 +0x03c:  lea    -0x1c(%ebp),%eax
0868ab29 +0x03f:  mov    %eax,(%esp)
0868ab2c +0x042:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868ab31 +0x047:  movl   $0x155,0x8(%esp)
0868ab39 +0x04f:  movl   $0x0,0x4(%esp)
0868ab41 +0x057:  lea    -0x1c(%ebp),%eax
0868ab44 +0x05a:  mov    %eax,(%esp)
0868ab47 +0x05d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868ab4c +0x062:  mov    0xc(%ebp),%eax
0868ab4f +0x065:  mov    %eax,(%esp)
0868ab52 +0x068:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
0868ab57 +0x06d:  mov    %eax,-0x10(%ebp)
0868ab5a +0x070:  mov    -0x10(%ebp),%eax
0868ab5d +0x073:  mov    %eax,0x4(%esp)
0868ab61 +0x077:  lea    -0x1c(%ebp),%eax
0868ab64 +0x07a:  mov    %eax,(%esp)
0868ab67 +0x07d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868ab6c +0x082:  movl   $0x0,-0xc(%ebp)
0868ab73 +0x089:  jmp    0868abc0 <+0xd6>
0868ab75 +0x08b:  mov    -0xc(%ebp),%eax
0868ab78 +0x08e:  mov    %eax,0x4(%esp)
0868ab7c +0x092:  mov    0xc(%ebp),%eax
0868ab7f +0x095:  mov    %eax,(%esp)
0868ab82 +0x098:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
0868ab87 +0x09d:  mov    (%eax),%eax
0868ab89 +0x09f:  mov    %eax,0x4(%esp)
0868ab8d +0x0a3:  lea    -0x1c(%ebp),%eax
0868ab90 +0x0a6:  mov    %eax,(%esp)
0868ab93 +0x0a9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868ab98 +0x0ae:  mov    -0xc(%ebp),%eax
0868ab9b +0x0b1:  mov    %eax,0x4(%esp)
0868ab9f +0x0b5:  mov    0xc(%ebp),%eax
0868aba2 +0x0b8:  mov    %eax,(%esp)
0868aba5 +0x0bb:  call   081b4b12 <_GLOBAL__I__ZNK21CHARAC_LOAD_MERCENARY25CheckCompetitionAreaIndexEci+0x386>  ; global constructors keyed to CHARAC_LOAD_MERCENARY::CheckCompetitionAreaIndex(char, int) const+0x386
0868abaa +0x0c0:  mov    0x4(%eax),%eax
0868abad +0x0c3:  mov    %eax,0x4(%esp)
0868abb1 +0x0c7:  lea    -0x1c(%ebp),%eax
0868abb4 +0x0ca:  mov    %eax,(%esp)
0868abb7 +0x0cd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0868abbc +0x0d2:  addl   $0x1,-0xc(%ebp)
0868abc0 +0x0d6:  mov    -0xc(%ebp),%eax
0868abc3 +0x0d9:  cmp    -0x10(%ebp),%eax
0868abc6 +0x0dc:  setl   %al
0868abc9 +0x0df:  test   %al,%al
0868abcb +0x0e1:  jne    0868ab75 <+0x8b>
0868abcd +0x0e3:  movl   $0x1,0x4(%esp)
0868abd5 +0x0eb:  lea    -0x1c(%ebp),%eax
0868abd8 +0x0ee:  mov    %eax,(%esp)
0868abdb +0x0f1:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868abe0 +0x0f6:  lea    -0x1c(%ebp),%eax
0868abe3 +0x0f9:  mov    %eax,0x4(%esp)
0868abe7 +0x0fd:  mov    0x8(%ebp),%eax
0868abea +0x100:  mov    %eax,(%esp)
0868abed +0x103:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868abf2 +0x108:  jmp    0868ac0f <+0x125>
0868abf4 +0x10a:  mov    %edx,%ebx
0868abf6 +0x10c:  mov    %eax,%esi
0868abf8 +0x10e:  lea    -0x1c(%ebp),%eax
0868abfb +0x111:  mov    %eax,(%esp)
0868abfe +0x114:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868ac03 +0x119:  mov    %esi,%eax
0868ac05 +0x11b:  mov    %ebx,%edx
0868ac07 +0x11d:  mov    %eax,(%esp)
0868ac0a +0x120:  call   08ae3750 <_Unwind_Resume>
0868ac0f +0x125:  lea    -0x1c(%ebp),%eax
0868ac12 +0x128:  mov    %eax,(%esp)
0868ac15 +0x12b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868ac1a +0x130:  jmp    0868ac1d <+0x133>
0868ac1c +0x132:  nop
0868ac1d +0x133:  add    $0x30,%esp
0868ac20 +0x136:  pop    %ebx
0868ac21 +0x137:  pop    %esi
0868ac22 +0x138:  pop    %ebp
0868ac23 +0x139:  ret
```

## 反编译 C

```c
// CUser::SendOneADayItemShopIndex @ 0x868aaea

/* CUser::SendOneADayItemShopIndex(std::vector<std::pair<int, int>, std::allocator<std::pair<int,
   int> > > const&) */

void __thiscall CUser::SendOneADayItemShopIndex(CUser *this,vector *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  PacketGuard local_20 [12];
  int local_14;
  uint local_10;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6d);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0868ab47 to 0868abf1 has its CatchHandler @ 0868abf4 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x155);
    local_14 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                         ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,local_14);
    for (local_10 = 0; (int)local_10 < local_14; local_10 = local_10 + 1) {
      piVar2 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                                ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                                 param_1,local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*piVar2);
      iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_1,
                         local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(iVar3 + 4));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    Send(this,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return;
}
```
