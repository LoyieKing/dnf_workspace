# _checkCreateEventCharacter

`_ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC`

`DB_CreateCharac::_checkCreateEventCharacter(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x084013b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084013b2  _ZN15DB_CreateCharac26_checkCreateEventCharacterEP17SIG_CREATE_CHARAC
#           DB_CreateCharac::_checkCreateEventCharacter(SIG_CREATE_CHARAC*)
# range [0x084013b2, 0x08401427]
084013b2 +0x00:  push   %ebp
084013b3 +0x01:  mov    %esp,%ebp
084013b5 +0x03:  sub    $0x18,%esp
084013b8 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084013bf +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084013c4 +0x12:  cmp    $0x4b055d6f,%eax
084013c9 +0x17:  jle    084013e5 <+0x33>
084013cb +0x19:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084013d2 +0x20:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084013d7 +0x25:  cmp    $0x4b3bbf50,%eax
084013dc +0x2a:  jg     084013e5 <+0x33>
084013de +0x2c:  mov    $0x1,%eax
084013e3 +0x31:  jmp    084013ea <+0x38>
084013e5 +0x33:  mov    $0x0,%eax
084013ea +0x38:  test   %al,%al
084013ec +0x3a:  je     0840140d <+0x5b>
084013ee +0x3c:  mov    0xc(%ebp),%eax
084013f1 +0x3f:  movzbl 0x24(%eax),%eax
084013f5 +0x43:  test   %al,%al
084013f7 +0x45:  je     08401421 <+0x6f>
084013f9 +0x47:  mov    0xc(%ebp),%eax
084013fc +0x4a:  movl   $0x4,0x5344(%eax)
08401406 +0x54:  mov    $0x0,%eax
0840140b +0x59:  jmp    08401426 <+0x74>
0840140d +0x5b:  mov    0xc(%ebp),%eax
08401410 +0x5e:  movl   $0x4,0x5344(%eax)
0840141a +0x68:  mov    $0x0,%eax
0840141f +0x6d:  jmp    08401426 <+0x74>
08401421 +0x6f:  mov    $0x1,%eax
08401426 +0x74:  leave
08401427 +0x75:  ret
```

## 反编译 C

```c
// DB_CreateCharac::_checkCreateEventCharacter @ 0x84013b2

/* DB_CreateCharac::_checkCreateEventCharacter(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
DB_CreateCharac::_checkCreateEventCharacter(DB_CreateCharac *this,SIG_CREATE_CHARAC *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  if (0x4b055d6f < iVar2) {
    iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    if (iVar2 < 0x4b3bbf51) {
      bVar1 = true;
      goto LAB_084013ea;
    }
  }
  bVar1 = false;
LAB_084013ea:
  if (bVar1) {
    if (param_1[0x24] == (SIG_CREATE_CHARAC)0x0) {
      uVar3 = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5344) = 4;
      uVar3 = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x5344) = 4;
    uVar3 = 0;
  }
  return uVar3;
}
```
