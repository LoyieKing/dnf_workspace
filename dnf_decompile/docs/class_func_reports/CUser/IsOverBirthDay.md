# IsOverBirthDay

`_ZN5CUser14IsOverBirthDayEv`

`CUser::IsOverBirthDay()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867ec66` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867ec66  _ZN5CUser14IsOverBirthDayEv
#           CUser::IsOverBirthDay()
# range [0x0867ec66, 0x0867ecef]
0867ec66 +0x00:  push   %ebp
0867ec67 +0x01:  mov    %esp,%ebp
0867ec69 +0x03:  sub    $0x58,%esp
0867ec6c +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0867ec73 +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0867ec78 +0x12:  mov    %eax,-0x18(%ebp)
0867ec7b +0x15:  lea    -0x44(%ebp),%eax
0867ec7e +0x18:  mov    %eax,0x4(%esp)
0867ec82 +0x1c:  lea    -0x18(%ebp),%eax
0867ec85 +0x1f:  mov    %eax,(%esp)
0867ec88 +0x22:  call   0807e360 <_init+0xc58>
0867ec8d +0x27:  mov    %eax,-0x14(%ebp)
0867ec90 +0x2a:  mov    -0x14(%ebp),%eax
0867ec93 +0x2d:  mov    0x10(%eax),%eax
0867ec96 +0x30:  add    $0x1,%eax
0867ec99 +0x33:  mov    %eax,-0x10(%ebp)
0867ec9c +0x36:  mov    -0x14(%ebp),%eax
0867ec9f +0x39:  mov    0xc(%eax),%eax
0867eca2 +0x3c:  mov    %eax,-0xc(%ebp)
0867eca5 +0x3f:  mov    0x8(%ebp),%eax
0867eca8 +0x42:  movzbl 0x711d5(%eax),%eax
0867ecaf +0x49:  movzbl %al,%eax
0867ecb2 +0x4c:  cmp    -0x10(%ebp),%eax
0867ecb5 +0x4f:  jge    0867ecbe <+0x58>
0867ecb7 +0x51:  mov    $0x1,%eax
0867ecbc +0x56:  jmp    0867ecee <+0x88>
0867ecbe +0x58:  mov    0x8(%ebp),%eax
0867ecc1 +0x5b:  movzbl 0x711d5(%eax),%eax
0867ecc8 +0x62:  movzbl %al,%eax
0867eccb +0x65:  cmp    -0x10(%ebp),%eax
0867ecce +0x68:  jne    0867ece9 <+0x83>
0867ecd0 +0x6a:  mov    0x8(%ebp),%eax
0867ecd3 +0x6d:  movzbl 0x711d4(%eax),%eax
0867ecda +0x74:  movzbl %al,%eax
0867ecdd +0x77:  cmp    -0xc(%ebp),%eax
0867ece0 +0x7a:  jge    0867ece9 <+0x83>
0867ece2 +0x7c:  mov    $0x1,%eax
0867ece7 +0x81:  jmp    0867ecee <+0x88>
0867ece9 +0x83:  mov    $0x0,%eax
0867ecee +0x88:  leave
0867ecef +0x89:  ret
```

## 反编译 C

```c
// CUser::IsOverBirthDay @ 0x867ec66

/* CUser::IsOverBirthDay() */

undefined4 __thiscall CUser::IsOverBirthDay(CUser *this)

{
  tm *ptVar1;
  uint uVar2;
  undefined4 uVar3;
  tm local_48;
  time_t local_1c [6];
  
  local_1c[0] = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  ptVar1 = localtime_r(local_1c,&local_48);
  uVar2 = ptVar1->tm_mon + 1;
  if ((int)(uint)(byte)this[0x711d5] < (int)uVar2) {
    uVar3 = 1;
  }
  else if (((byte)this[0x711d5] == uVar2) && ((int)(uint)(byte)this[0x711d4] < ptVar1->tm_mday)) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
