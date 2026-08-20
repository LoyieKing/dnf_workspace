# dispatch_sig

`_ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci`

`Inter_LoadEventItem::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEventItem` | `0x084cf0c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084cf0c4  _ZN19Inter_LoadEventItem12dispatch_sigEP5CUserPci
#           Inter_LoadEventItem::dispatch_sig(CUser*, char*, int)
# range [0x084cf0c4, 0x084cf2dd]
084cf0c4 +0x000:  push   %ebp
084cf0c5 +0x001:  mov    %esp,%ebp
084cf0c7 +0x003:  push   %esi
084cf0c8 +0x004:  push   %ebx
084cf0c9 +0x005:  sub    $0x50,%esp
084cf0cc +0x008:  mov    0x10(%ebp),%eax
084cf0cf +0x00b:  mov    %eax,-0x14(%ebp)
084cf0d2 +0x00e:  mov    -0x14(%ebp),%eax
084cf0d5 +0x011:  mov    (%eax),%ebx
084cf0d7 +0x013:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084cf0dc +0x018:  mov    %ebx,0x4(%esp)
084cf0e0 +0x01c:  mov    %eax,(%esp)
084cf0e3 +0x01f:  call   082948c6 <_ZN12CGameManager14GetUserByAccIdEj>  ; CGameManager::GetUserByAccId(unsigned int)
084cf0e8 +0x024:  mov    %eax,-0x10(%ebp)
084cf0eb +0x027:  cmpl   $0x0,-0x10(%ebp)
084cf0ef +0x02b:  jne    084cf0fb <+0x37>
084cf0f1 +0x02d:  mov    $0x0,%eax
084cf0f6 +0x032:  jmp    084cf2d6 <+0x212>
084cf0fb +0x037:  movl   $0x18,0x8(%esp)
084cf103 +0x03f:  movl   $0x0,0x4(%esp)
084cf10b +0x047:  lea    -0x2c(%ebp),%eax
084cf10e +0x04a:  mov    %eax,(%esp)
084cf111 +0x04d:  call   0807dcc0 <_init+0x5b8>
084cf116 +0x052:  movl   $0x0,-0xc(%ebp)
084cf11d +0x059:  jmp    084cf1e2 <+0x11e>
084cf122 +0x05e:  mov    -0xc(%ebp),%edx
084cf125 +0x061:  mov    -0x14(%ebp),%eax
084cf128 +0x064:  shl    $0x4,%edx
084cf12b +0x067:  mov    0x10(%edx,%eax,1),%eax
084cf12f +0x06b:  cmp    $0x3e7,%eax
084cf134 +0x070:  je     084cf162 <+0x9e>
084cf136 +0x072:  mov    -0x10(%ebp),%eax
084cf139 +0x075:  mov    %eax,(%esp)
084cf13c +0x078:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084cf141 +0x07d:  cmp    $0x2,%eax
084cf144 +0x080:  jle    084cf15b <+0x97>
084cf146 +0x082:  mov    -0x10(%ebp),%eax
084cf149 +0x085:  mov    %eax,(%esp)
084cf14c +0x088:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084cf151 +0x08d:  mov    -0x14(%ebp),%edx
084cf154 +0x090:  mov    0x4(%edx),%edx
084cf157 +0x093:  cmp    %edx,%eax
084cf159 +0x095:  je     084cf162 <+0x9e>
084cf15b +0x097:  mov    $0x1,%eax
084cf160 +0x09c:  jmp    084cf167 <+0xa3>
084cf162 +0x09e:  mov    $0x0,%eax
084cf167 +0x0a3:  test   %al,%al
084cf169 +0x0a5:  jne    084cf1dd <+0x119>
084cf16b +0x0a7:  mov    -0xc(%ebp),%edx
084cf16e +0x0aa:  mov    -0x14(%ebp),%eax
084cf171 +0x0ad:  shl    $0x4,%edx
084cf174 +0x0b0:  mov    0xc(%edx,%eax,1),%ebx
084cf178 +0x0b4:  mov    -0xc(%ebp),%edx
084cf17b +0x0b7:  mov    -0x14(%ebp),%eax
084cf17e +0x0ba:  shl    $0x4,%edx
084cf181 +0x0bd:  mov    0x18(%edx,%eax,1),%ecx
084cf185 +0x0c1:  mov    -0xc(%ebp),%edx
084cf188 +0x0c4:  mov    -0x14(%ebp),%eax
084cf18b +0x0c7:  shl    $0x4,%edx
084cf18e +0x0ca:  mov    0x14(%edx,%eax,1),%edx
084cf192 +0x0ce:  mov    -0xc(%ebp),%esi
084cf195 +0x0d1:  mov    -0x14(%ebp),%eax
084cf198 +0x0d4:  shl    $0x4,%esi
084cf19b +0x0d7:  mov    0x10(%esi,%eax,1),%eax
084cf19f +0x0db:  mov    %ebx,0x10(%esp)
084cf1a3 +0x0df:  mov    %ecx,0xc(%esp)
084cf1a7 +0x0e3:  mov    %edx,0x8(%esp)
084cf1ab +0x0e7:  mov    %eax,0x4(%esp)
084cf1af +0x0eb:  mov    -0x10(%ebp),%eax
084cf1b2 +0x0ee:  mov    %eax,(%esp)
084cf1b5 +0x0f1:  call   086c121e <_ZN8WongWork9CWebEvent14RecvInfoFromDBEP5CUserjjjj>  ; WongWork::CWebEvent::RecvInfoFromDB(CUser*, unsigned int, unsigned int, unsigned int, unsigned int)
084cf1ba +0x0f6:  test   %al,%al
084cf1bc +0x0f8:  je     084cf1de <+0x11a>
084cf1be +0x0fa:  mov    -0x2c(%ebp),%eax
084cf1c1 +0x0fd:  mov    -0xc(%ebp),%ecx
084cf1c4 +0x100:  mov    -0x14(%ebp),%edx
084cf1c7 +0x103:  shl    $0x4,%ecx
084cf1ca +0x106:  mov    0xc(%ecx,%edx,1),%edx
084cf1ce +0x10a:  mov    %edx,-0x28(%ebp,%eax,4)
084cf1d2 +0x10e:  mov    -0x2c(%ebp),%eax
084cf1d5 +0x111:  add    $0x1,%eax
084cf1d8 +0x114:  mov    %eax,-0x2c(%ebp)
084cf1db +0x117:  jmp    084cf1de <+0x11a>
084cf1dd +0x119:  nop
084cf1de +0x11a:  addl   $0x1,-0xc(%ebp)
084cf1e2 +0x11e:  mov    -0x14(%ebp),%eax
084cf1e5 +0x121:  mov    0x8(%eax),%eax
084cf1e8 +0x124:  cmp    -0xc(%ebp),%eax
084cf1eb +0x127:  setg   %al
084cf1ee +0x12a:  test   %al,%al
084cf1f0 +0x12c:  jne    084cf122 <+0x5e>
084cf1f6 +0x132:  mov    -0x2c(%ebp),%eax
084cf1f9 +0x135:  test   %eax,%eax
084cf1fb +0x137:  je     084cf2d1 <+0x20d>
084cf201 +0x13d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084cf206 +0x142:  movl   $0x2c1f,0x8(%esp)
084cf20e +0x14a:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cf216 +0x152:  mov    %eax,(%esp)
084cf219 +0x155:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084cf21e +0x15a:  movl   $0x1,0x8(%esp)
084cf226 +0x162:  mov    %eax,0x4(%esp)
084cf22a +0x166:  lea    -0x34(%ebp),%eax
084cf22d +0x169:  mov    %eax,(%esp)
084cf230 +0x16c:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084cf235 +0x171:  lea    -0x34(%ebp),%eax
084cf238 +0x174:  mov    %eax,(%esp)
084cf23b +0x177:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084cf240 +0x17c:  movl   $0x4d,0x4(%esp)
084cf248 +0x184:  mov    %eax,(%esp)
084cf24b +0x187:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084cf250 +0x18c:  lea    -0x34(%ebp),%eax
084cf253 +0x18f:  mov    %eax,(%esp)
084cf256 +0x192:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084cf25b +0x197:  movl   $0xffffffff,0x4(%esp)
084cf263 +0x19f:  mov    %eax,(%esp)
084cf266 +0x1a2:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084cf26b +0x1a7:  lea    -0x34(%ebp),%eax
084cf26e +0x1aa:  mov    %eax,(%esp)
084cf271 +0x1ad:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084cf276 +0x1b2:  movl   $0x18,0x8(%esp)
084cf27e +0x1ba:  lea    -0x2c(%ebp),%edx
084cf281 +0x1bd:  mov    %edx,0x4(%esp)
084cf285 +0x1c1:  mov    %eax,(%esp)
084cf288 +0x1c4:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
084cf28d +0x1c9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084cf292 +0x1ce:  lea    -0x34(%ebp),%edx
084cf295 +0x1d1:  mov    %edx,0x8(%esp)
084cf299 +0x1d5:  movl   $0x2,0x4(%esp)
084cf2a1 +0x1dd:  mov    %eax,(%esp)
084cf2a4 +0x1e0:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084cf2a9 +0x1e5:  jmp    084cf2c6 <+0x202>
084cf2ab +0x1e7:  mov    %edx,%ebx
084cf2ad +0x1e9:  mov    %eax,%esi
084cf2af +0x1eb:  lea    -0x34(%ebp),%eax
084cf2b2 +0x1ee:  mov    %eax,(%esp)
084cf2b5 +0x1f1:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084cf2ba +0x1f6:  mov    %esi,%eax
084cf2bc +0x1f8:  mov    %ebx,%edx
084cf2be +0x1fa:  mov    %eax,(%esp)
084cf2c1 +0x1fd:  call   08ae3750 <_Unwind_Resume>
084cf2c6 +0x202:  lea    -0x34(%ebp),%eax
084cf2c9 +0x205:  mov    %eax,(%esp)
084cf2cc +0x208:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084cf2d1 +0x20d:  mov    $0x0,%eax
084cf2d6 +0x212:  add    $0x50,%esp
084cf2d9 +0x215:  pop    %ebx
084cf2da +0x216:  pop    %esi
084cf2db +0x217:  pop    %ebp
084cf2dc +0x218:  ret
084cf2dd +0x219:  nop
```

## 反编译 C

```c
// Inter_LoadEventItem::dispatch_sig @ 0x84cf0c4

/* Inter_LoadEventItem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadEventItem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  CGameManager *this;
  int iVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  CStreamGuard local_38 [8];
  int local_30;
  undefined4 auStack_2c [5];
  int local_18;
  CUser *local_14;
  int local_10;
  
  local_18 = param_3;
  uVar1 = *(uint *)param_3;
  this = (CGameManager *)G_CGameManager();
  local_14 = (CUser *)CGameManager::GetUserByAccId(this,uVar1);
  if (local_14 != (CUser *)0x0) {
    memset(&local_30,0,0x18);
    for (local_10 = 0; local_10 < *(int *)(local_18 + 8); local_10 = local_10 + 1) {
      if ((*(int *)(local_10 * 0x10 + 0x10 + local_18) == 999) ||
         ((iVar4 = CUser::get_state(local_14), 2 < iVar4 &&
          (iVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_14),
          iVar4 == *(int *)(local_18 + 4))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) &&
         (cVar3 = WongWork::CWebEvent::RecvInfoFromDB
                            (local_14,*(uint *)(local_10 * 0x10 + 0x10 + local_18),
                             *(uint *)(local_10 * 0x10 + 0x14 + local_18),
                             *(uint *)(local_10 * 0x10 + 0x18 + local_18),
                             *(uint *)(local_10 * 0x10 + 0xc + local_18)), cVar3 != '\0')) {
        auStack_2c[local_30] = *(undefined4 *)(local_10 * 0x10 + 0xc + local_18);
        local_30 = local_30 + 1;
      }
    }
    if (local_30 != 0) {
      pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x2c1f)
      ;
      CStreamGuard::CStreamGuard(local_38,pSVar5,true);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 084cf24b to 084cf2a8 has its CatchHandler @ 084cf2ab */
      CStreamGuard::operator<<(pCVar6,0x4d);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_38);
      CStreamGuard::operator<<(pCVar6,-1);
      pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_38);
      CStreamGuard::put_binary(pCVar6,&local_30,0x18);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_38);
      CStreamGuard::~CStreamGuard(local_38);
    }
  }
  return 0;
}
```
