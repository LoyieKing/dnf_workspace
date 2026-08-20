# ~PvP_Room

`_ZN8PvP_RoomD1Ev`

`PvP_Room::~PvP_Room()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d61a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d61a6  _ZN8PvP_RoomD1Ev
#           PvP_Room::~PvP_Room()
# range [0x085d61a6, 0x085d62ab]
085d61a6 +0x000:  push   %ebp
085d61a7 +0x001:  mov    %esp,%ebp
085d61a9 +0x003:  push   %esi
085d61aa +0x004:  push   %ebx
085d61ab +0x005:  sub    $0x10,%esp
085d61ae +0x008:  mov    0x8(%ebp),%eax
085d61b1 +0x00b:  mov    0x6e0(%eax),%ebx
085d61b7 +0x011:  test   %ebx,%ebx
085d61b9 +0x013:  je     085d6254 <+0xae>
085d61bf +0x019:  mov    %ebx,(%esp)
085d61c2 +0x01c:  call   085dfaf4 <_GLOBAL__I__Z15IsDeathMatchMapiRb+0x37b>  ; global constructors keyed to IsDeathMatchMap(int, bool&)+0x37b
085d61c7 +0x021:  mov    %ebx,(%esp)
085d61ca +0x024:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
085d61cf +0x029:  jmp    085d6254 <+0xae>
085d61d4 +0x02e:  mov    %edx,%ebx
085d61d6 +0x030:  mov    %eax,%esi
085d61d8 +0x032:  mov    0x8(%ebp),%eax
085d61db +0x035:  add    $0x5e8,%eax
085d61e0 +0x03a:  mov    %eax,(%esp)
085d61e3 +0x03d:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
085d61e8 +0x042:  mov    %esi,%eax
085d61ea +0x044:  mov    %ebx,%edx
085d61ec +0x046:  mov    %edx,%ebx
085d61ee +0x048:  mov    %eax,%esi
085d61f0 +0x04a:  mov    0x8(%ebp),%eax
085d61f3 +0x04d:  add    $0x5bc,%eax
085d61f8 +0x052:  mov    %eax,(%esp)
085d61fb +0x055:  call   085d5f92 <_ZN17PvpResultRecvFlagD1Ev>  ; PvpResultRecvFlag::~PvpResultRecvFlag()
085d6200 +0x05a:  mov    %esi,%eax
085d6202 +0x05c:  mov    %ebx,%edx
085d6204 +0x05e:  mov    %edx,%ebx
085d6206 +0x060:  mov    %eax,%esi
085d6208 +0x062:  mov    0x8(%ebp),%eax
085d620b +0x065:  add    $0x5b4,%eax
085d6210 +0x06a:  mov    %eax,(%esp)
085d6213 +0x06d:  call   085d5f92 <_ZN17PvpResultRecvFlagD1Ev>  ; PvpResultRecvFlag::~PvpResultRecvFlag()
085d6218 +0x072:  mov    %esi,%eax
085d621a +0x074:  mov    %ebx,%edx
085d621c +0x076:  mov    %edx,%ebx
085d621e +0x078:  mov    %eax,%esi
085d6220 +0x07a:  mov    0x8(%ebp),%eax
085d6223 +0x07d:  add    $0x268,%eax
085d6228 +0x082:  mov    %eax,(%esp)
085d622b +0x085:  call   085d4904 <_ZN12PvpUserTableD1Ev>  ; PvpUserTable::~PvpUserTable()
085d6230 +0x08a:  mov    %esi,%eax
085d6232 +0x08c:  mov    %ebx,%edx
085d6234 +0x08e:  mov    %edx,%ebx
085d6236 +0x090:  mov    %eax,%esi
085d6238 +0x092:  mov    0x8(%ebp),%eax
085d623b +0x095:  add    $0xc4,%eax
085d6240 +0x09a:  mov    %eax,(%esp)
085d6243 +0x09d:  call   085dda86 <_ZN16PvP_GuildWar_LogD1Ev>  ; PvP_GuildWar_Log::~PvP_GuildWar_Log()
085d6248 +0x0a2:  mov    %esi,%eax
085d624a +0x0a4:  mov    %ebx,%edx
085d624c +0x0a6:  mov    %eax,(%esp)
085d624f +0x0a9:  call   08ae3750 <_Unwind_Resume>
085d6254 +0x0ae:  mov    0x8(%ebp),%eax
085d6257 +0x0b1:  add    $0x5e8,%eax
085d625c +0x0b6:  mov    %eax,(%esp)
085d625f +0x0b9:  call   080cb42e <_GLOBAL__I__ZN10BingoEventC2Ev+0x27b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x27b
085d6264 +0x0be:  mov    0x8(%ebp),%eax
085d6267 +0x0c1:  add    $0x5bc,%eax
085d626c +0x0c6:  mov    %eax,(%esp)
085d626f +0x0c9:  call   085d5f92 <_ZN17PvpResultRecvFlagD1Ev>  ; PvpResultRecvFlag::~PvpResultRecvFlag()
085d6274 +0x0ce:  mov    0x8(%ebp),%eax
085d6277 +0x0d1:  add    $0x5b4,%eax
085d627c +0x0d6:  mov    %eax,(%esp)
085d627f +0x0d9:  call   085d5f92 <_ZN17PvpResultRecvFlagD1Ev>  ; PvpResultRecvFlag::~PvpResultRecvFlag()
085d6284 +0x0de:  mov    0x8(%ebp),%eax
085d6287 +0x0e1:  add    $0x268,%eax
085d628c +0x0e6:  mov    %eax,(%esp)
085d628f +0x0e9:  call   085d4904 <_ZN12PvpUserTableD1Ev>  ; PvpUserTable::~PvpUserTable()
085d6294 +0x0ee:  mov    0x8(%ebp),%eax
085d6297 +0x0f1:  add    $0xc4,%eax
085d629c +0x0f6:  mov    %eax,(%esp)
085d629f +0x0f9:  call   085dda86 <_ZN16PvP_GuildWar_LogD1Ev>  ; PvP_GuildWar_Log::~PvP_GuildWar_Log()
085d62a4 +0x0fe:  add    $0x10,%esp
085d62a7 +0x101:  pop    %ebx
085d62a8 +0x102:  pop    %esi
085d62a9 +0x103:  pop    %ebp
085d62aa +0x104:  ret
085d62ab +0x105:  nop
```

## 反编译 C

```c
// PvP_Room::~PvP_Room @ 0x85d61a6

/* PvP_Room::~PvP_Room() */

void __thiscall PvP_Room::~PvP_Room(PvP_Room *this)

{
  CMatchingSystem *this_00;
  
  this_00 = *(CMatchingSystem **)(this + 0x6e0);
  if (this_00 != (CMatchingSystem *)0x0) {
                    /* try { // try from 085d61c2 to 085d61c6 has its CatchHandler @ 085d61d4 */
    CMatchingSystem::~CMatchingSystem(this_00);
    operator_delete(this_00);
  }
  Mutex::~Mutex((Mutex *)(this + 0x5e8));
  PvpResultRecvFlag::~PvpResultRecvFlag((PvpResultRecvFlag *)(this + 0x5bc));
  PvpResultRecvFlag::~PvpResultRecvFlag((PvpResultRecvFlag *)(this + 0x5b4));
  PvpUserTable::~PvpUserTable((PvpUserTable *)(this + 0x268));
  PvP_GuildWar_Log::~PvP_GuildWar_Log((PvP_GuildWar_Log *)(this + 0xc4));
  return;
}
```
