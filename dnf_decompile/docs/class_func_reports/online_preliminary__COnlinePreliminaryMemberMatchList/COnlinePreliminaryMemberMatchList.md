# COnlinePreliminaryMemberMatchList

`_ZN18online_preliminary33COnlinePreliminaryMemberMatchListC1Ev`

`online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList()`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminaryMemberMatchList` | `0x08586398` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08586398  _ZN18online_preliminary33COnlinePreliminaryMemberMatchListC1Ev
#           online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList()
# range [0x08586398, 0x085863e5]
08586398 +0x00:  push   %ebp
08586399 +0x01:  mov    %esp,%ebp
0858639b +0x03:  push   %esi
0858639c +0x04:  push   %ebx
0858639d +0x05:  sub    $0x10,%esp
085863a0 +0x08:  mov    0x8(%ebp),%eax
085863a3 +0x0b:  mov    %eax,(%esp)
085863a6 +0x0e:  call   080c8cba <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x112>  ; global constructors keyed to BestClearTime::BestClearTime()+0x112
085863ab +0x13:  mov    0x8(%ebp),%eax
085863ae +0x16:  movl   $&_ZTVN18online_preliminary33COnlinePreliminaryMemberMatchListE+0x8,(%eax)
085863b4 +0x1c:  mov    0x8(%ebp),%eax
085863b7 +0x1f:  add    $0x8,%eax
085863ba +0x22:  mov    %eax,(%esp)
085863bd +0x25:  call   08586b40 <_GLOBAL__I__ZN18online_preliminary24COnlinePreliminaryMemberC2Ev+0x288>  ; global constructors keyed to online_preliminary::COnlinePreliminaryMember::COnlinePreliminaryMember()+0x288
085863c2 +0x2a:  jmp    085863df <+0x47>
085863c4 +0x2c:  mov    %edx,%ebx
085863c6 +0x2e:  mov    %eax,%esi
085863c8 +0x30:  mov    0x8(%ebp),%eax
085863cb +0x33:  mov    %eax,(%esp)
085863ce +0x36:  call   080c8be2 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x3a>  ; global constructors keyed to BestClearTime::BestClearTime()+0x3a
085863d3 +0x3b:  mov    %esi,%eax
085863d5 +0x3d:  mov    %ebx,%edx
085863d7 +0x3f:  mov    %eax,(%esp)
085863da +0x42:  call   08ae3750 <_Unwind_Resume>
085863df +0x47:  add    $0x10,%esp
085863e2 +0x4a:  pop    %ebx
085863e3 +0x4b:  pop    %esi
085863e4 +0x4c:  pop    %ebp
085863e5 +0x4d:  ret
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList @ 0x8586398

/* online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList() */

void __thiscall
online_preliminary::COnlinePreliminaryMemberMatchList::COnlinePreliminaryMemberMatchList
          (COnlinePreliminaryMemberMatchList *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08cab7c8;
                    /* try { // try from 085863bd to 085863c1 has its CatchHandler @ 085863c4 */
  std::
  map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
  ::map((map<online_preliminary::CharacterInServer,online_preliminary::PlayCountInfo,std::less<online_preliminary::CharacterInServer>,std::allocator<std::pair<online_preliminary::CharacterInServer_const,online_preliminary::PlayCountInfo>>>
         *)(this + 8));
  return;
}
```
