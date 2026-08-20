# UpdateAvatarItem

`_ZN9item_lock9CItemLock16UpdateAvatarItemEP5CUserP10Inven_Item`

`item_lock::CItemLock::UpdateAvatarItem(CUser*, Inven_Item*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08541d42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08541d42  _ZN9item_lock9CItemLock16UpdateAvatarItemEP5CUserP10Inven_Item
#           item_lock::CItemLock::UpdateAvatarItem(CUser*, Inven_Item*)
# range [0x08541d42, 0x08541e4d]
08541d42 +0x000:  push   %ebp
08541d43 +0x001:  mov    %esp,%ebp
08541d45 +0x003:  push   %esi
08541d46 +0x004:  push   %ebx
08541d47 +0x005:  sub    $0x20,%esp
08541d4a +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08541d4f +0x00d:  movl   $0xbf,0x8(%esp)
08541d57 +0x015:  movl   $"ItemLock.cpp",0x4(%esp)
08541d5f +0x01d:  mov    %eax,(%esp)
08541d62 +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08541d67 +0x025:  movl   $0x1,0x8(%esp)
08541d6f +0x02d:  mov    %eax,0x4(%esp)
08541d73 +0x031:  lea    -0x10(%ebp),%eax
08541d76 +0x034:  mov    %eax,(%esp)
08541d79 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08541d7e +0x03c:  lea    -0x10(%ebp),%eax
08541d81 +0x03f:  mov    %eax,(%esp)
08541d84 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08541d89 +0x047:  movl   $0x1c2,0x4(%esp)
08541d91 +0x04f:  mov    %eax,(%esp)
08541d94 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08541d99 +0x057:  mov    0xc(%ebp),%eax
08541d9c +0x05a:  mov    %eax,(%esp)
08541d9f +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08541da4 +0x062:  mov    %eax,%ebx
08541da6 +0x064:  lea    -0x10(%ebp),%eax
08541da9 +0x067:  mov    %eax,(%esp)
08541dac +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08541db1 +0x06f:  mov    %ebx,0x4(%esp)
08541db5 +0x073:  mov    %eax,(%esp)
08541db8 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08541dbd +0x07b:  mov    0x10(%ebp),%eax
08541dc0 +0x07e:  mov    0x7(%eax),%ebx
08541dc3 +0x081:  lea    -0x10(%ebp),%eax
08541dc6 +0x084:  mov    %eax,(%esp)
08541dc9 +0x087:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08541dce +0x08c:  mov    %ebx,0x4(%esp)
08541dd2 +0x090:  mov    %eax,(%esp)
08541dd5 +0x093:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08541dda +0x098:  mov    0x10(%ebp),%eax
08541ddd +0x09b:  add    $0x11,%eax
08541de0 +0x09e:  mov    %eax,(%esp)
08541de3 +0x0a1:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
08541de8 +0x0a6:  movzbl %al,%ebx
08541deb +0x0a9:  lea    -0x10(%ebp),%eax
08541dee +0x0ac:  mov    %eax,(%esp)
08541df1 +0x0af:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08541df6 +0x0b4:  mov    %ebx,0x4(%esp)
08541dfa +0x0b8:  mov    %eax,(%esp)
08541dfd +0x0bb:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08541e02 +0x0c0:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08541e07 +0x0c5:  lea    -0x10(%ebp),%edx
08541e0a +0x0c8:  mov    %edx,0x8(%esp)
08541e0e +0x0cc:  movl   $0x2,0x4(%esp)
08541e16 +0x0d4:  mov    %eax,(%esp)
08541e19 +0x0d7:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08541e1e +0x0dc:  jmp    08541e3b <+0xf9>
08541e20 +0x0de:  mov    %edx,%ebx
08541e22 +0x0e0:  mov    %eax,%esi
08541e24 +0x0e2:  lea    -0x10(%ebp),%eax
08541e27 +0x0e5:  mov    %eax,(%esp)
08541e2a +0x0e8:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08541e2f +0x0ed:  mov    %esi,%eax
08541e31 +0x0ef:  mov    %ebx,%edx
08541e33 +0x0f1:  mov    %eax,(%esp)
08541e36 +0x0f4:  call   08ae3750 <_Unwind_Resume>
08541e3b +0x0f9:  lea    -0x10(%ebp),%eax
08541e3e +0x0fc:  mov    %eax,(%esp)
08541e41 +0x0ff:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08541e46 +0x104:  add    $0x20,%esp
08541e49 +0x107:  pop    %ebx
08541e4a +0x108:  pop    %esi
08541e4b +0x109:  pop    %ebp
08541e4c +0x10a:  ret
08541e4d +0x10b:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::UpdateAvatarItem @ 0x8541d42

/* item_lock::CItemLock::UpdateAvatarItem(CUser*, Inven_Item*) */

void __thiscall
item_lock::CItemLock::UpdateAvatarItem(CItemLock *this,CUser *param_1,Inven_Item *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  uint uVar4;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ItemLock.cpp",0xbf);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08541d94 to 08541e1d has its CatchHandler @ 08541e20 */
  CStreamGuard::operator<<(pCVar2,0x1c2);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  iVar3 = *(int *)(param_2 + 7);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,iVar3);
  uVar4 = stAmplifyOption_t::GetLock((stAmplifyOption_t *)(param_2 + 0x11));
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,uVar4 & 0xff);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}
```
