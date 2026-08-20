# dispatch

`_ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream`

`DB_UpdateOneDayLetheSkill::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOneDayLetheSkill` | `0x08433eca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08433eca  _ZN25DB_UpdateOneDayLetheSkill8dispatchEiiP6Stream
#           DB_UpdateOneDayLetheSkill::dispatch(int, int, Stream*)
# range [0x08433eca, 0x0843410b]
08433eca +0x000:  push   %ebp
08433ecb +0x001:  mov    %esp,%ebp
08433ecd +0x003:  push   %esi
08433ece +0x004:  push   %ebx
08433ecf +0x005:  sub    $0x30,%esp
08433ed2 +0x008:  mov    0x14(%ebp),%eax
08433ed5 +0x00b:  mov    %eax,(%esp)
08433ed8 +0x00e:  call   084530de <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5cf4>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5cf4
08433edd +0x013:  mov    %eax,-0x14(%ebp)
08433ee0 +0x016:  movl   $0x1,-0x10(%ebp)
08433ee7 +0x01d:  mov    -0x14(%ebp),%eax
08433eea +0x020:  movzbl 0xc(%eax),%edx
08433eee +0x024:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
08433ef5 +0x02b:  cmp    %al,%dl
08433ef7 +0x02d:  jne    08433f22 <+0x58>
08433ef9 +0x02f:  mov    -0x14(%ebp),%eax
08433efc +0x032:  mov    %eax,0x4(%esp)
08433f00 +0x036:  mov    0x8(%ebp),%eax
08433f03 +0x039:  mov    %eax,(%esp)
08433f06 +0x03c:  call   0843410c <_ZN25DB_UpdateOneDayLetheSkill16ProcessInitLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>  ; DB_UpdateOneDayLetheSkill::ProcessInitLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)
08433f0b +0x041:  xor    $0x1,%eax
08433f0e +0x044:  test   %al,%al
08433f10 +0x046:  je     08433ff3 <+0x129>
08433f16 +0x04c:  movl   $0x0,-0x10(%ebp)
08433f1d +0x053:  jmp    08433ff3 <+0x129>
08433f22 +0x058:  mov    -0x14(%ebp),%eax
08433f25 +0x05b:  movzbl 0xc(%eax),%edx
08433f29 +0x05f:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
08433f30 +0x066:  cmp    %al,%dl
08433f32 +0x068:  jne    08433f5d <+0x93>
08433f34 +0x06a:  mov    -0x14(%ebp),%eax
08433f37 +0x06d:  mov    %eax,0x4(%esp)
08433f3b +0x071:  mov    0x8(%ebp),%eax
08433f3e +0x074:  mov    %eax,(%esp)
08433f41 +0x077:  call   084341fc <_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>  ; DB_UpdateOneDayLetheSkill::ProcessUseLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)
08433f46 +0x07c:  xor    $0x1,%eax
08433f49 +0x07f:  test   %al,%al
08433f4b +0x081:  je     08433ff3 <+0x129>
08433f51 +0x087:  movl   $0x0,-0x10(%ebp)
08433f58 +0x08e:  jmp    08433ff3 <+0x129>
08433f5d +0x093:  mov    -0x14(%ebp),%eax
08433f60 +0x096:  movzbl 0xc(%eax),%edx
08433f64 +0x09a:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
08433f6b +0x0a1:  cmp    %al,%dl
08433f6d +0x0a3:  jne    08433f98 <+0xce>
08433f6f +0x0a5:  mov    0x10(%ebp),%eax
08433f72 +0x0a8:  mov    %eax,0x8(%esp)
08433f76 +0x0ac:  mov    -0x14(%ebp),%eax
08433f79 +0x0af:  mov    %eax,0x4(%esp)
08433f7d +0x0b3:  mov    0x8(%ebp),%eax
08433f80 +0x0b6:  mov    %eax,(%esp)
08433f83 +0x0b9:  call   08434340 <_ZN25DB_UpdateOneDayLetheSkill19ProcessSkillConfirmEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOADi>  ; DB_UpdateOneDayLetheSkill::ProcessSkillConfirm(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*, int)
08433f88 +0x0be:  xor    $0x1,%eax
08433f8b +0x0c1:  test   %al,%al
08433f8d +0x0c3:  je     08433ff3 <+0x129>
08433f8f +0x0c5:  movl   $0x0,-0x10(%ebp)
08433f96 +0x0cc:  jmp    08433ff3 <+0x129>
08433f98 +0x0ce:  mov    -0x14(%ebp),%eax
08433f9b +0x0d1:  movzbl 0xc(%eax),%edx
08433f9f +0x0d5:  movzbl &_ZN20CPremiumLetheManager16INIT_LETHE_SKILLE,%eax
08433fa6 +0x0dc:  cmp    %al,%dl
08433fa8 +0x0de:  jne    08433fe9 <+0x11f>
08433faa +0x0e0:  mov    -0x14(%ebp),%eax
08433fad +0x0e3:  mov    %eax,0x4(%esp)
08433fb1 +0x0e7:  mov    0x8(%ebp),%eax
08433fb4 +0x0ea:  mov    %eax,(%esp)
08433fb7 +0x0ed:  call   084345a4 <_ZN25DB_UpdateOneDayLetheSkill21ProcessInitLetheSkillEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>  ; DB_UpdateOneDayLetheSkill::ProcessInitLetheSkill(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)
08433fbc +0x0f2:  xor    $0x1,%eax
08433fbf +0x0f5:  test   %al,%al
08433fc1 +0x0f7:  je     08433fca <+0x100>
08433fc3 +0x0f9:  movl   $0x0,-0x10(%ebp)
08433fca +0x100:  movzbl &_ZN20CPremiumLetheManager16INIT_LETHE_SKILLE,%edx
08433fd1 +0x107:  mov    -0x14(%ebp),%eax
08433fd4 +0x10a:  mov    %dl,0xc(%eax)
08433fd7 +0x10d:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%edx
08433fde +0x114:  mov    -0x14(%ebp),%eax
08433fe1 +0x117:  mov    %dl,0x1a5(%eax)
08433fe7 +0x11d:  jmp    08433ff3 <+0x129>
08433fe9 +0x11f:  mov    $0x0,%ebx
08433fee +0x124:  jmp    08434102 <+0x238>
08433ff3 +0x129:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
08433ff8 +0x12e:  movl   $0x7cac,0x8(%esp)
08434000 +0x136:  movl   $"DBThread.cpp",0x4(%esp)
08434008 +0x13e:  mov    %eax,(%esp)
0843400b +0x141:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
08434010 +0x146:  movl   $0x1,0x8(%esp)
08434018 +0x14e:  mov    %eax,0x4(%esp)
0843401c +0x152:  lea    -0x1c(%ebp),%eax
0843401f +0x155:  mov    %eax,(%esp)
08434022 +0x158:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
08434027 +0x15d:  lea    -0x1c(%ebp),%eax
0843402a +0x160:  mov    %eax,(%esp)
0843402d +0x163:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08434032 +0x168:  mov    0xc(%ebp),%edx
08434035 +0x16b:  mov    %edx,0x4(%esp)
08434039 +0x16f:  mov    %eax,(%esp)
0843403c +0x172:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08434041 +0x177:  lea    -0x1c(%ebp),%eax
08434044 +0x17a:  mov    %eax,(%esp)
08434047 +0x17d:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0843404c +0x182:  mov    0x10(%ebp),%edx
0843404f +0x185:  mov    %edx,0x4(%esp)
08434053 +0x189:  mov    %eax,(%esp)
08434056 +0x18c:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0843405b +0x191:  lea    -0x1c(%ebp),%eax
0843405e +0x194:  mov    %eax,(%esp)
08434061 +0x197:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08434066 +0x19c:  mov    %eax,(%esp)
08434069 +0x19f:  call   08453132 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5d48>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5d48
0843406e +0x1a4:  mov    %eax,-0xc(%ebp)
08434071 +0x1a7:  mov    -0xc(%ebp),%eax
08434074 +0x1aa:  mov    -0x10(%ebp),%edx
08434077 +0x1ad:  mov    %edx,(%eax)
08434079 +0x1af:  mov    -0x14(%ebp),%eax
0843407c +0x1b2:  movzbl 0xc(%eax),%edx
08434080 +0x1b6:  mov    -0xc(%ebp),%eax
08434083 +0x1b9:  mov    %dl,0x4(%eax)
08434086 +0x1bc:  mov    -0x14(%ebp),%eax
08434089 +0x1bf:  movzbl 0x1a6(%eax),%edx
08434090 +0x1c6:  mov    -0xc(%ebp),%eax
08434093 +0x1c9:  mov    %dl,0x19e(%eax)
08434099 +0x1cf:  mov    -0x14(%ebp),%eax
0843409c +0x1d2:  lea    0xd(%eax),%edx
0843409f +0x1d5:  mov    -0xc(%ebp),%eax
084340a2 +0x1d8:  add    $0x5,%eax
084340a5 +0x1db:  movl   $0x199,0x8(%esp)
084340ad +0x1e3:  mov    %edx,0x4(%esp)
084340b1 +0x1e7:  mov    %eax,(%esp)
084340b4 +0x1ea:  call   0807d8a0 <_init+0x198>
084340b9 +0x1ef:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084340be +0x1f4:  lea    -0x1c(%ebp),%edx
084340c1 +0x1f7:  mov    %edx,0x8(%esp)
084340c5 +0x1fb:  movl   $0x1,0x4(%esp)
084340cd +0x203:  mov    %eax,(%esp)
084340d0 +0x206:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084340d5 +0x20b:  mov    $0x1,%ebx
084340da +0x210:  lea    -0x1c(%ebp),%eax
084340dd +0x213:  mov    %eax,(%esp)
084340e0 +0x216:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084340e5 +0x21b:  jmp    08434102 <+0x238>
084340e7 +0x21d:  mov    %edx,%ebx
084340e9 +0x21f:  mov    %eax,%esi
084340eb +0x221:  lea    -0x1c(%ebp),%eax
084340ee +0x224:  mov    %eax,(%esp)
084340f1 +0x227:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084340f6 +0x22c:  mov    %esi,%eax
084340f8 +0x22e:  mov    %ebx,%edx
084340fa +0x230:  mov    %eax,(%esp)
084340fd +0x233:  call   08ae3750 <_Unwind_Resume>
08434102 +0x238:  mov    %ebx,%eax
08434104 +0x23a:  add    $0x30,%esp
08434107 +0x23d:  pop    %ebx
08434108 +0x23e:  pop    %esi
08434109 +0x23f:  pop    %ebp
0843410a +0x240:  ret
0843410b +0x241:  nop
```

## 反编译 C

```c
// DB_UpdateOneDayLetheSkill::dispatch @ 0x8433eca

/* DB_UpdateOneDayLetheSkill::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateOneDayLetheSkill::dispatch
          (DB_UpdateOneDayLetheSkill *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  CStreamGuard local_20 [8];
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *local_18;
  undefined4 local_14;
  SIG_PREMIUM_LETHE_FLAG *local_10;
  
  local_18 = Stream::GetOutBuffer<SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>(param_3);
  local_14 = 1;
  if (local_18[0xc] == CPremiumLetheManager::NOT_USE_LETHE_STATE) {
    cVar1 = ProcessInitLethe(this,local_18);
    if (cVar1 != '\x01') {
      local_14 = 0;
    }
  }
  else if (local_18[0xc] == CPremiumLetheManager::USE_LETHE_STATE) {
    cVar1 = ProcessUseLethe(this,local_18);
    if (cVar1 != '\x01') {
      local_14 = 0;
    }
  }
  else if (local_18[0xc] == CPremiumLetheManager::SKILL_CONFIRM_STATE) {
    cVar1 = ProcessSkillConfirm((SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)this,(int)local_18);
    if (cVar1 != '\x01') {
      local_14 = 0;
    }
  }
  else {
    if (local_18[0xc] != CPremiumLetheManager::INIT_LETHE_SKILL) {
      return 0;
    }
    cVar1 = ProcessInitLetheSkill(this,local_18);
    if (cVar1 != '\x01') {
      local_14 = 0;
    }
    local_18[0xc] = CPremiumLetheManager::INIT_LETHE_SKILL;
    local_18[0x1a5] = CPremiumLetheManager::USE_LETHE_STATE;
  }
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7cac);
  CStreamGuard::CStreamGuard(local_20,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 0843403c to 084340d4 has its CatchHandler @ 084340e7 */
  CStreamGuard::operator<<(pCVar3,param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_20);
  CStreamGuard::operator<<(pCVar3,param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_20);
  local_10 = CStreamGuard::GetInBuffer<SIG_PREMIUM_LETHE_FLAG>(pCVar3);
  *(undefined4 *)local_10 = local_14;
  *(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)(local_10 + 4) = local_18[0xc];
  *(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)(local_10 + 0x19e) = local_18[0x1a6];
  memcpy(local_10 + 5,local_18 + 0xd,0x199);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
  CStreamGuard::~CStreamGuard(local_20);
  return 1;
}
```
