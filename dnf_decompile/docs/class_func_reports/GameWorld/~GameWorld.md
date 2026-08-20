# ~GameWorld

`_ZN9GameWorldD1Ev`

`GameWorld::~GameWorld()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c3f2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3f2c  _ZN9GameWorldD1Ev
#           GameWorld::~GameWorld()
# range [0x086c3f2c, 0x086c40c9]
086c3f2c +0x000:  push   %ebp
086c3f2d +0x001:  mov    %esp,%ebp
086c3f2f +0x003:  push   %esi
086c3f30 +0x004:  push   %ebx
086c3f31 +0x005:  sub    $0x10,%esp
086c3f34 +0x008:  mov    0x8(%ebp),%eax
086c3f37 +0x00b:  mov    %eax,(%esp)
086c3f3a +0x00e:  call   086c40ca <_ZN9GameWorld7destroyEv>  ; GameWorld::destroy()
086c3f3f +0x013:  jmp    086c3f5b <+0x2f>
086c3f41 +0x015:  mov    %edx,%ebx
086c3f43 +0x017:  mov    %eax,%esi
086c3f45 +0x019:  mov    0x8(%ebp),%eax
086c3f48 +0x01c:  add    $0x198,%eax
086c3f4d +0x021:  mov    %eax,(%esp)
086c3f50 +0x024:  call   082aa74a <_GLOBAL__I__ZN4CLog5this_E+0x6b71>  ; global constructors keyed to CLog::this_+0x6b71
086c3f55 +0x029:  mov    %esi,%eax
086c3f57 +0x02b:  mov    %ebx,%edx
086c3f59 +0x02d:  jmp    086c3f6d <+0x41>
086c3f5b +0x02f:  mov    0x8(%ebp),%eax
086c3f5e +0x032:  add    $0x198,%eax
086c3f63 +0x037:  mov    %eax,(%esp)
086c3f66 +0x03a:  call   082aa74a <_GLOBAL__I__ZN4CLog5this_E+0x6b71>  ; global constructors keyed to CLog::this_+0x6b71
086c3f6b +0x03f:  jmp    086c3f87 <+0x5b>
086c3f6d +0x041:  mov    %edx,%ebx
086c3f6f +0x043:  mov    %eax,%esi
086c3f71 +0x045:  mov    0x8(%ebp),%eax
086c3f74 +0x048:  add    $0x14c,%eax
086c3f79 +0x04d:  mov    %eax,(%esp)
086c3f7c +0x050:  call   086d2aa4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x12d5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x12d5
086c3f81 +0x055:  mov    %esi,%eax
086c3f83 +0x057:  mov    %ebx,%edx
086c3f85 +0x059:  jmp    086c3f99 <+0x6d>
086c3f87 +0x05b:  mov    0x8(%ebp),%eax
086c3f8a +0x05e:  add    $0x14c,%eax
086c3f8f +0x063:  mov    %eax,(%esp)
086c3f92 +0x066:  call   086d2aa4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x12d5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x12d5
086c3f97 +0x06b:  jmp    086c3fb3 <+0x87>
086c3f99 +0x06d:  mov    %edx,%ebx
086c3f9b +0x06f:  mov    %eax,%esi
086c3f9d +0x071:  mov    0x8(%ebp),%eax
086c3fa0 +0x074:  add    $0x134,%eax
086c3fa5 +0x079:  mov    %eax,(%esp)
086c3fa8 +0x07c:  call   086d2138 <_GLOBAL__I_MAX_VILLAGE_NUM+0x969>  ; global constructors keyed to MAX_VILLAGE_NUM+0x969
086c3fad +0x081:  mov    %esi,%eax
086c3faf +0x083:  mov    %ebx,%edx
086c3fb1 +0x085:  jmp    086c3fc5 <+0x99>
086c3fb3 +0x087:  mov    0x8(%ebp),%eax
086c3fb6 +0x08a:  add    $0x134,%eax
086c3fbb +0x08f:  mov    %eax,(%esp)
086c3fbe +0x092:  call   086d2138 <_GLOBAL__I_MAX_VILLAGE_NUM+0x969>  ; global constructors keyed to MAX_VILLAGE_NUM+0x969
086c3fc3 +0x097:  jmp    086c3fdf <+0xb3>
086c3fc5 +0x099:  mov    %edx,%ebx
086c3fc7 +0x09b:  mov    %eax,%esi
086c3fc9 +0x09d:  mov    0x8(%ebp),%eax
086c3fcc +0x0a0:  add    $0x11c,%eax
086c3fd1 +0x0a5:  mov    %eax,(%esp)
086c3fd4 +0x0a8:  call   0860c718 <_ZN17StatisticsNatTypeD1Ev>  ; StatisticsNatType::~StatisticsNatType()
086c3fd9 +0x0ad:  mov    %esi,%eax
086c3fdb +0x0af:  mov    %ebx,%edx
086c3fdd +0x0b1:  jmp    086c3ff1 <+0xc5>
086c3fdf +0x0b3:  mov    0x8(%ebp),%eax
086c3fe2 +0x0b6:  add    $0x11c,%eax
086c3fe7 +0x0bb:  mov    %eax,(%esp)
086c3fea +0x0be:  call   0860c718 <_ZN17StatisticsNatTypeD1Ev>  ; StatisticsNatType::~StatisticsNatType()
086c3fef +0x0c3:  jmp    086c400b <+0xdf>
086c3ff1 +0x0c5:  mov    %edx,%ebx
086c3ff3 +0x0c7:  mov    %eax,%esi
086c3ff5 +0x0c9:  mov    0x8(%ebp),%eax
086c3ff8 +0x0cc:  add    $0xec,%eax
086c3ffd +0x0d1:  mov    %eax,(%esp)
086c4000 +0x0d4:  call   0860c53c <_ZN13StatisticsPvPD1Ev>  ; StatisticsPvP::~StatisticsPvP()
086c4005 +0x0d9:  mov    %esi,%eax
086c4007 +0x0db:  mov    %ebx,%edx
086c4009 +0x0dd:  jmp    086c401d <+0xf1>
086c400b +0x0df:  mov    0x8(%ebp),%eax
086c400e +0x0e2:  add    $0xec,%eax
086c4013 +0x0e7:  mov    %eax,(%esp)
086c4016 +0x0ea:  call   0860c53c <_ZN13StatisticsPvPD1Ev>  ; StatisticsPvP::~StatisticsPvP()
086c401b +0x0ef:  jmp    086c4037 <+0x10b>
086c401d +0x0f1:  mov    %edx,%ebx
086c401f +0x0f3:  mov    %eax,%esi
086c4021 +0x0f5:  mov    0x8(%ebp),%eax
086c4024 +0x0f8:  add    $0xa4,%eax
086c4029 +0x0fd:  mov    %eax,(%esp)
086c402c +0x100:  call   0860c0e6 <_ZN23StatisticsShusiaServiceD1Ev>  ; StatisticsShusiaService::~StatisticsShusiaService()
086c4031 +0x105:  mov    %esi,%eax
086c4033 +0x107:  mov    %ebx,%edx
086c4035 +0x109:  jmp    086c4049 <+0x11d>
086c4037 +0x10b:  mov    0x8(%ebp),%eax
086c403a +0x10e:  add    $0xa4,%eax
086c403f +0x113:  mov    %eax,(%esp)
086c4042 +0x116:  call   0860c0e6 <_ZN23StatisticsShusiaServiceD1Ev>  ; StatisticsShusiaService::~StatisticsShusiaService()
086c4047 +0x11b:  jmp    086c4063 <+0x137>
086c4049 +0x11d:  mov    %edx,%ebx
086c404b +0x11f:  mov    %eax,%esi
086c404d +0x121:  mov    0x8(%ebp),%eax
086c4050 +0x124:  add    $0x8c,%eax
086c4055 +0x129:  mov    %eax,(%esp)
086c4058 +0x12c:  call   086d2a90 <_GLOBAL__I_MAX_VILLAGE_NUM+0x12c1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x12c1
086c405d +0x131:  mov    %esi,%eax
086c405f +0x133:  mov    %ebx,%edx
086c4061 +0x135:  jmp    086c4075 <+0x149>
086c4063 +0x137:  mov    0x8(%ebp),%eax
086c4066 +0x13a:  add    $0x8c,%eax
086c406b +0x13f:  mov    %eax,(%esp)
086c406e +0x142:  call   086d2a90 <_GLOBAL__I_MAX_VILLAGE_NUM+0x12c1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x12c1
086c4073 +0x147:  jmp    086c408d <+0x161>
086c4075 +0x149:  mov    %edx,%ebx
086c4077 +0x14b:  mov    %eax,%esi
086c4079 +0x14d:  mov    0x8(%ebp),%eax
086c407c +0x150:  add    $0x28,%eax
086c407f +0x153:  mov    %eax,(%esp)
086c4082 +0x156:  call   0860b9d2 <_ZN24StatisticsToObserveCrashD1Ev>  ; StatisticsToObserveCrash::~StatisticsToObserveCrash()
086c4087 +0x15b:  mov    %esi,%eax
086c4089 +0x15d:  mov    %ebx,%edx
086c408b +0x15f:  jmp    086c409d <+0x171>
086c408d +0x161:  mov    0x8(%ebp),%eax
086c4090 +0x164:  add    $0x28,%eax
086c4093 +0x167:  mov    %eax,(%esp)
086c4096 +0x16a:  call   0860b9d2 <_ZN24StatisticsToObserveCrashD1Ev>  ; StatisticsToObserveCrash::~StatisticsToObserveCrash()
086c409b +0x16f:  jmp    086c40b8 <+0x18c>
086c409d +0x171:  mov    %edx,%ebx
086c409f +0x173:  mov    %eax,%esi
086c40a1 +0x175:  mov    0x8(%ebp),%eax
086c40a4 +0x178:  mov    %eax,(%esp)
086c40a7 +0x17b:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
086c40ac +0x180:  mov    %esi,%eax
086c40ae +0x182:  mov    %ebx,%edx
086c40b0 +0x184:  mov    %eax,(%esp)
086c40b3 +0x187:  call   08ae3750 <_Unwind_Resume>
086c40b8 +0x18c:  mov    0x8(%ebp),%eax
086c40bb +0x18f:  mov    %eax,(%esp)
086c40be +0x192:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
086c40c3 +0x197:  add    $0x10,%esp
086c40c6 +0x19a:  pop    %ebx
086c40c7 +0x19b:  pop    %esi
086c40c8 +0x19c:  pop    %ebp
086c40c9 +0x19d:  ret
```

## 反编译 C

```c
// GameWorld::~GameWorld @ 0x86c3f2c

/* GameWorld::~GameWorld() */

void __thiscall GameWorld::~GameWorld(GameWorld *this)

{
                    /* try { // try from 086c3f3a to 086c3f3e has its CatchHandler @ 086c3f41 */
  destroy(this);
                    /* try { // try from 086c3f66 to 086c3f6a has its CatchHandler @ 086c3f6d */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::~map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
          *)(this + 0x198));
                    /* try { // try from 086c3f92 to 086c3f96 has its CatchHandler @ 086c3f99 */
  std::
  map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  ::~map((map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
          *)(this + 0x14c));
                    /* try { // try from 086c3fbe to 086c3fc2 has its CatchHandler @ 086c3fc5 */
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::~map((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
          *)(this + 0x134));
                    /* try { // try from 086c3fea to 086c3fee has its CatchHandler @ 086c3ff1 */
  StatisticsNatType::~StatisticsNatType((StatisticsNatType *)(this + 0x11c));
                    /* try { // try from 086c4016 to 086c401a has its CatchHandler @ 086c401d */
  StatisticsPvP::~StatisticsPvP((StatisticsPvP *)(this + 0xec));
                    /* try { // try from 086c4042 to 086c4046 has its CatchHandler @ 086c4049 */
  StatisticsShusiaService::~StatisticsShusiaService((StatisticsShusiaService *)(this + 0xa4));
                    /* try { // try from 086c406e to 086c4072 has its CatchHandler @ 086c4075 */
  std::
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  ::~map((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
          *)(this + 0x8c));
                    /* try { // try from 086c4096 to 086c409a has its CatchHandler @ 086c409d */
  StatisticsToObserveCrash::~StatisticsToObserveCrash((StatisticsToObserveCrash *)(this + 0x28));
  Mutex::~Mutex((Mutex *)this);
  return;
}
```
