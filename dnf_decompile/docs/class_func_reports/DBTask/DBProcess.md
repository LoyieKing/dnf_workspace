# DBProcess

`_ZN6DBTask9DBProcessEP6StreamRi`

`DBTask::DBProcess(Stream*, int&)`

| 类 | 地址 |
|---|---|
| `DBTask` | `0x083ff3f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083ff3f4  _ZN6DBTask9DBProcessEP6StreamRi
#           DBTask::DBProcess(Stream*, int&)
# range [0x083ff3f4, 0x083ff5f1]
083ff3f4 +0x000:  push   %ebp
083ff3f5 +0x001:  mov    %esp,%ebp
083ff3f7 +0x003:  push   %ebx
083ff3f8 +0x004:  sub    $0x54,%esp
083ff3fb +0x007:  movl   $0x0,-0x34(%ebp)
083ff402 +0x00e:  lea    -0x34(%ebp),%eax
083ff405 +0x011:  mov    %eax,0x4(%esp)
083ff409 +0x015:  mov    0xc(%ebp),%eax
083ff40c +0x018:  mov    %eax,(%esp)
083ff40f +0x01b:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
083ff414 +0x020:  mov    %al,-0xd(%ebp)
083ff417 +0x023:  mov    -0x34(%ebp),%edx
083ff41a +0x026:  mov    0x10(%ebp),%eax
083ff41d +0x029:  mov    %edx,(%eax)
083ff41f +0x02b:  movzbl -0xd(%ebp),%eax
083ff423 +0x02f:  xor    $0x1,%eax
083ff426 +0x032:  test   %al,%al
083ff428 +0x034:  je     083ff47a <+0x86>
083ff42a +0x036:  movl   $0x5,0xc(%esp)
083ff432 +0x03e:  movl   $0x94d,0x8(%esp)
083ff43a +0x046:  movl   $&_ZZN6DBTask9DBProcessEP6StreamRiE19__PRETTY_FUNCTION__,0x4(%esp)
083ff442 +0x04e:  lea    -0x30(%ebp),%eax
083ff445 +0x051:  mov    %eax,(%esp)
083ff448 +0x054:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083ff44d +0x059:  movl   $0x94d,0xc(%esp)
083ff455 +0x061:  movl   $&_ZZN6DBTask9DBProcessEP6StreamRiE19__PRETTY_FUNCTION__,0x8(%esp)
083ff45d +0x069:  movl   $"[%s][%d]",0x4(%esp)
083ff465 +0x071:  lea    -0x30(%ebp),%eax
083ff468 +0x074:  mov    %eax,(%esp)
083ff46b +0x077:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083ff470 +0x07c:  mov    $0x0,%eax
083ff475 +0x081:  jmp    083ff5eb <+0x1f7>
083ff47a +0x086:  movl   $0x0,-0x38(%ebp)
083ff481 +0x08d:  lea    -0x38(%ebp),%eax
083ff484 +0x090:  mov    %eax,0x4(%esp)
083ff488 +0x094:  mov    0xc(%ebp),%eax
083ff48b +0x097:  mov    %eax,(%esp)
083ff48e +0x09a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
083ff493 +0x09f:  mov    %al,-0xd(%ebp)
083ff496 +0x0a2:  movzbl -0xd(%ebp),%eax
083ff49a +0x0a6:  xor    $0x1,%eax
083ff49d +0x0a9:  test   %al,%al
083ff49f +0x0ab:  je     083ff4f1 <+0xfd>
083ff4a1 +0x0ad:  movl   $0x5,0xc(%esp)
083ff4a9 +0x0b5:  movl   $0x95f,0x8(%esp)
083ff4b1 +0x0bd:  movl   $&_ZZN6DBTask9DBProcessEP6StreamRiE19__PRETTY_FUNCTION__,0x4(%esp)
083ff4b9 +0x0c5:  lea    -0x20(%ebp),%eax
083ff4bc +0x0c8:  mov    %eax,(%esp)
083ff4bf +0x0cb:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
083ff4c4 +0x0d0:  movl   $0x95f,0xc(%esp)
083ff4cc +0x0d8:  movl   $&_ZZN6DBTask9DBProcessEP6StreamRiE19__PRETTY_FUNCTION__,0x8(%esp)
083ff4d4 +0x0e0:  movl   $"[%s][%d]",0x4(%esp)
083ff4dc +0x0e8:  lea    -0x20(%ebp),%eax
083ff4df +0x0eb:  mov    %eax,(%esp)
083ff4e2 +0x0ee:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
083ff4e7 +0x0f3:  mov    $0x0,%eax
083ff4ec +0x0f8:  jmp    083ff5eb <+0x1f7>
083ff4f1 +0x0fd:  mov    -0x34(%ebp),%eax
083ff4f4 +0x100:  test   %eax,%eax
083ff4f6 +0x102:  jns    083ff538 <+0x144>
083ff4f8 +0x104:  mov    -0x34(%ebp),%eax
083ff4fb +0x107:  cmp    $0x353,%eax
083ff500 +0x10c:  jle    083ff538 <+0x144>
083ff502 +0x10e:  movl   $"Invalid signal received",0x10(%esp)
083ff50a +0x116:  movl   $0x967,0xc(%esp)
083ff512 +0x11e:  movl   $&_ZZN6DBTask9DBProcessEP6StreamRiE19__PRETTY_FUNCTION__,0x8(%esp)
083ff51a +0x126:  movl   $"DBThread.cpp",0x4(%esp)
083ff522 +0x12e:  movl   $0x1,(%esp)
083ff529 +0x135:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083ff52e +0x13a:  mov    $0x0,%eax
083ff533 +0x13f:  jmp    083ff5eb <+0x1f7>
083ff538 +0x144:  mov    -0x34(%ebp),%edx
083ff53b +0x147:  mov    0x8(%ebp),%eax
083ff53e +0x14a:  mov    0x4(%eax,%edx,4),%eax
083ff542 +0x14e:  mov    %eax,-0xc(%ebp)
083ff545 +0x151:  cmpl   $0x0,-0xc(%ebp)
083ff549 +0x155:  jne    083ff585 <+0x191>
083ff54b +0x157:  mov    -0x34(%ebp),%eax
083ff54e +0x15a:  mov    %eax,0x14(%esp)
083ff552 +0x15e:  movl   $"Can't find the db dispatcher : signal(%d)",0x10(%esp)
083ff55a +0x166:  movl   $0x970,0xc(%esp)
083ff562 +0x16e:  movl   $&_ZZN6DBTask9DBProcessEP6StreamRiE19__PRETTY_FUNCTION__,0x8(%esp)
083ff56a +0x176:  movl   $"DBThread.cpp",0x4(%esp)
083ff572 +0x17e:  movl   $0x1,(%esp)
083ff579 +0x185:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083ff57e +0x18a:  mov    $0x0,%eax
083ff583 +0x18f:  jmp    083ff5eb <+0x1f7>
083ff585 +0x191:  mov    0x8(%ebp),%eax
083ff588 +0x194:  mov    (%eax),%eax
083ff58a +0x196:  cmp    $0x2,%eax
083ff58d +0x199:  jne    083ff5a3 <+0x1af>
083ff58f +0x19b:  mov    -0x38(%ebp),%edx
083ff592 +0x19e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083ff597 +0x1a3:  mov    %edx,0x4(%esp)
083ff59b +0x1a7:  mov    %eax,(%esp)
083ff59e +0x1aa:  call   0818fb1a <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1c>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1c
083ff5a3 +0x1af:  mov    -0xc(%ebp),%eax
083ff5a6 +0x1b2:  mov    (%eax),%eax
083ff5a8 +0x1b4:  mov    (%eax),%ebx
083ff5aa +0x1b6:  mov    -0x38(%ebp),%edx
083ff5ad +0x1b9:  mov    -0x34(%ebp),%eax
083ff5b0 +0x1bc:  mov    0xc(%ebp),%ecx
083ff5b3 +0x1bf:  mov    %ecx,0xc(%esp)
083ff5b7 +0x1c3:  mov    %edx,0x8(%esp)
083ff5bb +0x1c7:  mov    %eax,0x4(%esp)
083ff5bf +0x1cb:  mov    -0xc(%ebp),%eax
083ff5c2 +0x1ce:  mov    %eax,(%esp)
083ff5c5 +0x1d1:  call   *%ebx
083ff5c7 +0x1d3:  mov    0x8(%ebp),%eax
083ff5ca +0x1d6:  mov    (%eax),%eax
083ff5cc +0x1d8:  cmp    $0x2,%eax
083ff5cf +0x1db:  jne    083ff5e6 <+0x1f2>
083ff5d1 +0x1dd:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
083ff5d6 +0x1e2:  movl   $0xffffffff,0x4(%esp)
083ff5de +0x1ea:  mov    %eax,(%esp)
083ff5e1 +0x1ed:  call   0818fb1a <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1c>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1c
083ff5e6 +0x1f2:  mov    $0x1,%eax
083ff5eb +0x1f7:  add    $0x54,%esp
083ff5ee +0x1fa:  pop    %ebx
083ff5ef +0x1fb:  pop    %ebp
083ff5f0 +0x1fc:  ret
083ff5f1 +0x1fd:  nop
```

## 反编译 C

```c
// DBTask::DBProcess @ 0x83ff3f4

/* DBTask::DBProcess(Stream*, int&) */

undefined4 __thiscall DBTask::DBProcess(DBTask *this,Stream *param_1,int *param_2)

{
  undefined4 uVar1;
  int local_3c;
  int local_38;
  cMyTrace local_34 [16];
  cMyTrace local_24 [19];
  char local_11;
  undefined4 *local_10;
  
  local_38 = 0;
  local_11 = Stream::operator>>(param_1,&local_38);
  *param_2 = local_38;
  if (local_11 == '\x01') {
    local_3c = 0;
    local_11 = Stream::operator>>(param_1,&local_3c);
    if (local_11 == '\x01') {
      if ((local_38 < 0) && (0x353 < local_38)) {
        LogManager::logFormat
                  (1,"DBThread.cpp","bool DBTask::DBProcess(Stream*, int&)",0x967,
                   "Invalid signal received");
        uVar1 = 0;
      }
      else {
        local_10 = *(undefined4 **)(this + local_38 * 4 + 4);
        if (local_10 == (undefined4 *)0x0) {
          LogManager::logFormat
                    (1,"DBThread.cpp","bool DBTask::DBProcess(Stream*, int&)",0x970,
                     "Can\'t find the db dispatcher : signal(%d)",local_38);
          uVar1 = 0;
        }
        else {
          if (*(int *)this == 2) {
            DBMgr::setUserIdx(GlobalData::s_db_mgr,local_3c);
          }
          (**(code **)*local_10)(local_10,local_38,local_3c,param_1);
          if (*(int *)this == 2) {
            DBMgr::setUserIdx(GlobalData::s_db_mgr,-1);
          }
          uVar1 = 1;
        }
      }
    }
    else {
      cMyTrace::cMyTrace(local_24,"bool DBTask::DBProcess(Stream*, int&)",0x95f,5);
      cMyTrace::operator()(local_24,"[%s][%d]","bool DBTask::DBProcess(Stream*, int&)",0x95f);
      uVar1 = 0;
    }
  }
  else {
    cMyTrace::cMyTrace(local_34,"bool DBTask::DBProcess(Stream*, int&)",0x94d,5);
    cMyTrace::operator()(local_34,"[%s][%d]","bool DBTask::DBProcess(Stream*, int&)",0x94d);
    uVar1 = 0;
  }
  return uVar1;
}
```
