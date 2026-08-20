# RequestDBSkill

`_ZN23DisPatcher_SelectCharac14RequestDBSkillEP5CUserR17MSG_CHARAC_SELECT`

`DisPatcher_SelectCharac::RequestDBSkill(CUser*, MSG_CHARAC_SELECT&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SelectCharac` | `0x081c6f08` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c6f08  _ZN23DisPatcher_SelectCharac14RequestDBSkillEP5CUserR17MSG_CHARAC_SELECT
#           DisPatcher_SelectCharac::RequestDBSkill(CUser*, MSG_CHARAC_SELECT&)
# range [0x081c6f08, 0x081c70c1]
081c6f08 +0x000:  push   %ebp
081c6f09 +0x001:  mov    %esp,%ebp
081c6f0b +0x003:  push   %esi
081c6f0c +0x004:  push   %ebx
081c6f0d +0x005:  sub    $0x20,%esp
081c6f10 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
081c6f15 +0x00d:  movl   $0x17a1,0x8(%esp)
081c6f1d +0x015:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081c6f25 +0x01d:  mov    %eax,(%esp)
081c6f28 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
081c6f2d +0x025:  movl   $0x1,0x8(%esp)
081c6f35 +0x02d:  mov    %eax,0x4(%esp)
081c6f39 +0x031:  lea    -0x14(%ebp),%eax
081c6f3c +0x034:  mov    %eax,(%esp)
081c6f3f +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
081c6f44 +0x03c:  lea    -0x14(%ebp),%eax
081c6f47 +0x03f:  mov    %eax,(%esp)
081c6f4a +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c6f4f +0x047:  movl   $0x9,0x4(%esp)
081c6f57 +0x04f:  mov    %eax,(%esp)
081c6f5a +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c6f5f +0x057:  mov    0xc(%ebp),%eax
081c6f62 +0x05a:  mov    %eax,(%esp)
081c6f65 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
081c6f6a +0x062:  mov    %eax,%ebx
081c6f6c +0x064:  lea    -0x14(%ebp),%eax
081c6f6f +0x067:  mov    %eax,(%esp)
081c6f72 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c6f77 +0x06f:  mov    %ebx,0x4(%esp)
081c6f7b +0x073:  mov    %eax,(%esp)
081c6f7e +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c6f83 +0x07b:  movl   $0x2,0x4(%esp)
081c6f8b +0x083:  mov    0xc(%ebp),%eax
081c6f8e +0x086:  mov    %eax,(%esp)
081c6f91 +0x089:  call   081348ce <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4d5>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4d5
081c6f96 +0x08e:  mov    0xc(%ebp),%eax
081c6f99 +0x091:  mov    %eax,(%esp)
081c6f9c +0x094:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c6fa1 +0x099:  test   %al,%al
081c6fa3 +0x09b:  je     081c6fed <+0xe5>
081c6fa5 +0x09d:  mov    0xc(%ebp),%eax
081c6fa8 +0x0a0:  mov    %eax,(%esp)
081c6fab +0x0a3:  call   081348f0 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4f7>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4f7
081c6fb0 +0x0a8:  mov    %eax,%ebx
081c6fb2 +0x0aa:  lea    -0x14(%ebp),%eax
081c6fb5 +0x0ad:  mov    %eax,(%esp)
081c6fb8 +0x0b0:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c6fbd +0x0b5:  mov    %ebx,0x4(%esp)
081c6fc1 +0x0b9:  mov    %eax,(%esp)
081c6fc4 +0x0bc:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c6fc9 +0x0c1:  mov    0xc(%ebp),%eax
081c6fcc +0x0c4:  mov    %eax,(%esp)
081c6fcf +0x0c7:  call   081348e2 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x4e9>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x4e9
081c6fd4 +0x0cc:  mov    %eax,%ebx
081c6fd6 +0x0ce:  lea    -0x14(%ebp),%eax
081c6fd9 +0x0d1:  mov    %eax,(%esp)
081c6fdc +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
081c6fe1 +0x0d9:  mov    %ebx,0x4(%esp)
081c6fe5 +0x0dd:  mov    %eax,(%esp)
081c6fe8 +0x0e0:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
081c6fed +0x0e5:  lea    -0x14(%ebp),%eax
081c6ff0 +0x0e8:  mov    %eax,(%esp)
081c6ff3 +0x0eb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
081c6ff8 +0x0f0:  mov    %eax,(%esp)
081c6ffb +0x0f3:  call   08236d46 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc3f0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc3f0
081c7000 +0x0f8:  mov    %eax,-0xc(%ebp)
081c7003 +0x0fb:  movl   $0x414,0x8(%esp)
081c700b +0x103:  movl   $0x0,0x4(%esp)
081c7013 +0x10b:  mov    -0xc(%ebp),%eax
081c7016 +0x10e:  mov    %eax,(%esp)
081c7019 +0x111:  call   0807dcc0 <_init+0x5b8>
081c701e +0x116:  mov    0x10(%ebp),%eax
081c7021 +0x119:  movzbl 0xd(%eax),%eax
081c7025 +0x11d:  movsbl %al,%eax
081c7028 +0x120:  mov    %eax,0x4(%esp)
081c702c +0x124:  mov    0xc(%ebp),%eax
081c702f +0x127:  mov    %eax,(%esp)
081c7032 +0x12a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081c7037 +0x12f:  mov    %eax,%edx
081c7039 +0x131:  mov    -0xc(%ebp),%eax
081c703c +0x134:  mov    %edx,(%eax)
081c703e +0x136:  mov    0xc(%ebp),%eax
081c7041 +0x139:  mov    %eax,(%esp)
081c7044 +0x13c:  call   081348fe <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x505>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x505
081c7049 +0x141:  test   %al,%al
081c704b +0x143:  je     081c7070 <+0x168>
081c704d +0x145:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c7052 +0x14a:  lea    -0x14(%ebp),%edx
081c7055 +0x14d:  mov    %edx,0x8(%esp)
081c7059 +0x151:  movl   $0x5,0x4(%esp)
081c7061 +0x159:  mov    %eax,(%esp)
081c7064 +0x15c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c7069 +0x161:  mov    $0x1,%ebx
081c706e +0x166:  jmp    081c70ae <+0x1a6>
081c7070 +0x168:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
081c7075 +0x16d:  lea    -0x14(%ebp),%edx
081c7078 +0x170:  mov    %edx,0x8(%esp)
081c707c +0x174:  movl   $0x2,0x4(%esp)
081c7084 +0x17c:  mov    %eax,(%esp)
081c7087 +0x17f:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
081c708c +0x184:  mov    $0x1,%ebx
081c7091 +0x189:  jmp    081c70ae <+0x1a6>
081c7093 +0x18b:  mov    %edx,%ebx
081c7095 +0x18d:  mov    %eax,%esi
081c7097 +0x18f:  lea    -0x14(%ebp),%eax
081c709a +0x192:  mov    %eax,(%esp)
081c709d +0x195:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c70a2 +0x19a:  mov    %esi,%eax
081c70a4 +0x19c:  mov    %ebx,%edx
081c70a6 +0x19e:  mov    %eax,(%esp)
081c70a9 +0x1a1:  call   08ae3750 <_Unwind_Resume>
081c70ae +0x1a6:  lea    -0x14(%ebp),%eax
081c70b1 +0x1a9:  mov    %eax,(%esp)
081c70b4 +0x1ac:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
081c70b9 +0x1b1:  mov    %ebx,%eax
081c70bb +0x1b3:  add    $0x20,%esp
081c70be +0x1b6:  pop    %ebx
081c70bf +0x1b7:  pop    %esi
081c70c0 +0x1b8:  pop    %ebp
081c70c1 +0x1b9:  ret
```

## 反编译 C

```c
// DisPatcher_SelectCharac::RequestDBSkill @ 0x81c6f08

/* DisPatcher_SelectCharac::RequestDBSkill(CUser*, MSG_CHARAC_SELECT&) */

undefined4 __thiscall
DisPatcher_SelectCharac::RequestDBSkill
          (DisPatcher_SelectCharac *this,CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_SKILL *local_10;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x17a1);
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081c6f5a to 081c708b has its CatchHandler @ 081c7093 */
  CStreamGuard::operator<<(pCVar3,9);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,2);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_SKILL>(pCVar3);
  memset(local_10,0,0x414);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
