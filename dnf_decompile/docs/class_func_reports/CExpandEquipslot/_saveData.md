# _saveData

`_ZN16CExpandEquipslot9_saveDataEP5CUser`

`CExpandEquipslot::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x0849a75a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849a75a  _ZN16CExpandEquipslot9_saveDataEP5CUser
#           CExpandEquipslot::_saveData(CUser*)
# range [0x0849a75a, 0x0849a9e1]
0849a75a +0x000:  push   %ebp
0849a75b +0x001:  mov    %esp,%ebp
0849a75d +0x003:  push   %esi
0849a75e +0x004:  push   %ebx
0849a75f +0x005:  sub    $0x30,%esp
0849a762 +0x008:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0849a767 +0x00d:  movl   $0x247,0x8(%esp)
0849a76f +0x015:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
0849a777 +0x01d:  mov    %eax,(%esp)
0849a77a +0x020:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0849a77f +0x025:  movl   $0x1,0x8(%esp)
0849a787 +0x02d:  mov    %eax,0x4(%esp)
0849a78b +0x031:  lea    -0x24(%ebp),%eax
0849a78e +0x034:  mov    %eax,(%esp)
0849a791 +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0849a796 +0x03c:  lea    -0x24(%ebp),%eax
0849a799 +0x03f:  mov    %eax,(%esp)
0849a79c +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0849a7a1 +0x047:  movl   $0x26d,0x4(%esp)
0849a7a9 +0x04f:  mov    %eax,(%esp)
0849a7ac +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0849a7b1 +0x057:  mov    0xc(%ebp),%eax
0849a7b4 +0x05a:  mov    %eax,(%esp)
0849a7b7 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0849a7bc +0x062:  mov    %eax,%ebx
0849a7be +0x064:  lea    -0x24(%ebp),%eax
0849a7c1 +0x067:  mov    %eax,(%esp)
0849a7c4 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0849a7c9 +0x06f:  mov    %ebx,0x4(%esp)
0849a7cd +0x073:  mov    %eax,(%esp)
0849a7d0 +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0849a7d5 +0x07b:  movl   $0xc,-0x1c(%ebp)
0849a7dc +0x082:  movl   $0x24,-0x18(%ebp)
0849a7e3 +0x089:  lea    -0x24(%ebp),%eax
0849a7e6 +0x08c:  mov    %eax,(%esp)
0849a7e9 +0x08f:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0849a7ee +0x094:  mov    %eax,(%esp)
0849a7f1 +0x097:  call   0849ab98 <_GLOBAL__I__ZN16CExpandEquipslotC2Ev+0x110>  ; global constructors keyed to CExpandEquipslot::CExpandEquipslot()+0x110
0849a7f6 +0x09c:  mov    %eax,-0x14(%ebp)
0849a7f9 +0x09f:  cmpl   $0x0,-0x14(%ebp)
0849a7fd +0x0a3:  jne    0849a809 <+0xaf>
0849a7ff +0x0a5:  mov    $0x0,%ebx
0849a804 +0x0aa:  jmp    0849a9cd <+0x273>
0849a809 +0x0af:  movl   $0x89c,0x8(%esp)
0849a811 +0x0b7:  movl   $0x0,0x4(%esp)
0849a819 +0x0bf:  mov    -0x14(%ebp),%eax
0849a81c +0x0c2:  mov    %eax,(%esp)
0849a81f +0x0c5:  call   0807dcc0 <_init+0x5b8>
0849a824 +0x0ca:  movl   $0xffffffff,0x4(%esp)
0849a82c +0x0d2:  mov    0xc(%ebp),%eax
0849a82f +0x0d5:  mov    %eax,(%esp)
0849a832 +0x0d8:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0849a837 +0x0dd:  mov    %eax,%edx
0849a839 +0x0df:  mov    -0x14(%ebp),%eax
0849a83c +0x0e2:  mov    %edx,(%eax)
0849a83e +0x0e4:  movl   $0x1,-0x10(%ebp)
0849a845 +0x0eb:  movl   $0x0,-0xc(%ebp)
0849a84c +0x0f2:  jmp    0849a958 <+0x1fe>
0849a851 +0x0f7:  cmpl   $0x0,-0xc(%ebp)
0849a855 +0x0fb:  je     0849a893 <+0x139>
0849a857 +0x0fd:  mov    -0xc(%ebp),%ecx
0849a85a +0x100:  mov    $0xaaaaaaab,%edx
0849a85f +0x105:  mov    %ecx,%eax
0849a861 +0x107:  mul    %edx
0849a863 +0x109:  shr    $0x3,%edx
0849a866 +0x10c:  mov    %edx,%eax
0849a868 +0x10e:  add    %eax,%eax
0849a86a +0x110:  add    %edx,%eax
0849a86c +0x112:  shl    $0x2,%eax
0849a86f +0x115:  mov    %ecx,%edx
0849a871 +0x117:  sub    %eax,%edx
0849a873 +0x119:  test   %edx,%edx
0849a875 +0x11b:  jne    0849a893 <+0x139>
0849a877 +0x11d:  cmpl   $0xc,-0xc(%ebp)
0849a87b +0x121:  jne    0849a886 <+0x12c>
0849a87d +0x123:  movl   $0x2,-0x10(%ebp)
0849a884 +0x12a:  jmp    0849a893 <+0x139>
0849a886 +0x12c:  cmpl   $0xc,-0xc(%ebp)
0849a88a +0x130:  jbe    0849a893 <+0x139>
0849a88c +0x132:  movl   $0x3,-0x10(%ebp)
0849a893 +0x139:  cmpl   $0x1,-0x10(%ebp)
0849a897 +0x13d:  jne    0849a8c2 <+0x168>
0849a899 +0x13f:  mov    -0xc(%ebp),%eax
0849a89c +0x142:  imul   $0x3d,%eax,%eax
0849a89f +0x145:  add    0x8(%ebp),%eax
0849a8a2 +0x148:  lea    0x5(%eax),%edx
0849a8a5 +0x14b:  mov    -0xc(%ebp),%eax
0849a8a8 +0x14e:  imul   $0x3d,%eax,%eax
0849a8ab +0x151:  add    -0x14(%ebp),%eax
0849a8ae +0x154:  add    $0x4,%eax
0849a8b1 +0x157:  mov    %edx,0x4(%esp)
0849a8b5 +0x15b:  mov    %eax,(%esp)
0849a8b8 +0x15e:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a8bd +0x163:  jmp    0849a954 <+0x1fa>
0849a8c2 +0x168:  cmpl   $0x2,-0x10(%ebp)
0849a8c6 +0x16c:  jne    0849a90c <+0x1b2>
0849a8c8 +0x16e:  mov    -0xc(%ebp),%ecx
0849a8cb +0x171:  mov    $0xaaaaaaab,%edx
0849a8d0 +0x176:  mov    %ecx,%eax
0849a8d2 +0x178:  mul    %edx
0849a8d4 +0x17a:  shr    $0x3,%edx
0849a8d7 +0x17d:  mov    %edx,%eax
0849a8d9 +0x17f:  add    %eax,%eax
0849a8db +0x181:  add    %edx,%eax
0849a8dd +0x183:  shl    $0x2,%eax
0849a8e0 +0x186:  mov    %ecx,%edx
0849a8e2 +0x188:  sub    %eax,%edx
0849a8e4 +0x18a:  imul   $0x3d,%edx,%eax
0849a8e7 +0x18d:  add    $0x2e0,%eax
0849a8ec +0x192:  add    0x8(%ebp),%eax
0849a8ef +0x195:  lea    0x1(%eax),%edx
0849a8f2 +0x198:  mov    -0xc(%ebp),%eax
0849a8f5 +0x19b:  imul   $0x3d,%eax,%eax
0849a8f8 +0x19e:  add    -0x14(%ebp),%eax
0849a8fb +0x1a1:  add    $0x4,%eax
0849a8fe +0x1a4:  mov    %edx,0x4(%esp)
0849a902 +0x1a8:  mov    %eax,(%esp)
0849a905 +0x1ab:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a90a +0x1b0:  jmp    0849a954 <+0x1fa>
0849a90c +0x1b2:  cmpl   $0x3,-0x10(%ebp)
0849a910 +0x1b6:  jne    0849a954 <+0x1fa>
0849a912 +0x1b8:  mov    -0xc(%ebp),%ecx
0849a915 +0x1bb:  mov    $0xaaaaaaab,%edx
0849a91a +0x1c0:  mov    %ecx,%eax
0849a91c +0x1c2:  mul    %edx
0849a91e +0x1c4:  shr    $0x3,%edx
0849a921 +0x1c7:  mov    %edx,%eax
0849a923 +0x1c9:  add    %eax,%eax
0849a925 +0x1cb:  add    %edx,%eax
0849a927 +0x1cd:  shl    $0x2,%eax
0849a92a +0x1d0:  mov    %ecx,%edx
0849a92c +0x1d2:  sub    %eax,%edx
0849a92e +0x1d4:  imul   $0x3d,%edx,%eax
0849a931 +0x1d7:  add    $0x5b0,%eax
0849a936 +0x1dc:  add    0x8(%ebp),%eax
0849a939 +0x1df:  lea    0xd(%eax),%edx
0849a93c +0x1e2:  mov    -0xc(%ebp),%eax
0849a93f +0x1e5:  imul   $0x3d,%eax,%eax
0849a942 +0x1e8:  add    -0x14(%ebp),%eax
0849a945 +0x1eb:  add    $0x4,%eax
0849a948 +0x1ee:  mov    %edx,0x4(%esp)
0849a94c +0x1f2:  mov    %eax,(%esp)
0849a94f +0x1f5:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a954 +0x1fa:  addl   $0x1,-0xc(%ebp)
0849a958 +0x1fe:  cmpl   $0x23,-0xc(%ebp)
0849a95c +0x202:  setbe  %al
0849a95f +0x205:  test   %al,%al
0849a961 +0x207:  jne    0849a851 <+0xf7>
0849a967 +0x20d:  mov    0xc(%ebp),%eax
0849a96a +0x210:  mov    %eax,(%esp)
0849a96d +0x213:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
0849a972 +0x218:  mov    -0x14(%ebp),%edx
0849a975 +0x21b:  mov    %al,0x898(%edx)
0849a97b +0x221:  mov    0xc(%ebp),%eax
0849a97e +0x224:  mov    %eax,(%esp)
0849a981 +0x227:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
0849a986 +0x22c:  mov    -0x14(%ebp),%edx
0849a989 +0x22f:  mov    %al,0x899(%edx)
0849a98f +0x235:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0849a994 +0x23a:  lea    -0x24(%ebp),%edx
0849a997 +0x23d:  mov    %edx,0x8(%esp)
0849a99b +0x241:  movl   $0x2,0x4(%esp)
0849a9a3 +0x249:  mov    %eax,(%esp)
0849a9a6 +0x24c:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0849a9ab +0x251:  mov    $0x1,%ebx
0849a9b0 +0x256:  jmp    0849a9cd <+0x273>
0849a9b2 +0x258:  mov    %edx,%ebx
0849a9b4 +0x25a:  mov    %eax,%esi
0849a9b6 +0x25c:  lea    -0x24(%ebp),%eax
0849a9b9 +0x25f:  mov    %eax,(%esp)
0849a9bc +0x262:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0849a9c1 +0x267:  mov    %esi,%eax
0849a9c3 +0x269:  mov    %ebx,%edx
0849a9c5 +0x26b:  mov    %eax,(%esp)
0849a9c8 +0x26e:  call   08ae3750 <_Unwind_Resume>
0849a9cd +0x273:  lea    -0x24(%ebp),%eax
0849a9d0 +0x276:  mov    %eax,(%esp)
0849a9d3 +0x279:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0849a9d8 +0x27e:  mov    %ebx,%eax
0849a9da +0x280:  add    $0x30,%esp
0849a9dd +0x283:  pop    %ebx
0849a9de +0x284:  pop    %esi
0849a9df +0x285:  pop    %ebp
0849a9e0 +0x286:  ret
0849a9e1 +0x287:  nop
```

## 反编译 C

```c
// CExpandEquipslot::_saveData @ 0x849a75a

/* CExpandEquipslot::_saveData(CUser*) */

undefined4 __thiscall CExpandEquipslot::_saveData(CExpandEquipslot *this,CUser *param_1)

{
  SIG_SAVE_EXPAND_CHARAC SVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  SIG_SAVE_EXPAND_CHARAC *local_18;
  int local_14;
  uint local_10;
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"ExpandEquipslot.cpp",0x247);
  CStreamGuard::CStreamGuard(local_28,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 0849a7ac to 0849a9aa has its CatchHandler @ 0849a9b2 */
  CStreamGuard::operator<<(pCVar3,0x26d);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar3,iVar4);
  local_20 = 0xc;
  local_1c = 0x24;
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_18 = CStreamGuard::GetInBuffer<SIG_SAVE_EXPAND_CHARAC>(pCVar3);
  if (local_18 == (SIG_SAVE_EXPAND_CHARAC *)0x0) {
    uVar5 = 0;
  }
  else {
    memset(local_18,0,0x89c);
    uVar5 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)local_18 = uVar5;
    local_14 = 1;
    for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
      if ((local_10 != 0) && (local_10 == (local_10 / 0xc) * 0xc)) {
        if (local_10 == 0xc) {
          local_14 = 2;
        }
        else if (0xc < local_10) {
          local_14 = 3;
        }
      }
      if (local_14 == 1) {
        Inven_Item::setCopy((Inven_Item *)(local_18 + local_10 * 0x3d + 4),
                            (Inven_Item *)(this + local_10 * 0x3d + 5));
      }
      else if (local_14 == 2) {
        Inven_Item::setCopy((Inven_Item *)(local_18 + local_10 * 0x3d + 4),
                            (Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x2e1));
      }
      else if (local_14 == 3) {
        Inven_Item::setCopy((Inven_Item *)(local_18 + local_10 * 0x3d + 4),
                            (Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x5bd));
      }
    }
    SVar1 = (SIG_SAVE_EXPAND_CHARAC)
            CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
    local_18[0x898] = SVar1;
    SVar1 = (SIG_SAVE_EXPAND_CHARAC)
            CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)param_1);
    local_18[0x899] = SVar1;
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
    uVar5 = 1;
  }
  CStreamGuard::~CStreamGuard(local_28);
  return uVar5;
}
```
