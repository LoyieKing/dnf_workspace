# dispatch

`_ZN16DBUpdateExitTime8dispatchEiiP6Stream`

`DBUpdateExitTime::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DBUpdateExitTime` | `0x0815b97c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815b97c  _ZN16DBUpdateExitTime8dispatchEiiP6Stream
#           DBUpdateExitTime::dispatch(int, int, Stream*)
# range [0x0815b97c, 0x0815ba93]
0815b97c +0x000:  push   %ebp
0815b97d +0x001:  mov    %esp,%ebp
0815b97f +0x003:  push   %esi
0815b980 +0x004:  push   %ebx
0815b981 +0x005:  sub    $0x30,%esp
0815b984 +0x008:  mov    0x14(%ebp),%eax
0815b987 +0x00b:  mov    %eax,(%esp)
0815b98a +0x00e:  call   0815eaa2 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xd16>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xd16
0815b98f +0x013:  mov    %eax,-0x10(%ebp)
0815b992 +0x016:  cmpl   $0x0,-0x10(%ebp)
0815b996 +0x01a:  jne    0815b9c4 <+0x48>
0815b998 +0x01c:  movl   $0x4,(%esp)
0815b99f +0x023:  call   08725800 <__cxa_allocate_exception>
0815b9a4 +0x028:  mov    %eax,%edx
0815b9a6 +0x02a:  movl   $"handle null",(%edx)
0815b9ac +0x030:  movl   $0x0,0x8(%esp)
0815b9b4 +0x038:  movl   $&_ZTIPKc,0x4(%esp)
0815b9bc +0x040:  mov    %eax,(%esp)
0815b9bf +0x043:  call   08724c50 <__cxa_throw>
0815b9c4 +0x048:  mov    -0x10(%ebp),%eax
0815b9c7 +0x04b:  mov    0x4(%eax),%ecx
0815b9ca +0x04e:  mov    -0x10(%ebp),%eax
0815b9cd +0x051:  mov    (%eax),%edx
0815b9cf +0x053:  mov    &_ZN10GlobalData12s_psimpleSSOE,%eax
0815b9d4 +0x058:  mov    %ecx,0x8(%esp)
0815b9d8 +0x05c:  mov    %edx,0x4(%esp)
0815b9dc +0x060:  mov    %eax,(%esp)
0815b9df +0x063:  call   08602a4a <_ZN8WongWork10CSimpleSSO19updateSSOExpireTimeEjj>  ; WongWork::CSimpleSSO::updateSSOExpireTime(unsigned int, unsigned int)
0815b9e4 +0x068:  xor    $0x1,%eax
0815b9e7 +0x06b:  test   %al,%al
0815b9e9 +0x06d:  je     0815ba17 <+0x9b>
0815b9eb +0x06f:  movl   $0x4,(%esp)
0815b9f2 +0x076:  call   08725800 <__cxa_allocate_exception>
0815b9f7 +0x07b:  mov    %eax,%edx
0815b9f9 +0x07d:  movl   $"exec",(%edx)
0815b9ff +0x083:  movl   $0x0,0x8(%esp)
0815ba07 +0x08b:  movl   $&_ZTIPKc,0x4(%esp)
0815ba0f +0x093:  mov    %eax,(%esp)
0815ba12 +0x096:  call   08724c50 <__cxa_throw>
0815ba17 +0x09b:  mov    $0x1,%ebx
0815ba1c +0x0a0:  jmp    0815ba8a <+0x10e>
0815ba1e +0x0a2:  cmp    $0x1,%edx
0815ba21 +0x0a5:  je     0815ba2b <+0xaf>
0815ba23 +0x0a7:  mov    %eax,(%esp)
0815ba26 +0x0aa:  call   08ae3750 <_Unwind_Resume>
0815ba2b +0x0af:  mov    %eax,(%esp)
0815ba2e +0x0b2:  call   08725ce0 <__cxa_begin_catch>
0815ba33 +0x0b7:  mov    %eax,-0xc(%ebp)
0815ba36 +0x0ba:  mov    -0xc(%ebp),%eax
0815ba39 +0x0bd:  mov    %eax,0x14(%esp)
0815ba3d +0x0c1:  movl   $"[Taiwan, Auth] update member_login last_play_time. (error:%s)",0x10(%esp)
0815ba45 +0x0c9:  movl   $0x1d4,0xc(%esp)
0815ba4d +0x0d1:  movl   $&_ZZN16DBUpdateExitTime8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815ba55 +0x0d9:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815ba5d +0x0e1:  movl   $0x1,(%esp)
0815ba64 +0x0e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815ba69 +0x0ed:  mov    $0x0,%ebx
0815ba6e +0x0f2:  call   08725c30 <__cxa_end_catch>
0815ba73 +0x0f7:  jmp    0815ba8a <+0x10e>
0815ba75 +0x0f9:  mov    %edx,%ebx
0815ba77 +0x0fb:  mov    %eax,%esi
0815ba79 +0x0fd:  call   08725c30 <__cxa_end_catch>
0815ba7e +0x102:  mov    %esi,%eax
0815ba80 +0x104:  mov    %ebx,%edx
0815ba82 +0x106:  mov    %eax,(%esp)
0815ba85 +0x109:  call   08ae3750 <_Unwind_Resume>
0815ba8a +0x10e:  mov    %ebx,%eax
0815ba8c +0x110:  add    $0x30,%esp
0815ba8f +0x113:  pop    %ebx
0815ba90 +0x114:  pop    %esi
0815ba91 +0x115:  pop    %ebp
0815ba92 +0x116:  ret
0815ba93 +0x117:  nop
```

## 反编译 C

```c
// DBUpdateExitTime::dispatch @ 0x815b97c

/* DBUpdateExitTime::dispatch(int, int, Stream*) */

undefined4 DBUpdateExitTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigUpdateExitTime *pSVar2;
  undefined4 *puVar3;
  Stream *in_stack_00000010;
  
                    /* try { // try from 0815b98a to 0815ba16 has its CatchHandler @ 0815ba1e */
  pSVar2 = Stream::GetOutBuffer<Taiwan::SigUpdateExitTime>(in_stack_00000010);
  if (pSVar2 == (SigUpdateExitTime *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  cVar1 = WongWork::CSimpleSSO::updateSSOExpireTime
                    (GlobalData::s_psimpleSSO,*(uint *)pSVar2,*(uint *)(pSVar2 + 4));
  if (cVar1 != '\x01') {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = &DAT_08b77277;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  return 1;
}
```
