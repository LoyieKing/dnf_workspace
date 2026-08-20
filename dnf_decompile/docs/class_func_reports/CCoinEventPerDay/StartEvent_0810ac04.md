# StartEvent

`_ZN16CCoinEventPerDay10StartEventE10Word_Param`

`CCoinEventPerDay::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CCoinEventPerDay` | `0x0810ac04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ac04  _ZN16CCoinEventPerDay10StartEventE10Word_Param
#           CCoinEventPerDay::StartEvent(Word_Param)
# range [0x0810ac04, 0x0810aca7]
0810ac04 +0x00:  push   %ebp
0810ac05 +0x01:  mov    %esp,%ebp
0810ac07 +0x03:  push   %edi
0810ac08 +0x04:  push   %esi
0810ac09 +0x05:  push   %ebx
0810ac0a +0x06:  sub    $0x4c,%esp
0810ac0d +0x09:  mov    0x8(%ebp),%eax
0810ac10 +0x0c:  movl   $0x1,0x4(%esp)
0810ac18 +0x14:  mov    %eax,(%esp)
0810ac1b +0x17:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
0810ac20 +0x1c:  lea    0xc(%ebp),%edx
0810ac23 +0x1f:  mov    0x8(%ebp),%eax
0810ac26 +0x22:  mov    (%edx),%edx
0810ac28 +0x24:  mov    %edx,0x9(%eax)
0810ac2b +0x27:  mov    0x8(%ebp),%eax
0810ac2e +0x2a:  movzbl 0xc(%eax),%eax
0810ac32 +0x2e:  movzbl %al,%eax
0810ac35 +0x31:  mov    %eax,-0x2c(%ebp)
0810ac38 +0x34:  mov    0x8(%ebp),%eax
0810ac3b +0x37:  movzbl 0xb(%eax),%eax
0810ac3f +0x3b:  movzbl %al,%edi
0810ac42 +0x3e:  mov    0x8(%ebp),%eax
0810ac45 +0x41:  movzbl 0xa(%eax),%eax
0810ac49 +0x45:  movzbl %al,%esi
0810ac4c +0x48:  mov    0x8(%ebp),%eax
0810ac4f +0x4b:  movzbl 0x9(%eax),%eax
0810ac53 +0x4f:  movzbl %al,%ebx
0810ac56 +0x52:  movl   $0x0,0xc(%esp)
0810ac5e +0x5a:  movl   $0x41,0x8(%esp)
0810ac66 +0x62:  movl   $&_ZZN16CCoinEventPerDay10StartEventE10Word_ParamE12__FUNCTION__,0x4(%esp)
0810ac6e +0x6a:  lea    -0x28(%ebp),%eax
0810ac71 +0x6d:  mov    %eax,(%esp)
0810ac74 +0x70:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0810ac79 +0x75:  mov    -0x2c(%ebp),%eax
0810ac7c +0x78:  mov    %eax,0x14(%esp)
0810ac80 +0x7c:  mov    %edi,0x10(%esp)
0810ac84 +0x80:  mov    %esi,0xc(%esp)
0810ac88 +0x84:  mov    %ebx,0x8(%esp)
0810ac8c +0x88:  movl   $"Coin Event Per Day Start! coin(%d) coin(%d) coin(%d) coin(%d) ",0x4(%esp)
0810ac94 +0x90:  lea    -0x28(%ebp),%eax
0810ac97 +0x93:  mov    %eax,(%esp)
0810ac9a +0x96:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0810ac9f +0x9b:  add    $0x4c,%esp
0810aca2 +0x9e:  pop    %ebx
0810aca3 +0x9f:  pop    %esi
0810aca4 +0xa0:  pop    %edi
0810aca5 +0xa1:  pop    %ebp
0810aca6 +0xa2:  ret
0810aca7 +0xa3:  nop
```

## 反编译 C

```c
// CCoinEventPerDay::StartEvent @ 0x810ac04

/* CCoinEventPerDay::StartEvent(Word_Param) */

void __thiscall CCoinEventPerDay::StartEvent(CCoinEventPerDay *this,undefined4 param_2)

{
  CCoinEventPerDay CVar1;
  CCoinEventPerDay CVar2;
  CCoinEventPerDay CVar3;
  CCoinEventPerDay CVar4;
  cMyTrace local_2c [28];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  *(undefined4 *)(this + 9) = param_2;
  CVar1 = this[0xc];
  CVar2 = this[0xb];
  CVar3 = this[10];
  CVar4 = this[9];
  cMyTrace::cMyTrace(local_2c,"StartEvent",0x41,0);
  cMyTrace::operator()
            (local_2c,"Coin Event Per Day Start! coin(%d) coin(%d) coin(%d) coin(%d) ",
             (uint)(byte)CVar4,(uint)(byte)CVar3,(uint)(byte)CVar2,(uint)(byte)CVar1);
  return;
}
```
