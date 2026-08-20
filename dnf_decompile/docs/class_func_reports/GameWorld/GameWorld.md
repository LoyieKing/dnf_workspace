# GameWorld

`_ZN9GameWorldC1Ev`

`GameWorld::GameWorld()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c3d4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c3d4a  _ZN9GameWorldC1Ev
#           GameWorld::GameWorld()
# range [0x086c3d4a, 0x086c3f2b]
086c3d4a +0x000:  push   %ebp
086c3d4b +0x001:  mov    %esp,%ebp
086c3d4d +0x003:  push   %esi
086c3d4e +0x004:  push   %ebx
086c3d4f +0x005:  sub    $0x20,%esp
086c3d52 +0x008:  mov    0x8(%ebp),%eax
086c3d55 +0x00b:  mov    %eax,(%esp)
086c3d58 +0x00e:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
086c3d5d +0x013:  mov    0x8(%ebp),%eax
086c3d60 +0x016:  add    $0x28,%eax
086c3d63 +0x019:  mov    %eax,(%esp)
086c3d66 +0x01c:  call   0860b934 <_ZN24StatisticsToObserveCrashC1Ev>  ; StatisticsToObserveCrash::StatisticsToObserveCrash()
086c3d6b +0x021:  mov    0x8(%ebp),%eax
086c3d6e +0x024:  add    $0x8c,%eax
086c3d73 +0x029:  mov    %eax,(%esp)
086c3d76 +0x02c:  call   086d3d52 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2583>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2583
086c3d7b +0x031:  mov    0x8(%ebp),%eax
086c3d7e +0x034:  add    $0xa4,%eax
086c3d83 +0x039:  mov    %eax,(%esp)
086c3d86 +0x03c:  call   0860c07a <_ZN23StatisticsShusiaServiceC1Ev>  ; StatisticsShusiaService::StatisticsShusiaService()
086c3d8b +0x041:  mov    0x8(%ebp),%eax
086c3d8e +0x044:  add    $0xec,%eax
086c3d93 +0x049:  mov    %eax,(%esp)
086c3d96 +0x04c:  call   0860c4f6 <_ZN13StatisticsPvPC1Ev>  ; StatisticsPvP::StatisticsPvP()
086c3d9b +0x051:  mov    0x8(%ebp),%eax
086c3d9e +0x054:  add    $0x11c,%eax
086c3da3 +0x059:  mov    %eax,(%esp)
086c3da6 +0x05c:  call   0860c704 <_ZN17StatisticsNatTypeC1Ev>  ; StatisticsNatType::StatisticsNatType()
086c3dab +0x061:  mov    0x8(%ebp),%eax
086c3dae +0x064:  add    $0x134,%eax
086c3db3 +0x069:  mov    %eax,(%esp)
086c3db6 +0x06c:  call   086d2e08 <_GLOBAL__I_MAX_VILLAGE_NUM+0x1639>  ; global constructors keyed to MAX_VILLAGE_NUM+0x1639
086c3dbb +0x071:  mov    0x8(%ebp),%eax
086c3dbe +0x074:  add    $0x14c,%eax
086c3dc3 +0x079:  mov    %eax,(%esp)
086c3dc6 +0x07c:  call   086d3dcc <_GLOBAL__I_MAX_VILLAGE_NUM+0x25fd>  ; global constructors keyed to MAX_VILLAGE_NUM+0x25fd
086c3dcb +0x081:  mov    0x8(%ebp),%eax
086c3dce +0x084:  add    $0x198,%eax
086c3dd3 +0x089:  mov    %eax,(%esp)
086c3dd6 +0x08c:  call   082afb14 <_GLOBAL__I__ZN4CLog5this_E+0xbf3b>  ; global constructors keyed to CLog::this_+0xbf3b
086c3ddb +0x091:  mov    0x8(%ebp),%eax
086c3dde +0x094:  movl   $0x0,0x1c(%eax)
086c3de5 +0x09b:  mov    0x8(%ebp),%eax
086c3de8 +0x09e:  add    $0x28,%eax
086c3deb +0x0a1:  mov    %eax,(%esp)
086c3dee +0x0a4:  call   0860ba6e <_ZN24StatisticsToObserveCrash5resetEv>  ; StatisticsToObserveCrash::reset()
086c3df3 +0x0a9:  movl   $0x0,-0xc(%ebp)
086c3dfa +0x0b0:  jmp    086c3e11 <+0xc7>
086c3dfc +0x0b2:  mov    -0xc(%ebp),%edx
086c3dff +0x0b5:  mov    0x8(%ebp),%eax
086c3e02 +0x0b8:  add    $0x58,%edx
086c3e05 +0x0bb:  movl   $0x0,0x4(%eax,%edx,4)
086c3e0d +0x0c3:  addl   $0x1,-0xc(%ebp)
086c3e11 +0x0c7:  cmpl   $0xa,-0xc(%ebp)
086c3e15 +0x0cb:  setle  %al
086c3e18 +0x0ce:  test   %al,%al
086c3e1a +0x0d0:  jne    086c3dfc <+0xb2>
086c3e1c +0x0d2:  mov    0x8(%ebp),%eax
086c3e1f +0x0d5:  movl   $0x0,0x190(%eax)
086c3e29 +0x0df:  mov    0x8(%ebp),%eax
086c3e2c +0x0e2:  mov    0x190(%eax),%edx
086c3e32 +0x0e8:  mov    0x8(%ebp),%eax
086c3e35 +0x0eb:  mov    %edx,0x194(%eax)
086c3e3b +0x0f1:  add    $0x20,%esp
086c3e3e +0x0f4:  pop    %ebx
086c3e3f +0x0f5:  pop    %esi
086c3e40 +0x0f6:  pop    %ebp
086c3e41 +0x0f7:  ret
086c3e42 +0x0f8:  mov    %edx,%ebx
086c3e44 +0x0fa:  mov    %eax,%esi
086c3e46 +0x0fc:  mov    0x8(%ebp),%eax
086c3e49 +0x0ff:  add    $0x198,%eax
086c3e4e +0x104:  mov    %eax,(%esp)
086c3e51 +0x107:  call   082aa74a <_GLOBAL__I__ZN4CLog5this_E+0x6b71>  ; global constructors keyed to CLog::this_+0x6b71
086c3e56 +0x10c:  mov    %esi,%eax
086c3e58 +0x10e:  mov    %ebx,%edx
086c3e5a +0x110:  jmp    086c3e5c <+0x112>
086c3e5c +0x112:  mov    %edx,%ebx
086c3e5e +0x114:  mov    %eax,%esi
086c3e60 +0x116:  mov    0x8(%ebp),%eax
086c3e63 +0x119:  add    $0x14c,%eax
086c3e68 +0x11e:  mov    %eax,(%esp)
086c3e6b +0x121:  call   086d2aa4 <_GLOBAL__I_MAX_VILLAGE_NUM+0x12d5>  ; global constructors keyed to MAX_VILLAGE_NUM+0x12d5
086c3e70 +0x126:  mov    %esi,%eax
086c3e72 +0x128:  mov    %ebx,%edx
086c3e74 +0x12a:  jmp    086c3e76 <+0x12c>
086c3e76 +0x12c:  mov    %edx,%ebx
086c3e78 +0x12e:  mov    %eax,%esi
086c3e7a +0x130:  mov    0x8(%ebp),%eax
086c3e7d +0x133:  add    $0x134,%eax
086c3e82 +0x138:  mov    %eax,(%esp)
086c3e85 +0x13b:  call   086d2138 <_GLOBAL__I_MAX_VILLAGE_NUM+0x969>  ; global constructors keyed to MAX_VILLAGE_NUM+0x969
086c3e8a +0x140:  mov    %esi,%eax
086c3e8c +0x142:  mov    %ebx,%edx
086c3e8e +0x144:  jmp    086c3e90 <+0x146>
086c3e90 +0x146:  mov    %edx,%ebx
086c3e92 +0x148:  mov    %eax,%esi
086c3e94 +0x14a:  mov    0x8(%ebp),%eax
086c3e97 +0x14d:  add    $0x11c,%eax
086c3e9c +0x152:  mov    %eax,(%esp)
086c3e9f +0x155:  call   0860c718 <_ZN17StatisticsNatTypeD1Ev>  ; StatisticsNatType::~StatisticsNatType()
086c3ea4 +0x15a:  mov    %esi,%eax
086c3ea6 +0x15c:  mov    %ebx,%edx
086c3ea8 +0x15e:  jmp    086c3eaa <+0x160>
086c3eaa +0x160:  mov    %edx,%ebx
086c3eac +0x162:  mov    %eax,%esi
086c3eae +0x164:  mov    0x8(%ebp),%eax
086c3eb1 +0x167:  add    $0xec,%eax
086c3eb6 +0x16c:  mov    %eax,(%esp)
086c3eb9 +0x16f:  call   0860c53c <_ZN13StatisticsPvPD1Ev>  ; StatisticsPvP::~StatisticsPvP()
086c3ebe +0x174:  mov    %esi,%eax
086c3ec0 +0x176:  mov    %ebx,%edx
086c3ec2 +0x178:  jmp    086c3ec4 <+0x17a>
086c3ec4 +0x17a:  mov    %edx,%ebx
086c3ec6 +0x17c:  mov    %eax,%esi
086c3ec8 +0x17e:  mov    0x8(%ebp),%eax
086c3ecb +0x181:  add    $0xa4,%eax
086c3ed0 +0x186:  mov    %eax,(%esp)
086c3ed3 +0x189:  call   0860c0e6 <_ZN23StatisticsShusiaServiceD1Ev>  ; StatisticsShusiaService::~StatisticsShusiaService()
086c3ed8 +0x18e:  mov    %esi,%eax
086c3eda +0x190:  mov    %ebx,%edx
086c3edc +0x192:  jmp    086c3ede <+0x194>
086c3ede +0x194:  mov    %edx,%ebx
086c3ee0 +0x196:  mov    %eax,%esi
086c3ee2 +0x198:  mov    0x8(%ebp),%eax
086c3ee5 +0x19b:  add    $0x8c,%eax
086c3eea +0x1a0:  mov    %eax,(%esp)
086c3eed +0x1a3:  call   086d2a90 <_GLOBAL__I_MAX_VILLAGE_NUM+0x12c1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x12c1
086c3ef2 +0x1a8:  mov    %esi,%eax
086c3ef4 +0x1aa:  mov    %ebx,%edx
086c3ef6 +0x1ac:  jmp    086c3ef8 <+0x1ae>
086c3ef8 +0x1ae:  mov    %edx,%ebx
086c3efa +0x1b0:  mov    %eax,%esi
086c3efc +0x1b2:  mov    0x8(%ebp),%eax
086c3eff +0x1b5:  add    $0x28,%eax
086c3f02 +0x1b8:  mov    %eax,(%esp)
086c3f05 +0x1bb:  call   0860b9d2 <_ZN24StatisticsToObserveCrashD1Ev>  ; StatisticsToObserveCrash::~StatisticsToObserveCrash()
086c3f0a +0x1c0:  mov    %esi,%eax
086c3f0c +0x1c2:  mov    %ebx,%edx
086c3f0e +0x1c4:  jmp    086c3f10 <+0x1c6>
086c3f10 +0x1c6:  mov    %edx,%ebx
086c3f12 +0x1c8:  mov    %eax,%esi
086c3f14 +0x1ca:  mov    0x8(%ebp),%eax
086c3f17 +0x1cd:  mov    %eax,(%esp)
086c3f1a +0x1d0:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
086c3f1f +0x1d5:  mov    %esi,%eax
086c3f21 +0x1d7:  mov    %ebx,%edx
086c3f23 +0x1d9:  mov    %eax,(%esp)
086c3f26 +0x1dc:  call   08ae3750 <_Unwind_Resume>
086c3f2b +0x1e1:  nop
```

## 反编译 C

```c
// GameWorld::GameWorld @ 0x86c3d4a

/* GameWorld::GameWorld() */

void __thiscall GameWorld::GameWorld(GameWorld *this)

{
  int local_10;
  
  Mutex::Mutex((Mutex *)this);
                    /* try { // try from 086c3d66 to 086c3d6a has its CatchHandler @ 086c3f10 */
  StatisticsToObserveCrash::StatisticsToObserveCrash((StatisticsToObserveCrash *)(this + 0x28));
                    /* try { // try from 086c3d76 to 086c3d7a has its CatchHandler @ 086c3ef8 */
  std::
  map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
  ::map((map<std::string,SimpleInfo,std::less<std::string>,std::allocator<std::pair<std::string_const,SimpleInfo>>>
         *)(this + 0x8c));
                    /* try { // try from 086c3d86 to 086c3d8a has its CatchHandler @ 086c3ede */
  StatisticsShusiaService::StatisticsShusiaService((StatisticsShusiaService *)(this + 0xa4));
                    /* try { // try from 086c3d96 to 086c3d9a has its CatchHandler @ 086c3ec4 */
  StatisticsPvP::StatisticsPvP((StatisticsPvP *)(this + 0xec));
                    /* try { // try from 086c3da6 to 086c3daa has its CatchHandler @ 086c3eaa */
  StatisticsNatType::StatisticsNatType((StatisticsNatType *)(this + 0x11c));
                    /* try { // try from 086c3db6 to 086c3dba has its CatchHandler @ 086c3e90 */
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::map((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
         *)(this + 0x134));
                    /* try { // try from 086c3dc6 to 086c3dca has its CatchHandler @ 086c3e76 */
  std::
  map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
  ::map((map<unsigned_int,unsigned_short,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_short>>>
         *)(this + 0x14c));
                    /* try { // try from 086c3dd6 to 086c3dda has its CatchHandler @ 086c3e5c */
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::map((map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
         *)(this + 0x198));
  *(undefined4 *)(this + 0x1c) = 0;
                    /* try { // try from 086c3dee to 086c3df2 has its CatchHandler @ 086c3e42 */
  StatisticsToObserveCrash::reset((StatisticsToObserveCrash *)(this + 0x28));
  for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x58) * 4 + 4) = 0;
  }
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = *(undefined4 *)(this + 400);
  return;
}
```
