# dispatch

`_ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream`

`SaveServiceRestrictPolicy::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `SaveServiceRestrictPolicy` | `0x0815ad3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815ad3c  _ZN25SaveServiceRestrictPolicy8dispatchEiiP6Stream
#           SaveServiceRestrictPolicy::dispatch(int, int, Stream*)
# range [0x0815ad3c, 0x0815b00f]
0815ad3c +0x000:  push   %ebp
0815ad3d +0x001:  mov    %esp,%ebp
0815ad3f +0x003:  push   %esi
0815ad40 +0x004:  push   %ebx
0815ad41 +0x005:  sub    $0x40,%esp
0815ad44 +0x008:  mov    0x14(%ebp),%eax
0815ad47 +0x00b:  mov    %eax,(%esp)
0815ad4a +0x00e:  call   0815e9b8 <_GLOBAL__I__ZN18TaiwanDBDispatcherC2Ev+0xc2c>  ; global constructors keyed to TaiwanDBDispatcher::TaiwanDBDispatcher()+0xc2c
0815ad4f +0x013:  mov    %eax,-0x20(%ebp)
0815ad52 +0x016:  cmpl   $0x0,-0x20(%ebp)
0815ad56 +0x01a:  jne    0815ad84 <+0x48>
0815ad58 +0x01c:  movl   $0x4,(%esp)
0815ad5f +0x023:  call   08725800 <__cxa_allocate_exception>
0815ad64 +0x028:  mov    %eax,%edx
0815ad66 +0x02a:  movl   $"context null",(%edx)
0815ad6c +0x030:  movl   $0x0,0x8(%esp)
0815ad74 +0x038:  movl   $&_ZTIPKc,0x4(%esp)
0815ad7c +0x040:  mov    %eax,(%esp)
0815ad7f +0x043:  call   08724c50 <__cxa_throw>
0815ad84 +0x048:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0815ad89 +0x04d:  movl   $0x0,0x8(%esp)
0815ad91 +0x055:  movl   $0x1,0x4(%esp)
0815ad99 +0x05d:  mov    %eax,(%esp)
0815ad9c +0x060:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0815ada1 +0x065:  mov    %eax,-0x1c(%ebp)
0815ada4 +0x068:  cmpl   $0x0,-0x1c(%ebp)
0815ada8 +0x06c:  jne    0815add6 <+0x9a>
0815adaa +0x06e:  movl   $0x4,(%esp)
0815adb1 +0x075:  call   08725800 <__cxa_allocate_exception>
0815adb6 +0x07a:  mov    %eax,%edx
0815adb8 +0x07c:  movl   $"handle null",(%edx)
0815adbe +0x082:  movl   $0x0,0x8(%esp)
0815adc6 +0x08a:  movl   $&_ZTIPKc,0x4(%esp)
0815adce +0x092:  mov    %eax,(%esp)
0815add1 +0x095:  call   08724c50 <__cxa_throw>
0815add6 +0x09a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0815addb +0x09f:  mov    %eax,(%esp)
0815adde +0x0a2:  call   08106ce0 <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x162>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x162
0815ade3 +0x0a7:  mov    %eax,-0x18(%ebp)
0815ade6 +0x0aa:  movl   $0x1,-0x14(%ebp)
0815aded +0x0b1:  jmp    0815aeae <+0x172>
0815adf2 +0x0b6:  mov    -0x14(%ebp),%eax
0815adf5 +0x0b9:  mov    -0x20(%ebp),%edx
0815adf8 +0x0bc:  movzbl 0x119c(%edx,%eax,1),%eax
0815ae00 +0x0c4:  movsbl %al,%edx
0815ae03 +0x0c7:  mov    -0x20(%ebp),%eax
0815ae06 +0x0ca:  mov    (%eax),%eax
0815ae08 +0x0cc:  mov    %edx,0x14(%esp)
0815ae0c +0x0d0:  mov    -0x14(%ebp),%edx
0815ae0f +0x0d3:  mov    %edx,0x10(%esp)
0815ae13 +0x0d7:  mov    %eax,0xc(%esp)
0815ae17 +0x0db:  mov    -0x18(%ebp),%eax
0815ae1a +0x0de:  mov    %eax,0x8(%esp)
0815ae1e +0x0e2:  movl   $"inSert ignore into dnf_restrict_state (server_group , category , restrict_code , restrict_value , mod_date , reg_date) values(%d, %d, %d, '%d', now(), now())",0x4(%esp)
0815ae26 +0x0ea:  mov    -0x1c(%ebp),%eax
0815ae29 +0x0ed:  mov    %eax,(%esp)
0815ae2c +0x0f0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815ae31 +0x0f5:  xor    $0x1,%eax
0815ae34 +0x0f8:  test   %al,%al
0815ae36 +0x0fa:  je     0815ae64 <+0x128>
0815ae38 +0x0fc:  movl   $0x4,(%esp)
0815ae3f +0x103:  call   08725800 <__cxa_allocate_exception>
0815ae44 +0x108:  mov    %eax,%edx
0815ae46 +0x10a:  movl   $"set_query",(%edx)
0815ae4c +0x110:  movl   $0x0,0x8(%esp)
0815ae54 +0x118:  movl   $&_ZTIPKc,0x4(%esp)
0815ae5c +0x120:  mov    %eax,(%esp)
0815ae5f +0x123:  call   08724c50 <__cxa_throw>
0815ae64 +0x128:  movl   $0x1,0x4(%esp)
0815ae6c +0x130:  mov    -0x1c(%ebp),%eax
0815ae6f +0x133:  mov    %eax,(%esp)
0815ae72 +0x136:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815ae77 +0x13b:  xor    $0x1,%eax
0815ae7a +0x13e:  test   %al,%al
0815ae7c +0x140:  je     0815aeaa <+0x16e>
0815ae7e +0x142:  movl   $0x4,(%esp)
0815ae85 +0x149:  call   08725800 <__cxa_allocate_exception>
0815ae8a +0x14e:  mov    %eax,%edx
0815ae8c +0x150:  movl   $"insert_exec",(%edx)
0815ae92 +0x156:  movl   $0x0,0x8(%esp)
0815ae9a +0x15e:  movl   $&_ZTIPKc,0x4(%esp)
0815aea2 +0x166:  mov    %eax,(%esp)
0815aea5 +0x169:  call   08724c50 <__cxa_throw>
0815aeaa +0x16e:  addl   $0x1,-0x14(%ebp)
0815aeae +0x172:  mov    -0x20(%ebp),%eax
0815aeb1 +0x175:  mov    0x4(%eax),%eax
0815aeb4 +0x178:  cmp    -0x14(%ebp),%eax
0815aeb7 +0x17b:  setge  %al
0815aeba +0x17e:  test   %al,%al
0815aebc +0x180:  jne    0815adf2 <+0xb6>
0815aec2 +0x186:  movl   $0x1,-0x10(%ebp)
0815aec9 +0x18d:  jmp    0815af80 <+0x244>
0815aece +0x192:  mov    -0x10(%ebp),%eax
0815aed1 +0x195:  imul   $0x2d,%eax,%eax
0815aed4 +0x198:  add    -0x20(%ebp),%eax
0815aed7 +0x19b:  add    $0x8,%eax
0815aeda +0x19e:  mov    %eax,%edx
0815aedc +0x1a0:  mov    -0x20(%ebp),%eax
0815aedf +0x1a3:  mov    (%eax),%eax
0815aee1 +0x1a5:  mov    %edx,0x10(%esp)
0815aee5 +0x1a9:  mov    -0x10(%ebp),%edx
0815aee8 +0x1ac:  mov    %edx,0xc(%esp)
0815aeec +0x1b0:  mov    %eax,0x8(%esp)
0815aef0 +0x1b4:  movl   $"inSert ignore into dnf_restrict_info (category , restrict_code , restrict_str , reg_date) values(%d, %d, '%s', now())",0x4(%esp)
0815aef8 +0x1bc:  mov    -0x1c(%ebp),%eax
0815aefb +0x1bf:  mov    %eax,(%esp)
0815aefe +0x1c2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0815af03 +0x1c7:  xor    $0x1,%eax
0815af06 +0x1ca:  test   %al,%al
0815af08 +0x1cc:  je     0815af36 <+0x1fa>
0815af0a +0x1ce:  movl   $0x4,(%esp)
0815af11 +0x1d5:  call   08725800 <__cxa_allocate_exception>
0815af16 +0x1da:  mov    %eax,%edx
0815af18 +0x1dc:  movl   $"set_query",(%edx)
0815af1e +0x1e2:  movl   $0x0,0x8(%esp)
0815af26 +0x1ea:  movl   $&_ZTIPKc,0x4(%esp)
0815af2e +0x1f2:  mov    %eax,(%esp)
0815af31 +0x1f5:  call   08724c50 <__cxa_throw>
0815af36 +0x1fa:  movl   $0x1,0x4(%esp)
0815af3e +0x202:  mov    -0x1c(%ebp),%eax
0815af41 +0x205:  mov    %eax,(%esp)
0815af44 +0x208:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0815af49 +0x20d:  xor    $0x1,%eax
0815af4c +0x210:  test   %al,%al
0815af4e +0x212:  je     0815af7c <+0x240>
0815af50 +0x214:  movl   $0x4,(%esp)
0815af57 +0x21b:  call   08725800 <__cxa_allocate_exception>
0815af5c +0x220:  mov    %eax,%edx
0815af5e +0x222:  movl   $"insert_exec",(%edx)
0815af64 +0x228:  movl   $0x0,0x8(%esp)
0815af6c +0x230:  movl   $&_ZTIPKc,0x4(%esp)
0815af74 +0x238:  mov    %eax,(%esp)
0815af77 +0x23b:  call   08724c50 <__cxa_throw>
0815af7c +0x240:  addl   $0x1,-0x10(%ebp)
0815af80 +0x244:  mov    -0x20(%ebp),%eax
0815af83 +0x247:  mov    0x4(%eax),%eax
0815af86 +0x24a:  cmp    -0x10(%ebp),%eax
0815af89 +0x24d:  setge  %al
0815af8c +0x250:  test   %al,%al
0815af8e +0x252:  jne    0815aece <+0x192>
0815af94 +0x258:  mov    $0x1,%ebx
0815af99 +0x25d:  jmp    0815b007 <+0x2cb>
0815af9b +0x25f:  cmp    $0x1,%edx
0815af9e +0x262:  je     0815afa8 <+0x26c>
0815afa0 +0x264:  mov    %eax,(%esp)
0815afa3 +0x267:  call   08ae3750 <_Unwind_Resume>
0815afa8 +0x26c:  mov    %eax,(%esp)
0815afab +0x26f:  call   08725ce0 <__cxa_begin_catch>
0815afb0 +0x274:  mov    %eax,-0xc(%ebp)
0815afb3 +0x277:  mov    -0xc(%ebp),%eax
0815afb6 +0x27a:  mov    %eax,0x14(%esp)
0815afba +0x27e:  movl   $"[Taiwan, Restrict] select dnf_restrict_state. (error:%s)",0x10(%esp)
0815afc2 +0x286:  movl   $0x10e,0xc(%esp)
0815afca +0x28e:  movl   $&_ZZN25SaveServiceRestrictPolicy8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
0815afd2 +0x296:  movl   $"localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x4(%esp)
0815afda +0x29e:  movl   $0x1,(%esp)
0815afe1 +0x2a5:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0815afe6 +0x2aa:  mov    $0x0,%ebx
0815afeb +0x2af:  call   08725c30 <__cxa_end_catch>
0815aff0 +0x2b4:  jmp    0815b007 <+0x2cb>
0815aff2 +0x2b6:  mov    %edx,%ebx
0815aff4 +0x2b8:  mov    %eax,%esi
0815aff6 +0x2ba:  call   08725c30 <__cxa_end_catch>
0815affb +0x2bf:  mov    %esi,%eax
0815affd +0x2c1:  mov    %ebx,%edx
0815afff +0x2c3:  mov    %eax,(%esp)
0815b002 +0x2c6:  call   08ae3750 <_Unwind_Resume>
0815b007 +0x2cb:  mov    %ebx,%eax
0815b009 +0x2cd:  add    $0x40,%esp
0815b00c +0x2d0:  pop    %ebx
0815b00d +0x2d1:  pop    %esi
0815b00e +0x2d2:  pop    %ebp
0815b00f +0x2d3:  ret
```

## 反编译 C

```c
// SaveServiceRestrictPolicy::dispatch @ 0x815ad3c

/* SaveServiceRestrictPolicy::dispatch(int, int, Stream*) */

undefined4 SaveServiceRestrictPolicy::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SigLoadRestrictPolicy *pSVar2;
  undefined4 *puVar3;
  MySQL *this;
  CEnvironment *this_00;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  int local_18;
  int local_14;
  
                    /* try { // try from 0815ad4a to 0815af7b has its CatchHandler @ 0815af9b */
  pSVar2 = Stream::GetOutBuffer<Taiwan::SigLoadRestrictPolicy>(in_stack_00000010);
  if (pSVar2 == (SigLoadRestrictPolicy *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "context null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (this == (MySQL *)0x0) {
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar3,&char_const*::typeinfo,0);
  }
  this_00 = (CEnvironment *)G_CEnvironment();
  uVar4 = CEnvironment::get_server_group(this_00);
  local_18 = 1;
  while( true ) {
    if (*(int *)(pSVar2 + 4) < local_18) {
      local_14 = 1;
      while( true ) {
        if (*(int *)(pSVar2 + 4) < local_14) {
          return 1;
        }
        cVar1 = MySQL::set_query(this,
                                 "inSert ignore into dnf_restrict_info (category , restrict_code , restrict_str , reg_date) values(%d, %d, \'%s\', now())"
                                 ,*(undefined4 *)pSVar2,local_14,pSVar2 + local_14 * 0x2d + 8);
        if (cVar1 != '\x01') break;
        cVar1 = MySQL::exec(this,true);
        if (cVar1 != '\x01') {
          puVar3 = (undefined4 *)__cxa_allocate_exception(4);
          *puVar3 = "insert_exec";
                    /* WARNING: Subroutine does not return */
          __cxa_throw(puVar3,&char_const*::typeinfo,0);
        }
        local_14 = local_14 + 1;
      }
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::set_query(this,
                             "inSert ignore into dnf_restrict_state (server_group , category , restrict_code , restrict_value , mod_date , reg_date) values(%d, %d, %d, \'%d\', now(), now())"
                             ,uVar4,*(undefined4 *)pSVar2,local_18,
                             (int)(char)pSVar2[local_18 + 0x119c]);
    if (cVar1 != '\x01') {
      puVar3 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar3 = "set_query";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar3,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::exec(this,true);
    if (cVar1 != '\x01') break;
    local_18 = local_18 + 1;
  }
  puVar3 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar3 = "insert_exec";
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar3,&char_const*::typeinfo,0);
}
```
