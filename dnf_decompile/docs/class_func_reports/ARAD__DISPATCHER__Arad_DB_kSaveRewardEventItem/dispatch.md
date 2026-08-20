# dispatch

`_ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6Stream`

`ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem` | `0x081858de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081858de  _ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6Stream
#           ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch(int, int, Stream*)
# range [0x081858de, 0x08185abd]
081858de +0x000:  push   %ebp
081858df +0x001:  mov    %esp,%ebp
081858e1 +0x003:  push   %esi
081858e2 +0x004:  push   %ebx
081858e3 +0x005:  sub    $0x30,%esp
081858e6 +0x008:  mov    0x14(%ebp),%eax
081858e9 +0x00b:  mov    %eax,(%esp)
081858ec +0x00e:  call   08186fd0 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x99a>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x99a
081858f1 +0x013:  mov    %eax,-0x14(%ebp)
081858f4 +0x016:  cmpl   $0x0,-0x14(%ebp)
081858f8 +0x01a:  jne    08185930 <+0x52>
081858fa +0x01c:  movl   $"SigRewardEventItem is null.",0x10(%esp)
08185902 +0x024:  movl   $0x7cc,0xc(%esp)
0818590a +0x02c:  movl   $&_ZZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08185912 +0x034:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
0818591a +0x03c:  movl   $0x1,(%esp)
08185921 +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08185926 +0x048:  mov    $0x0,%ebx
0818592b +0x04d:  jmp    08185ab4 <+0x1d6>
08185930 +0x052:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08185935 +0x057:  movl   $0x0,0x8(%esp)
0818593d +0x05f:  movl   $0x9,0x4(%esp)
08185945 +0x067:  mov    %eax,(%esp)
08185948 +0x06a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818594d +0x06f:  mov    %eax,-0x10(%ebp)
08185950 +0x072:  cmpl   $0x0,-0x10(%ebp)
08185954 +0x076:  jne    08185982 <+0xa4>
08185956 +0x078:  movl   $0x4,(%esp)
0818595d +0x07f:  call   08725800 <__cxa_allocate_exception>
08185962 +0x084:  mov    %eax,%edx
08185964 +0x086:  movl   $"handle null",(%edx)
0818596a +0x08c:  movl   $0x0,0x8(%esp)
08185972 +0x094:  movl   $&_ZTIPKc,0x4(%esp)
0818597a +0x09c:  mov    %eax,(%esp)
0818597d +0x09f:  call   08724c50 <__cxa_throw>
08185982 +0x0a4:  mov    -0x14(%ebp),%eax
08185985 +0x0a7:  mov    0xc(%eax),%esi
08185988 +0x0aa:  mov    -0x14(%ebp),%eax
0818598b +0x0ad:  mov    0x10(%eax),%ebx
0818598e +0x0b0:  mov    -0x14(%ebp),%eax
08185991 +0x0b3:  mov    0x8(%eax),%ecx
08185994 +0x0b6:  mov    -0x14(%ebp),%eax
08185997 +0x0b9:  mov    0x4(%eax),%edx
0818599a +0x0bc:  mov    -0x14(%ebp),%eax
0818599d +0x0bf:  mov    (%eax),%eax
0818599f +0x0c1:  mov    %esi,0x18(%esp)
081859a3 +0x0c5:  mov    %ebx,0x14(%esp)
081859a7 +0x0c9:  mov    %ecx,0x10(%esp)
081859ab +0x0cd:  mov    %edx,0xc(%esp)
081859af +0x0d1:  mov    %eax,0x8(%esp)
081859b3 +0x0d5:  movl   $" inSert into event_reward_item_arad values (%d, %u, %u, %u, from_unixtime(%u), now())",0x4(%esp)
081859bb +0x0dd:  mov    -0x10(%ebp),%eax
081859be +0x0e0:  mov    %eax,(%esp)
081859c1 +0x0e3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081859c6 +0x0e8:  xor    $0x1,%eax
081859c9 +0x0eb:  test   %al,%al
081859cb +0x0ed:  je     081859f9 <+0x11b>
081859cd +0x0ef:  movl   $0x4,(%esp)
081859d4 +0x0f6:  call   08725800 <__cxa_allocate_exception>
081859d9 +0x0fb:  mov    %eax,%edx
081859db +0x0fd:  movl   $"set_query",(%edx)
081859e1 +0x103:  movl   $0x0,0x8(%esp)
081859e9 +0x10b:  movl   $&_ZTIPKc,0x4(%esp)
081859f1 +0x113:  mov    %eax,(%esp)
081859f4 +0x116:  call   08724c50 <__cxa_throw>
081859f9 +0x11b:  movl   $0x1,0x4(%esp)
08185a01 +0x123:  mov    -0x10(%ebp),%eax
08185a04 +0x126:  mov    %eax,(%esp)
08185a07 +0x129:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08185a0c +0x12e:  xor    $0x1,%eax
08185a0f +0x131:  test   %al,%al
08185a11 +0x133:  je     08185aaf <+0x1d1>
08185a17 +0x139:  movl   $0x4,(%esp)
08185a1e +0x140:  call   08725800 <__cxa_allocate_exception>
08185a23 +0x145:  mov    %eax,%edx
08185a25 +0x147:  movl   $"exec",(%edx)
08185a2b +0x14d:  movl   $0x0,0x8(%esp)
08185a33 +0x155:  movl   $&_ZTIPKc,0x4(%esp)
08185a3b +0x15d:  mov    %eax,(%esp)
08185a3e +0x160:  call   08724c50 <__cxa_throw>
08185a43 +0x165:  cmp    $0x1,%edx
08185a46 +0x168:  je     08185a50 <+0x172>
08185a48 +0x16a:  mov    %eax,(%esp)
08185a4b +0x16d:  call   08ae3750 <_Unwind_Resume>
08185a50 +0x172:  mov    %eax,(%esp)
08185a53 +0x175:  call   08725ce0 <__cxa_begin_catch>
08185a58 +0x17a:  mov    %eax,-0xc(%ebp)
08185a5b +0x17d:  mov    -0xc(%ebp),%eax
08185a5e +0x180:  mov    %eax,0x14(%esp)
08185a62 +0x184:  movl   $"[SigRewardEventItem] DB_DSP Error,  (error:%s)",0x10(%esp)
08185a6a +0x18c:  movl   $0x7e1,0xc(%esp)
08185a72 +0x194:  movl   $&_ZZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItem8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08185a7a +0x19c:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08185a82 +0x1a4:  movl   $0x1,(%esp)
08185a89 +0x1ab:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08185a8e +0x1b0:  mov    $0x0,%ebx
08185a93 +0x1b5:  call   08725c30 <__cxa_end_catch>
08185a98 +0x1ba:  jmp    08185ab4 <+0x1d6>
08185a9a +0x1bc:  mov    %edx,%ebx
08185a9c +0x1be:  mov    %eax,%esi
08185a9e +0x1c0:  call   08725c30 <__cxa_end_catch>
08185aa3 +0x1c5:  mov    %esi,%eax
08185aa5 +0x1c7:  mov    %ebx,%edx
08185aa7 +0x1c9:  mov    %eax,(%esp)
08185aaa +0x1cc:  call   08ae3750 <_Unwind_Resume>
08185aaf +0x1d1:  mov    $0x1,%ebx
08185ab4 +0x1d6:  mov    %ebx,%eax
08185ab6 +0x1d8:  add    $0x30,%esp
08185ab9 +0x1db:  pop    %ebx
08185aba +0x1dc:  pop    %esi
08185abb +0x1dd:  pop    %ebp
08185abc +0x1de:  ret
08185abd +0x1df:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch @ 0x81858de

/* ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigSaveRewardEventItem *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigSaveRewardEventItem>(in_stack_00000010);
  if (pSVar2 == (SigSaveRewardEventItem *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kSaveRewardEventItem::dispatch(int, int, Stream*)"
               ,0x7cc,"SigRewardEventItem is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 08185948 to 08185a42 has its CatchHandler @ 08185a43 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             " inSert into event_reward_item_arad values (%d, %u, %u, %u, from_unixtime(%u), now())"
                             ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),
                             *(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0x10),
                             *(undefined4 *)(pSVar2 + 0xc));
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
