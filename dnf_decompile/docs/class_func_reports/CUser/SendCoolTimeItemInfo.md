# SendCoolTimeItemInfo

`_ZN5CUser20SendCoolTimeItemInfoEj`

`CUser::SendCoolTimeItemInfo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086591fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086591fe  _ZN5CUser20SendCoolTimeItemInfoEj
#           CUser::SendCoolTimeItemInfo(unsigned int)
# range [0x086591fe, 0x08659365]
086591fe +0x000:  push   %ebp
086591ff +0x001:  mov    %esp,%ebp
08659201 +0x003:  push   %esi
08659202 +0x004:  push   %ebx
08659203 +0x005:  sub    $0x40,%esp
08659206 +0x008:  lea    -0x2c(%ebp),%eax
08659209 +0x00b:  mov    %eax,(%esp)
0865920c +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08659211 +0x013:  movl   $0xac,0x8(%esp)
08659219 +0x01b:  movl   $0x0,0x4(%esp)
08659221 +0x023:  lea    -0x2c(%ebp),%eax
08659224 +0x026:  mov    %eax,(%esp)
08659227 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0865922c +0x02e:  mov    0x8(%ebp),%eax
0865922f +0x031:  mov    %eax,(%esp)
08659232 +0x034:  call   08696a24 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3279>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3279
08659237 +0x039:  mov    %eax,-0x18(%ebp)
0865923a +0x03c:  lea    -0x30(%ebp),%eax
0865923d +0x03f:  mov    -0x18(%ebp),%edx
08659240 +0x042:  mov    %edx,0x4(%esp)
08659244 +0x046:  mov    %eax,(%esp)
08659247 +0x049:  call   0869aeba <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x770f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x770f
0865924c +0x04e:  sub    $0x4,%esp
0865924f +0x051:  mov    -0x18(%ebp),%eax
08659252 +0x054:  mov    %eax,(%esp)
08659255 +0x057:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
0865925a +0x05c:  mov    %al,-0x11(%ebp)
0865925d +0x05f:  movzbl -0x11(%ebp),%eax
08659261 +0x063:  mov    %eax,0x4(%esp)
08659265 +0x067:  lea    -0x2c(%ebp),%eax
08659268 +0x06a:  mov    %eax,(%esp)
0865926b +0x06d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08659270 +0x072:  jmp    086592dd <+0xdf>
08659272 +0x074:  lea    -0x30(%ebp),%eax
08659275 +0x077:  mov    %eax,(%esp)
08659278 +0x07a:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
0865927d +0x07f:  mov    (%eax),%eax
0865927f +0x081:  mov    %eax,-0x10(%ebp)
08659282 +0x084:  lea    -0x30(%ebp),%eax
08659285 +0x087:  mov    %eax,(%esp)
08659288 +0x08a:  call   0869af30 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7785>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7785
0865928d +0x08f:  mov    0x4(%eax),%eax
08659290 +0x092:  mov    %eax,-0xc(%ebp)
08659293 +0x095:  mov    -0x10(%ebp),%eax
08659296 +0x098:  mov    %eax,0x4(%esp)
0865929a +0x09c:  lea    -0x2c(%ebp),%eax
0865929d +0x09f:  mov    %eax,(%esp)
086592a0 +0x0a2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086592a5 +0x0a7:  mov    0xc(%ebp),%eax
086592a8 +0x0aa:  mov    -0xc(%ebp),%edx
086592ab +0x0ad:  mov    %edx,%ecx
086592ad +0x0af:  sub    %eax,%ecx
086592af +0x0b1:  mov    %ecx,%eax
086592b1 +0x0b3:  mov    %eax,0x4(%esp)
086592b5 +0x0b7:  lea    -0x2c(%ebp),%eax
086592b8 +0x0ba:  mov    %eax,(%esp)
086592bb +0x0bd:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086592c0 +0x0c2:  lea    -0x1c(%ebp),%eax
086592c3 +0x0c5:  movl   $0x0,0x8(%esp)
086592cb +0x0cd:  lea    -0x30(%ebp),%edx
086592ce +0x0d0:  mov    %edx,0x4(%esp)
086592d2 +0x0d4:  mov    %eax,(%esp)
086592d5 +0x0d7:  call   0869b020 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7875>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7875
086592da +0x0dc:  sub    $0x4,%esp
086592dd +0x0df:  lea    -0x20(%ebp),%eax
086592e0 +0x0e2:  mov    -0x18(%ebp),%edx
086592e3 +0x0e5:  mov    %edx,0x4(%esp)
086592e7 +0x0e9:  mov    %eax,(%esp)
086592ea +0x0ec:  call   0869aede <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7733>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7733
086592ef +0x0f1:  sub    $0x4,%esp
086592f2 +0x0f4:  lea    -0x20(%ebp),%eax
086592f5 +0x0f7:  mov    %eax,0x4(%esp)
086592f9 +0x0fb:  lea    -0x30(%ebp),%eax
086592fc +0x0fe:  mov    %eax,(%esp)
086592ff +0x101:  call   0869af04 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7759>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7759
08659304 +0x106:  test   %al,%al
08659306 +0x108:  jne    08659272 <+0x74>
0865930c +0x10e:  movl   $0x1,0x4(%esp)
08659314 +0x116:  lea    -0x2c(%ebp),%eax
08659317 +0x119:  mov    %eax,(%esp)
0865931a +0x11c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0865931f +0x121:  lea    -0x2c(%ebp),%eax
08659322 +0x124:  mov    %eax,0x4(%esp)
08659326 +0x128:  mov    0x8(%ebp),%eax
08659329 +0x12b:  mov    %eax,(%esp)
0865932c +0x12e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08659331 +0x133:  mov    %eax,%ebx
08659333 +0x135:  lea    -0x2c(%ebp),%eax
08659336 +0x138:  mov    %eax,(%esp)
08659339 +0x13b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0865933e +0x140:  mov    %ebx,%eax
08659340 +0x142:  lea    -0x8(%ebp),%esp
08659343 +0x145:  add    $0x0,%esp
08659346 +0x148:  pop    %ebx
08659347 +0x149:  pop    %esi
08659348 +0x14a:  pop    %ebp
08659349 +0x14b:  ret
0865934a +0x14c:  mov    %edx,%ebx
0865934c +0x14e:  mov    %eax,%esi
0865934e +0x150:  lea    -0x2c(%ebp),%eax
08659351 +0x153:  mov    %eax,(%esp)
08659354 +0x156:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08659359 +0x15b:  mov    %esi,%eax
0865935b +0x15d:  mov    %ebx,%edx
0865935d +0x15f:  mov    %eax,(%esp)
08659360 +0x162:  call   08ae3750 <_Unwind_Resume>
08659365 +0x167:  nop
```

## 反编译 C

```c
// CUser::SendCoolTimeItemInfo @ 0x86591fe

/* CUser::SendCoolTimeItemInfo(unsigned int) */

undefined4 __thiscall CUser::SendCoolTimeItemInfo(CUser *this,uint param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_34 [4];
  PacketGuard local_30 [12];
  __normal_iterator local_24 [4];
  __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
  local_20 [4];
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *local_1c;
  byte local_15;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08659227 to 08659330 has its CatchHandler @ 0865934a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xac);
  local_1c = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
             CUserCharacInfo::GetCurCharacCoolTimeItemList((CUserCharacInfo *)this);
  std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::begin();
  local_15 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(local_1c);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_15);
  while( true ) {
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::end();
    bVar1 = __gnu_cxx::operator!=(local_34,local_24);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
                    ::operator->(local_34);
    local_14 = *piVar2;
    iVar3 = __gnu_cxx::
            __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
            ::operator->(local_34);
    local_10 = *(int *)(iVar3 + 4);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_14);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_10 - param_1);
    __gnu_cxx::
    __normal_iterator<ContinuousItemInfo*,std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>>
    ::operator++(local_20,(int)local_34);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  uVar4 = Send(this,local_30);
  PacketGuard::~PacketGuard(local_30);
  return uVar4;
}
```
