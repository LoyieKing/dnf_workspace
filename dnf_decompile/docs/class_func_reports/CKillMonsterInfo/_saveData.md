# _saveData

`_ZN16CKillMonsterInfo9_saveDataEP5CUser`

`CKillMonsterInfo::_saveData(CUser*)`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854cf16` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854cf16  _ZN16CKillMonsterInfo9_saveDataEP5CUser
#           CKillMonsterInfo::_saveData(CUser*)
# range [0x0854cf16, 0x0854d0b7]
0854cf16 +0x000:  push   %ebp
0854cf17 +0x001:  mov    %esp,%ebp
0854cf19 +0x003:  push   %esi
0854cf1a +0x004:  push   %ebx
0854cf1b +0x005:  sub    $0x20,%esp
0854cf1e +0x008:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0854cf23 +0x00d:  movl   $0x6b,0x8(%esp)
0854cf2b +0x015:  movl   $"KillMonsterInfo.cpp",0x4(%esp)
0854cf33 +0x01d:  mov    %eax,(%esp)
0854cf36 +0x020:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0854cf3b +0x025:  movl   $0x1,0x8(%esp)
0854cf43 +0x02d:  mov    %eax,0x4(%esp)
0854cf47 +0x031:  lea    -0x14(%ebp),%eax
0854cf4a +0x034:  mov    %eax,(%esp)
0854cf4d +0x037:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0854cf52 +0x03c:  lea    -0x14(%ebp),%eax
0854cf55 +0x03f:  mov    %eax,(%esp)
0854cf58 +0x042:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0854cf5d +0x047:  movl   $0x281,0x4(%esp)
0854cf65 +0x04f:  mov    %eax,(%esp)
0854cf68 +0x052:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0854cf6d +0x057:  mov    0xc(%ebp),%eax
0854cf70 +0x05a:  mov    %eax,(%esp)
0854cf73 +0x05d:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0854cf78 +0x062:  mov    %eax,%ebx
0854cf7a +0x064:  lea    -0x14(%ebp),%eax
0854cf7d +0x067:  mov    %eax,(%esp)
0854cf80 +0x06a:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0854cf85 +0x06f:  mov    %ebx,0x4(%esp)
0854cf89 +0x073:  mov    %eax,(%esp)
0854cf8c +0x076:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0854cf91 +0x07b:  lea    -0x14(%ebp),%eax
0854cf94 +0x07e:  mov    %eax,(%esp)
0854cf97 +0x081:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0854cf9c +0x086:  mov    %eax,(%esp)
0854cf9f +0x089:  call   08236db4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc45e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc45e
0854cfa4 +0x08e:  mov    %eax,-0xc(%ebp)
0854cfa7 +0x091:  cmpl   $0x0,-0xc(%ebp)
0854cfab +0x095:  jne    0854cfb7 <+0xa1>
0854cfad +0x097:  mov    $0x0,%ebx
0854cfb2 +0x09c:  jmp    0854d0a4 <+0x18e>
0854cfb7 +0x0a1:  movl   $0xafcc,0x8(%esp)
0854cfbf +0x0a9:  movl   $0x0,0x4(%esp)
0854cfc7 +0x0b1:  mov    -0xc(%ebp),%eax
0854cfca +0x0b4:  mov    %eax,(%esp)
0854cfcd +0x0b7:  call   0807dcc0 <_init+0x5b8>
0854cfd2 +0x0bc:  movl   $0xffffffff,0x4(%esp)
0854cfda +0x0c4:  mov    0xc(%ebp),%eax
0854cfdd +0x0c7:  mov    %eax,(%esp)
0854cfe0 +0x0ca:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0854cfe5 +0x0cf:  mov    -0xc(%ebp),%edx
0854cfe8 +0x0d2:  mov    %eax,0xafc8(%edx)
0854cfee +0x0d8:  mov    -0xc(%ebp),%eax
0854cff1 +0x0db:  mov    0x8(%ebp),%edx
0854cff4 +0x0de:  add    $0x8,%edx
0854cff7 +0x0e1:  movl   $0x5dc,0xc(%esp)
0854cfff +0x0e9:  mov    %eax,0x8(%esp)
0854d003 +0x0ed:  mov    %edx,0x4(%esp)
0854d007 +0x0f1:  mov    0x8(%ebp),%eax
0854d00a +0x0f4:  mov    %eax,(%esp)
0854d00d +0x0f7:  call   0854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>  ; CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*, unsigned int) const
0854d012 +0x0fc:  mov    -0xc(%ebp),%eax
0854d015 +0x0ff:  lea    0x1d4c(%eax),%edx
0854d01b +0x105:  mov    0x8(%ebp),%eax
0854d01e +0x108:  add    $0x20,%eax
0854d021 +0x10b:  movl   $0x1770,0xc(%esp)
0854d029 +0x113:  mov    %edx,0x8(%esp)
0854d02d +0x117:  mov    %eax,0x4(%esp)
0854d031 +0x11b:  mov    0x8(%ebp),%eax
0854d034 +0x11e:  mov    %eax,(%esp)
0854d037 +0x121:  call   0854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>  ; CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*, unsigned int) const
0854d03c +0x126:  mov    -0xc(%ebp),%eax
0854d03f +0x129:  lea    0x927c(%eax),%edx
0854d045 +0x12f:  mov    0x8(%ebp),%eax
0854d048 +0x132:  add    $0x38,%eax
0854d04b +0x135:  movl   $0x5dc,0xc(%esp)
0854d053 +0x13d:  mov    %edx,0x8(%esp)
0854d057 +0x141:  mov    %eax,0x4(%esp)
0854d05b +0x145:  mov    0x8(%ebp),%eax
0854d05e +0x148:  mov    %eax,(%esp)
0854d061 +0x14b:  call   0854ccbc <_ZNK16CKillMonsterInfo18ConvertMapToStrcutERKSt3mapIjhSt4lessIjESaISt4pairIKjhEEEP15stMonsterInfo_tj>  ; CKillMonsterInfo::ConvertMapToStrcut(std::map<unsigned int, unsigned char, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, unsigned char> > > const&, stMonsterInfo_t*, unsigned int) const
0854d066 +0x150:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0854d06b +0x155:  lea    -0x14(%ebp),%edx
0854d06e +0x158:  mov    %edx,0x8(%esp)
0854d072 +0x15c:  movl   $0x2,0x4(%esp)
0854d07a +0x164:  mov    %eax,(%esp)
0854d07d +0x167:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0854d082 +0x16c:  mov    $0x1,%ebx
0854d087 +0x171:  jmp    0854d0a4 <+0x18e>
0854d089 +0x173:  mov    %edx,%ebx
0854d08b +0x175:  mov    %eax,%esi
0854d08d +0x177:  lea    -0x14(%ebp),%eax
0854d090 +0x17a:  mov    %eax,(%esp)
0854d093 +0x17d:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0854d098 +0x182:  mov    %esi,%eax
0854d09a +0x184:  mov    %ebx,%edx
0854d09c +0x186:  mov    %eax,(%esp)
0854d09f +0x189:  call   08ae3750 <_Unwind_Resume>
0854d0a4 +0x18e:  lea    -0x14(%ebp),%eax
0854d0a7 +0x191:  mov    %eax,(%esp)
0854d0aa +0x194:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0854d0af +0x199:  mov    %ebx,%eax
0854d0b1 +0x19b:  add    $0x20,%esp
0854d0b4 +0x19e:  pop    %ebx
0854d0b5 +0x19f:  pop    %esi
0854d0b6 +0x1a0:  pop    %ebp
0854d0b7 +0x1a1:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::_saveData @ 0x854cf16

/* CKillMonsterInfo::_saveData(CUser*) */

bool __thiscall CKillMonsterInfo::_saveData(CKillMonsterInfo *this,CUser *param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  CStreamGuard local_18 [8];
  SIG_LOAD_KILL_MONSTER_INFO *local_10;
  
  pSVar1 = (Stream *)
           BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"KillMonsterInfo.cpp",0x6b);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0854cf68 to 0854d081 has its CatchHandler @ 0854d089 */
  CStreamGuard::operator<<(pCVar2,0x281);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LOAD_KILL_MONSTER_INFO>(pCVar2);
  bVar5 = local_10 != (SIG_LOAD_KILL_MONSTER_INFO *)0x0;
  if (bVar5) {
    memset(local_10,0,0xafcc);
    uVar4 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(local_10 + 45000) = uVar4;
    ConvertMapToStrcut(this,(map *)(this + 8),(stMonsterInfo_t *)local_10,0x5dc);
    ConvertMapToStrcut(this,(map *)(this + 0x20),(stMonsterInfo_t *)(local_10 + 0x1d4c),6000);
    ConvertMapToStrcut(this,(map *)(this + 0x38),(stMonsterInfo_t *)(local_10 + 0x927c),0x5dc);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return bVar5;
}
```
