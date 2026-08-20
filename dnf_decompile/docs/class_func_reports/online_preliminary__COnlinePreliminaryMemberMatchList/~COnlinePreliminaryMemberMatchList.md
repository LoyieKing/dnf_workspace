# ~COnlinePreliminaryMemberMatchList

`_ZN18online_preliminary33COnlinePreliminaryMemberMatchListD1Ev`

`online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMemberMatchList` | `0x085863e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085863e6  _ZN18online_preliminary33COnlinePreliminaryMemberMatchListD1Ev
#           online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList()
# range [0x085863e6, 0x08586447]
085863e6 +0x00:  push   %ebp
085863e7 +0x01:  mov    %esp,%ebp
085863e9 +0x03:  push   %esi
085863ea +0x04:  push   %ebx
085863eb +0x05:  sub    $0x10,%esp
085863ee +0x08:  mov    0x8(%ebp),%eax
085863f1 +0x0b:  movl   $&_ZTVN18online_preliminary33COnlinePreliminaryMemberMatchListE+0x8,(%eax)
085863f7 +0x11:  mov    0x8(%ebp),%eax
085863fa +0x14:  add    $0x8,%eax
085863fd +0x17:  mov    %eax,(%esp)
08586400 +0x1a:  call   0858696e <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0xb6>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0xb6
08586405 +0x1f:  jmp    08586422 <+0x3c>
08586407 +0x21:  mov    %edx,%ebx
08586409 +0x23:  mov    %eax,%esi
0858640b +0x25:  mov    0x8(%ebp),%eax
0858640e +0x28:  mov    %eax,(%esp)
08586411 +0x2b:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
08586416 +0x30:  mov    %esi,%eax
08586418 +0x32:  mov    %ebx,%edx
0858641a +0x34:  mov    %eax,(%esp)
0858641d +0x37:  call   08ae3750 <_Unwind_Resume>
08586422 +0x3c:  mov    0x8(%ebp),%eax
08586425 +0x3f:  mov    %eax,(%esp)
08586428 +0x42:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
0858642d +0x47:  mov    $0x0,%eax
08586432 +0x4c:  test   %al,%al
08586434 +0x4e:  je     08586441 <+0x5b>
08586436 +0x50:  mov    0x8(%ebp),%eax
08586439 +0x53:  mov    %eax,(%esp)
0858643c +0x56:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08586441 +0x5b:  add    $0x10,%esp
08586444 +0x5e:  pop    %ebx
08586445 +0x5f:  pop    %esi
08586446 +0x60:  pop    %ebp
08586447 +0x61:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList @ 0x85863e6

/* WARNING: Removing unreachable block (ram,0x08586436) */
/* online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::~COnlinePreliminaryMemberMatchList
          (COnlinePreliminaryMemberMatchList *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cab7c8;
                    /* try { // try from 08586400 to 08586404 has its CatchHandler @ 08586407 */
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::~map((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
          *)(this + 8));
  charac_expand::CData::~CData((CData *)this);
  return;
}
```
