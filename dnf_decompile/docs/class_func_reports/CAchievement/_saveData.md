# _saveData

`_ZN12CAchievement9_saveDataEP5CUser`

`CAchievement::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c774` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c774  _ZN12CAchievement9_saveDataEP5CUser
#           CAchievement::_saveData(CUser*)
# range [0x0828c774, 0x0828c8b7]
0828c774 +0x000:  push   %ebp
0828c775 +0x001:  mov    %esp,%ebp
0828c777 +0x003:  push   %esi
0828c778 +0x004:  push   %ebx
0828c779 +0x005:  sub    $0x20,%esp
0828c77c +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0828c781 +0x00d:  movl   $0x1d4,0x8(%esp)
0828c789 +0x015:  movl   $"Achievement.cpp",0x4(%esp)
0828c791 +0x01d:  mov    %eax,(%esp)
0828c794 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0828c799 +0x025:  movl   $0x1,0x8(%esp)
0828c7a1 +0x02d:  mov    %eax,0x4(%esp)
0828c7a5 +0x031:  lea    -0x14(%ebp),%eax
0828c7a8 +0x034:  mov    %eax,(%esp)
0828c7ab +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0828c7b0 +0x03c:  lea    -0x14(%ebp),%eax
0828c7b3 +0x03f:  mov    %eax,(%esp)
0828c7b6 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0828c7bb +0x047:  movl   $0x286,0x4(%esp)
0828c7c3 +0x04f:  mov    %eax,(%esp)
0828c7c6 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0828c7cb +0x057:  mov    0xc(%ebp),%eax
0828c7ce +0x05a:  mov    %eax,(%esp)
0828c7d1 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0828c7d6 +0x062:  mov    %eax,%ebx
0828c7d8 +0x064:  lea    -0x14(%ebp),%eax
0828c7db +0x067:  mov    %eax,(%esp)
0828c7de +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0828c7e3 +0x06f:  mov    %ebx,0x4(%esp)
0828c7e7 +0x073:  mov    %eax,(%esp)
0828c7ea +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0828c7ef +0x07b:  lea    -0x14(%ebp),%eax
0828c7f2 +0x07e:  mov    %eax,(%esp)
0828c7f5 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0828c7fa +0x086:  mov    %eax,(%esp)
0828c7fd +0x089:  call   0828e1e0 <_GLOBAL__I__ZN12CAchievementC2Ev+0x98d>  ; global constructors keyed to CAchievement::CAchievement()+0x98d
0828c802 +0x08e:  mov    %eax,-0xc(%ebp)
0828c805 +0x091:  cmpl   $0x0,-0xc(%ebp)
0828c809 +0x095:  jne    0828c815 <+0xa1>
0828c80b +0x097:  mov    $0x0,%ebx
0828c810 +0x09c:  jmp    0828c8a3 <+0x12f>
0828c815 +0x0a1:  movl   $0x180c,0x8(%esp)
0828c81d +0x0a9:  movl   $0x0,0x4(%esp)
0828c825 +0x0b1:  mov    -0xc(%ebp),%eax
0828c828 +0x0b4:  mov    %eax,(%esp)
0828c82b +0x0b7:  call   0807dcc0 <_init+0x5b8>
0828c830 +0x0bc:  mov    0x8(%ebp),%eax
0828c833 +0x0bf:  mov    (%eax),%eax
0828c835 +0x0c1:  add    $0x8,%eax
0828c838 +0x0c4:  mov    (%eax),%edx
0828c83a +0x0c6:  mov    -0xc(%ebp),%eax
0828c83d +0x0c9:  mov    %eax,0x4(%esp)
0828c841 +0x0cd:  mov    0x8(%ebp),%eax
0828c844 +0x0d0:  mov    %eax,(%esp)
0828c847 +0x0d3:  call   *%edx
0828c849 +0x0d5:  movl   $0xffffffff,0x4(%esp)
0828c851 +0x0dd:  mov    0xc(%ebp),%eax
0828c854 +0x0e0:  mov    %eax,(%esp)
0828c857 +0x0e3:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0828c85c +0x0e8:  mov    -0xc(%ebp),%edx
0828c85f +0x0eb:  mov    %eax,0x1808(%edx)
0828c865 +0x0f1:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0828c86a +0x0f6:  lea    -0x14(%ebp),%edx
0828c86d +0x0f9:  mov    %edx,0x8(%esp)
0828c871 +0x0fd:  movl   $0x2,0x4(%esp)
0828c879 +0x105:  mov    %eax,(%esp)
0828c87c +0x108:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0828c881 +0x10d:  mov    $0x1,%ebx
0828c886 +0x112:  jmp    0828c8a3 <+0x12f>
0828c888 +0x114:  mov    %edx,%ebx
0828c88a +0x116:  mov    %eax,%esi
0828c88c +0x118:  lea    -0x14(%ebp),%eax
0828c88f +0x11b:  mov    %eax,(%esp)
0828c892 +0x11e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0828c897 +0x123:  mov    %esi,%eax
0828c899 +0x125:  mov    %ebx,%edx
0828c89b +0x127:  mov    %eax,(%esp)
0828c89e +0x12a:  call   08ae3750 <_Unwind_Resume>
0828c8a3 +0x12f:  lea    -0x14(%ebp),%eax
0828c8a6 +0x132:  mov    %eax,(%esp)
0828c8a9 +0x135:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0828c8ae +0x13a:  mov    %ebx,%eax
0828c8b0 +0x13c:  add    $0x20,%esp
0828c8b3 +0x13f:  pop    %ebx
0828c8b4 +0x140:  pop    %esi
0828c8b5 +0x141:  pop    %ebp
0828c8b6 +0x142:  ret
0828c8b7 +0x143:  nop
```

## 反编译 C

```c
// CAchievement::_saveData @ 0x828c774

/* CAchievement::_saveData(CUser*) */

bool __thiscall CAchievement::_saveData(CAchievement *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  stAchievement_DBSaveData *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"Achievement.cpp",0x1d4);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0828c7c6 to 0828c880 has its CatchHandler @ 0828c888 */
  CStreamGuard::operator<<(pCVar2,0x286);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<stAchievement_DBSaveData>(pCVar2);
  bVar5 = local_10 != (stAchievement_DBSaveData *)0x0;
  if (bVar5) {
    memset(local_10,0,0x180c);
    (**(code **)(*(int *)this + 8))(this,local_10);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 0x1808) = uVar4;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}
```
