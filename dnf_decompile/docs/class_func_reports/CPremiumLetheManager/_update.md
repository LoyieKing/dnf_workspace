# _update

`_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND`

`CPremiumLetheManager::_update(CUser*, unsigned char, ENUM_SKILL_TREE_KIND)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c4842` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c4842  _ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND
#           CPremiumLetheManager::_update(CUser*, unsigned char, ENUM_SKILL_TREE_KIND)
# range [0x085c4842, 0x085c4a11]
085c4842 +0x000:  push   %ebp
085c4843 +0x001:  mov    %esp,%ebp
085c4845 +0x003:  push   %esi
085c4846 +0x004:  push   %ebx
085c4847 +0x005:  sub    $0x30,%esp
085c484a +0x008:  mov    0x10(%ebp),%eax
085c484d +0x00b:  mov    %al,-0x1c(%ebp)
085c4850 +0x00e:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
085c4855 +0x013:  movl   $0x125,0x8(%esp)
085c485d +0x01b:  movl   $"PremiumLetheManager.cpp",0x4(%esp)
085c4865 +0x023:  mov    %eax,(%esp)
085c4868 +0x026:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
085c486d +0x02b:  movl   $0x1,0x8(%esp)
085c4875 +0x033:  mov    %eax,0x4(%esp)
085c4879 +0x037:  lea    -0x14(%ebp),%eax
085c487c +0x03a:  mov    %eax,(%esp)
085c487f +0x03d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085c4884 +0x042:  lea    -0x14(%ebp),%eax
085c4887 +0x045:  mov    %eax,(%esp)
085c488a +0x048:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085c488f +0x04d:  movl   $0x15c,0x4(%esp)
085c4897 +0x055:  mov    %eax,(%esp)
085c489a +0x058:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085c489f +0x05d:  mov    0xc(%ebp),%eax
085c48a2 +0x060:  mov    %eax,(%esp)
085c48a5 +0x063:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085c48aa +0x068:  mov    %eax,%ebx
085c48ac +0x06a:  lea    -0x14(%ebp),%eax
085c48af +0x06d:  mov    %eax,(%esp)
085c48b2 +0x070:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085c48b7 +0x075:  mov    %ebx,0x4(%esp)
085c48bb +0x079:  mov    %eax,(%esp)
085c48be +0x07c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085c48c3 +0x081:  lea    -0x14(%ebp),%eax
085c48c6 +0x084:  mov    %eax,(%esp)
085c48c9 +0x087:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085c48ce +0x08c:  mov    %eax,(%esp)
085c48d1 +0x08f:  call   084f165c <_GLOBAL__I__Z7getUserj+0x860e>  ; global constructors keyed to getUser(unsigned int)+0x860e
085c48d6 +0x094:  mov    %eax,-0xc(%ebp)
085c48d9 +0x097:  mov    0xc(%ebp),%eax
085c48dc +0x09a:  mov    %eax,(%esp)
085c48df +0x09d:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
085c48e4 +0x0a2:  mov    -0xc(%ebp),%edx
085c48e7 +0x0a5:  mov    %eax,(%edx)
085c48e9 +0x0a7:  mov    0xc(%ebp),%eax
085c48ec +0x0aa:  mov    %eax,(%esp)
085c48ef +0x0ad:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085c48f4 +0x0b2:  mov    -0xc(%ebp),%edx
085c48f7 +0x0b5:  mov    %eax,0x4(%edx)
085c48fa +0x0b8:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
085c4901 +0x0bf:  cmp    %al,-0x1c(%ebp)
085c4904 +0x0c2:  je     085c491d <+0xdb>
085c4906 +0x0c4:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
085c490d +0x0cb:  cmp    %al,-0x1c(%ebp)
085c4910 +0x0ce:  je     085c491d <+0xdb>
085c4912 +0x0d0:  movzbl &_ZN20CPremiumLetheManager16INIT_LETHE_SKILLE,%eax
085c4919 +0x0d7:  test   %al,%al
085c491b +0x0d9:  je     085c4984 <+0x142>
085c491d +0x0db:  mov    0x14(%ebp),%eax
085c4920 +0x0de:  cmp    $0xffffffff,%eax
085c4923 +0x0e1:  je     085c492c <+0xea>
085c4925 +0x0e3:  mov    0x14(%ebp),%eax
085c4928 +0x0e6:  test   %eax,%eax
085c492a +0x0e8:  jne    085c4957 <+0x115>
085c492c +0x0ea:  mov    0xc(%ebp),%eax
085c492f +0x0ed:  mov    %eax,(%esp)
085c4932 +0x0f0:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
085c4937 +0x0f5:  lea    0x46(%eax),%edx
085c493a +0x0f8:  mov    -0xc(%ebp),%eax
085c493d +0x0fb:  add    $0xd,%eax
085c4940 +0x0fe:  movl   $0x198,0x8(%esp)
085c4948 +0x106:  mov    %edx,0x4(%esp)
085c494c +0x10a:  mov    %eax,(%esp)
085c494f +0x10d:  call   0807d8a0 <_init+0x198>
085c4954 +0x112:  nop
085c4955 +0x113:  jmp    085c49a2 <+0x160>
085c4957 +0x115:  mov    0xc(%ebp),%eax
085c495a +0x118:  mov    %eax,(%esp)
085c495d +0x11b:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
085c4962 +0x120:  lea    0x1de(%eax),%edx
085c4968 +0x126:  mov    -0xc(%ebp),%eax
085c496b +0x129:  add    $0xd,%eax
085c496e +0x12c:  movl   $0x198,0x8(%esp)
085c4976 +0x134:  mov    %edx,0x4(%esp)
085c497a +0x138:  mov    %eax,(%esp)
085c497d +0x13b:  call   0807d8a0 <_init+0x198>
085c4982 +0x140:  jmp    085c49a2 <+0x160>
085c4984 +0x142:  mov    -0xc(%ebp),%eax
085c4987 +0x145:  add    $0xd,%eax
085c498a +0x148:  movl   $0x198,0x8(%esp)
085c4992 +0x150:  movl   $0x0,0x4(%esp)
085c499a +0x158:  mov    %eax,(%esp)
085c499d +0x15b:  call   0807dcc0 <_init+0x5b8>
085c49a2 +0x160:  mov    -0xc(%ebp),%eax
085c49a5 +0x163:  movzbl -0x1c(%ebp),%edx
085c49a9 +0x167:  mov    %dl,0xc(%eax)
085c49ac +0x16a:  mov    -0xc(%ebp),%eax
085c49af +0x16d:  movzbl -0x1c(%ebp),%edx
085c49b3 +0x171:  mov    %dl,0x1a5(%eax)
085c49b9 +0x177:  mov    0x14(%ebp),%eax
085c49bc +0x17a:  mov    %eax,%edx
085c49be +0x17c:  mov    -0xc(%ebp),%eax
085c49c1 +0x17f:  mov    %dl,0x1a6(%eax)
085c49c7 +0x185:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
085c49cc +0x18a:  lea    -0x14(%ebp),%edx
085c49cf +0x18d:  mov    %edx,0x8(%esp)
085c49d3 +0x191:  movl   $0x2,0x4(%esp)
085c49db +0x199:  mov    %eax,(%esp)
085c49de +0x19c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
085c49e3 +0x1a1:  jmp    085c4a00 <+0x1be>
085c49e5 +0x1a3:  mov    %edx,%ebx
085c49e7 +0x1a5:  mov    %eax,%esi
085c49e9 +0x1a7:  lea    -0x14(%ebp),%eax
085c49ec +0x1aa:  mov    %eax,(%esp)
085c49ef +0x1ad:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085c49f4 +0x1b2:  mov    %esi,%eax
085c49f6 +0x1b4:  mov    %ebx,%edx
085c49f8 +0x1b6:  mov    %eax,(%esp)
085c49fb +0x1b9:  call   08ae3750 <_Unwind_Resume>
085c4a00 +0x1be:  lea    -0x14(%ebp),%eax
085c4a03 +0x1c1:  mov    %eax,(%esp)
085c4a06 +0x1c4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085c4a0b +0x1c9:  add    $0x30,%esp
085c4a0e +0x1cc:  pop    %ebx
085c4a0f +0x1cd:  pop    %esi
085c4a10 +0x1ce:  pop    %ebp
085c4a11 +0x1cf:  ret
```

## 反编译 C

```c
// CPremiumLetheManager::_update @ 0x85c4842

/* CPremiumLetheManager::_update(CUser*, unsigned char, ENUM_SKILL_TREE_KIND) */

void __thiscall
CPremiumLetheManager::_update
          (undefined4 this,CUser *param_1,SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD param_2,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PremiumLetheManager.cpp",0x125);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 085c489a to 085c49e2 has its CatchHandler @ 085c49e5 */
  CStreamGuard::operator<<(pCVar2,0x15c);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>(pCVar2);
  uVar4 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar4;
  uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)(local_10 + 4) = uVar4;
  if (((param_2 == USE_LETHE_STATE) || (param_2 == SKILL_CONFIRM_STATE)) ||
     (INIT_LETHE_SKILL != '\0')) {
    if ((param_4 == -1) || (param_4 == 0)) {
      iVar3 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      memcpy(local_10 + 0xd,(void *)(iVar3 + 0x46),0x198);
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
      memcpy(local_10 + 0xd,(void *)(iVar3 + 0x1de),0x198);
    }
  }
  else {
    memset(local_10 + 0xd,0,0x198);
  }
  local_10[0xc] = param_2;
  local_10[0x1a5] = param_2;
  local_10[0x1a6] = SUB41(param_4,0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}
```
