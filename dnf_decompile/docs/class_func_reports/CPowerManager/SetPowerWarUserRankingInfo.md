# SetPowerWarUserRankingInfo

`_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj`

`CPowerManager::SetPowerWarUserRankingInfo(unsigned int*)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847ebec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847ebec  _ZN13CPowerManager26SetPowerWarUserRankingInfoEPj
#           CPowerManager::SetPowerWarUserRankingInfo(unsigned int*)
# range [0x0847ebec, 0x0847ed4d]
0847ebec +0x000:  push   %ebp
0847ebed +0x001:  mov    %esp,%ebp
0847ebef +0x003:  push   %esi
0847ebf0 +0x004:  push   %ebx
0847ebf1 +0x005:  sub    $0x20,%esp
0847ebf4 +0x008:  movl   $0x0,-0xc(%ebp)
0847ebfb +0x00f:  jmp    0847ed35 <+0x149>
0847ec00 +0x014:  mov    -0xc(%ebp),%eax
0847ec03 +0x017:  shl    $0x2,%eax
0847ec06 +0x01a:  add    0xc(%ebp),%eax
0847ec09 +0x01d:  mov    (%eax),%eax
0847ec0b +0x01f:  test   %eax,%eax
0847ec0d +0x021:  je     0847ed17 <+0x12b>
0847ec13 +0x027:  mov    -0xc(%ebp),%ebx
0847ec16 +0x02a:  mov    -0xc(%ebp),%eax
0847ec19 +0x02d:  shl    $0x2,%eax
0847ec1c +0x030:  add    0xc(%ebp),%eax
0847ec1f +0x033:  mov    (%eax),%edx
0847ec21 +0x035:  mov    0x8(%ebp),%ecx
0847ec24 +0x038:  mov    %ebx,%eax
0847ec26 +0x03a:  shl    $0x2,%eax
0847ec29 +0x03d:  mov    %eax,%ebx
0847ec2b +0x03f:  shl    $0x5,%ebx
0847ec2e +0x042:  add    %ebx,%eax
0847ec30 +0x044:  lea    (%ecx,%eax,1),%eax
0847ec33 +0x047:  add    $0x2c,%eax
0847ec36 +0x04a:  mov    %edx,(%eax)
0847ec38 +0x04c:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0847ec3d +0x051:  movl   $0x7d,0x8(%esp)
0847ec45 +0x059:  movl   $"DNF_PowerManager.cpp",0x4(%esp)
0847ec4d +0x061:  mov    %eax,(%esp)
0847ec50 +0x064:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0847ec55 +0x069:  movl   $0x1,0x8(%esp)
0847ec5d +0x071:  mov    %eax,0x4(%esp)
0847ec61 +0x075:  lea    -0x14(%ebp),%eax
0847ec64 +0x078:  mov    %eax,(%esp)
0847ec67 +0x07b:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0847ec6c +0x080:  lea    -0x14(%ebp),%eax
0847ec6f +0x083:  mov    %eax,(%esp)
0847ec72 +0x086:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ec77 +0x08b:  movl   $0x166,0x4(%esp)
0847ec7f +0x093:  mov    %eax,(%esp)
0847ec82 +0x096:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847ec87 +0x09b:  lea    -0x14(%ebp),%eax
0847ec8a +0x09e:  mov    %eax,(%esp)
0847ec8d +0x0a1:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ec92 +0x0a6:  movl   $0xffffffff,0x4(%esp)
0847ec9a +0x0ae:  mov    %eax,(%esp)
0847ec9d +0x0b1:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0847eca2 +0x0b6:  mov    -0xc(%ebp),%eax
0847eca5 +0x0b9:  mov    0x8(%ebp),%edx
0847eca8 +0x0bc:  shl    $0x2,%eax
0847ecab +0x0bf:  mov    %eax,%ecx
0847ecad +0x0c1:  shl    $0x5,%ecx
0847ecb0 +0x0c4:  add    %ecx,%eax
0847ecb2 +0x0c6:  lea    (%edx,%eax,1),%eax
0847ecb5 +0x0c9:  add    $0x2c,%eax
0847ecb8 +0x0cc:  mov    (%eax),%ebx
0847ecba +0x0ce:  lea    -0x14(%ebp),%eax
0847ecbd +0x0d1:  mov    %eax,(%esp)
0847ecc0 +0x0d4:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0847ecc5 +0x0d9:  mov    %ebx,0x4(%esp)
0847ecc9 +0x0dd:  mov    %eax,(%esp)
0847eccc +0x0e0:  call   080e2292 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x38>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x38
0847ecd1 +0x0e5:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0847ecd6 +0x0ea:  lea    -0x14(%ebp),%edx
0847ecd9 +0x0ed:  mov    %edx,0x8(%esp)
0847ecdd +0x0f1:  movl   $0x2,0x4(%esp)
0847ece5 +0x0f9:  mov    %eax,(%esp)
0847ece8 +0x0fc:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0847eced +0x101:  jmp    0847ed0a <+0x11e>
0847ecef +0x103:  mov    %edx,%ebx
0847ecf1 +0x105:  mov    %eax,%esi
0847ecf3 +0x107:  lea    -0x14(%ebp),%eax
0847ecf6 +0x10a:  mov    %eax,(%esp)
0847ecf9 +0x10d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ecfe +0x112:  mov    %esi,%eax
0847ed00 +0x114:  mov    %ebx,%edx
0847ed02 +0x116:  mov    %eax,(%esp)
0847ed05 +0x119:  call   08ae3750 <_Unwind_Resume>
0847ed0a +0x11e:  lea    -0x14(%ebp),%eax
0847ed0d +0x121:  mov    %eax,(%esp)
0847ed10 +0x124:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0847ed15 +0x129:  jmp    0847ed31 <+0x145>
0847ed17 +0x12b:  mov    -0xc(%ebp),%eax
0847ed1a +0x12e:  mov    0x8(%ebp),%edx
0847ed1d +0x131:  shl    $0x2,%eax
0847ed20 +0x134:  mov    %eax,%ecx
0847ed22 +0x136:  shl    $0x5,%ecx
0847ed25 +0x139:  add    %ecx,%eax
0847ed27 +0x13b:  lea    (%edx,%eax,1),%eax
0847ed2a +0x13e:  add    $0x20,%eax
0847ed2d +0x141:  movb   $0x1,0x8(%eax)
0847ed31 +0x145:  addl   $0x1,-0xc(%ebp)
0847ed35 +0x149:  mov    -0xc(%ebp),%eax
0847ed38 +0x14c:  cmp    $0x2,%eax
0847ed3b +0x14f:  setbe  %al
0847ed3e +0x152:  test   %al,%al
0847ed40 +0x154:  jne    0847ec00 <+0x14>
0847ed46 +0x15a:  add    $0x20,%esp
0847ed49 +0x15d:  pop    %ebx
0847ed4a +0x15e:  pop    %esi
0847ed4b +0x15f:  pop    %ebp
0847ed4c +0x160:  ret
0847ed4d +0x161:  nop
```

## 反编译 C

```c
// CPowerManager::SetPowerWarUserRankingInfo @ 0x847ebec

/* CPowerManager::SetPowerWarUserRankingInfo(unsigned int*) */

void __thiscall CPowerManager::SetPowerWarUserRankingInfo(CPowerManager *this,uint *param_1)

{
  uint uVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_18 [8];
  uint local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    if (param_1[local_10] == 0) {
      this[local_10 * 0x84 + 0x28] = (CPowerManager)0x1;
    }
    else {
      *(uint *)(this + local_10 * 0x84 + 0x2c) = param_1[local_10];
      pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DNF_PowerManager.cpp",0x7d);
      CStreamGuard::CStreamGuard(local_18,pSVar2,true);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0847ec82 to 0847ecec has its CatchHandler @ 0847ecef */
      CStreamGuard::operator<<(pCVar3,0x166);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,-1);
      uVar1 = *(uint *)(this + local_10 * 0x84 + 0x2c);
      pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
      CStreamGuard::operator<<(pCVar3,uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
      CStreamGuard::~CStreamGuard(local_18);
    }
  }
  return;
}
```
