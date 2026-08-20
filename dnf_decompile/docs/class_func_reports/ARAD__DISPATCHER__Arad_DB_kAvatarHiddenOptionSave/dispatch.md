# dispatch

`_ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6Stream`

`ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave` | `0x081860f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081860f4  _ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6Stream
#           ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch(int, int, Stream*)
# range [0x081860f4, 0x081862cf]
081860f4 +0x000:  push   %ebp
081860f5 +0x001:  mov    %esp,%ebp
081860f7 +0x003:  push   %esi
081860f8 +0x004:  push   %ebx
081860f9 +0x005:  sub    $0x30,%esp
081860fc +0x008:  mov    0x14(%ebp),%eax
081860ff +0x00b:  mov    %eax,(%esp)
08186102 +0x00e:  call   08187078 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0xa42>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0xa42
08186107 +0x013:  mov    %eax,-0x14(%ebp)
0818610a +0x016:  cmpl   $0x0,-0x14(%ebp)
0818610e +0x01a:  jne    08186146 <+0x52>
08186110 +0x01c:  movl   $"SigAradAvatarHiddenOptionSave is null.",0x10(%esp)
08186118 +0x024:  movl   $0x854,0xc(%esp)
08186120 +0x02c:  movl   $&_ZZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08186128 +0x034:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08186130 +0x03c:  movl   $0x1,(%esp)
08186137 +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818613c +0x048:  mov    $0x0,%ebx
08186141 +0x04d:  jmp    081862c7 <+0x1d3>
08186146 +0x052:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818614b +0x057:  movl   $0x0,0x8(%esp)
08186153 +0x05f:  movl   $0x3,0x4(%esp)
0818615b +0x067:  mov    %eax,(%esp)
0818615e +0x06a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08186163 +0x06f:  mov    %eax,-0x10(%ebp)
08186166 +0x072:  cmpl   $0x0,-0x10(%ebp)
0818616a +0x076:  jne    08186198 <+0xa4>
0818616c +0x078:  movl   $0x4,(%esp)
08186173 +0x07f:  call   08725800 <__cxa_allocate_exception>
08186178 +0x084:  mov    %eax,%edx
0818617a +0x086:  movl   $"handle null",(%edx)
08186180 +0x08c:  movl   $0x0,0x8(%esp)
08186188 +0x094:  movl   $&_ZTIPKc,0x4(%esp)
08186190 +0x09c:  mov    %eax,(%esp)
08186193 +0x09f:  call   08724c50 <__cxa_throw>
08186198 +0x0a4:  mov    -0x14(%ebp),%eax
0818619b +0x0a7:  mov    0x8(%eax),%ebx
0818619e +0x0aa:  mov    -0x14(%ebp),%eax
081861a1 +0x0ad:  movzwl 0xc(%eax),%eax
081861a5 +0x0b1:  movswl %ax,%ecx
081861a8 +0x0b4:  mov    -0x14(%ebp),%eax
081861ab +0x0b7:  mov    0x4(%eax),%edx
081861ae +0x0ba:  mov    -0x14(%ebp),%eax
081861b1 +0x0bd:  movzwl 0xe(%eax),%eax
081861b5 +0x0c1:  cwtl
081861b6 +0x0c2:  mov    %ebx,0x14(%esp)
081861ba +0x0c6:  mov    %ecx,0x10(%esp)
081861be +0x0ca:  mov    %edx,0xc(%esp)
081861c2 +0x0ce:  mov    %eax,0x8(%esp)
081861c6 +0x0d2:  movl   $"upDate user_items set hidden_option=%d where charac_no=%d and slot=%d and it_id=%d",0x4(%esp)
081861ce +0x0da:  mov    -0x10(%ebp),%eax
081861d1 +0x0dd:  mov    %eax,(%esp)
081861d4 +0x0e0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081861d9 +0x0e5:  xor    $0x1,%eax
081861dc +0x0e8:  test   %al,%al
081861de +0x0ea:  je     0818620c <+0x118>
081861e0 +0x0ec:  movl   $0x4,(%esp)
081861e7 +0x0f3:  call   08725800 <__cxa_allocate_exception>
081861ec +0x0f8:  mov    %eax,%edx
081861ee +0x0fa:  movl   $"set_query",(%edx)
081861f4 +0x100:  movl   $0x0,0x8(%esp)
081861fc +0x108:  movl   $&_ZTIPKc,0x4(%esp)
08186204 +0x110:  mov    %eax,(%esp)
08186207 +0x113:  call   08724c50 <__cxa_throw>
0818620c +0x118:  movl   $0x1,0x4(%esp)
08186214 +0x120:  mov    -0x10(%ebp),%eax
08186217 +0x123:  mov    %eax,(%esp)
0818621a +0x126:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0818621f +0x12b:  xor    $0x1,%eax
08186222 +0x12e:  test   %al,%al
08186224 +0x130:  je     081862c2 <+0x1ce>
0818622a +0x136:  movl   $0x4,(%esp)
08186231 +0x13d:  call   08725800 <__cxa_allocate_exception>
08186236 +0x142:  mov    %eax,%edx
08186238 +0x144:  movl   $"exec",(%edx)
0818623e +0x14a:  movl   $0x0,0x8(%esp)
08186246 +0x152:  movl   $&_ZTIPKc,0x4(%esp)
0818624e +0x15a:  mov    %eax,(%esp)
08186251 +0x15d:  call   08724c50 <__cxa_throw>
08186256 +0x162:  cmp    $0x1,%edx
08186259 +0x165:  je     08186263 <+0x16f>
0818625b +0x167:  mov    %eax,(%esp)
0818625e +0x16a:  call   08ae3750 <_Unwind_Resume>
08186263 +0x16f:  mov    %eax,(%esp)
08186266 +0x172:  call   08725ce0 <__cxa_begin_catch>
0818626b +0x177:  mov    %eax,-0xc(%ebp)
0818626e +0x17a:  mov    -0xc(%ebp),%eax
08186271 +0x17d:  mov    %eax,0x14(%esp)
08186275 +0x181:  movl   $"[SigRewardEventItem] DB_DSP Error,  (error:%s)",0x10(%esp)
0818627d +0x189:  movl   $0x868,0xc(%esp)
08186285 +0x191:  movl   $&_ZZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSave8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0818628d +0x199:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08186295 +0x1a1:  movl   $0x1,(%esp)
0818629c +0x1a8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081862a1 +0x1ad:  mov    $0x0,%ebx
081862a6 +0x1b2:  call   08725c30 <__cxa_end_catch>
081862ab +0x1b7:  jmp    081862c7 <+0x1d3>
081862ad +0x1b9:  mov    %edx,%ebx
081862af +0x1bb:  mov    %eax,%esi
081862b1 +0x1bd:  call   08725c30 <__cxa_end_catch>
081862b6 +0x1c2:  mov    %esi,%eax
081862b8 +0x1c4:  mov    %ebx,%edx
081862ba +0x1c6:  mov    %eax,(%esp)
081862bd +0x1c9:  call   08ae3750 <_Unwind_Resume>
081862c2 +0x1ce:  mov    $0x1,%ebx
081862c7 +0x1d3:  mov    %ebx,%eax
081862c9 +0x1d5:  add    $0x30,%esp
081862cc +0x1d8:  pop    %ebx
081862cd +0x1d9:  pop    %esi
081862ce +0x1da:  pop    %ebp
081862cf +0x1db:  ret
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch @ 0x81860f4

/* ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigAradAvatarHiddenOptionSave *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigAradAvatarHiddenOptionSave>(in_stack_00000010);
  if (pSVar2 == (SigAradAvatarHiddenOptionSave *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kAvatarHiddenOptionSave::dispatch(int, int, Stream*)"
               ,0x854,"SigAradAvatarHiddenOptionSave is null.");
    uVar4 = 0;
  }
  else {
                    /* try { // try from 0818615e to 08186255 has its CatchHandler @ 08186256 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             "upDate user_items set hidden_option=%d where charac_no=%d and slot=%d and it_id=%d"
                             ,(int)*(short *)(pSVar2 + 0xe),*(undefined4 *)(pSVar2 + 4),
                             (int)*(short *)(pSVar2 + 0xc),*(undefined4 *)(pSVar2 + 8));
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
