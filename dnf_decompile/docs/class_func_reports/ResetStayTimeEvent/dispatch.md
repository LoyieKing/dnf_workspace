# dispatch

`_ZN18ResetStayTimeEvent8dispatchEiiP6Stream`

`ResetStayTimeEvent::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ResetStayTimeEvent` | `0x0815b76a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815b76a  _ZN18ResetStayTimeEvent8dispatchEiiP6Stream
#           ResetStayTimeEvent::dispatch(int, int, Stream*)
# range [0x0815b76a, 0x0815b899]
0815b76a +0x000:  push   %ebp
0815b76b +0x001:  mov    %esp,%ebp
0815b76d +0x003:  push   %esi
0815b76e +0x004:  push   %ebx
0815b76f +0x005:  sub    $0x30,%esp
0815b772 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815b777 +0x00d:  movl   $0x0,0x8(%esp)
0815b77f +0x015:  movl   $0x9,0x4(%esp)
0815b787 +0x01d:  mov    %eax,(%esp)
0815b78a +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815b78f +0x025:  mov    %eax,-0x10(%ebp)
0815b792 +0x028:  cmpl   $0x0,-0x10(%ebp)
0815b796 +0x02c:  jne    0815b7c4 <+0x5a>
0815b798 +0x02e:  movl   $0x4,(%esp)
0815b79f +0x035:  call   08725800 <__cxa_allocate_exception>
0815b7a4 +0x03a:  mov    %eax,%edx
0815b7a6 +0x03c:  movl   $"handle null",(%edx)
0815b7ac +0x042:  movl   $0x0,0x8(%esp)
0815b7b4 +0x04a:  movl   $&_ZTIPKc,0x4(%esp)
0815b7bc +0x052:  mov    %eax,(%esp)
0815b7bf +0x055:  call   08724c50 <__cxa_throw>
0815b7c4 +0x05a:  movl   $"upDate event_stay_time_charac set reward_flag = 0",0x4(%esp)
0815b7cc +0x062:  mov    -0x10(%ebp),%eax
0815b7cf +0x065:  mov    %eax,(%esp)
0815b7d2 +0x068:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815b7d7 +0x06d:  movl   $0x1,0x4(%esp)
0815b7df +0x075:  mov    -0x10(%ebp),%eax
0815b7e2 +0x078:  mov    %eax,(%esp)
0815b7e5 +0x07b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815b7ea +0x080:  xor    $0x1,%eax
0815b7ed +0x083:  test   %al,%al
0815b7ef +0x085:  je     0815b81d <+0xb3>
0815b7f1 +0x087:  movl   $0x4,(%esp)
0815b7f8 +0x08e:  call   08725800 <__cxa_allocate_exception>
0815b7fd +0x093:  mov    %eax,%edx
0815b7ff +0x095:  movl   $"exec",(%edx)
0815b805 +0x09b:  movl   $0x0,0x8(%esp)
0815b80d +0x0a3:  movl   $&_ZTIPKc,0x4(%esp)
0815b815 +0x0ab:  mov    %eax,(%esp)
0815b818 +0x0ae:  call   08724c50 <__cxa_throw>
0815b81d +0x0b3:  mov    $0x1,%ebx
0815b822 +0x0b8:  jmp    0815b890 <+0x126>
0815b824 +0x0ba:  cmp    $0x1,%edx
0815b827 +0x0bd:  je     0815b831 <+0xc7>
0815b829 +0x0bf:  mov    %eax,(%esp)
0815b82c +0x0c2:  call   08ae3750 <_Unwind_Resume>
0815b831 +0x0c7:  mov    %eax,(%esp)
0815b834 +0x0ca:  call   08725ce0 <__cxa_begin_catch>
0815b839 +0x0cf:  mov    %eax,-0xc(%ebp)
0815b83c +0x0d2:  mov    -0xc(%ebp),%eax
0815b83f +0x0d5:  mov    %eax,0x14(%esp)
0815b843 +0x0d9:  movl   $"[Taiwan, Event] reset event_stay_time_charac. (error:%s)",0x10(%esp)
0815b84b +0x0e1:  movl   $0x1ac,0xc(%esp)
0815b853 +0x0e9:  movl   $&_ZZN18ResetStayTimeEvent8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815b85b +0x0f1:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815b863 +0x0f9:  movl   $0x1,(%esp)
0815b86a +0x100:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815b86f +0x105:  mov    $0x0,%ebx
0815b874 +0x10a:  call   08725c30 <__cxa_end_catch>
0815b879 +0x10f:  jmp    0815b890 <+0x126>
0815b87b +0x111:  mov    %edx,%ebx
0815b87d +0x113:  mov    %eax,%esi
0815b87f +0x115:  call   08725c30 <__cxa_end_catch>
0815b884 +0x11a:  mov    %esi,%eax
0815b886 +0x11c:  mov    %ebx,%edx
0815b888 +0x11e:  mov    %eax,(%esp)
0815b88b +0x121:  call   08ae3750 <_Unwind_Resume>
0815b890 +0x126:  mov    %ebx,%eax
0815b892 +0x128:  add    $0x30,%esp
0815b895 +0x12b:  pop    %ebx
0815b896 +0x12c:  pop    %esi
0815b897 +0x12d:  pop    %ebp
0815b898 +0x12e:  ret
0815b899 +0x12f:  nop
```

## 反编译 C

```c
// ResetStayTimeEvent::dispatch @ 0x815b76a

/* ResetStayTimeEvent::dispatch(int, int, Stream*) */

undefined4 ResetStayTimeEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  undefined4 *puVar2;
  
                    /* try { // try from 0815b78a to 0815b81c has its CatchHandler @ 0815b824 */
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (this == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  MySQL::set_query(this,"upDate event_stay_time_charac set reward_flag = 0");
  cVar1 = MySQL::exec(this,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = &DAT_08b77277;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  return 1;
}
```
