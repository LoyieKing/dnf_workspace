# StartEvent

`_ZN21CNotApplyBalkeunEvent10StartEventE10Word_Param`

`CNotApplyBalkeunEvent::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CNotApplyBalkeunEvent` | `0x081b9e4c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b9e4c  _ZN21CNotApplyBalkeunEvent10StartEventE10Word_Param
#           CNotApplyBalkeunEvent::StartEvent(Word_Param)
# range [0x081b9e4c, 0x081b9ed1]
081b9e4c +0x00:  push   %ebp
081b9e4d +0x01:  mov    %esp,%ebp
081b9e4f +0x03:  push   %ebx
081b9e50 +0x04:  sub    $0x24,%esp
081b9e53 +0x07:  mov    0x8(%ebp),%eax
081b9e56 +0x0a:  mov    (%eax),%eax
081b9e58 +0x0c:  add    $0x34,%eax
081b9e5b +0x0f:  mov    (%eax),%edx
081b9e5d +0x11:  mov    0x8(%ebp),%eax
081b9e60 +0x14:  movl   $0x0,0x4(%esp)
081b9e68 +0x1c:  mov    %eax,(%esp)
081b9e6b +0x1f:  call   *%edx
081b9e6d +0x21:  xor    $0x1,%eax
081b9e70 +0x24:  test   %al,%al
081b9e72 +0x26:  je     081b9ecc <+0x80>
081b9e74 +0x28:  mov    0x8(%ebp),%eax
081b9e77 +0x2b:  movl   $0x1,0x4(%esp)
081b9e7f +0x33:  mov    %eax,(%esp)
081b9e82 +0x36:  call   080c84e2 <_GLOBAL__I__ZN15AttendanceEventC2Ev+0x3a>  ; global constructors keyed to AttendanceEvent::AttendanceEvent()+0x3a
081b9e87 +0x3b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
081b9e8c +0x40:  mov    0x1b0(%eax),%ebx
081b9e92 +0x46:  movl   $0x0,0xc(%esp)
081b9e9a +0x4e:  movl   $0x1f,0x8(%esp)
081b9ea2 +0x56:  movl   $&_ZZN21CNotApplyBalkeunEvent10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x4(%esp)
081b9eaa +0x5e:  lea    -0x18(%ebp),%eax
081b9ead +0x61:  mov    %eax,(%esp)
081b9eb0 +0x64:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081b9eb5 +0x69:  mov    %ebx,0x8(%esp)
081b9eb9 +0x6d:  movl   $"Not Apply Balkeun Event Start! server(%d)",0x4(%esp)
081b9ec1 +0x75:  lea    -0x18(%ebp),%eax
081b9ec4 +0x78:  mov    %eax,(%esp)
081b9ec7 +0x7b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081b9ecc +0x80:  add    $0x24,%esp
081b9ecf +0x83:  pop    %ebx
081b9ed0 +0x84:  pop    %ebp
081b9ed1 +0x85:  ret
```

## 反编译 C

```c
// CNotApplyBalkeunEvent::StartEvent @ 0x81b9e4c

/* CNotApplyBalkeunEvent::StartEvent(Word_Param) */

void CNotApplyBalkeunEvent::StartEvent(CEventBase *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  cMyTrace local_1c [20];
  
  cVar2 = (**(code **)(*(int *)param_1 + 0x34))(param_1,0);
  if (cVar2 != '\x01') {
    CEventBase::SetEventFlag(param_1,true);
    iVar3 = G_CEnvironment();
    uVar1 = *(undefined4 *)(iVar3 + 0x1b0);
    cMyTrace::cMyTrace(local_1c,"virtual void CNotApplyBalkeunEvent::StartEvent(Word_Param)",0x1f,0)
    ;
    cMyTrace::operator()(local_1c,"Not Apply Balkeun Event Start! server(%d)",uVar1);
  }
  return;
}
```
