# CarryClientCrashDown

`_ZN28CClientCrashDownLogStatistic20CarryClientCrashDownEv`

`CClientCrashDownLogStatistic::CarryClientCrashDown()`

| 类 | 地址 |
|---|---|
| `CClientCrashDownLogStatistic` | `0x0860d072` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860d072  _ZN28CClientCrashDownLogStatistic20CarryClientCrashDownEv
#           CClientCrashDownLogStatistic::CarryClientCrashDown()
# range [0x0860d072, 0x0860d1fd]
0860d072 +0x000:  push   %ebp
0860d073 +0x001:  mov    %esp,%ebp
0860d075 +0x003:  push   %esi
0860d076 +0x004:  push   %ebx
0860d077 +0x005:  sub    $0x90,%esp
0860d07d +0x00b:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0860d084 +0x012:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0860d089 +0x017:  mov    %eax,-0x14(%ebp)
0860d08c +0x01a:  mov    0x8(%ebp),%eax
0860d08f +0x01d:  mov    %eax,(%esp)
0860d092 +0x020:  call   082fa3c0 <_GLOBAL__I__ZN8WongWork14CAvatarItemMgr16m_AvatarItemPoolE+0x1f2>  ; global constructors keyed to WongWork::CAvatarItemMgr::m_AvatarItemPool+0x1f2
0860d097 +0x025:  xor    $0x1,%eax
0860d09a +0x028:  test   %al,%al
0860d09c +0x02a:  je     0860d1da <+0x168>
0860d0a2 +0x030:  lea    -0x2e(%ebp),%eax
0860d0a5 +0x033:  mov    %eax,(%esp)
0860d0a8 +0x036:  call   0861007e <_GLOBAL__I__ZN10StatisticsC2Ev+0xfc>  ; global constructors keyed to Statistics::Statistics()+0xfc
0860d0ad +0x03b:  mov    -0x14(%ebp),%eax
0860d0b0 +0x03e:  mov    %eax,-0x24(%ebp)
0860d0b3 +0x041:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0860d0b8 +0x046:  mov    %eax,(%esp)
0860d0bb +0x049:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0860d0c0 +0x04e:  mov    %eax,-0x20(%ebp)
0860d0c3 +0x051:  mov    0x8(%ebp),%edx
0860d0c6 +0x054:  lea    -0x50(%ebp),%eax
0860d0c9 +0x057:  mov    %edx,0x4(%esp)
0860d0cd +0x05b:  mov    %eax,(%esp)
0860d0d0 +0x05e:  call   08151fa0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x18d5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x18d5
0860d0d5 +0x063:  sub    $0x4,%esp
0860d0d8 +0x066:  jmp    0860d132 <+0xc0>
0860d0da +0x068:  lea    -0x50(%ebp),%eax
0860d0dd +0x06b:  mov    %eax,(%esp)
0860d0e0 +0x06e:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0860d0e5 +0x073:  mov    (%eax),%eax
0860d0e7 +0x075:  mov    %eax,-0x1c(%ebp)
0860d0ea +0x078:  lea    -0x50(%ebp),%eax
0860d0ed +0x07b:  mov    %eax,(%esp)
0860d0f0 +0x07e:  call   080cd340 <_GLOBAL__I__ZN10BingoEventC2Ev+0x218d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x218d
0860d0f5 +0x083:  mov    0x4(%eax),%eax
0860d0f8 +0x086:  mov    %eax,-0x18(%ebp)
0860d0fb +0x089:  lea    -0x2e(%ebp),%ebx
0860d0fe +0x08c:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0860d103 +0x091:  movl   $0x0,0x4(%esp)
0860d10b +0x099:  mov    %eax,(%esp)
0860d10e +0x09c:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0860d113 +0x0a1:  movl   $0x1a,0x8(%esp)
0860d11b +0x0a9:  mov    %ebx,0x4(%esp)
0860d11f +0x0ad:  mov    %eax,(%esp)
0860d122 +0x0b0:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0860d127 +0x0b5:  lea    -0x50(%ebp),%eax
0860d12a +0x0b8:  mov    %eax,(%esp)
0860d12d +0x0bb:  call   080da746 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x8e3>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x8e3
0860d132 +0x0c0:  mov    0x8(%ebp),%edx
0860d135 +0x0c3:  lea    -0x10(%ebp),%eax
0860d138 +0x0c6:  mov    %edx,0x4(%esp)
0860d13c +0x0ca:  mov    %eax,(%esp)
0860d13f +0x0cd:  call   080cd31a <_GLOBAL__I__ZN10BingoEventC2Ev+0x2167>  ; global constructors keyed to BingoEvent::BingoEvent()+0x2167
0860d144 +0x0d2:  sub    $0x4,%esp
0860d147 +0x0d5:  lea    -0x10(%ebp),%eax
0860d14a +0x0d8:  mov    %eax,0x4(%esp)
0860d14e +0x0dc:  lea    -0x50(%ebp),%eax
0860d151 +0x0df:  mov    %eax,(%esp)
0860d154 +0x0e2:  call   080da3c8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x565>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x565
0860d159 +0x0e7:  test   %al,%al
0860d15b +0x0e9:  jne    0860d0da <+0x68>
0860d161 +0x0ef:  lea    -0x4c(%ebp),%eax
0860d164 +0x0f2:  mov    %eax,(%esp)
0860d167 +0x0f5:  call   08610846 <_GLOBAL__I__ZN10StatisticsC2Ev+0x8c4>  ; global constructors keyed to Statistics::Statistics()+0x8c4
0860d16c +0x0fa:  mov    -0x14(%ebp),%eax
0860d16f +0x0fd:  mov    %eax,-0x4c(%ebp)
0860d172 +0x100:  mov    0x8(%ebp),%eax
0860d175 +0x103:  mov    %eax,0x4(%esp)
0860d179 +0x107:  lea    -0x4c(%ebp),%eax
0860d17c +0x10a:  add    $0x4,%eax
0860d17f +0x10d:  mov    %eax,(%esp)
0860d182 +0x110:  call   081526c0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1ff5>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1ff5
0860d187 +0x115:  mov    0x8(%ebp),%eax
0860d18a +0x118:  lea    0x18(%eax),%edx
0860d18d +0x11b:  lea    -0x4c(%ebp),%eax
0860d190 +0x11e:  mov    %eax,0x4(%esp)
0860d194 +0x122:  mov    %edx,(%esp)
0860d197 +0x125:  call   0861111a <_GLOBAL__I__ZN10StatisticsC2Ev+0x1198>  ; global constructors keyed to Statistics::Statistics()+0x1198
0860d19c +0x12a:  mov    0x8(%ebp),%eax
0860d19f +0x12d:  mov    %eax,(%esp)
0860d1a2 +0x130:  call   080c6cde <_GLOBAL__I_g_ServerString_+0x249>  ; global constructors keyed to g_ServerString_+0x249
0860d1a7 +0x135:  mov    0x8(%ebp),%eax
0860d1aa +0x138:  mov    %eax,(%esp)
0860d1ad +0x13b:  call   086102d4 <_GLOBAL__I__ZN10StatisticsC2Ev+0x352>  ; global constructors keyed to Statistics::Statistics()+0x352
0860d1b2 +0x140:  lea    -0x4c(%ebp),%eax
0860d1b5 +0x143:  mov    %eax,(%esp)
0860d1b8 +0x146:  call   0861085c <_GLOBAL__I__ZN10StatisticsC2Ev+0x8da>  ; global constructors keyed to Statistics::Statistics()+0x8da
0860d1bd +0x14b:  jmp    0860d1da <+0x168>
0860d1bf +0x14d:  mov    %edx,%ebx
0860d1c1 +0x14f:  mov    %eax,%esi
0860d1c3 +0x151:  lea    -0x4c(%ebp),%eax
0860d1c6 +0x154:  mov    %eax,(%esp)
0860d1c9 +0x157:  call   0861085c <_GLOBAL__I__ZN10StatisticsC2Ev+0x8da>  ; global constructors keyed to Statistics::Statistics()+0x8da
0860d1ce +0x15c:  mov    %esi,%eax
0860d1d0 +0x15e:  mov    %ebx,%edx
0860d1d2 +0x160:  mov    %eax,(%esp)
0860d1d5 +0x163:  call   08ae3750 <_Unwind_Resume>
0860d1da +0x168:  lea    -0x7c(%ebp),%eax
0860d1dd +0x16b:  mov    %eax,0x4(%esp)
0860d1e1 +0x16f:  lea    -0x14(%ebp),%eax
0860d1e4 +0x172:  mov    %eax,(%esp)
0860d1e7 +0x175:  call   0807e360 <_init+0xc58>
0860d1ec +0x17a:  mov    %eax,-0xc(%ebp)
0860d1ef +0x17d:  mov    $0x1,%eax
0860d1f4 +0x182:  lea    -0x8(%ebp),%esp
0860d1f7 +0x185:  add    $0x0,%esp
0860d1fa +0x188:  pop    %ebx
0860d1fb +0x189:  pop    %esi
0860d1fc +0x18a:  pop    %ebp
0860d1fd +0x18b:  ret
```

## 反编译 C

```c
// CClientCrashDownLogStatistic::CarryClientCrashDown @ 0x860d072

/* CClientCrashDownLogStatistic::CarryClientCrashDown() */

undefined4 __thiscall
CClientCrashDownLogStatistic::CarryClientCrashDown(CClientCrashDownLogStatistic *this)

{
  char cVar1;
  CEnvironment *this_00;
  undefined4 *puVar2;
  int iVar3;
  CStatisticServerProxy *this_01;
  tm local_80;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_54 [4];
  time_t local_50;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> amStack_4c [26];
  Packet_Reason_Crash_Down_Info local_32 [10];
  time_t local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  time_t local_18;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_14 [8];
  
  local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  cVar1 = std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::empty
                    ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
  if (cVar1 != '\x01') {
    Packet_Reason_Crash_Down_Info::Packet_Reason_Crash_Down_Info(local_32);
    local_28 = local_18;
    this_00 = (CEnvironment *)G_CEnvironment();
    local_24 = CEnvironment::get_channel_no(this_00);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::begin(local_54);
    while( true ) {
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_14);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_54,
                         (_Rb_tree_iterator *)local_14);
      if (cVar1 == '\0') break;
      puVar2 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_54);
      local_20 = *puVar2;
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_54);
      local_1c = *(undefined4 *)(iVar3 + 4);
      this_01 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,0);
      CStatisticServerProxy::SendPacket(this_01,(char *)local_32,0x1a);
      std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_54);
    }
    stClientCrashDownLog_t::stClientCrashDownLog_t((stClientCrashDownLog_t *)&local_50);
    local_50 = local_18;
                    /* try { // try from 0860d182 to 0860d1a6 has its CatchHandler @ 0860d1bf */
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator=
              (amStack_4c,(map *)this);
    std::
    vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
    ::push_back((vector<CClientCrashDownLogStatistic::stClientCrashDownLog_t,std::allocator<CClientCrashDownLogStatistic::stClientCrashDownLog_t>>
                 *)(this + 0x18),(stClientCrashDownLog_t *)&local_50);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
    Init();
    stClientCrashDownLog_t::~stClientCrashDownLog_t((stClientCrashDownLog_t *)&local_50);
  }
  localtime_r(&local_18,&local_80);
  return 1;
}
```
