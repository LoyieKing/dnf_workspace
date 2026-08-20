# ReqDBRemoveMail

`_ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb`

`WongWork::CMailBoxHelper::ReqDBRemoveMail(CUser const*, unsigned int*, bool)`

| 类 | 地址 |
|---|---|
| `WongWork::CMailBoxHelper` | `0x08556772` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08556772  _ZN8WongWork14CMailBoxHelper15ReqDBRemoveMailEPK5CUserPjb
#           WongWork::CMailBoxHelper::ReqDBRemoveMail(CUser const*, unsigned int*, bool)
# range [0x08556772, 0x085568a5]
08556772 +0x000:  push   %ebp
08556773 +0x001:  mov    %esp,%ebp
08556775 +0x003:  push   %esi
08556776 +0x004:  push   %ebx
08556777 +0x005:  sub    $0x30,%esp
0855677a +0x008:  mov    0x10(%ebp),%eax
0855677d +0x00b:  mov    %al,-0x1c(%ebp)
08556780 +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08556785 +0x013:  movl   $0x8ce,0x8(%esp)
0855678d +0x01b:  movl   $"MailBox.cpp",0x4(%esp)
08556795 +0x023:  mov    %eax,(%esp)
08556798 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0855679d +0x02b:  movl   $0x1,0x8(%esp)
085567a5 +0x033:  mov    %eax,0x4(%esp)
085567a9 +0x037:  lea    -0x18(%ebp),%eax
085567ac +0x03a:  mov    %eax,(%esp)
085567af +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085567b4 +0x042:  lea    -0x18(%ebp),%eax
085567b7 +0x045:  mov    %eax,(%esp)
085567ba +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085567bf +0x04d:  movl   $0x81,0x4(%esp)
085567c7 +0x055:  mov    %eax,(%esp)
085567ca +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085567cf +0x05d:  mov    0x8(%ebp),%eax
085567d2 +0x060:  mov    %eax,(%esp)
085567d5 +0x063:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085567da +0x068:  mov    %eax,%ebx
085567dc +0x06a:  lea    -0x18(%ebp),%eax
085567df +0x06d:  mov    %eax,(%esp)
085567e2 +0x070:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085567e7 +0x075:  mov    %ebx,0x4(%esp)
085567eb +0x079:  mov    %eax,(%esp)
085567ee +0x07c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085567f3 +0x081:  lea    -0x18(%ebp),%eax
085567f6 +0x084:  mov    %eax,(%esp)
085567f9 +0x087:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085567fe +0x08c:  mov    %eax,(%esp)
08556801 +0x08f:  call   08558b26 <_GLOBAL__I__ZN8WongWork14CMailBoxHelper13g_MailBoxPoolE+0x1687>  ; global constructors keyed to WongWork::CMailBoxHelper::g_MailBoxPool+0x1687
08556806 +0x094:  mov    %eax,-0x10(%ebp)
08556809 +0x097:  mov    0xc(%ebp),%eax
0855680c +0x09a:  mov    (%eax),%edx
0855680e +0x09c:  mov    -0x10(%ebp),%eax
08556811 +0x09f:  mov    %edx,(%eax)
08556813 +0x0a1:  movl   $0x1,-0xc(%ebp)
0855681a +0x0a8:  jmp    08556834 <+0xc2>
0855681c +0x0aa:  mov    -0xc(%ebp),%edx
0855681f +0x0ad:  mov    -0xc(%ebp),%eax
08556822 +0x0b0:  shl    $0x2,%eax
08556825 +0x0b3:  add    0xc(%ebp),%eax
08556828 +0x0b6:  mov    (%eax),%ecx
0855682a +0x0b8:  mov    -0x10(%ebp),%eax
0855682d +0x0bb:  mov    %ecx,(%eax,%edx,4)
08556830 +0x0be:  addl   $0x1,-0xc(%ebp)
08556834 +0x0c2:  mov    0xc(%ebp),%eax
08556837 +0x0c5:  mov    (%eax),%eax
08556839 +0x0c7:  cmp    -0xc(%ebp),%eax
0855683c +0x0ca:  setae  %al
0855683f +0x0cd:  test   %al,%al
08556841 +0x0cf:  jne    0855681c <+0xaa>
08556843 +0x0d1:  cmpb   $0x0,-0x1c(%ebp)
08556847 +0x0d5:  je     08556850 <+0xde>
08556849 +0x0d7:  mov    $0x2,%eax
0855684e +0x0dc:  jmp    08556855 <+0xe3>
08556850 +0x0de:  mov    $0x1,%eax
08556855 +0x0e3:  mov    -0x10(%ebp),%edx
08556858 +0x0e6:  mov    %eax,0x54(%edx)
0855685b +0x0e9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08556860 +0x0ee:  lea    -0x18(%ebp),%edx
08556863 +0x0f1:  mov    %edx,0x8(%esp)
08556867 +0x0f5:  movl   $0x2,0x4(%esp)
0855686f +0x0fd:  mov    %eax,(%esp)
08556872 +0x100:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08556877 +0x105:  jmp    08556894 <+0x122>
08556879 +0x107:  mov    %edx,%ebx
0855687b +0x109:  mov    %eax,%esi
0855687d +0x10b:  lea    -0x18(%ebp),%eax
08556880 +0x10e:  mov    %eax,(%esp)
08556883 +0x111:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08556888 +0x116:  mov    %esi,%eax
0855688a +0x118:  mov    %ebx,%edx
0855688c +0x11a:  mov    %eax,(%esp)
0855688f +0x11d:  call   08ae3750 <_Unwind_Resume>
08556894 +0x122:  lea    -0x18(%ebp),%eax
08556897 +0x125:  mov    %eax,(%esp)
0855689a +0x128:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0855689f +0x12d:  add    $0x30,%esp
085568a2 +0x130:  pop    %ebx
085568a3 +0x131:  pop    %esi
085568a4 +0x132:  pop    %ebp
085568a5 +0x133:  ret
```

## 反编译 C

```c
// WongWork::CMailBoxHelper::ReqDBRemoveMail @ 0x8556772

/* WongWork::CMailBoxHelper::ReqDBRemoveMail(CUser const*, unsigned int*, bool) */

void WongWork::CMailBoxHelper::ReqDBRemoveMail(CUser *param_1,uint *param_2,bool param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_1c [8];
  SIG_MAILBOX_DEL_MAIL *local_14;
  uint local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"MailBox.cpp",0x8ce);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 085567ca to 08556876 has its CatchHandler @ 08556879 */
  CStreamGuard::operator<<(pCVar2,0x81);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_MAILBOX_DEL_MAIL>(pCVar2);
  *(uint *)local_14 = *param_2;
  for (local_10 = 1; local_10 <= *param_2; local_10 = local_10 + 1) {
    *(uint *)(local_14 + local_10 * 4) = param_2[local_10];
  }
  if (param_3) {
    uVar4 = 2;
  }
  else {
    uVar4 = 1;
  }
  *(undefined4 *)(local_14 + 0x54) = uVar4;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return;
}
```
