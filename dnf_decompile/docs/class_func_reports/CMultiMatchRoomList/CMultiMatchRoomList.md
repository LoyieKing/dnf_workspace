# CMultiMatchRoomList

`_ZN19CMultiMatchRoomListC1Ev`

`CMultiMatchRoomList::CMultiMatchRoomList()`

| 类 | 地址 |
|---|---|
| `CMultiMatchRoomList` | `0x08566efc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08566efc  _ZN19CMultiMatchRoomListC1Ev
#           CMultiMatchRoomList::CMultiMatchRoomList()
# range [0x08566efc, 0x0856703b]
08566efc +0x000:  push   %ebp
08566efd +0x001:  mov    %esp,%ebp
08566eff +0x003:  push   %esi
08566f00 +0x004:  push   %ebx
08566f01 +0x005:  sub    $0x70,%esp
08566f04 +0x008:  mov    0x8(%ebp),%eax
08566f07 +0x00b:  mov    %eax,(%esp)
08566f0a +0x00e:  call   08568fa2 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x96c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x96c
08566f0f +0x013:  mov    0x8(%ebp),%eax
08566f12 +0x016:  movl   $&_ZTV19CMultiMatchRoomList+0x8,(%eax)
08566f18 +0x01c:  mov    0x8(%ebp),%eax
08566f1b +0x01f:  add    $0x4,%eax
08566f1e +0x022:  mov    %eax,(%esp)
08566f21 +0x025:  call   085695a8 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xf72>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xf72
08566f26 +0x02a:  lea    -0x68(%ebp),%eax
08566f29 +0x02d:  mov    %eax,(%esp)
08566f2c +0x030:  call   0856904e <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa18>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa18
08566f31 +0x035:  movl   $0x0,-0xc(%ebp)
08566f38 +0x03c:  jmp    08566fd9 <+0xdd>
08566f3d +0x041:  mov    -0xc(%ebp),%eax
08566f40 +0x044:  add    $0x1,%eax
08566f43 +0x047:  mov    %eax,-0x10(%ebp)
08566f46 +0x04a:  lea    -0x2c(%ebp),%eax
08566f49 +0x04d:  lea    -0x68(%ebp),%edx
08566f4c +0x050:  mov    %edx,0x8(%esp)
08566f50 +0x054:  lea    -0x10(%ebp),%edx
08566f53 +0x057:  mov    %edx,0x4(%esp)
08566f57 +0x05b:  mov    %eax,(%esp)
08566f5a +0x05e:  call   0856969b <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1065>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1065
08566f5f +0x063:  sub    $0x4,%esp
08566f62 +0x066:  lea    -0x2c(%ebp),%eax
08566f65 +0x069:  mov    %eax,0x4(%esp)
08566f69 +0x06d:  lea    -0x48(%ebp),%eax
08566f6c +0x070:  mov    %eax,(%esp)
08566f6f +0x073:  call   08569702 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x10cc>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x10cc
08566f74 +0x078:  mov    0x8(%ebp),%eax
08566f77 +0x07b:  lea    0x4(%eax),%ecx
08566f7a +0x07e:  lea    -0x50(%ebp),%eax
08566f7d +0x081:  lea    -0x48(%ebp),%edx
08566f80 +0x084:  mov    %edx,0x8(%esp)
08566f84 +0x088:  mov    %ecx,0x4(%esp)
08566f88 +0x08c:  mov    %eax,(%esp)
08566f8b +0x08f:  call   0856973c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x1106>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x1106
08566f90 +0x094:  sub    $0x4,%esp
08566f93 +0x097:  lea    -0x48(%ebp),%eax
08566f96 +0x09a:  mov    %eax,(%esp)
08566f99 +0x09d:  call   0856908c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa56>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa56
08566f9e +0x0a2:  jmp    08566fca <+0xce>
08566fa0 +0x0a4:  mov    %edx,%ebx
08566fa2 +0x0a6:  mov    %eax,%esi
08566fa4 +0x0a8:  lea    -0x48(%ebp),%eax
08566fa7 +0x0ab:  mov    %eax,(%esp)
08566faa +0x0ae:  call   0856908c <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa56>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa56
08566faf +0x0b3:  mov    %esi,%eax
08566fb1 +0x0b5:  mov    %ebx,%edx
08566fb3 +0x0b7:  jmp    08566fb5 <+0xb9>
08566fb5 +0x0b9:  mov    %edx,%ebx
08566fb7 +0x0bb:  mov    %eax,%esi
08566fb9 +0x0bd:  lea    -0x2c(%ebp),%eax
08566fbc +0x0c0:  mov    %eax,(%esp)
08566fbf +0x0c3:  call   08569076 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa40>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa40
08566fc4 +0x0c8:  mov    %esi,%eax
08566fc6 +0x0ca:  mov    %ebx,%edx
08566fc8 +0x0cc:  jmp    08566ff1 <+0xf5>
08566fca +0x0ce:  lea    -0x2c(%ebp),%eax
08566fcd +0x0d1:  mov    %eax,(%esp)
08566fd0 +0x0d4:  call   08569076 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa40>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa40
08566fd5 +0x0d9:  addl   $0x1,-0xc(%ebp)
08566fd9 +0x0dd:  call   08562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>  ; fair_pvp::CFairMatch::GetPlayCountPerOneTeam()
08566fde +0x0e2:  movzbl %al,%eax
08566fe1 +0x0e5:  cmp    -0xc(%ebp),%eax
08566fe4 +0x0e8:  setg   %al
08566fe7 +0x0eb:  test   %al,%al
08566fe9 +0x0ed:  jne    08566f3d <+0x41>
08566fef +0x0f3:  jmp    08567006 <+0x10a>
08566ff1 +0x0f5:  mov    %edx,%ebx
08566ff3 +0x0f7:  mov    %eax,%esi
08566ff5 +0x0f9:  lea    -0x68(%ebp),%eax
08566ff8 +0x0fc:  mov    %eax,(%esp)
08566ffb +0x0ff:  call   08569062 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa2c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa2c
08567000 +0x104:  mov    %esi,%eax
08567002 +0x106:  mov    %ebx,%edx
08567004 +0x108:  jmp    08567013 <+0x117>
08567006 +0x10a:  lea    -0x68(%ebp),%eax
08567009 +0x10d:  mov    %eax,(%esp)
0856700c +0x110:  call   08569062 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0xa2c>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0xa2c
08567011 +0x115:  jmp    08567031 <+0x135>
08567013 +0x117:  mov    %edx,%ebx
08567015 +0x119:  mov    %eax,%esi
08567017 +0x11b:  mov    0x8(%ebp),%eax
0856701a +0x11e:  add    $0x4,%eax
0856701d +0x121:  mov    %eax,(%esp)
08567020 +0x124:  call   08569026 <_GLOBAL__I__ZN28PvPGlobalEnvironmentVariable25school_match_daily_point_E+0x9f0>  ; global constructors keyed to PvPGlobalEnvironmentVariable::school_match_daily_point_+0x9f0
08567025 +0x129:  mov    %esi,%eax
08567027 +0x12b:  mov    %ebx,%edx
08567029 +0x12d:  mov    %eax,(%esp)
0856702c +0x130:  call   08ae3750 <_Unwind_Resume>
08567031 +0x135:  lea    -0x8(%ebp),%esp
08567034 +0x138:  add    $0x0,%esp
08567037 +0x13b:  pop    %ebx
08567038 +0x13c:  pop    %esi
08567039 +0x13d:  pop    %ebp
0856703a +0x13e:  ret
0856703b +0x13f:  nop
```

## 反编译 C

```c
// CMultiMatchRoomList::CMultiMatchRoomList @ 0x8566efc

/* CMultiMatchRoomList::CMultiMatchRoomList() */

void __thiscall CMultiMatchRoomList::CMultiMatchRoomList(CMultiMatchRoomList *this)

{
  uint uVar1;
  CWaitingRoomList local_6c [24];
  pair local_54 [8];
  pair<int_const,CWaitingRoomList> local_4c [28];
  pair<int,CWaitingRoomList> local_30 [28];
  int local_14;
  int local_10;
  
  IRoomList::IRoomList((IRoomList *)this);
  *(undefined ***)this = &PTR_AddRoom_08ca3bc8;
  std::
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
  map((map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
       *)(this + 4));
                    /* try { // try from 08566f2c to 08566f30 has its CatchHandler @ 08567013 */
  CWaitingRoomList::CWaitingRoomList(local_6c);
  local_10 = 0;
  while( true ) {
    uVar1 = fair_pvp::CFairMatch::GetPlayCountPerOneTeam();
    if ((int)(uVar1 & 0xff) <= local_10) break;
    local_14 = local_10 + 1;
                    /* try { // try from 08566f5a to 08566f5e has its CatchHandler @ 08566ff1 */
    std::make_pair<int,CWaitingRoomList&>((int *)local_30,(CWaitingRoomList *)&local_14);
                    /* try { // try from 08566f6f to 08566f73 has its CatchHandler @ 08566fb5 */
    std::pair<int_const,CWaitingRoomList>::pair<int,CWaitingRoomList>(local_4c,local_30);
                    /* try { // try from 08566f8b to 08566f8f has its CatchHandler @ 08566fa0 */
    std::
    map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
    insert(local_54);
                    /* try { // try from 08566f99 to 08566f9d has its CatchHandler @ 08566fb5 */
    std::pair<int_const,CWaitingRoomList>::~pair(local_4c);
                    /* try { // try from 08566fd0 to 08566fdd has its CatchHandler @ 08566ff1 */
    std::pair<int,CWaitingRoomList>::~pair(local_30);
    local_10 = local_10 + 1;
  }
                    /* try { // try from 0856700c to 08567010 has its CatchHandler @ 08567013 */
  CWaitingRoomList::~CWaitingRoomList(local_6c);
  return;
}
```
