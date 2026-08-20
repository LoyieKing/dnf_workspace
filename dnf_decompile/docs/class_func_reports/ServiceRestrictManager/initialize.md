# initialize

`_ZN22ServiceRestrictManager10initializeEv`

`ServiceRestrictManager::initialize()`

| 类 | 地址 |
|---|---|
| `ServiceRestrictManager` | `0x0816e2b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816e2b2  _ZN22ServiceRestrictManager10initializeEv
#           ServiceRestrictManager::initialize()
# range [0x0816e2b2, 0x0816e549]
0816e2b2 +0x000:  push   %ebp
0816e2b3 +0x001:  mov    %esp,%ebp
0816e2b5 +0x003:  push   %edi
0816e2b6 +0x004:  push   %esi
0816e2b7 +0x005:  push   %ebx
0816e2b8 +0x006:  sub    $0x4c,%esp
0816e2bb +0x009:  movl   $0x0,-0x1c(%ebp)
0816e2c2 +0x010:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0816e2c7 +0x015:  mov    %eax,(%esp)
0816e2ca +0x018:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0816e2cf +0x01d:  cmp    $0x1,%eax
0816e2d2 +0x020:  sete   %al
0816e2d5 +0x023:  test   %al,%al
0816e2d7 +0x025:  je     0816e2e0 <+0x2e>
0816e2d9 +0x027:  mov    0x8(%ebp),%eax
0816e2dc +0x02a:  movb   $0x1,0x19(%eax)
0816e2e0 +0x02e:  movl   $0x18,(%esp)
0816e2e7 +0x035:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0816e2ec +0x03a:  mov    %eax,%ebx
0816e2ee +0x03c:  mov    %ebx,%eax
0816e2f0 +0x03e:  mov    %eax,(%esp)
0816e2f3 +0x041:  call   0816d5aa <_ZN10NullPolicyC1Ev>  ; NullPolicy::NullPolicy()
0816e2f8 +0x046:  jmp    0816e312 <+0x60>
0816e2fa +0x048:  mov    %edx,%esi
0816e2fc +0x04a:  mov    %eax,%edi
0816e2fe +0x04c:  mov    %ebx,(%esp)
0816e301 +0x04f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816e306 +0x054:  mov    %edi,%eax
0816e308 +0x056:  mov    %esi,%edx
0816e30a +0x058:  mov    %eax,(%esp)
0816e30d +0x05b:  call   08ae3750 <_Unwind_Resume>
0816e312 +0x060:  mov    %ebx,%eax
0816e314 +0x062:  mov    %eax,-0x1c(%ebp)
0816e317 +0x065:  cmpl   $0x0,-0x1c(%ebp)
0816e31b +0x069:  jne    0816e353 <+0xa1>
0816e31d +0x06b:  movl   $"[Taiwan, Restrict] Fail create NullPolicy.",0x10(%esp)
0816e325 +0x073:  movl   $0x169,0xc(%esp)
0816e32d +0x07b:  movl   $&_ZZN22ServiceRestrictManager10initializeEvE19__PRETTY_FUNCTION__,0x8(%esp)
0816e335 +0x083:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816e33d +0x08b:  movl   $0x1,(%esp)
0816e344 +0x092:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816e349 +0x097:  mov    $0x0,%eax
0816e34e +0x09c:  jmp    0816e542 <+0x290>
0816e353 +0x0a1:  mov    -0x1c(%ebp),%eax
0816e356 +0x0a4:  mov    %eax,(%esp)
0816e359 +0x0a7:  call   0816ee12 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x100>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x100
0816e35e +0x0ac:  mov    %eax,-0x2c(%ebp)
0816e361 +0x0af:  mov    0x8(%ebp),%eax
0816e364 +0x0b2:  lea    -0x2c(%ebp),%edx
0816e367 +0x0b5:  mov    %edx,0x4(%esp)
0816e36b +0x0b9:  mov    %eax,(%esp)
0816e36e +0x0bc:  call   0816efa6 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x294>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x294
0816e373 +0x0c1:  mov    -0x1c(%ebp),%edx
0816e376 +0x0c4:  mov    %edx,(%eax)
0816e378 +0x0c6:  movl   $0x18,(%esp)
0816e37f +0x0cd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0816e384 +0x0d2:  mov    %eax,%ebx
0816e386 +0x0d4:  mov    %ebx,%eax
0816e388 +0x0d6:  mov    %eax,(%esp)
0816e38b +0x0d9:  call   0816d6ce <_ZN24AuthMobileRestrictPolicyC1Ev>  ; AuthMobileRestrictPolicy::AuthMobileRestrictPolicy()
0816e390 +0x0de:  jmp    0816e3aa <+0xf8>
0816e392 +0x0e0:  mov    %edx,%esi
0816e394 +0x0e2:  mov    %eax,%edi
0816e396 +0x0e4:  mov    %ebx,(%esp)
0816e399 +0x0e7:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816e39e +0x0ec:  mov    %edi,%eax
0816e3a0 +0x0ee:  mov    %esi,%edx
0816e3a2 +0x0f0:  mov    %eax,(%esp)
0816e3a5 +0x0f3:  call   08ae3750 <_Unwind_Resume>
0816e3aa +0x0f8:  mov    %ebx,%eax
0816e3ac +0x0fa:  mov    %eax,-0x1c(%ebp)
0816e3af +0x0fd:  cmpl   $0x0,-0x1c(%ebp)
0816e3b3 +0x101:  jne    0816e3eb <+0x139>
0816e3b5 +0x103:  movl   $"[Taiwan, Restrict] Fail create AuthMobileRestrictPolicy.",0x10(%esp)
0816e3bd +0x10b:  movl   $0x171,0xc(%esp)
0816e3c5 +0x113:  movl   $&_ZZN22ServiceRestrictManager10initializeEvE19__PRETTY_FUNCTION__,0x8(%esp)
0816e3cd +0x11b:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816e3d5 +0x123:  movl   $0x1,(%esp)
0816e3dc +0x12a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816e3e1 +0x12f:  mov    $0x0,%eax
0816e3e6 +0x134:  jmp    0816e542 <+0x290>
0816e3eb +0x139:  mov    -0x1c(%ebp),%eax
0816e3ee +0x13c:  mov    %eax,(%esp)
0816e3f1 +0x13f:  call   0816ee12 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x100>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x100
0816e3f6 +0x144:  mov    %eax,-0x28(%ebp)
0816e3f9 +0x147:  mov    0x8(%ebp),%eax
0816e3fc +0x14a:  lea    -0x28(%ebp),%edx
0816e3ff +0x14d:  mov    %edx,0x4(%esp)
0816e403 +0x151:  mov    %eax,(%esp)
0816e406 +0x154:  call   0816efa6 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x294>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x294
0816e40b +0x159:  mov    -0x1c(%ebp),%edx
0816e40e +0x15c:  mov    %edx,(%eax)
0816e410 +0x15e:  movl   $0x18,(%esp)
0816e417 +0x165:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0816e41c +0x16a:  mov    %eax,%ebx
0816e41e +0x16c:  mov    %ebx,%eax
0816e420 +0x16e:  mov    %eax,(%esp)
0816e423 +0x171:  call   0816ddd2 <_ZN29CreateCharacterRestrictPolicyC1Ev>  ; CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy()
0816e428 +0x176:  jmp    0816e442 <+0x190>
0816e42a +0x178:  mov    %edx,%esi
0816e42c +0x17a:  mov    %eax,%edi
0816e42e +0x17c:  mov    %ebx,(%esp)
0816e431 +0x17f:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816e436 +0x184:  mov    %edi,%eax
0816e438 +0x186:  mov    %esi,%edx
0816e43a +0x188:  mov    %eax,(%esp)
0816e43d +0x18b:  call   08ae3750 <_Unwind_Resume>
0816e442 +0x190:  mov    %ebx,%eax
0816e444 +0x192:  mov    %eax,-0x1c(%ebp)
0816e447 +0x195:  cmpl   $0x0,-0x1c(%ebp)
0816e44b +0x199:  jne    0816e483 <+0x1d1>
0816e44d +0x19b:  movl   $"[Taiwan, Restrict] Fail create CreateCharacterRestrictPolicy.",0x10(%esp)
0816e455 +0x1a3:  movl   $0x17a,0xc(%esp)
0816e45d +0x1ab:  movl   $&_ZZN22ServiceRestrictManager10initializeEvE19__PRETTY_FUNCTION__,0x8(%esp)
0816e465 +0x1b3:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816e46d +0x1bb:  movl   $0x1,(%esp)
0816e474 +0x1c2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816e479 +0x1c7:  mov    $0x0,%eax
0816e47e +0x1cc:  jmp    0816e542 <+0x290>
0816e483 +0x1d1:  mov    -0x1c(%ebp),%eax
0816e486 +0x1d4:  mov    %eax,(%esp)
0816e489 +0x1d7:  call   0816ee12 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x100>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x100
0816e48e +0x1dc:  mov    %eax,-0x24(%ebp)
0816e491 +0x1df:  mov    0x8(%ebp),%eax
0816e494 +0x1e2:  lea    -0x24(%ebp),%edx
0816e497 +0x1e5:  mov    %edx,0x4(%esp)
0816e49b +0x1e9:  mov    %eax,(%esp)
0816e49e +0x1ec:  call   0816efa6 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x294>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x294
0816e4a3 +0x1f1:  mov    -0x1c(%ebp),%edx
0816e4a6 +0x1f4:  mov    %edx,(%eax)
0816e4a8 +0x1f6:  movl   $0x18,(%esp)
0816e4af +0x1fd:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0816e4b4 +0x202:  mov    %eax,%ebx
0816e4b6 +0x204:  mov    %ebx,%eax
0816e4b8 +0x206:  mov    %eax,(%esp)
0816e4bb +0x209:  call   0816da50 <_ZN22SecurityRestrictPolicyC1Ev>  ; SecurityRestrictPolicy::SecurityRestrictPolicy()
0816e4c0 +0x20e:  jmp    0816e4da <+0x228>
0816e4c2 +0x210:  mov    %edx,%esi
0816e4c4 +0x212:  mov    %eax,%edi
0816e4c6 +0x214:  mov    %ebx,(%esp)
0816e4c9 +0x217:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0816e4ce +0x21c:  mov    %edi,%eax
0816e4d0 +0x21e:  mov    %esi,%edx
0816e4d2 +0x220:  mov    %eax,(%esp)
0816e4d5 +0x223:  call   08ae3750 <_Unwind_Resume>
0816e4da +0x228:  mov    %ebx,%eax
0816e4dc +0x22a:  mov    %eax,-0x1c(%ebp)
0816e4df +0x22d:  cmpl   $0x0,-0x1c(%ebp)
0816e4e3 +0x231:  jne    0816e518 <+0x266>
0816e4e5 +0x233:  movl   $"[Taiwan, Restrict] Fail create SecurityRestrictPolicy.",0x10(%esp)
0816e4ed +0x23b:  movl   $0x183,0xc(%esp)
0816e4f5 +0x243:  movl   $&_ZZN22ServiceRestrictManager10initializeEvE19__PRETTY_FUNCTION__,0x8(%esp)
0816e4fd +0x24b:  movl   $"localtaiwan/System/ServiceRestrictManager.cpp",0x4(%esp)
0816e505 +0x253:  movl   $0x1,(%esp)
0816e50c +0x25a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0816e511 +0x25f:  mov    $0x0,%eax
0816e516 +0x264:  jmp    0816e542 <+0x290>
0816e518 +0x266:  mov    -0x1c(%ebp),%eax
0816e51b +0x269:  mov    %eax,(%esp)
0816e51e +0x26c:  call   0816ee12 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x100>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x100
0816e523 +0x271:  mov    %eax,-0x20(%ebp)
0816e526 +0x274:  mov    0x8(%ebp),%eax
0816e529 +0x277:  lea    -0x20(%ebp),%edx
0816e52c +0x27a:  mov    %edx,0x4(%esp)
0816e530 +0x27e:  mov    %eax,(%esp)
0816e533 +0x281:  call   0816efa6 <_GLOBAL__I__ZN16RestrictCategory12enumToStringENS_4EnumE+0x294>  ; global constructors keyed to RestrictCategory::enumToString(RestrictCategory::Enum)+0x294
0816e538 +0x286:  mov    -0x1c(%ebp),%edx
0816e53b +0x289:  mov    %edx,(%eax)
0816e53d +0x28b:  mov    $0x1,%eax
0816e542 +0x290:  add    $0x4c,%esp
0816e545 +0x293:  pop    %ebx
0816e546 +0x294:  pop    %esi
0816e547 +0x295:  pop    %edi
0816e548 +0x296:  pop    %ebp
0816e549 +0x297:  ret
```

## 反编译 C

```c
// ServiceRestrictManager::initialize @ 0x816e2b2

/* ServiceRestrictManager::initialize() */

undefined4 __thiscall ServiceRestrictManager::initialize(ServiceRestrictManager *this)

{
  CEnvironment *this_00;
  int iVar1;
  NullPolicy *this_01;
  undefined4 uVar2;
  undefined4 *puVar3;
  AuthMobileRestrictPolicy *this_02;
  CreateCharacterRestrictPolicy *this_03;
  SecurityRestrictPolicy *this_04;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  NullPolicy *local_20;
  
  local_20 = (NullPolicy *)0x0;
  this_00 = (CEnvironment *)G_CEnvironment();
  iVar1 = CEnvironment::get_channel_no(this_00);
  if (iVar1 == 1) {
    this[0x19] = (ServiceRestrictManager)0x1;
  }
  this_01 = operator_new(0x18);
                    /* try { // try from 0816e2f3 to 0816e2f7 has its CatchHandler @ 0816e2fa */
  NullPolicy::NullPolicy(this_01);
  local_20 = this_01;
  if (this_01 == (NullPolicy *)0x0) {
    LogManager::logFormat
              (1,"localtaiwan/System/ServiceRestrictManager.cpp",
               "bool ServiceRestrictManager::initialize()",0x169,
               "[Taiwan, Restrict] Fail create NullPolicy.");
    uVar2 = 0;
  }
  else {
    local_30 = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this_01);
    puVar3 = (undefined4 *)
             std::
             map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
             ::operator[]((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                           *)this,(Enum *)&local_30);
    *puVar3 = local_20;
    this_02 = operator_new(0x18);
                    /* try { // try from 0816e38b to 0816e38f has its CatchHandler @ 0816e392 */
    AuthMobileRestrictPolicy::AuthMobileRestrictPolicy(this_02);
    local_20 = (NullPolicy *)this_02;
    if (this_02 == (AuthMobileRestrictPolicy *)0x0) {
      LogManager::logFormat
                (1,"localtaiwan/System/ServiceRestrictManager.cpp",
                 "bool ServiceRestrictManager::initialize()",0x171,
                 "[Taiwan, Restrict] Fail create AuthMobileRestrictPolicy.");
      uVar2 = 0;
    }
    else {
      local_2c = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this_02);
      puVar3 = (undefined4 *)
               std::
               map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
               ::operator[]((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                             *)this,(Enum *)&local_2c);
      *puVar3 = local_20;
      this_03 = operator_new(0x18);
                    /* try { // try from 0816e423 to 0816e427 has its CatchHandler @ 0816e42a */
      CreateCharacterRestrictPolicy::CreateCharacterRestrictPolicy(this_03);
      local_20 = (NullPolicy *)this_03;
      if (this_03 == (CreateCharacterRestrictPolicy *)0x0) {
        LogManager::logFormat
                  (1,"localtaiwan/System/ServiceRestrictManager.cpp",
                   "bool ServiceRestrictManager::initialize()",0x17a,
                   "[Taiwan, Restrict] Fail create CreateCharacterRestrictPolicy.");
        uVar2 = 0;
      }
      else {
        local_28 = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this_03);
        puVar3 = (undefined4 *)
                 std::
                 map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                 ::operator[]((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                               *)this,(Enum *)&local_28);
        *puVar3 = local_20;
        this_04 = operator_new(0x18);
                    /* try { // try from 0816e4bb to 0816e4bf has its CatchHandler @ 0816e4c2 */
        SecurityRestrictPolicy::SecurityRestrictPolicy(this_04);
        local_20 = (NullPolicy *)this_04;
        if (this_04 == (SecurityRestrictPolicy *)0x0) {
          LogManager::logFormat
                    (1,"localtaiwan/System/ServiceRestrictManager.cpp",
                     "bool ServiceRestrictManager::initialize()",0x183,
                     "[Taiwan, Restrict] Fail create SecurityRestrictPolicy.");
          uVar2 = 0;
        }
        else {
          local_24 = InterfaceServicePolicy::getCode((InterfaceServicePolicy *)this_04);
          puVar3 = (undefined4 *)
                   std::
                   map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                   ::operator[]((map<RestrictCategory::Enum,InterfaceServicePolicy*,std::less<RestrictCategory::Enum>,std::allocator<std::pair<RestrictCategory::Enum_const,InterfaceServicePolicy*>>>
                                 *)this,(Enum *)&local_24);
          *puVar3 = local_20;
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}
```
