# ReCalcChattingEmoticon

`_ZN5CUser22ReCalcChattingEmoticonEv`

`CUser::ReCalcChattingEmoticon()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08689a22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08689a22  _ZN5CUser22ReCalcChattingEmoticonEv
#           CUser::ReCalcChattingEmoticon()
# range [0x08689a22, 0x08689b8f]
08689a22 +0x000:  push   %ebp
08689a23 +0x001:  mov    %esp,%ebp
08689a25 +0x003:  push   %edi
08689a26 +0x004:  push   %esi
08689a27 +0x005:  push   %ebx
08689a28 +0x006:  sub    $0x23c,%esp
08689a2e +0x00c:  mov    0x8(%ebp),%eax
08689a31 +0x00f:  mov    %eax,(%esp)
08689a34 +0x012:  call   0822fc4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x52f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x52f8
08689a39 +0x017:  mov    %eax,-0x20(%ebp)
08689a3c +0x01a:  lea    -0x238(%ebp),%eax
08689a42 +0x020:  mov    -0x20(%ebp),%edx
08689a45 +0x023:  mov    %edx,0x4(%esp)
08689a49 +0x027:  mov    %eax,(%esp)
08689a4c +0x02a:  call   084b7136 <_ZNK11CGameOption15getEmoticonInfoEv>  ; CGameOption::getEmoticonInfo() const
08689a51 +0x02f:  sub    $0x4,%esp
08689a54 +0x032:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08689a59 +0x037:  mov    0x8(%ebp),%edx
08689a5c +0x03a:  mov    %edx,0x8(%esp)
08689a60 +0x03e:  lea    -0x238(%ebp),%edx
08689a66 +0x044:  mov    %edx,0x4(%esp)
08689a6a +0x048:  mov    %eax,(%esp)
08689a6d +0x04b:  call   0835fc76 <_ZN12CDataManager18ReCalcEmoticonConfER23CChattingEmoticonConfigRK5CUser>  ; CDataManager::ReCalcEmoticonConf(CChattingEmoticonConfig&, CUser const&)
08689a72 +0x050:  lea    -0x238(%ebp),%eax
08689a78 +0x056:  mov    %eax,0x4(%esp)
08689a7c +0x05a:  mov    -0x20(%ebp),%eax
08689a7f +0x05d:  mov    %eax,(%esp)
08689a82 +0x060:  call   084b7080 <_ZN11CGameOption15SetEmoticonInfoERK23CChattingEmoticonConfig>  ; CGameOption::SetEmoticonInfo(CChattingEmoticonConfig const&)
08689a87 +0x065:  test   %al,%al
08689a89 +0x067:  je     08689b85 <+0x163>
08689a8f +0x06d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08689a94 +0x072:  movl   $0xa076,0x8(%esp)
08689a9c +0x07a:  movl   $"user.cpp",0x4(%esp)
08689aa4 +0x082:  mov    %eax,(%esp)
08689aa7 +0x085:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08689aac +0x08a:  movl   $0x1,0x8(%esp)
08689ab4 +0x092:  mov    %eax,0x4(%esp)
08689ab8 +0x096:  lea    -0x28(%ebp),%eax
08689abb +0x099:  mov    %eax,(%esp)
08689abe +0x09c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08689ac3 +0x0a1:  lea    -0x28(%ebp),%eax
08689ac6 +0x0a4:  mov    %eax,(%esp)
08689ac9 +0x0a7:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08689ace +0x0ac:  movl   $0x2d7,0x4(%esp)
08689ad6 +0x0b4:  mov    %eax,(%esp)
08689ad9 +0x0b7:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08689ade +0x0bc:  mov    0x8(%ebp),%eax
08689ae1 +0x0bf:  mov    %eax,(%esp)
08689ae4 +0x0c2:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08689ae9 +0x0c7:  mov    %eax,%ebx
08689aeb +0x0c9:  lea    -0x28(%ebp),%eax
08689aee +0x0cc:  mov    %eax,(%esp)
08689af1 +0x0cf:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08689af6 +0x0d4:  mov    %ebx,0x4(%esp)
08689afa +0x0d8:  mov    %eax,(%esp)
08689afd +0x0db:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08689b02 +0x0e0:  lea    -0x28(%ebp),%eax
08689b05 +0x0e3:  mov    %eax,(%esp)
08689b08 +0x0e6:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08689b0d +0x0eb:  mov    %eax,(%esp)
08689b10 +0x0ee:  call   08236f8c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc636>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc636
08689b15 +0x0f3:  mov    %eax,-0x1c(%ebp)
08689b18 +0x0f6:  mov    0x8(%ebp),%eax
08689b1b +0x0f9:  mov    %eax,(%esp)
08689b1e +0x0fc:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08689b23 +0x101:  mov    -0x1c(%ebp),%edx
08689b26 +0x104:  mov    %eax,(%edx)
08689b28 +0x106:  mov    -0x1c(%ebp),%eax
08689b2b +0x109:  lea    0x4(%eax),%ebx
08689b2e +0x10c:  lea    -0x238(%ebp),%edx
08689b34 +0x112:  mov    $0x84,%eax
08689b39 +0x117:  mov    %ebx,%edi
08689b3b +0x119:  mov    %edx,%esi
08689b3d +0x11b:  mov    %eax,%ecx
08689b3f +0x11d:  rep movsl %ds:(%esi),%es:(%edi)
08689b41 +0x11f:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08689b46 +0x124:  lea    -0x28(%ebp),%edx
08689b49 +0x127:  mov    %edx,0x8(%esp)
08689b4d +0x12b:  movl   $0x2,0x4(%esp)
08689b55 +0x133:  mov    %eax,(%esp)
08689b58 +0x136:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08689b5d +0x13b:  jmp    08689b7a <+0x158>
08689b5f +0x13d:  mov    %edx,%ebx
08689b61 +0x13f:  mov    %eax,%esi
08689b63 +0x141:  lea    -0x28(%ebp),%eax
08689b66 +0x144:  mov    %eax,(%esp)
08689b69 +0x147:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08689b6e +0x14c:  mov    %esi,%eax
08689b70 +0x14e:  mov    %ebx,%edx
08689b72 +0x150:  mov    %eax,(%esp)
08689b75 +0x153:  call   08ae3750 <_Unwind_Resume>
08689b7a +0x158:  lea    -0x28(%ebp),%eax
08689b7d +0x15b:  mov    %eax,(%esp)
08689b80 +0x15e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08689b85 +0x163:  lea    -0xc(%ebp),%esp
08689b88 +0x166:  add    $0x0,%esp
08689b8b +0x169:  pop    %ebx
08689b8c +0x16a:  pop    %esi
08689b8d +0x16b:  pop    %edi
08689b8e +0x16c:  pop    %ebp
08689b8f +0x16d:  ret
```

## 反编译 C

```c
// CUser::ReCalcChattingEmoticon @ 0x8689a22

/* CUser::ReCalcChattingEmoticon() */

void __thiscall CUser::ReCalcChattingEmoticon(CUser *this)

{
  char cVar1;
  CDataManager *this_00;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CChattingEmoticonConfig *pCVar6;
  SIG_SAVE_CHATTING_EMOTICON *pSVar7;
  byte bVar8;
  CChattingEmoticonConfig local_23c [528];
  CStreamGuard local_2c [8];
  CGameOption *local_24;
  SIG_SAVE_CHATTING_EMOTICON *local_20;
  
  bVar8 = 0;
  local_24 = (CGameOption *)GetGameOptionRef(this);
  CGameOption::getEmoticonInfo();
  this_00 = (CDataManager *)G_CDataManager();
  CDataManager::ReCalcEmoticonConf(this_00,local_23c,this);
  cVar1 = CGameOption::SetEmoticonInfo(local_24,local_23c);
  if (cVar1 != '\0') {
    pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0xa076);
    CStreamGuard::CStreamGuard(local_2c,pSVar2,true);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
                    /* try { // try from 08689ad9 to 08689b5c has its CatchHandler @ 08689b5f */
    CStreamGuard::operator<<(pCVar3,0x2d7);
    iVar4 = GetUID(this);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_2c);
    CStreamGuard::operator<<(pCVar3,iVar4);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_2c);
    local_20 = CStreamGuard::GetInBuffer<SIG_SAVE_CHATTING_EMOTICON>(pCVar3);
    uVar5 = get_acc_id(this);
    *(undefined4 *)local_20 = uVar5;
    pCVar6 = local_23c;
    pSVar7 = local_20 + 4;
    for (iVar4 = 0x84; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)pSVar7 = *(undefined4 *)pCVar6;
      pCVar6 = pCVar6 + ((uint)bVar8 * -2 + 1) * 4;
      pSVar7 = pSVar7 + (uint)bVar8 * -8 + 4;
    }
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_2c);
    CStreamGuard::~CStreamGuard(local_2c);
  }
  return;
}
```
