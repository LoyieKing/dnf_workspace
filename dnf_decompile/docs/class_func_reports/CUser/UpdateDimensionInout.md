# UpdateDimensionInout

`_ZN5CUser20UpdateDimensionInoutEv`

`CUser::UpdateDimensionInout()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08651fba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08651fba  _ZN5CUser20UpdateDimensionInoutEv
#           CUser::UpdateDimensionInout()
# range [0x08651fba, 0x086521eb]
08651fba +0x000:  push   %ebp
08651fbb +0x001:  mov    %esp,%ebp
08651fbd +0x003:  push   %esi
08651fbe +0x004:  push   %ebx
08651fbf +0x005:  sub    $0x40,%esp
08651fc2 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08651fc7 +0x00d:  movl   $0x1bd0,0x8(%esp)
08651fcf +0x015:  movl   $"user.cpp",0x4(%esp)
08651fd7 +0x01d:  mov    %eax,(%esp)
08651fda +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08651fdf +0x025:  movl   $0x1,0x8(%esp)
08651fe7 +0x02d:  mov    %eax,0x4(%esp)
08651feb +0x031:  lea    -0x2c(%ebp),%eax
08651fee +0x034:  mov    %eax,(%esp)
08651ff1 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08651ff6 +0x03c:  lea    -0x2c(%ebp),%eax
08651ff9 +0x03f:  mov    %eax,(%esp)
08651ffc +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652001 +0x047:  movl   $0x14f,0x4(%esp)
08652009 +0x04f:  mov    %eax,(%esp)
0865200c +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08652011 +0x057:  mov    0x8(%ebp),%eax
08652014 +0x05a:  mov    %eax,(%esp)
08652017 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0865201c +0x062:  mov    %eax,%ebx
0865201e +0x064:  lea    -0x2c(%ebp),%eax
08652021 +0x067:  mov    %eax,(%esp)
08652024 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08652029 +0x06f:  mov    %ebx,0x4(%esp)
0865202d +0x073:  mov    %eax,(%esp)
08652030 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08652035 +0x07b:  lea    -0x2c(%ebp),%eax
08652038 +0x07e:  mov    %eax,(%esp)
0865203b +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08652040 +0x086:  mov    %eax,(%esp)
08652043 +0x089:  call   0869aa4a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x729f>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x729f
08652048 +0x08e:  mov    %eax,-0x14(%ebp)
0865204b +0x091:  movl   $0x10,0x8(%esp)
08652053 +0x099:  movl   $0x0,0x4(%esp)
0865205b +0x0a1:  mov    -0x14(%ebp),%eax
0865205e +0x0a4:  mov    %eax,(%esp)
08652061 +0x0a7:  call   0807dcc0 <_init+0x5b8>
08652066 +0x0ac:  mov    0x8(%ebp),%eax
08652069 +0x0af:  mov    %eax,(%esp)
0865206c +0x0b2:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08652071 +0x0b7:  mov    -0x14(%ebp),%edx
08652074 +0x0ba:  mov    %eax,(%edx)
08652076 +0x0bc:  movl   $0x0,-0x10(%ebp)
0865207d +0x0c3:  jmp    08652130 <+0x176>
08652082 +0x0c8:  mov    -0x10(%ebp),%eax
08652085 +0x0cb:  movsbl %al,%edx
08652088 +0x0ce:  mov    0x8(%ebp),%eax
0865208b +0x0d1:  mov    %edx,0x4(%esp)
0865208f +0x0d5:  mov    %eax,(%esp)
08652092 +0x0d8:  call   085bf9d8 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0xf36>  ; global constructors keyed to CParty::cMember::cMember()+0xf36
08652097 +0x0dd:  mov    %al,-0x9(%ebp)
0865209a +0x0e0:  cmpb   $0x0,-0x9(%ebp)
0865209e +0x0e4:  js     086520c2 <+0x108>
086520a0 +0x0e6:  movsbl -0x9(%ebp),%ebx
086520a4 +0x0ea:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086520a9 +0x0ef:  mov    -0x10(%ebp),%edx
086520ac +0x0f2:  mov    %edx,0x4(%esp)
086520b0 +0x0f6:  mov    %eax,(%esp)
086520b3 +0x0f9:  call   0822b612 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcbc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcbc
086520b8 +0x0fe:  movsbl %al,%eax
086520bb +0x101:  add    $0xa,%eax
086520be +0x104:  cmp    %eax,%ebx
086520c0 +0x106:  jle    086520c9 <+0x10f>
086520c2 +0x108:  mov    $0x1,%eax
086520c7 +0x10d:  jmp    086520ce <+0x114>
086520c9 +0x10f:  mov    $0x0,%eax
086520ce +0x114:  test   %al,%al
086520d0 +0x116:  je     0865211e <+0x164>
086520d2 +0x118:  mov    -0x10(%ebp),%eax
086520d5 +0x11b:  mov    -0x14(%ebp),%edx
086520d8 +0x11e:  movb   $0x0,0x4(%edx,%eax,1)
086520dd +0x123:  mov    -0x14(%ebp),%eax
086520e0 +0x126:  mov    (%eax),%ebx
086520e2 +0x128:  movl   $0x0,0xc(%esp)
086520ea +0x130:  movl   $0x1bde,0x8(%esp)
086520f2 +0x138:  movl   $&_ZZN5CUser20UpdateDimensionInoutEvE19__PRETTY_FUNCTION__,0x4(%esp)
086520fa +0x140:  lea    -0x24(%ebp),%eax
086520fd +0x143:  mov    %eax,(%esp)
08652100 +0x146:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08652105 +0x14b:  mov    %ebx,0x8(%esp)
08652109 +0x14f:  movl   $"DIMENSION DUNGEON INOUT_COUNT ABNORMAL USER!! CHARAC_NO(%d)",0x4(%esp)
08652111 +0x157:  lea    -0x24(%ebp),%eax
08652114 +0x15a:  mov    %eax,(%esp)
08652117 +0x15d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0865211c +0x162:  jmp    0865212c <+0x172>
0865211e +0x164:  mov    -0x10(%ebp),%eax
08652121 +0x167:  mov    -0x14(%ebp),%edx
08652124 +0x16a:  movzbl -0x9(%ebp),%ecx
08652128 +0x16e:  mov    %cl,0x4(%edx,%eax,1)
0865212c +0x172:  addl   $0x1,-0x10(%ebp)
08652130 +0x176:  cmpl   $0x5,-0x10(%ebp)
08652134 +0x17a:  setle  %al
08652137 +0x17d:  test   %al,%al
08652139 +0x17f:  jne    08652082 <+0xc8>
0865213f +0x185:  mov    0x8(%ebp),%eax
08652142 +0x188:  movl   $0x2,0x4(%esp)
0865214a +0x190:  mov    %eax,(%esp)
0865214d +0x193:  call   08696176 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x29cb>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x29cb
08652152 +0x198:  mov    -0x14(%ebp),%edx
08652155 +0x19b:  mov    %al,0xc(%edx)
08652158 +0x19e:  mov    0x8(%ebp),%eax
0865215b +0x1a1:  mov    %eax,(%esp)
0865215e +0x1a4:  call   08696116 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x296b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x296b
08652163 +0x1a9:  mov    -0x14(%ebp),%edx
08652166 +0x1ac:  mov    %al,0xd(%edx)
08652169 +0x1af:  mov    0x8(%ebp),%eax
0865216c +0x1b2:  mov    %eax,(%esp)
0865216f +0x1b5:  call   08696146 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x299b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x299b
08652174 +0x1ba:  mov    -0x14(%ebp),%edx
08652177 +0x1bd:  mov    %al,0xe(%edx)
0865217a +0x1c0:  mov    0x8(%ebp),%eax
0865217d +0x1c3:  movl   $0x0,0x4(%esp)
08652185 +0x1cb:  mov    %eax,(%esp)
08652188 +0x1ce:  call   08696128 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x297d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x297d
0865218d +0x1d3:  mov    0x8(%ebp),%eax
08652190 +0x1d6:  movl   $0x0,0x4(%esp)
08652198 +0x1de:  mov    %eax,(%esp)
0865219b +0x1e1:  call   08696158 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x29ad>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x29ad
086521a0 +0x1e6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
086521a5 +0x1eb:  lea    -0x2c(%ebp),%edx
086521a8 +0x1ee:  mov    %edx,0x8(%esp)
086521ac +0x1f2:  movl   $0x2,0x4(%esp)
086521b4 +0x1fa:  mov    %eax,(%esp)
086521b7 +0x1fd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
086521bc +0x202:  jmp    086521d9 <+0x21f>
086521be +0x204:  mov    %edx,%ebx
086521c0 +0x206:  mov    %eax,%esi
086521c2 +0x208:  lea    -0x2c(%ebp),%eax
086521c5 +0x20b:  mov    %eax,(%esp)
086521c8 +0x20e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086521cd +0x213:  mov    %esi,%eax
086521cf +0x215:  mov    %ebx,%edx
086521d1 +0x217:  mov    %eax,(%esp)
086521d4 +0x21a:  call   08ae3750 <_Unwind_Resume>
086521d9 +0x21f:  lea    -0x2c(%ebp),%eax
086521dc +0x222:  mov    %eax,(%esp)
086521df +0x225:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
086521e4 +0x22a:  add    $0x40,%esp
086521e7 +0x22d:  pop    %ebx
086521e8 +0x22e:  pop    %esi
086521e9 +0x22f:  pop    %ebp
086521ea +0x230:  ret
086521eb +0x231:  nop
```

## 反编译 C

```c
// CUser::UpdateDimensionInout @ 0x8651fba

/* CUser::UpdateDimensionInout() */

void __thiscall CUser::UpdateDimensionInout(CUser *this)

{
  bool bVar1;
  char cVar2;
  SIG_UPDATE_DIMENSION SVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  int iVar6;
  undefined4 uVar7;
  CDataManager *this_00;
  CStreamGuard local_30 [8];
  cMyTrace local_28 [16];
  SIG_UPDATE_DIMENSION *local_18;
  int local_14;
  SIG_UPDATE_DIMENSION local_d;
  
  pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x1bd0);
  CStreamGuard::CStreamGuard(local_30,pSVar4,true);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 0865200c to 086521bb has its CatchHandler @ 086521be */
  CStreamGuard::operator<<(pCVar5,0x14f);
  iVar6 = GetUID(this);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_30);
  CStreamGuard::operator<<(pCVar5,iVar6);
  pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_30);
  local_18 = CStreamGuard::GetInBuffer<SIG_UPDATE_DIMENSION>(pCVar5);
  memset(local_18,0,0x10);
  uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
  *(undefined4 *)local_18 = uVar7;
  local_14 = 0;
  do {
    if (5 < local_14) {
      SVar3 = (SIG_UPDATE_DIMENSION)
              CUserCharacInfo::getUltimateInoutValue((CUserCharacInfo *)this,'\x02');
      local_18[0xc] = SVar3;
      SVar3 = (SIG_UPDATE_DIMENSION)
              CUserCharacInfo::IsSaveDemensionInoutValue((CUserCharacInfo *)this);
      local_18[0xd] = SVar3;
      SVar3 = (SIG_UPDATE_DIMENSION)CUserCharacInfo::IsSaveBloodInoutValue((CUserCharacInfo *)this);
      local_18[0xe] = SVar3;
      CUserCharacInfo::SetSaveDemensionInoutValue((CUserCharacInfo *)this,false);
      CUserCharacInfo::SetSaveBloodInoutValue((CUserCharacInfo *)this,false);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
      CStreamGuard::~CStreamGuard(local_30);
      return;
    }
    local_d = (SIG_UPDATE_DIMENSION)
              CUserCharacInfo::getDemensionInoutValue((CUserCharacInfo *)this,(char)local_14);
    if ((char)local_d < '\0') {
LAB_086520c2:
      bVar1 = true;
    }
    else {
      iVar6 = (int)(char)local_d;
      this_00 = (CDataManager *)G_CDataManager();
      cVar2 = CDataManager::get_dimensionInout(this_00,local_14);
      if (cVar2 + 10 < iVar6) goto LAB_086520c2;
      bVar1 = false;
    }
    if (bVar1) {
      local_18[local_14 + 4] = (SIG_UPDATE_DIMENSION)0x0;
      uVar7 = *(undefined4 *)local_18;
      cMyTrace::cMyTrace(local_28,"void CUser::UpdateDimensionInout()",0x1bde,0);
      cMyTrace::operator()
                (local_28,"DIMENSION DUNGEON INOUT_COUNT ABNORMAL USER!! CHARAC_NO(%d)",uVar7);
    }
    else {
      local_18[local_14 + 4] = local_d;
    }
    local_14 = local_14 + 1;
  } while( true );
}
```
