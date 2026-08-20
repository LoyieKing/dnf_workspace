# ReqChangeLetterStat

`_ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii`

`WongWork::CMailBoxHelper::ReqChangeLetterStat(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x085568a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085568a6  _ZN8WongWork14CMailBoxHelper19ReqChangeLetterStatEP5CUserii
#           WongWork::CMailBoxHelper::ReqChangeLetterStat(CUser*, int, int)
# range [0x085568a6, 0x08556a13]
085568a6 +0x000:  push   %ebp
085568a7 +0x001:  mov    %esp,%ebp
085568a9 +0x003:  push   %esi
085568aa +0x004:  push   %ebx
085568ab +0x005:  sub    $0x20,%esp
085568ae +0x008:  mov    0x10(%ebp),%eax
085568b1 +0x00b:  cmp    $0x2,%eax
085568b4 +0x00e:  je     0855690b <+0x65>
085568b6 +0x010:  cmp    $0x3,%eax
085568b9 +0x013:  je     085568c1 <+0x1b>
085568bb +0x015:  test   %eax,%eax
085568bd +0x017:  je     0855690e <+0x68>
085568bf +0x019:  jmp    08556901 <+0x5b>
085568c1 +0x01b:  mov    0x8(%ebp),%eax
085568c4 +0x01e:  mov    %eax,(%esp)
085568c7 +0x021:  call   0823020c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x58b6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x58b6
085568cc +0x026:  mov    %eax,-0x10(%ebp)
085568cf +0x029:  cmpl   $0x0,-0x10(%ebp)
085568d3 +0x02d:  jne    085568df <+0x39>
085568d5 +0x02f:  mov    $0x15,%ebx
085568da +0x034:  jmp    08556a0b <+0x165>
085568df +0x039:  mov    -0x10(%ebp),%eax
085568e2 +0x03c:  mov    %eax,(%esp)
085568e5 +0x03f:  call   08557886 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x3e7>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x3e7
085568ea +0x044:  add    $0x1,%eax
085568ed +0x047:  cmp    $0xa,%eax
085568f0 +0x04a:  setg   %al
085568f3 +0x04d:  test   %al,%al
085568f5 +0x04f:  je     08556911 <+0x6b>
085568f7 +0x051:  mov    $0x16,%ebx
085568fc +0x056:  jmp    08556a0b <+0x165>
08556901 +0x05b:  mov    $0x13,%ebx
08556906 +0x060:  jmp    08556a0b <+0x165>
0855690b +0x065:  nop
0855690c +0x066:  jmp    08556912 <+0x6c>
0855690e +0x068:  nop
0855690f +0x069:  jmp    08556912 <+0x6c>
08556911 +0x06b:  nop
08556912 +0x06c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08556917 +0x071:  movl   $0x8f0,0x8(%esp)
0855691f +0x079:  movl   $"MailBox.cpp",0x4(%esp)
08556927 +0x081:  mov    %eax,(%esp)
0855692a +0x084:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0855692f +0x089:  movl   $0x1,0x8(%esp)
08556937 +0x091:  mov    %eax,0x4(%esp)
0855693b +0x095:  lea    -0x18(%ebp),%eax
0855693e +0x098:  mov    %eax,(%esp)
08556941 +0x09b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08556946 +0x0a0:  lea    -0x18(%ebp),%eax
08556949 +0x0a3:  mov    %eax,(%esp)
0855694c +0x0a6:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556951 +0x0ab:  movl   $0xc2,0x4(%esp)
08556959 +0x0b3:  mov    %eax,(%esp)
0855695c +0x0b6:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556961 +0x0bb:  mov    0x8(%ebp),%eax
08556964 +0x0be:  mov    %eax,(%esp)
08556967 +0x0c1:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0855696c +0x0c6:  mov    %eax,%ebx
0855696e +0x0c8:  lea    -0x18(%ebp),%eax
08556971 +0x0cb:  mov    %eax,(%esp)
08556974 +0x0ce:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08556979 +0x0d3:  mov    %ebx,0x4(%esp)
0855697d +0x0d7:  mov    %eax,(%esp)
08556980 +0x0da:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08556985 +0x0df:  lea    -0x18(%ebp),%eax
08556988 +0x0e2:  mov    %eax,(%esp)
0855698b +0x0e5:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08556990 +0x0ea:  mov    %eax,(%esp)
08556993 +0x0ed:  call   08452054 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4c6a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4c6a
08556998 +0x0f2:  mov    %eax,-0xc(%ebp)
0855699b +0x0f5:  mov    0x8(%ebp),%eax
0855699e +0x0f8:  mov    %eax,(%esp)
085569a1 +0x0fb:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085569a6 +0x100:  mov    %eax,%edx
085569a8 +0x102:  mov    -0xc(%ebp),%eax
085569ab +0x105:  mov    %edx,(%eax)
085569ad +0x107:  mov    0xc(%ebp),%edx
085569b0 +0x10a:  mov    -0xc(%ebp),%eax
085569b3 +0x10d:  mov    %edx,0x4(%eax)
085569b6 +0x110:  mov    0x10(%ebp),%eax
085569b9 +0x113:  mov    %eax,%edx
085569bb +0x115:  mov    -0xc(%ebp),%eax
085569be +0x118:  mov    %dx,0x8(%eax)
085569c2 +0x11c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085569c7 +0x121:  lea    -0x18(%ebp),%edx
085569ca +0x124:  mov    %edx,0x8(%esp)
085569ce +0x128:  movl   $0x2,0x4(%esp)
085569d6 +0x130:  mov    %eax,(%esp)
085569d9 +0x133:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085569de +0x138:  mov    $0x0,%ebx
085569e3 +0x13d:  lea    -0x18(%ebp),%eax
085569e6 +0x140:  mov    %eax,(%esp)
085569e9 +0x143:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085569ee +0x148:  jmp    08556a0b <+0x165>
085569f0 +0x14a:  mov    %edx,%ebx
085569f2 +0x14c:  mov    %eax,%esi
085569f4 +0x14e:  lea    -0x18(%ebp),%eax
085569f7 +0x151:  mov    %eax,(%esp)
085569fa +0x154:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085569ff +0x159:  mov    %esi,%eax
08556a01 +0x15b:  mov    %ebx,%edx
08556a03 +0x15d:  mov    %eax,(%esp)
08556a06 +0x160:  call   08ae3750 <_Unwind_Resume>
08556a0b +0x165:  mov    %ebx,%eax
08556a0d +0x167:  add    $0x20,%esp
08556a10 +0x16a:  pop    %ebx
08556a11 +0x16b:  pop    %esi
08556a12 +0x16c:  pop    %ebp
08556a13 +0x16d:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqChangeLetterStat @ 0x85568a6

/* WongWork::CMailBoxHelper::ReqChangeLetterStat(CUser*, int, int) */

undefined4 WongWork::CMailBoxHelper::ReqChangeLetterStat(CUser *param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_1c [8];
  CMailBox *local_14;
  SIG_LETTER_STAT *local_10;
  
  if (param_3 != 2) {
    if (param_3 == 3) {
      local_14 = (CMailBox *)CUser::GetMailBox(param_1);
      if (local_14 == (CMailBox *)0x0) {
        return 0x15;
      }
      iVar3 = CMailBox::GetLetterKeepCount(local_14);
      if (10 < iVar3 + 1) {
        return 0x16;
      }
    }
    else if (param_3 != 0) {
      return 0x13;
    }
  }
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x8f0);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 0855695c to 085569dd has its CatchHandler @ 085569f0 */
  CStreamGuard::operator<<(pCVar2,0xc2);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_10 = CStreamGuard::GetInBuffer<SIG_LETTER_STAT>(pCVar2);
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)local_10 = uVar4;
  *(int *)(local_10 + 4) = param_2;
  *(short *)(local_10 + 8) = (short)param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return 0;
}
```
