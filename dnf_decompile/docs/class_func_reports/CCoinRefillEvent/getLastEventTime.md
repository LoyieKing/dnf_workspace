# getLastEventTime

`_ZNK16CCoinRefillEvent16getLastEventTimeEv`

`CCoinRefillEvent::getLastEventTime() const`

| 类 | 地址 |
|---|---|
| `CCoinRefillEvent` | `0x0832c0b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832c0b8  _ZNK16CCoinRefillEvent16getLastEventTimeEv
#           CCoinRefillEvent::getLastEventTime() const
# range [0x0832c0b8, 0x0832c147]
0832c0b8 +0x00:  push   %ebp
0832c0b9 +0x01:  mov    %esp,%ebp
0832c0bb +0x03:  sub    $0x58,%esp
0832c0be +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0832c0c5 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0832c0ca +0x12:  mov    %eax,-0x10(%ebp)
0832c0cd +0x15:  lea    -0x3c(%ebp),%eax
0832c0d0 +0x18:  mov    %eax,0x4(%esp)
0832c0d4 +0x1c:  lea    -0x10(%ebp),%eax
0832c0d7 +0x1f:  mov    %eax,(%esp)
0832c0da +0x22:  call   0807e360 <_init+0xc58>
0832c0df +0x27:  mov    -0x34(%ebp),%edx
0832c0e2 +0x2a:  mov    0x8(%ebp),%eax
0832c0e5 +0x2d:  mov    0x10(%eax),%eax
0832c0e8 +0x30:  cmp    %eax,%edx
0832c0ea +0x32:  jge    0832c0fb <+0x43>
0832c0ec +0x34:  mov    0x8(%ebp),%eax
0832c0ef +0x37:  mov    0xc(%eax),%edx
0832c0f2 +0x3a:  mov    0x8(%ebp),%eax
0832c0f5 +0x3d:  mov    0xc(%eax,%edx,4),%eax
0832c0f9 +0x41:  jmp    0832c145 <+0x8d>
0832c0fb +0x43:  movl   $0x2,-0xc(%ebp)
0832c102 +0x4a:  jmp    0832c128 <+0x70>
0832c104 +0x4c:  mov    -0x34(%ebp),%ecx
0832c107 +0x4f:  mov    -0xc(%ebp),%edx
0832c10a +0x52:  mov    0x8(%ebp),%eax
0832c10d +0x55:  mov    0xc(%eax,%edx,4),%eax
0832c111 +0x59:  cmp    %eax,%ecx
0832c113 +0x5b:  jge    0832c124 <+0x6c>
0832c115 +0x5d:  mov    -0xc(%ebp),%eax
0832c118 +0x60:  lea    -0x1(%eax),%edx
0832c11b +0x63:  mov    0x8(%ebp),%eax
0832c11e +0x66:  mov    0xc(%eax,%edx,4),%eax
0832c122 +0x6a:  jmp    0832c145 <+0x8d>
0832c124 +0x6c:  addl   $0x1,-0xc(%ebp)
0832c128 +0x70:  mov    0x8(%ebp),%eax
0832c12b +0x73:  mov    0xc(%eax),%eax
0832c12e +0x76:  cmp    -0xc(%ebp),%eax
0832c131 +0x79:  setge  %al
0832c134 +0x7c:  test   %al,%al
0832c136 +0x7e:  jne    0832c104 <+0x4c>
0832c138 +0x80:  mov    0x8(%ebp),%eax
0832c13b +0x83:  mov    0xc(%eax),%edx
0832c13e +0x86:  mov    0x8(%ebp),%eax
0832c141 +0x89:  mov    0xc(%eax,%edx,4),%eax
0832c145 +0x8d:  leave
0832c146 +0x8e:  ret
0832c147 +0x8f:  nop
```

## 反编译 C

```c
// CCoinRefillEvent::getLastEventTime @ 0x832c0b8

/* CCoinRefillEvent::getLastEventTime() const */

undefined4 __thiscall CCoinRefillEvent::getLastEventTime(CCoinRefillEvent *this)

{
  undefined4 uVar1;
  tm local_40;
  time_t local_14;
  int local_10;
  
  local_14 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_14,&local_40);
  if (local_40.tm_hour < *(int *)(this + 0x10)) {
    uVar1 = *(undefined4 *)(this + *(int *)(this + 0xc) * 4 + 0xc);
  }
  else {
    for (local_10 = 2; local_10 <= *(int *)(this + 0xc); local_10 = local_10 + 1) {
      if (local_40.tm_hour < *(int *)(this + local_10 * 4 + 0xc)) {
        return *(undefined4 *)(this + (local_10 + -1) * 4 + 0xc);
      }
    }
    uVar1 = *(undefined4 *)(this + *(int *)(this + 0xc) * 4 + 0xc);
  }
  return uVar1;
}
```
