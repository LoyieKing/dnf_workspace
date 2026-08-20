# _SaveAvatarItem

`_ZN10CInventory15_SaveAvatarItemEiibcRK20stAvatarEmblemInfo_tPKcmRK23stAvatarExpansionInfo_t`

`CInventory::_SaveAvatarItem(int, int, bool, char, stAvatarEmblemInfo_t const&, char const*, unsigned long, stAvatarExpansionInfo_t const&)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08509e78` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08509e78  _ZN10CInventory15_SaveAvatarItemEiibcRK20stAvatarEmblemInfo_tPKcmRK23stAvatarExpansionInfo_t
#           CInventory::_SaveAvatarItem(int, int, bool, char, stAvatarEmblemInfo_t const&, char const*, unsigned long, stAvatarExpansionInfo_t const&)
# range [0x08509e78, 0x0850a015]
08509e78 +0x000:  push   %ebp
08509e79 +0x001:  mov    %esp,%ebp
08509e7b +0x003:  push   %edi
08509e7c +0x004:  push   %esi
08509e7d +0x005:  push   %ebx
08509e7e +0x006:  sub    $0x5c,%esp
08509e81 +0x009:  mov    0x14(%ebp),%edx
08509e84 +0x00c:  mov    0x18(%ebp),%eax
08509e87 +0x00f:  mov    %dl,-0x2c(%ebp)
08509e8a +0x012:  mov    %al,-0x30(%ebp)
08509e8d +0x015:  mov    0x8(%ebp),%eax
08509e90 +0x018:  mov    (%eax),%eax
08509e92 +0x01a:  test   %eax,%eax
08509e94 +0x01c:  jne    08509ea0 <+0x28>
08509e96 +0x01e:  mov    $0x0,%ebx
08509e9b +0x023:  jmp    0850a00b <+0x193>
08509ea0 +0x028:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08509ea5 +0x02d:  movl   $0x2360,0x8(%esp)
08509ead +0x035:  movl   $"inventory.cpp",0x4(%esp)
08509eb5 +0x03d:  mov    %eax,(%esp)
08509eb8 +0x040:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08509ebd +0x045:  movl   $0x1,0x8(%esp)
08509ec5 +0x04d:  mov    %eax,0x4(%esp)
08509ec9 +0x051:  lea    -0x24(%ebp),%eax
08509ecc +0x054:  mov    %eax,(%esp)
08509ecf +0x057:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08509ed4 +0x05c:  lea    -0x24(%ebp),%eax
08509ed7 +0x05f:  mov    %eax,(%esp)
08509eda +0x062:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08509edf +0x067:  movl   $0x31,0x4(%esp)
08509ee7 +0x06f:  mov    %eax,(%esp)
08509eea +0x072:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08509eef +0x077:  mov    0x8(%ebp),%eax
08509ef2 +0x07a:  mov    (%eax),%eax
08509ef4 +0x07c:  mov    %eax,(%esp)
08509ef7 +0x07f:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08509efc +0x084:  mov    %eax,%ebx
08509efe +0x086:  lea    -0x24(%ebp),%eax
08509f01 +0x089:  mov    %eax,(%esp)
08509f04 +0x08c:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08509f09 +0x091:  mov    %ebx,0x4(%esp)
08509f0d +0x095:  mov    %eax,(%esp)
08509f10 +0x098:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08509f15 +0x09d:  lea    -0x24(%ebp),%eax
08509f18 +0x0a0:  mov    %eax,(%esp)
08509f1b +0x0a3:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08509f20 +0x0a8:  mov    %eax,(%esp)
08509f23 +0x0ab:  call   084503ae <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2fc4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2fc4
08509f28 +0x0b0:  mov    %eax,-0x1c(%ebp)
08509f2b +0x0b3:  movsbl -0x30(%ebp),%edi
08509f2f +0x0b7:  movzbl -0x2c(%ebp),%esi
08509f33 +0x0bb:  mov    0xc(%ebp),%eax
08509f36 +0x0be:  add    $0xa,%eax
08509f39 +0x0c1:  mov    %eax,-0x34(%ebp)
08509f3c +0x0c4:  mov    0x8(%ebp),%eax
08509f3f +0x0c7:  mov    0x654(%eax),%edx
08509f45 +0x0cd:  mov    0xc(%ebp),%eax
08509f48 +0x0d0:  imul   $0x3d,%eax,%eax
08509f4b +0x0d3:  lea    (%edx,%eax,1),%eax
08509f4e +0x0d6:  mov    0x2(%eax),%ebx
08509f51 +0x0d9:  mov    0x8(%ebp),%eax
08509f54 +0x0dc:  mov    (%eax),%eax
08509f56 +0x0de:  movl   $0xffffffff,0x4(%esp)
08509f5e +0x0e6:  mov    %eax,(%esp)
08509f61 +0x0e9:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
08509f66 +0x0ee:  mov    0x24(%ebp),%edx
08509f69 +0x0f1:  mov    %edx,0x24(%esp)
08509f6d +0x0f5:  movl   $0x0,0x20(%esp)
08509f75 +0x0fd:  mov    0x20(%ebp),%edx
08509f78 +0x100:  mov    %edx,0x1c(%esp)
08509f7c +0x104:  mov    %edi,0x18(%esp)
08509f80 +0x108:  mov    %esi,0x14(%esp)
08509f84 +0x10c:  mov    0x10(%ebp),%edx
08509f87 +0x10f:  mov    %edx,0x10(%esp)
08509f8b +0x113:  mov    -0x34(%ebp),%edx
08509f8e +0x116:  mov    %edx,0xc(%esp)
08509f92 +0x11a:  mov    %ebx,0x8(%esp)
08509f96 +0x11e:  mov    %eax,0x4(%esp)
08509f9a +0x122:  mov    -0x1c(%ebp),%eax
08509f9d +0x125:  mov    %eax,(%esp)
08509fa0 +0x128:  call   0850d3c8 <_GLOBAL__I_g_emptySlot+0x2fd>  ; global constructors keyed to g_emptySlot+0x2fd
08509fa5 +0x12d:  mov    0x1c(%ebp),%eax
08509fa8 +0x130:  mov    %eax,0x4(%esp)
08509fac +0x134:  mov    -0x1c(%ebp),%eax
08509faf +0x137:  mov    %eax,(%esp)
08509fb2 +0x13a:  call   0850d44c <_GLOBAL__I_g_emptySlot+0x381>  ; global constructors keyed to g_emptySlot+0x381
08509fb7 +0x13f:  mov    -0x1c(%ebp),%eax
08509fba +0x142:  mov    0x28(%ebp),%edx
08509fbd +0x145:  mov    (%edx),%edx
08509fbf +0x147:  mov    %edx,0x4f(%eax)
08509fc2 +0x14a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08509fc7 +0x14f:  lea    -0x24(%ebp),%edx
08509fca +0x152:  mov    %edx,0x8(%esp)
08509fce +0x156:  movl   $0x2,0x4(%esp)
08509fd6 +0x15e:  mov    %eax,(%esp)
08509fd9 +0x161:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08509fde +0x166:  mov    $0x1,%ebx
08509fe3 +0x16b:  lea    -0x24(%ebp),%eax
08509fe6 +0x16e:  mov    %eax,(%esp)
08509fe9 +0x171:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08509fee +0x176:  jmp    0850a00b <+0x193>
08509ff0 +0x178:  mov    %edx,%ebx
08509ff2 +0x17a:  mov    %eax,%esi
08509ff4 +0x17c:  lea    -0x24(%ebp),%eax
08509ff7 +0x17f:  mov    %eax,(%esp)
08509ffa +0x182:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08509fff +0x187:  mov    %esi,%eax
0850a001 +0x189:  mov    %ebx,%edx
0850a003 +0x18b:  mov    %eax,(%esp)
0850a006 +0x18e:  call   08ae3750 <_Unwind_Resume>
0850a00b +0x193:  mov    %ebx,%eax
0850a00d +0x195:  add    $0x5c,%esp
0850a010 +0x198:  pop    %ebx
0850a011 +0x199:  pop    %esi
0850a012 +0x19a:  pop    %edi
0850a013 +0x19b:  pop    %ebp
0850a014 +0x19c:  ret
0850a015 +0x19d:  nop
```

## 反编译 C

```c
// CInventory::_SaveAvatarItem @ 0x8509e78

/* CInventory::_SaveAvatarItem(int, int, bool, char, stAvatarEmblemInfo_t const&, char const*,
   unsigned long, stAvatarExpansionInfo_t const&) */

bool __thiscall
CInventory::_SaveAvatarItem
          (CInventory *this,int param_1,int param_2,bool param_3,char param_4,
          stAvatarEmblemInfo_t *param_5,char *param_6,ulong param_7,stAvatarExpansionInfo_t *param_8
          )

{
  int iVar1;
  uint uVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  CStreamGuard local_28 [8];
  SIG_AVATAR_INSERT *local_20;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"inventory.cpp",0x2360);
    CStreamGuard::CStreamGuard(local_28,pSVar3,true);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 08509eea to 08509fdd has its CatchHandler @ 08509ff0 */
    CStreamGuard::operator<<(pCVar4,0x31);
    iVar5 = CUser::GetUID(*(CUser **)this);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
    CStreamGuard::operator<<(pCVar4,iVar5);
    pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_28);
    local_20 = CStreamGuard::GetInBuffer<SIG_AVATAR_INSERT>(pCVar4);
    uVar2 = *(uint *)(*(int *)(this + 0x654) + param_1 * 0x3d + 2);
    iVar5 = CUser::get_charac_no(*(CUser **)this,-1);
    SIG_AVATAR_INSERT::set
              (local_20,iVar5,uVar2,param_1 + 10,param_2,param_3,param_4,param_6,0,param_7);
    SIG_AVATAR_INSERT::setJewelSocket(local_20,param_5);
    *(undefined4 *)(local_20 + 0x4f) = *(undefined4 *)param_8;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
    CStreamGuard::~CStreamGuard(local_28);
  }
  return iVar1 != 0;
}
```
