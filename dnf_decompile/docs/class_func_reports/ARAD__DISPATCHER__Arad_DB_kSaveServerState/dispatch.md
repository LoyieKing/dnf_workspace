# dispatch

`_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream`

`ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_DB_kSaveServerState` | `0x08185abe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08185abe  _ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6Stream
#           ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch(int, int, Stream*)
# range [0x08185abe, 0x08185d1f]
08185abe +0x000:  push   %ebp
08185abf +0x001:  mov    %esp,%ebp
08185ac1 +0x003:  push   %esi
08185ac2 +0x004:  push   %ebx
08185ac3 +0x005:  sub    $0x30,%esp
08185ac6 +0x008:  mov    0x14(%ebp),%eax
08185ac9 +0x00b:  mov    %eax,(%esp)
08185acc +0x00e:  call   08187024 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC2Ev+0x9ee>  ; global constructors keyed to ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher()+0x9ee
08185ad1 +0x013:  mov    %eax,-0x14(%ebp)
08185ad4 +0x016:  cmpl   $0x0,-0x14(%ebp)
08185ad8 +0x01a:  jne    08185b10 <+0x52>
08185ada +0x01c:  movl   $"SigServerState is null.",0x10(%esp)
08185ae2 +0x024:  movl   $0x7ef,0xc(%esp)
08185aea +0x02c:  movl   $&_ZZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08185af2 +0x034:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08185afa +0x03c:  movl   $0x1,(%esp)
08185b01 +0x043:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08185b06 +0x048:  mov    $0x0,%ebx
08185b0b +0x04d:  jmp    08185d16 <+0x258>
08185b10 +0x052:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08185b15 +0x057:  movl   $0x0,0x8(%esp)
08185b1d +0x05f:  movl   $0x2,0x4(%esp)
08185b25 +0x067:  mov    %eax,(%esp)
08185b28 +0x06a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08185b2d +0x06f:  mov    %eax,-0x10(%ebp)
08185b30 +0x072:  cmpl   $0x0,-0x10(%ebp)
08185b34 +0x076:  jne    08185b62 <+0xa4>
08185b36 +0x078:  movl   $0x4,(%esp)
08185b3d +0x07f:  call   08725800 <__cxa_allocate_exception>
08185b42 +0x084:  mov    %eax,%edx
08185b44 +0x086:  movl   $"handle null",(%edx)
08185b4a +0x08c:  movl   $0x0,0x8(%esp)
08185b52 +0x094:  movl   $&_ZTIPKc,0x4(%esp)
08185b5a +0x09c:  mov    %eax,(%esp)
08185b5d +0x09f:  call   08724c50 <__cxa_throw>
08185b62 +0x0a4:  mov    -0x14(%ebp),%eax
08185b65 +0x0a7:  movzbl (%eax),%eax
08185b68 +0x0aa:  test   %al,%al
08185b6a +0x0ac:  je     08185c01 <+0x143>
08185b70 +0x0b2:  mov    -0x14(%ebp),%eax
08185b73 +0x0b5:  mov    0xf(%eax),%ebx
08185b76 +0x0b8:  mov    -0x14(%ebp),%eax
08185b79 +0x0bb:  add    $0xd,%eax
08185b7c +0x0be:  movl   $0xc,0xc(%esp)
08185b84 +0x0c6:  mov    %eax,0x8(%esp)
08185b88 +0x0ca:  movl   $0x0,0x4(%esp)
08185b90 +0x0d2:  mov    -0x10(%ebp),%eax
08185b93 +0x0d5:  mov    %eax,(%esp)
08185b96 +0x0d8:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08185b9b +0x0dd:  mov    -0x14(%ebp),%edx
08185b9e +0x0e0:  mov    0x9(%edx),%ecx
08185ba1 +0x0e3:  mov    -0x14(%ebp),%edx
08185ba4 +0x0e6:  mov    0x5(%edx),%edx
08185ba7 +0x0e9:  mov    %ebx,0x14(%esp)
08185bab +0x0ed:  mov    %eax,0x10(%esp)
08185baf +0x0f1:  mov    %ecx,0xc(%esp)
08185bb3 +0x0f5:  mov    %edx,0x8(%esp)
08185bb7 +0x0f9:  movl   $" inSert into server_state_info values (%d, %d, '%s', now(), from_unixtime(%u)) ",0x4(%esp)
08185bbf +0x101:  mov    -0x10(%ebp),%eax
08185bc2 +0x104:  mov    %eax,(%esp)
08185bc5 +0x107:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08185bca +0x10c:  xor    $0x1,%eax
08185bcd +0x10f:  test   %al,%al
08185bcf +0x111:  je     08185c5b <+0x19d>
08185bd5 +0x117:  movl   $0x4,(%esp)
08185bdc +0x11e:  call   08725800 <__cxa_allocate_exception>
08185be1 +0x123:  mov    %eax,%edx
08185be3 +0x125:  movl   $"set_query",(%edx)
08185be9 +0x12b:  movl   $0x0,0x8(%esp)
08185bf1 +0x133:  movl   $&_ZTIPKc,0x4(%esp)
08185bf9 +0x13b:  mov    %eax,(%esp)
08185bfc +0x13e:  call   08724c50 <__cxa_throw>
08185c01 +0x143:  mov    -0x14(%ebp),%eax
08185c04 +0x146:  mov    0x9(%eax),%edx
08185c07 +0x149:  mov    -0x14(%ebp),%eax
08185c0a +0x14c:  mov    0x5(%eax),%eax
08185c0d +0x14f:  mov    %edx,0xc(%esp)
08185c11 +0x153:  mov    %eax,0x8(%esp)
08185c15 +0x157:  movl   $" deLete from server_state_info where category=%d and code=%d ",0x4(%esp)
08185c1d +0x15f:  mov    -0x10(%ebp),%eax
08185c20 +0x162:  mov    %eax,(%esp)
08185c23 +0x165:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08185c28 +0x16a:  xor    $0x1,%eax
08185c2b +0x16d:  test   %al,%al
08185c2d +0x16f:  je     08185c5b <+0x19d>
08185c2f +0x171:  movl   $0x4,(%esp)
08185c36 +0x178:  call   08725800 <__cxa_allocate_exception>
08185c3b +0x17d:  mov    %eax,%edx
08185c3d +0x17f:  movl   $"set_query",(%edx)
08185c43 +0x185:  movl   $0x0,0x8(%esp)
08185c4b +0x18d:  movl   $&_ZTIPKc,0x4(%esp)
08185c53 +0x195:  mov    %eax,(%esp)
08185c56 +0x198:  call   08724c50 <__cxa_throw>
08185c5b +0x19d:  movl   $0x1,0x4(%esp)
08185c63 +0x1a5:  mov    -0x10(%ebp),%eax
08185c66 +0x1a8:  mov    %eax,(%esp)
08185c69 +0x1ab:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08185c6e +0x1b0:  xor    $0x1,%eax
08185c71 +0x1b3:  test   %al,%al
08185c73 +0x1b5:  je     08185d11 <+0x253>
08185c79 +0x1bb:  movl   $0x4,(%esp)
08185c80 +0x1c2:  call   08725800 <__cxa_allocate_exception>
08185c85 +0x1c7:  mov    %eax,%edx
08185c87 +0x1c9:  movl   $"exec",(%edx)
08185c8d +0x1cf:  movl   $0x0,0x8(%esp)
08185c95 +0x1d7:  movl   $&_ZTIPKc,0x4(%esp)
08185c9d +0x1df:  mov    %eax,(%esp)
08185ca0 +0x1e2:  call   08724c50 <__cxa_throw>
08185ca5 +0x1e7:  cmp    $0x1,%edx
08185ca8 +0x1ea:  je     08185cb2 <+0x1f4>
08185caa +0x1ec:  mov    %eax,(%esp)
08185cad +0x1ef:  call   08ae3750 <_Unwind_Resume>
08185cb2 +0x1f4:  mov    %eax,(%esp)
08185cb5 +0x1f7:  call   08725ce0 <__cxa_begin_catch>
08185cba +0x1fc:  mov    %eax,-0xc(%ebp)
08185cbd +0x1ff:  mov    -0xc(%ebp),%eax
08185cc0 +0x202:  mov    %eax,0x14(%esp)
08185cc4 +0x206:  movl   $"[SigRewardEventItem] DB_DSP Error,  (error:%s)",0x10(%esp)
08185ccc +0x20e:  movl   $0x812,0xc(%esp)
08185cd4 +0x216:  movl   $&_ZZN4ARAD10DISPATCHER24Arad_DB_kSaveServerState8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08185cdc +0x21e:  movl   $"localjapan/Arad_DatabaseDispatcher.cpp",0x4(%esp)
08185ce4 +0x226:  movl   $0x1,(%esp)
08185ceb +0x22d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08185cf0 +0x232:  mov    $0x0,%ebx
08185cf5 +0x237:  call   08725c30 <__cxa_end_catch>
08185cfa +0x23c:  jmp    08185d16 <+0x258>
08185cfc +0x23e:  mov    %edx,%ebx
08185cfe +0x240:  mov    %eax,%esi
08185d00 +0x242:  call   08725c30 <__cxa_end_catch>
08185d05 +0x247:  mov    %esi,%eax
08185d07 +0x249:  mov    %ebx,%edx
08185d09 +0x24b:  mov    %eax,(%esp)
08185d0c +0x24e:  call   08ae3750 <_Unwind_Resume>
08185d11 +0x253:  mov    $0x1,%ebx
08185d16 +0x258:  mov    %ebx,%eax
08185d18 +0x25a:  add    $0x30,%esp
08185d1b +0x25d:  pop    %ebx
08185d1c +0x25e:  pop    %esi
08185d1d +0x25f:  pop    %ebp
08185d1e +0x260:  ret
08185d1f +0x261:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch @ 0x8185abe

/* ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch(int, int, Stream*) */

undefined4
ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigServerState *pSVar2;
  MySQL *this;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Stream *in_stack_00000010;
  
  pSVar2 = Stream::GetOutBuffer<arad::SigServerState>(in_stack_00000010);
  if (pSVar2 == (SigServerState *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DatabaseDispatcher.cpp",
               "virtual bool ARAD::DISPATCHER::Arad_DB_kSaveServerState::dispatch(int, int, Stream*)"
               ,0x7ef,"SigServerState is null.");
    uVar5 = 0;
  }
  else {
                    /* try { // try from 08185b28 to 08185ca4 has its CatchHandler @ 08185ca5 */
    this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (this == (MySQL *)0x0) {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    if (*pSVar2 == (SigServerState)0x0) {
      cVar1 = MySQL::set_query(this," deLete from server_state_info where category=%d and code=%d ",
                               *(undefined4 *)(pSVar2 + 5),*(undefined4 *)(pSVar2 + 9));
      if (cVar1 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&char_const*::typeinfo,0);
      }
    }
    else {
      uVar5 = *(undefined4 *)(pSVar2 + 0xf);
      uVar4 = MySQL::blob_to_str(this,0,pSVar2 + 0xd,0xc);
      cVar1 = MySQL::set_query(this,
                               " inSert into server_state_info values (%d, %d, \'%s\', now(), from_unixtime(%u)) "
                               ,*(undefined4 *)(pSVar2 + 5),*(undefined4 *)(pSVar2 + 9),uVar4,uVar5)
      ;
      if (cVar1 != '\x01') {
        puVar3 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar3,&char_const*::typeinfo,0);
      }
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = &DAT_08b8f883;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    uVar5 = 1;
  }
  return uVar5;
}
```
