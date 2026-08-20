# exec

`_ZN5MySQL4execEb`

`MySQL::exec(bool)`

| 类 | 地址 |
|---|---|
| `MySQL` | `0x083f4326` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4326  _ZN5MySQL4execEb
#           MySQL::exec(bool)
# range [0x083f4326, 0x083f44bb]
083f4326 +0x000:  push   %ebp
083f4327 +0x001:  mov    %esp,%ebp
083f4329 +0x003:  sub    $0x48,%esp
083f432c +0x006:  mov    0xc(%ebp),%eax
083f432f +0x009:  mov    %al,-0x1c(%ebp)
083f4332 +0x00c:  call   085ecab0 <_ZN16CDnFTimerFactory14CreateDnFTimerEv>  ; CDnFTimerFactory::CreateDnFTimer()
083f4337 +0x011:  mov    %eax,-0x10(%ebp)
083f433a +0x014:  mov    -0x10(%ebp),%eax
083f433d +0x017:  mov    (%eax),%eax
083f433f +0x019:  mov    (%eax),%edx
083f4341 +0x01b:  mov    -0x10(%ebp),%eax
083f4344 +0x01e:  mov    %eax,(%esp)
083f4347 +0x021:  call   *%edx
083f4349 +0x023:  movl   $0x0,-0xc(%ebp)
083f4350 +0x02a:  jmp    083f43b6 <+0x90>
083f4352 +0x02c:  mov    0x8(%ebp),%eax
083f4355 +0x02f:  mov    %eax,(%esp)
083f4358 +0x032:  call   083f5348 <_GLOBAL__I__ZN5MySQLC2Ev+0x49>  ; global constructors keyed to MySQL::MySQL()+0x49
083f435d +0x037:  mov    %eax,-0x14(%ebp)
083f4360 +0x03a:  cmpl   $0x1,-0x14(%ebp)
083f4364 +0x03e:  jne    083f43ac <+0x86>
083f4366 +0x040:  mov    0x8(%ebp),%eax
083f4369 +0x043:  movzbl 0x4208a(%eax),%eax
083f4370 +0x04a:  test   %al,%al
083f4372 +0x04c:  je     083f4397 <+0x71>
083f4374 +0x04e:  mov    -0x10(%ebp),%eax
083f4377 +0x051:  mov    (%eax),%eax
083f4379 +0x053:  add    $0x4,%eax
083f437c +0x056:  mov    (%eax),%edx
083f437e +0x058:  mov    -0x10(%ebp),%eax
083f4381 +0x05b:  mov    %eax,(%esp)
083f4384 +0x05e:  call   *%edx
083f4386 +0x060:  mov    0x8(%ebp),%eax
083f4389 +0x063:  mov    (%eax),%eax
083f438b +0x065:  fstpl  0x4(%esp)
083f438f +0x069:  mov    %eax,(%esp)
083f4392 +0x06c:  call   085ed108 <_ZN13CQueryCounter15SetResponseTimeEd>  ; CQueryCounter::SetResponseTime(double)
083f4397 +0x071:  mov    -0x10(%ebp),%eax
083f439a +0x074:  mov    %eax,(%esp)
083f439d +0x077:  call   085ecad8 <_ZN16CDnFTimerFactory15DestroyDnFTimerEP9CDnFTimer>  ; CDnFTimerFactory::DestroyDnFTimer(CDnFTimer*)
083f43a2 +0x07c:  mov    $0x0,%eax
083f43a7 +0x081:  jmp    083f44b9 <+0x193>
083f43ac +0x086:  cmpl   $0x0,-0x14(%ebp)
083f43b0 +0x08a:  je     083f43c3 <+0x9d>
083f43b2 +0x08c:  addl   $0x1,-0xc(%ebp)
083f43b6 +0x090:  cmpl   $0x4,-0xc(%ebp)
083f43ba +0x094:  setle  %al
083f43bd +0x097:  test   %al,%al
083f43bf +0x099:  jne    083f4352 <+0x2c>
083f43c1 +0x09b:  jmp    083f43c4 <+0x9e>
083f43c3 +0x09d:  nop
083f43c4 +0x09e:  mov    0x8(%ebp),%eax
083f43c7 +0x0a1:  movzbl 0x4208a(%eax),%eax
083f43ce +0x0a8:  test   %al,%al
083f43d0 +0x0aa:  je     083f4400 <+0xda>
083f43d2 +0x0ac:  mov    -0x10(%ebp),%eax
083f43d5 +0x0af:  mov    (%eax),%eax
083f43d7 +0x0b1:  add    $0x4,%eax
083f43da +0x0b4:  mov    (%eax),%edx
083f43dc +0x0b6:  mov    -0x10(%ebp),%eax
083f43df +0x0b9:  mov    %eax,(%esp)
083f43e2 +0x0bc:  call   *%edx
083f43e4 +0x0be:  mov    0x8(%ebp),%eax
083f43e7 +0x0c1:  mov    (%eax),%eax
083f43e9 +0x0c3:  fstpl  0x4(%esp)
083f43ed +0x0c7:  mov    %eax,(%esp)
083f43f0 +0x0ca:  call   085ed108 <_ZN13CQueryCounter15SetResponseTimeEd>  ; CQueryCounter::SetResponseTime(double)
083f43f5 +0x0cf:  mov    -0x10(%ebp),%eax
083f43f8 +0x0d2:  mov    %eax,(%esp)
083f43fb +0x0d5:  call   085ecad8 <_ZN16CDnFTimerFactory15DestroyDnFTimerEP9CDnFTimer>  ; CDnFTimerFactory::DestroyDnFTimer(CDnFTimer*)
083f4400 +0x0da:  cmpl   $0x0,-0x14(%ebp)
083f4404 +0x0de:  jne    083f446b <+0x145>
083f4406 +0x0e0:  mov    0x8(%ebp),%eax
083f4409 +0x0e3:  mov    0x4(%eax),%eax
083f440c +0x0e6:  mov    %eax,(%esp)
083f440f +0x0e9:  call   08734a70 <mysql_store_result>
083f4414 +0x0ee:  mov    0x8(%ebp),%edx
083f4417 +0x0f1:  mov    %eax,0x8(%edx)
083f441a +0x0f4:  mov    0x8(%ebp),%eax
083f441d +0x0f7:  mov    0x8(%eax),%eax
083f4420 +0x0fa:  test   %eax,%eax
083f4422 +0x0fc:  je     083f4450 <+0x12a>
083f4424 +0x0fe:  mov    0x8(%ebp),%eax
083f4427 +0x101:  mov    0x8(%eax),%eax
083f442a +0x104:  mov    %eax,(%esp)
083f442d +0x107:  call   08734510 <mysql_num_rows>
083f4432 +0x10c:  mov    %eax,%edx
083f4434 +0x10e:  mov    0x8(%ebp),%eax
083f4437 +0x111:  mov    %edx,0x14(%eax)
083f443a +0x114:  mov    0x8(%ebp),%eax
083f443d +0x117:  mov    0x8(%eax),%eax
083f4440 +0x11a:  mov    %eax,(%esp)
083f4443 +0x11d:  call   08734520 <mysql_num_fields>
083f4448 +0x122:  mov    0x8(%ebp),%edx
083f444b +0x125:  mov    %eax,0x18(%edx)
083f444e +0x128:  jmp    083f4464 <+0x13e>
083f4450 +0x12a:  mov    0x8(%ebp),%eax
083f4453 +0x12d:  movl   $0x0,0x14(%eax)
083f445a +0x134:  mov    0x8(%ebp),%eax
083f445d +0x137:  movl   $0x0,0x18(%eax)
083f4464 +0x13e:  mov    $0x1,%eax
083f4469 +0x143:  jmp    083f44b9 <+0x193>
083f446b +0x145:  cmpb   $0x0,-0x1c(%ebp)
083f446f +0x149:  je     083f44b4 <+0x18e>
083f4471 +0x14b:  mov    0x8(%ebp),%eax
083f4474 +0x14e:  mov    0x4202c(%eax),%eax
083f447a +0x154:  mov    0x8(%ebp),%edx
083f447d +0x157:  add    $0x1c,%edx
083f4480 +0x15a:  mov    %eax,0x18(%esp)
083f4484 +0x15e:  mov    %edx,0x14(%esp)
083f4488 +0x162:  movl   $"Database query error. The last query('%s') has been lost.(%d)",0x10(%esp)
083f4490 +0x16a:  movl   $0x244,0xc(%esp)
083f4498 +0x172:  movl   $&_ZZN5MySQL4execEbE19__PRETTY_FUNCTION__,0x8(%esp)
083f44a0 +0x17a:  movl   $"DBMgr.cpp",0x4(%esp)
083f44a8 +0x182:  movl   $0x1,(%esp)
083f44af +0x189:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
083f44b4 +0x18e:  mov    $0x0,%eax
083f44b9 +0x193:  leave
083f44ba +0x194:  ret
083f44bb +0x195:  nop
```

## 反编译 C

```c
// MySQL::exec @ 0x83f4326

/* MySQL::exec(bool) */

undefined4 __thiscall MySQL::exec(MySQL *this,bool param_1)

{
  CDnFTimer *pCVar1;
  undefined4 uVar2;
  longdouble lVar3;
  int local_18;
  int local_10;
  
  pCVar1 = (CDnFTimer *)CDnFTimerFactory::CreateDnFTimer();
  (*(code *)**(undefined4 **)pCVar1)(pCVar1);
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    local_18 = exec_query(this);
    if (local_18 == 1) {
      if (this[0x4208a] != (MySQL)0x0) {
        lVar3 = (longdouble)(**(code **)(*(int *)pCVar1 + 4))(pCVar1);
        CQueryCounter::SetResponseTime((double)CONCAT44(SUB84((double)lVar3,0),*(undefined4 *)this))
        ;
      }
      CDnFTimerFactory::DestroyDnFTimer(pCVar1);
      return 0;
    }
    if (local_18 == 0) break;
  }
  if (this[0x4208a] != (MySQL)0x0) {
    lVar3 = (longdouble)(**(code **)(*(int *)pCVar1 + 4))(pCVar1);
    CQueryCounter::SetResponseTime((double)CONCAT44(SUB84((double)lVar3,0),*(undefined4 *)this));
    CDnFTimerFactory::DestroyDnFTimer(pCVar1);
  }
  if (local_18 == 0) {
    uVar2 = mysql_store_result(*(undefined4 *)(this + 4));
    *(undefined4 *)(this + 8) = uVar2;
    if (*(int *)(this + 8) == 0) {
      *(undefined4 *)(this + 0x14) = 0;
      *(undefined4 *)(this + 0x18) = 0;
    }
    else {
      uVar2 = mysql_num_rows(*(undefined4 *)(this + 8));
      *(undefined4 *)(this + 0x14) = uVar2;
      uVar2 = mysql_num_fields(*(undefined4 *)(this + 8));
      *(undefined4 *)(this + 0x18) = uVar2;
    }
    uVar2 = 1;
  }
  else {
    if (param_1) {
      LogManager::logFormat
                (1,"DBMgr.cpp","bool MySQL::exec(bool)",0x244,
                 "Database query error. The last query(\'%s\') has been lost.(%d)",this + 0x1c,
                 *(undefined4 *)(this + 0x4202c));
    }
    uVar2 = 0;
  }
  return uVar2;
}
```
