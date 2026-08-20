# _saveData

`_ZN15CItemDictionary9_saveDataEP5CUser`

`CItemDictionary::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CItemDictionary` | `0x0811d63e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811d63e  _ZN15CItemDictionary9_saveDataEP5CUser
#           CItemDictionary::_saveData(CUser*)
# range [0x0811d63e, 0x0811d76f]
0811d63e +0x000:  push   %ebp
0811d63f +0x001:  mov    %esp,%ebp
0811d641 +0x003:  push   %esi
0811d642 +0x004:  push   %ebx
0811d643 +0x005:  sub    $0x20,%esp
0811d646 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0811d64b +0x00d:  movl   $0x18,0x8(%esp)
0811d653 +0x015:  movl   $"ItemDictionary.cpp",0x4(%esp)
0811d65b +0x01d:  mov    %eax,(%esp)
0811d65e +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0811d663 +0x025:  movl   $0x1,0x8(%esp)
0811d66b +0x02d:  mov    %eax,0x4(%esp)
0811d66f +0x031:  lea    -0x14(%ebp),%eax
0811d672 +0x034:  mov    %eax,(%esp)
0811d675 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0811d67a +0x03c:  lea    -0x14(%ebp),%eax
0811d67d +0x03f:  mov    %eax,(%esp)
0811d680 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0811d685 +0x047:  movl   $0x2b2,0x4(%esp)
0811d68d +0x04f:  mov    %eax,(%esp)
0811d690 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0811d695 +0x057:  mov    0xc(%ebp),%eax
0811d698 +0x05a:  mov    %eax,(%esp)
0811d69b +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0811d6a0 +0x062:  mov    %eax,%ebx
0811d6a2 +0x064:  lea    -0x14(%ebp),%eax
0811d6a5 +0x067:  mov    %eax,(%esp)
0811d6a8 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0811d6ad +0x06f:  mov    %ebx,0x4(%esp)
0811d6b1 +0x073:  mov    %eax,(%esp)
0811d6b4 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0811d6b9 +0x07b:  lea    -0x14(%ebp),%eax
0811d6bc +0x07e:  mov    %eax,(%esp)
0811d6bf +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0811d6c4 +0x086:  mov    %eax,(%esp)
0811d6c7 +0x089:  call   0811df2c <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x6c>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x6c
0811d6cc +0x08e:  mov    %eax,-0xc(%ebp)
0811d6cf +0x091:  movl   $0x138c,0x8(%esp)
0811d6d7 +0x099:  movl   $0x0,0x4(%esp)
0811d6df +0x0a1:  mov    -0xc(%ebp),%eax
0811d6e2 +0x0a4:  mov    %eax,(%esp)
0811d6e5 +0x0a7:  call   0807dcc0 <_init+0x5b8>
0811d6ea +0x0ac:  movl   $0xffffffff,0x4(%esp)
0811d6f2 +0x0b4:  mov    0xc(%ebp),%eax
0811d6f5 +0x0b7:  mov    %eax,(%esp)
0811d6f8 +0x0ba:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0811d6fd +0x0bf:  mov    %eax,%edx
0811d6ff +0x0c1:  mov    -0xc(%ebp),%eax
0811d702 +0x0c4:  mov    %edx,(%eax)
0811d704 +0x0c6:  mov    0x8(%ebp),%eax
0811d707 +0x0c9:  lea    0x5(%eax),%edx
0811d70a +0x0cc:  mov    -0xc(%ebp),%eax
0811d70d +0x0cf:  add    $0x4,%eax
0811d710 +0x0d2:  movl   $0x1388,0x8(%esp)
0811d718 +0x0da:  mov    %edx,0x4(%esp)
0811d71c +0x0de:  mov    %eax,(%esp)
0811d71f +0x0e1:  call   0807d8a0 <_init+0x198>
0811d724 +0x0e6:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0811d729 +0x0eb:  lea    -0x14(%ebp),%edx
0811d72c +0x0ee:  mov    %edx,0x8(%esp)
0811d730 +0x0f2:  movl   $0x2,0x4(%esp)
0811d738 +0x0fa:  mov    %eax,(%esp)
0811d73b +0x0fd:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0811d740 +0x102:  mov    $0x1,%ebx
0811d745 +0x107:  lea    -0x14(%ebp),%eax
0811d748 +0x10a:  mov    %eax,(%esp)
0811d74b +0x10d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0811d750 +0x112:  mov    %ebx,%eax
0811d752 +0x114:  add    $0x20,%esp
0811d755 +0x117:  pop    %ebx
0811d756 +0x118:  pop    %esi
0811d757 +0x119:  pop    %ebp
0811d758 +0x11a:  ret
0811d759 +0x11b:  mov    %edx,%ebx
0811d75b +0x11d:  mov    %eax,%esi
0811d75d +0x11f:  lea    -0x14(%ebp),%eax
0811d760 +0x122:  mov    %eax,(%esp)
0811d763 +0x125:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0811d768 +0x12a:  mov    %esi,%eax
0811d76a +0x12c:  mov    %ebx,%edx
0811d76c +0x12e:  mov    %eax,(%esp)
0811d76f +0x131:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CItemDictionary::_saveData @ 0x811d63e

/* CItemDictionary::_saveData(CUser*) */

undefined4 __thiscall CItemDictionary::_saveData(CItemDictionary *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_ITEM_DICTIONARY_FLAG *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ItemDictionary.cpp",0x18);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0811d690 to 0811d73f has its CatchHandler @ 0811d759 */
  CStreamGuard::operator<<(pCVar2,0x2b2);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_ITEM_DICTIONARY_FLAG>(pCVar2);
  memset(local_10,0,0x138c);
  uVar4 = CUser::get_charac_no(param_1,-1);
  *(undefined4 *)local_10 = uVar4;
  memcpy(local_10 + 4,this + 5,5000);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}
```
