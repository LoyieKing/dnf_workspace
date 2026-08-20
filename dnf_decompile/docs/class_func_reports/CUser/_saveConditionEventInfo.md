# _saveConditionEventInfo

`_ZN5CUser23_saveConditionEventInfoEjss`

`CUser::_saveConditionEventInfo(unsigned int, short, short)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086819fa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086819fa  _ZN5CUser23_saveConditionEventInfoEjss
#           CUser::_saveConditionEventInfo(unsigned int, short, short)
# range [0x086819fa, 0x08681b39]
086819fa +0x000:  push   %ebp
086819fb +0x001:  mov    %esp,%ebp
086819fd +0x003:  push   %esi
086819fe +0x004:  push   %ebx
086819ff +0x005:  sub    $0x30,%esp
08681a02 +0x008:  mov    0x10(%ebp),%edx
08681a05 +0x00b:  mov    0x14(%ebp),%eax
08681a08 +0x00e:  mov    %dx,-0x1c(%ebp)
08681a0c +0x012:  mov    %ax,-0x20(%ebp)
08681a10 +0x016:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08681a15 +0x01b:  movl   $0x71,0x4(%esp)
08681a1d +0x023:  mov    %eax,(%esp)
08681a20 +0x026:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08681a25 +0x02b:  mov    (%eax),%edx
08681a27 +0x02d:  add    $0x34,%edx
08681a2a +0x030:  mov    (%edx),%edx
08681a2c +0x032:  movl   $0x0,0x4(%esp)
08681a34 +0x03a:  mov    %eax,(%esp)
08681a37 +0x03d:  call   *%edx
08681a39 +0x03f:  xor    $0x1,%eax
08681a3c +0x042:  test   %al,%al
08681a3e +0x044:  jne    08681b31 <+0x137>
08681a44 +0x04a:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08681a49 +0x04f:  movl   $0x8556,0x8(%esp)
08681a51 +0x057:  movl   $"user.cpp",0x4(%esp)
08681a59 +0x05f:  mov    %eax,(%esp)
08681a5c +0x062:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08681a61 +0x067:  movl   $0x1,0x8(%esp)
08681a69 +0x06f:  mov    %eax,0x4(%esp)
08681a6d +0x073:  lea    -0x14(%ebp),%eax
08681a70 +0x076:  mov    %eax,(%esp)
08681a73 +0x079:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08681a78 +0x07e:  lea    -0x14(%ebp),%eax
08681a7b +0x081:  mov    %eax,(%esp)
08681a7e +0x084:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08681a83 +0x089:  movl   $0x19f,0x4(%esp)
08681a8b +0x091:  mov    %eax,(%esp)
08681a8e +0x094:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08681a93 +0x099:  mov    0x8(%ebp),%eax
08681a96 +0x09c:  mov    %eax,(%esp)
08681a99 +0x09f:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08681a9e +0x0a4:  mov    %eax,%ebx
08681aa0 +0x0a6:  lea    -0x14(%ebp),%eax
08681aa3 +0x0a9:  mov    %eax,(%esp)
08681aa6 +0x0ac:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08681aab +0x0b1:  mov    %ebx,0x4(%esp)
08681aaf +0x0b5:  mov    %eax,(%esp)
08681ab2 +0x0b8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08681ab7 +0x0bd:  lea    -0x14(%ebp),%eax
08681aba +0x0c0:  mov    %eax,(%esp)
08681abd +0x0c3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08681ac2 +0x0c8:  mov    %eax,(%esp)
08681ac5 +0x0cb:  call   0869c126 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x897b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x897b
08681aca +0x0d0:  mov    %eax,-0xc(%ebp)
08681acd +0x0d3:  mov    -0xc(%ebp),%eax
08681ad0 +0x0d6:  mov    0xc(%ebp),%edx
08681ad3 +0x0d9:  mov    %edx,(%eax)
08681ad5 +0x0db:  mov    -0xc(%ebp),%eax
08681ad8 +0x0de:  movzwl -0x1c(%ebp),%edx
08681adc +0x0e2:  mov    %dx,0x4(%eax)
08681ae0 +0x0e6:  mov    -0xc(%ebp),%eax
08681ae3 +0x0e9:  movzwl -0x20(%ebp),%edx
08681ae7 +0x0ed:  mov    %dx,0x6(%eax)
08681aeb +0x0f1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08681af0 +0x0f6:  lea    -0x14(%ebp),%edx
08681af3 +0x0f9:  mov    %edx,0x8(%esp)
08681af7 +0x0fd:  movl   $0x2,0x4(%esp)
08681aff +0x105:  mov    %eax,(%esp)
08681b02 +0x108:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08681b07 +0x10d:  jmp    08681b24 <+0x12a>
08681b09 +0x10f:  mov    %edx,%ebx
08681b0b +0x111:  mov    %eax,%esi
08681b0d +0x113:  lea    -0x14(%ebp),%eax
08681b10 +0x116:  mov    %eax,(%esp)
08681b13 +0x119:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08681b18 +0x11e:  mov    %esi,%eax
08681b1a +0x120:  mov    %ebx,%edx
08681b1c +0x122:  mov    %eax,(%esp)
08681b1f +0x125:  call   08ae3750 <_Unwind_Resume>
08681b24 +0x12a:  lea    -0x14(%ebp),%eax
08681b27 +0x12d:  mov    %eax,(%esp)
08681b2a +0x130:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08681b2f +0x135:  jmp    08681b32 <+0x138>
08681b31 +0x137:  nop
08681b32 +0x138:  add    $0x30,%esp
08681b35 +0x13b:  pop    %ebx
08681b36 +0x13c:  pop    %esi
08681b37 +0x13d:  pop    %ebp
08681b38 +0x13e:  ret
08681b39 +0x13f:  nop
```

## 反编译 C

```c
// CUser::_saveConditionEventInfo @ 0x86819fa

/* CUser::_saveConditionEventInfo(unsigned int, short, short) */

void __thiscall CUser::_saveConditionEventInfo(CUser *this,uint param_1,short param_2,short param_3)

{
  char cVar1;
  int *piVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  CStreamGuard local_18 [8];
  SIG_SAVE_CONDITION_EVENT *local_10;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x71);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 == '\x01') {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x8556);
    CStreamGuard::CStreamGuard(local_18,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08681a8e to 08681b06 has its CatchHandler @ 08681b09 */
    CStreamGuard::operator<<(pCVar4,0x19f);
    iVar5 = GetUID(this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar4,iVar5);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_18);
    local_10 = CStreamGuard::GetInBuffer<SIG_SAVE_CONDITION_EVENT>(pCVar4);
    *(uint *)local_10 = param_1;
    *(short *)(local_10 + 4) = param_2;
    *(short *)(local_10 + 6) = param_3;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
    CStreamGuard::~CStreamGuard(local_18);
  }
  return;
}
```
