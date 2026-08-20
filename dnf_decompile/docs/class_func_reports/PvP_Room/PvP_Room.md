# PvP_Room

`_ZN8PvP_RoomC1Ev`

`PvP_Room::PvP_Room()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6012` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6012  _ZN8PvP_RoomC1Ev
#           PvP_Room::PvP_Room()
# range [0x085d6012, 0x085d61a1]
085d6012 +0x000:  push   %ebp
085d6013 +0x001:  mov    %esp,%ebp
085d6015 +0x003:  push   %esi
085d6016 +0x004:  push   %ebx
085d6017 +0x005:  sub    $0x20,%esp
085d601a +0x008:  mov    0x8(%ebp),%eax
085d601d +0x00b:  add    $0xc4,%eax
085d6022 +0x010:  mov    %eax,(%esp)
085d6025 +0x013:  call   085dda46 <_ZN16PvP_GuildWar_LogC1Ev>  ; PvP_GuildWar_Log::PvP_GuildWar_Log()
085d602a +0x018:  mov    0x8(%ebp),%eax
085d602d +0x01b:  add    $0x12c,%eax
085d6032 +0x020:  mov    %eax,(%esp)
085d6035 +0x023:  call   085dff3a <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x7c1>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x7c1
085d603a +0x028:  mov    0x8(%ebp),%eax
085d603d +0x02b:  add    $0x268,%eax
085d6042 +0x030:  mov    %eax,(%esp)
085d6045 +0x033:  call   085d48f0 <_ZN12PvpUserTableC1Ev>  ; PvpUserTable::PvpUserTable()
085d604a +0x038:  mov    0x8(%ebp),%eax
085d604d +0x03b:  add    $0x5b4,%eax
085d6052 +0x040:  mov    %eax,(%esp)
085d6055 +0x043:  call   085d5f7e <_ZN17PvpResultRecvFlagC1Ev>  ; PvpResultRecvFlag::PvpResultRecvFlag()
085d605a +0x048:  mov    0x8(%ebp),%eax
085d605d +0x04b:  add    $0x5bc,%eax
085d6062 +0x050:  mov    %eax,(%esp)
085d6065 +0x053:  call   085d5f7e <_ZN17PvpResultRecvFlagC1Ev>  ; PvpResultRecvFlag::PvpResultRecvFlag()
085d606a +0x058:  mov    0x8(%ebp),%eax
085d606d +0x05b:  add    $0x5e8,%eax
085d6072 +0x060:  mov    %eax,(%esp)
085d6075 +0x063:  call   080cb412 <_GLOBAL__I__ZN10BingoEventC2Ev+0x25f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x25f
085d607a +0x068:  movl   $0x0,-0x10(%ebp)
085d6081 +0x06f:  mov    0x8(%ebp),%eax
085d6084 +0x072:  lea    0x268(%eax),%ecx
085d608a +0x078:  mov    0x8(%ebp),%eax
085d608d +0x07b:  lea    0x22c(%eax),%edx
085d6093 +0x081:  lea    -0x10(%ebp),%eax
085d6096 +0x084:  mov    %eax,0x8(%esp)
085d609a +0x088:  mov    %ecx,0x4(%esp)
085d609e +0x08c:  mov    %edx,(%esp)
085d60a1 +0x08f:  call   080e05bd <_GLOBAL__I__ZN10CaptchaGenC2Ev+0xdd9>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0xdd9
085d60a6 +0x094:  movl   $0x0,-0xc(%ebp)
085d60ad +0x09b:  jmp    085d60c3 <+0xb1>
085d60af +0x09d:  mov    -0xc(%ebp),%edx
085d60b2 +0x0a0:  mov    0x8(%ebp),%eax
085d60b5 +0x0a3:  add    $0xc,%edx
085d60b8 +0x0a6:  movl   $0x0,(%eax,%edx,4)
085d60bf +0x0ad:  addl   $0x1,-0xc(%ebp)
085d60c3 +0x0b1:  cmpl   $0x7,-0xc(%ebp)
085d60c7 +0x0b5:  setle  %al
085d60ca +0x0b8:  test   %al,%al
085d60cc +0x0ba:  jne    085d60af <+0x9d>
085d60ce +0x0bc:  movl   $0x18,(%esp)
085d60d5 +0x0c3:  call   08724450 <_Znwj>  ; operator new(unsigned int)
085d60da +0x0c8:  mov    %eax,%ebx
085d60dc +0x0ca:  mov    %ebx,%eax
085d60de +0x0cc:  mov    %eax,(%esp)
085d60e1 +0x0cf:  call   085dfac6 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x34d>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x34d
085d60e6 +0x0d4:  mov    %ebx,%edx
085d60e8 +0x0d6:  mov    0x8(%ebp),%eax
085d60eb +0x0d9:  mov    %edx,0x6e0(%eax)
085d60f1 +0x0df:  mov    0x8(%ebp),%eax
085d60f4 +0x0e2:  mov    0x6e0(%eax),%eax
085d60fa +0x0e8:  movl   $0x0,0x4(%esp)
085d6102 +0x0f0:  mov    %eax,(%esp)
085d6105 +0x0f3:  call   085dfba0 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x427>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x427
085d610a +0x0f8:  mov    0x8(%ebp),%edx
085d610d +0x0fb:  mov    %eax,0x6e4(%edx)
085d6113 +0x101:  mov    0x8(%ebp),%eax
085d6116 +0x104:  movb   $0x0,0x61c(%eax)
085d611d +0x10b:  add    $0x20,%esp
085d6120 +0x10e:  pop    %ebx
085d6121 +0x10f:  pop    %esi
085d6122 +0x110:  pop    %ebp
085d6123 +0x111:  ret
085d6124 +0x112:  mov    %edx,%ebx
085d6126 +0x114:  mov    %eax,%esi
085d6128 +0x116:  mov    0x8(%ebp),%eax
085d612b +0x119:  add    $0x5e8,%eax
085d6130 +0x11e:  mov    %eax,(%esp)
085d6133 +0x121:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
085d6138 +0x126:  mov    %esi,%eax
085d613a +0x128:  mov    %ebx,%edx
085d613c +0x12a:  mov    %edx,%ebx
085d613e +0x12c:  mov    %eax,%esi
085d6140 +0x12e:  mov    0x8(%ebp),%eax
085d6143 +0x131:  add    $0x5bc,%eax
085d6148 +0x136:  mov    %eax,(%esp)
085d614b +0x139:  call   085d5f92 <_ZN17PvpResultRecvFlagD1Ev>  ; PvpResultRecvFlag::~PvpResultRecvFlag()
085d6150 +0x13e:  mov    %esi,%eax
085d6152 +0x140:  mov    %ebx,%edx
085d6154 +0x142:  mov    %edx,%ebx
085d6156 +0x144:  mov    %eax,%esi
085d6158 +0x146:  mov    0x8(%ebp),%eax
085d615b +0x149:  add    $0x5b4,%eax
085d6160 +0x14e:  mov    %eax,(%esp)
085d6163 +0x151:  call   085d5f92 <_ZN17PvpResultRecvFlagD1Ev>  ; PvpResultRecvFlag::~PvpResultRecvFlag()
085d6168 +0x156:  mov    %esi,%eax
085d616a +0x158:  mov    %ebx,%edx
085d616c +0x15a:  mov    %edx,%ebx
085d616e +0x15c:  mov    %eax,%esi
085d6170 +0x15e:  mov    0x8(%ebp),%eax
085d6173 +0x161:  add    $0x268,%eax
085d6178 +0x166:  mov    %eax,(%esp)
085d617b +0x169:  call   085d4904 <_ZN12PvpUserTableD1Ev>  ; PvpUserTable::~PvpUserTable()
085d6180 +0x16e:  mov    %esi,%eax
085d6182 +0x170:  mov    %ebx,%edx
085d6184 +0x172:  jmp    085d6186 <+0x174>
085d6186 +0x174:  mov    %edx,%ebx
085d6188 +0x176:  mov    %eax,%esi
085d618a +0x178:  mov    0x8(%ebp),%eax
085d618d +0x17b:  add    $0xc4,%eax
085d6192 +0x180:  mov    %eax,(%esp)
085d6195 +0x183:  call   085dda86 <_ZN16PvP_GuildWar_LogD1Ev>  ; PvP_GuildWar_Log::~PvP_GuildWar_Log()
085d619a +0x188:  mov    %esi,%eax
085d619c +0x18a:  mov    %ebx,%edx
085d619e +0x18c:  mov    %eax,(%esp)
085d61a1 +0x18f:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// PvP_Room::PvP_Room @ 0x85d6012

/* PvP_Room::PvP_Room() */

void __thiscall PvP_Room::PvP_Room(PvP_Room *this)

{
  CMatchingSystem *this_00;
  undefined4 uVar1;
  int local_14;
  int local_10;
  
  PvP_GuildWar_Log::PvP_GuildWar_Log((PvP_GuildWar_Log *)(this + 0xc4));
                    /* try { // try from 085d6035 to 085d6039 has its CatchHandler @ 085d6186 */
  cElection<int,8,8>::cElection((cElection<int,8,8> *)(this + 300));
  PvpUserTable::PvpUserTable((PvpUserTable *)(this + 0x268));
  PvpResultRecvFlag::PvpResultRecvFlag((PvpResultRecvFlag *)(this + 0x5b4));
  PvpResultRecvFlag::PvpResultRecvFlag((PvpResultRecvFlag *)(this + 0x5bc));
  Mutex::Mutex((Mutex *)(this + 0x5e8));
  local_14 = 0;
                    /* try { // try from 085d60a1 to 085d6109 has its CatchHandler @ 085d6124 */
  std::fill<int*,int>((int *)(this + 0x22c),(int *)(this + 0x268),&local_14);
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0xc) * 4) = 0;
  }
  this_00 = operator_new(0x18);
  CMatchingSystem::CMatchingSystem(this_00);
  *(CMatchingSystem **)(this + 0x6e0) = this_00;
  uVar1 = CMatchingSystem::GetMatchingSystem(*(CMatchingSystem **)(this + 0x6e0),0);
  *(undefined4 *)(this + 0x6e4) = uVar1;
  this[0x61c] = (PvP_Room)0x0;
  return;
}
```
