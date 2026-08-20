# StartEvent

`_ZN23CCeraShopBonusItemEvent10StartEventE10Word_Param`

`CCeraShopBonusItemEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CCeraShopBonusItemEvent` | `0x0810a34c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a34c  _ZN23CCeraShopBonusItemEvent10StartEventE10Word_Param
#           CCeraShopBonusItemEvent::StartEvent(Word_Param)
# range [0x0810a34c, 0x0810a405]
0810a34c +0x00:  push   %ebp
0810a34d +0x01:  mov    %esp,%ebp
0810a34f +0x03:  push   %ebx
0810a350 +0x04:  sub    $0x34,%esp
0810a353 +0x07:  mov    0x8(%ebp),%eax
0810a356 +0x0a:  movl   $0x1,0x4(%esp)
0810a35e +0x12:  mov    %eax,(%esp)
0810a361 +0x15:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810a366 +0x1a:  movzwl 0xc(%ebp),%eax
0810a36a +0x1e:  test   %ax,%ax
0810a36d +0x21:  je     0810a379 <+0x2d>
0810a36f +0x23:  movzwl 0xc(%ebp),%eax
0810a373 +0x27:  cmp    $0x3e8,%ax
0810a377 +0x2b:  jbe    0810a3bc <+0x70>
0810a379 +0x2d:  movzwl 0xc(%ebp),%eax
0810a37d +0x31:  movzwl %ax,%ebx
0810a380 +0x34:  movl   $0x0,0xc(%esp)
0810a388 +0x3c:  movl   $0x1a,0x8(%esp)
0810a390 +0x44:  movl   $&_ZZN23CCeraShopBonusItemEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0810a398 +0x4c:  lea    -0x28(%ebp),%eax
0810a39b +0x4f:  mov    %eax,(%esp)
0810a39e +0x52:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a3a3 +0x57:  mov    %ebx,0x8(%esp)
0810a3a7 +0x5b:  movl   $"Can not start Cera shop bonus item event. Bonus rate is too big(%d)",0x4(%esp)
0810a3af +0x63:  lea    -0x28(%ebp),%eax
0810a3b2 +0x66:  mov    %eax,(%esp)
0810a3b5 +0x69:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a3ba +0x6e:  jmp    0810a3ff <+0xb3>
0810a3bc +0x70:  movzwl 0xc(%ebp),%eax
0810a3c0 +0x74:  movzwl %ax,%edx
0810a3c3 +0x77:  mov    0x8(%ebp),%eax
0810a3c6 +0x7a:  mov    %edx,0xc(%eax)
0810a3c9 +0x7d:  movl   $0x0,0xc(%esp)
0810a3d1 +0x85:  movl   $0x20,0x8(%esp)
0810a3d9 +0x8d:  movl   $&_ZZN23CCeraShopBonusItemEvent10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0810a3e1 +0x95:  lea    -0x18(%ebp),%eax
0810a3e4 +0x98:  mov    %eax,(%esp)
0810a3e7 +0x9b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810a3ec +0xa0:  movl   $"Cera shop bonus item event Start",0x4(%esp)
0810a3f4 +0xa8:  lea    -0x18(%ebp),%eax
0810a3f7 +0xab:  mov    %eax,(%esp)
0810a3fa +0xae:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810a3ff +0xb3:  add    $0x34,%esp
0810a402 +0xb6:  pop    %ebx
0810a403 +0xb7:  pop    %ebp
0810a404 +0xb8:  ret
0810a405 +0xb9:  nop
```

## 反编译 C

```c
// CCeraShopBonusItemEvent::StartEvent @ 0x810a34c

/* CCeraShopBonusItemEvent::StartEvent(Word_Param) */

void __thiscall CCeraShopBonusItemEvent::StartEvent(CCeraShopBonusItemEvent *this,ushort param_2)

{
  cMyTrace local_2c [16];
  cMyTrace local_1c [20];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  if ((param_2 == 0) || (1000 < param_2)) {
    cMyTrace::cMyTrace(local_2c,"StartEvent",0x1a,0);
    cMyTrace::operator()
              (local_2c,"Can not start Cera shop bonus item event. Bonus rate is too big(%d)",
               (uint)param_2);
  }
  else {
    *(uint *)(this + 0xc) = (uint)param_2;
    cMyTrace::cMyTrace(local_1c,"StartEvent",0x20,0);
    cMyTrace::operator()(local_1c,"Cera shop bonus item event Start");
  }
  return;
}
```
