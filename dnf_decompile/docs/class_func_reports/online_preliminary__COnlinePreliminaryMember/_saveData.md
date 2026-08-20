# _saveData

`_ZN18online_preliminary24COnlinePreliminaryMember9_saveDataEP5CUser`

`online_preliminary::COnlinePreliminaryMember::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMember` | `0x08585fd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08585fd6  _ZN18online_preliminary24COnlinePreliminaryMember9_saveDataEP5CUser
#           online_preliminary::COnlinePreliminaryMember::_saveData(CUser*)
# range [0x08585fd6, 0x085860ff]
08585fd6 +0x000:  push   %ebp
08585fd7 +0x001:  mov    %esp,%ebp
08585fd9 +0x003:  push   %esi
08585fda +0x004:  push   %ebx
08585fdb +0x005:  sub    $0x20,%esp
08585fde +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08585fe3 +0x00d:  movl   $0x21,0x8(%esp)
08585feb +0x015:  movl   $"OnlinePreliminaryData.cpp",0x4(%esp)
08585ff3 +0x01d:  mov    %eax,(%esp)
08585ff6 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08585ffb +0x025:  movl   $0x1,0x8(%esp)
08586003 +0x02d:  mov    %eax,0x4(%esp)
08586007 +0x031:  lea    -0x14(%ebp),%eax
0858600a +0x034:  mov    %eax,(%esp)
0858600d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08586012 +0x03c:  lea    -0x14(%ebp),%eax
08586015 +0x03f:  mov    %eax,(%esp)
08586018 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0858601d +0x047:  movl   $0x1e7,0x4(%esp)
08586025 +0x04f:  mov    %eax,(%esp)
08586028 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0858602d +0x057:  mov    0xc(%ebp),%eax
08586030 +0x05a:  mov    %eax,(%esp)
08586033 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08586038 +0x062:  mov    %eax,%ebx
0858603a +0x064:  lea    -0x14(%ebp),%eax
0858603d +0x067:  mov    %eax,(%esp)
08586040 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08586045 +0x06f:  mov    %ebx,0x4(%esp)
08586049 +0x073:  mov    %eax,(%esp)
0858604c +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08586051 +0x07b:  lea    -0x14(%ebp),%eax
08586054 +0x07e:  mov    %eax,(%esp)
08586057 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0858605c +0x086:  mov    %eax,(%esp)
0858605f +0x089:  call   08586982 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0xca>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0xca
08586064 +0x08e:  mov    %eax,-0xc(%ebp)
08586067 +0x091:  mov    0xc(%ebp),%eax
0858606a +0x094:  mov    %eax,(%esp)
0858606d +0x097:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08586072 +0x09c:  mov    %eax,%edx
08586074 +0x09e:  mov    -0xc(%ebp),%eax
08586077 +0x0a1:  mov    %dx,(%eax)
0858607a +0x0a4:  mov    0xc(%ebp),%eax
0858607d +0x0a7:  mov    %eax,(%esp)
08586080 +0x0aa:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08586085 +0x0af:  mov    -0xc(%ebp),%edx
08586088 +0x0b2:  mov    %eax,0x4(%edx)
0858608b +0x0b5:  mov    0x8(%ebp),%eax
0858608e +0x0b8:  mov    0x8(%eax),%edx
08586091 +0x0bb:  mov    -0xc(%ebp),%eax
08586094 +0x0be:  mov    %edx,0x8(%eax)
08586097 +0x0c1:  mov    0x8(%ebp),%eax
0858609a +0x0c4:  mov    0xc(%eax),%edx
0858609d +0x0c7:  mov    -0xc(%ebp),%eax
085860a0 +0x0ca:  mov    %edx,0xc(%eax)
085860a3 +0x0cd:  mov    0x8(%ebp),%eax
085860a6 +0x0d0:  mov    0x10(%eax),%edx
085860a9 +0x0d3:  mov    -0xc(%ebp),%eax
085860ac +0x0d6:  mov    %edx,0x10(%eax)
085860af +0x0d9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085860b4 +0x0de:  lea    -0x14(%ebp),%edx
085860b7 +0x0e1:  mov    %edx,0x8(%esp)
085860bb +0x0e5:  movl   $0x2,0x4(%esp)
085860c3 +0x0ed:  mov    %eax,(%esp)
085860c6 +0x0f0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085860cb +0x0f5:  mov    $0x1,%ebx
085860d0 +0x0fa:  lea    -0x14(%ebp),%eax
085860d3 +0x0fd:  mov    %eax,(%esp)
085860d6 +0x100:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085860db +0x105:  mov    %ebx,%eax
085860dd +0x107:  add    $0x20,%esp
085860e0 +0x10a:  pop    %ebx
085860e1 +0x10b:  pop    %esi
085860e2 +0x10c:  pop    %ebp
085860e3 +0x10d:  ret
085860e4 +0x10e:  mov    %edx,%ebx
085860e6 +0x110:  mov    %eax,%esi
085860e8 +0x112:  lea    -0x14(%ebp),%eax
085860eb +0x115:  mov    %eax,(%esp)
085860ee +0x118:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085860f3 +0x11d:  mov    %esi,%eax
085860f5 +0x11f:  mov    %ebx,%edx
085860f7 +0x121:  mov    %eax,(%esp)
085860fa +0x124:  call   08ae3750 <_Unwind_Resume>
085860ff +0x129:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMember::_saveData @ 0x8585fd6

/* online_preliminary::COnlinePreliminaryMember::_saveData(CUser*) */

undefined4 __thiscall
online_preliminary::COnlinePreliminaryMember::_saveData
          (COnlinePreliminaryMember *this,CUser *param_1)

{
  undefined2 uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_ONLINE_PRELIMINARY_MEMBER *local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"OnlinePreliminaryData.cpp",0x21)
  ;
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08586028 to 085860ca has its CatchHandler @ 085860e4 */
  CStreamGuard::operator<<(pCVar3,0x1e7);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_ONLINE_PRELIMINARY_MEMBER>(pCVar3);
  uVar1 = CUser::GetServerGroup(param_1);
  *(undefined2 *)local_10 = uVar1;
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_10 + 4) = uVar5;
  *(undefined4 *)(local_10 + 8) = *(undefined4 *)(this + 8);
  *(undefined4 *)(local_10 + 0xc) = *(undefined4 *)(this + 0xc);
  *(undefined4 *)(local_10 + 0x10) = *(undefined4 *)(this + 0x10);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
