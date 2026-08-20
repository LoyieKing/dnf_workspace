# _saveData

`_ZN16CItemMakingSkill9_saveDataEP5CUser`

`CItemMakingSkill::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CItemMakingSkill` | `0x08545276` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08545276  _ZN16CItemMakingSkill9_saveDataEP5CUser
#           CItemMakingSkill::_saveData(CUser*)
# range [0x08545276, 0x085453b5]
08545276 +0x000:  push   %ebp
08545277 +0x001:  mov    %esp,%ebp
08545279 +0x003:  push   %esi
0854527a +0x004:  push   %ebx
0854527b +0x005:  sub    $0x20,%esp
0854527e +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08545283 +0x00d:  movl   $0x33,0x8(%esp)
0854528b +0x015:  movl   $"ItemMakingSkill.cpp",0x4(%esp)
08545293 +0x01d:  mov    %eax,(%esp)
08545296 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0854529b +0x025:  movl   $0x1,0x8(%esp)
085452a3 +0x02d:  mov    %eax,0x4(%esp)
085452a7 +0x031:  lea    -0x18(%ebp),%eax
085452aa +0x034:  mov    %eax,(%esp)
085452ad +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
085452b2 +0x03c:  lea    -0x18(%ebp),%eax
085452b5 +0x03f:  mov    %eax,(%esp)
085452b8 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085452bd +0x047:  movl   $0x26e,0x4(%esp)
085452c5 +0x04f:  mov    %eax,(%esp)
085452c8 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085452cd +0x057:  mov    0xc(%ebp),%eax
085452d0 +0x05a:  mov    %eax,(%esp)
085452d3 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
085452d8 +0x062:  mov    %eax,%ebx
085452da +0x064:  lea    -0x18(%ebp),%eax
085452dd +0x067:  mov    %eax,(%esp)
085452e0 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
085452e5 +0x06f:  mov    %ebx,0x4(%esp)
085452e9 +0x073:  mov    %eax,(%esp)
085452ec +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
085452f1 +0x07b:  lea    -0x18(%ebp),%eax
085452f4 +0x07e:  mov    %eax,(%esp)
085452f7 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
085452fc +0x086:  mov    %eax,(%esp)
085452ff +0x089:  call   08545fe8 <_GLOBAL__I__ZN16CItemMakingSkillC2Ev+0x39>  ; global constructors keyed to CItemMakingSkill::CItemMakingSkill()+0x39
08545304 +0x08e:  mov    %eax,-0x10(%ebp)
08545307 +0x091:  movl   $0x1c,0x8(%esp)
0854530f +0x099:  movl   $0x0,0x4(%esp)
08545317 +0x0a1:  mov    -0x10(%ebp),%eax
0854531a +0x0a4:  mov    %eax,(%esp)
0854531d +0x0a7:  call   0807dcc0 <_init+0x5b8>
08545322 +0x0ac:  movl   $0xffffffff,0x4(%esp)
0854532a +0x0b4:  mov    0xc(%ebp),%eax
0854532d +0x0b7:  mov    %eax,(%esp)
08545330 +0x0ba:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08545335 +0x0bf:  mov    %eax,%edx
08545337 +0x0c1:  mov    -0x10(%ebp),%eax
0854533a +0x0c4:  mov    %edx,(%eax)
0854533c +0x0c6:  movl   $0x0,-0xc(%ebp)
08545343 +0x0cd:  jmp    0854535f <+0xe9>
08545345 +0x0cf:  mov    -0xc(%ebp),%edx
08545348 +0x0d2:  mov    -0xc(%ebp),%ecx
0854534b +0x0d5:  mov    0x8(%ebp),%eax
0854534e +0x0d8:  movzwl 0x6(%eax,%ecx,2),%ecx
08545353 +0x0dd:  mov    -0x10(%ebp),%eax
08545356 +0x0e0:  mov    %cx,0x4(%eax,%edx,2)
0854535b +0x0e5:  addl   $0x1,-0xc(%ebp)
0854535f +0x0e9:  cmpl   $0xa,-0xc(%ebp)
08545363 +0x0ed:  setle  %al
08545366 +0x0f0:  test   %al,%al
08545368 +0x0f2:  jne    08545345 <+0xcf>
0854536a +0x0f4:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0854536f +0x0f9:  lea    -0x18(%ebp),%edx
08545372 +0x0fc:  mov    %edx,0x8(%esp)
08545376 +0x100:  movl   $0x2,0x4(%esp)
0854537e +0x108:  mov    %eax,(%esp)
08545381 +0x10b:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08545386 +0x110:  mov    $0x1,%ebx
0854538b +0x115:  lea    -0x18(%ebp),%eax
0854538e +0x118:  mov    %eax,(%esp)
08545391 +0x11b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08545396 +0x120:  mov    %ebx,%eax
08545398 +0x122:  add    $0x20,%esp
0854539b +0x125:  pop    %ebx
0854539c +0x126:  pop    %esi
0854539d +0x127:  pop    %ebp
0854539e +0x128:  ret
0854539f +0x129:  mov    %edx,%ebx
085453a1 +0x12b:  mov    %eax,%esi
085453a3 +0x12d:  lea    -0x18(%ebp),%eax
085453a6 +0x130:  mov    %eax,(%esp)
085453a9 +0x133:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
085453ae +0x138:  mov    %esi,%eax
085453b0 +0x13a:  mov    %ebx,%edx
085453b2 +0x13c:  mov    %eax,(%esp)
085453b5 +0x13f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CItemMakingSkill::_saveData @ 0x8545276

/* CItemMakingSkill::_saveData(CUser*) */

undefined4 __thiscall CItemMakingSkill::_saveData(CItemMakingSkill *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_1c [8];
  SIG_ITEM_MAKING_SKILL *local_14;
  int local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ItemMakingSkill.cpp",0x33);
  CStreamGuard::CStreamGuard(local_1c,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 085452c8 to 08545385 has its CatchHandler @ 0854539f */
  CStreamGuard::operator<<(pCVar2,0x26e);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
  local_14 = CStreamGuard::GetInBuffer<SIG_ITEM_MAKING_SKILL>(pCVar2);
  memset(local_14,0,0x1c);
  uVar4 = CUser::get_charac_no(param_1,-1);
  *(undefined4 *)local_14 = uVar4;
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    *(undefined2 *)(local_14 + local_10 * 2 + 4) = *(undefined2 *)(this + local_10 * 2 + 6);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
  CStreamGuard::~CStreamGuard(local_1c);
  return 1;
}
```
