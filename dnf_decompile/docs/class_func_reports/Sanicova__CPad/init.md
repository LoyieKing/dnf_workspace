# init

`_ZN8Sanicova4CPad4initEv`

`Sanicova::CPad::init()`

| 类 | 地址 |
|---|---|
| `Sanicova::CPad` | `0x0859957c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859957c  _ZN8Sanicova4CPad4initEv
#           Sanicova::CPad::init()
# range [0x0859957c, 0x08599615]
0859957c +0x00:  push   %ebp
0859957d +0x01:  mov    %esp,%ebp
0859957f +0x03:  sub    $0x18,%esp
08599582 +0x06:  mov    0x8(%ebp),%eax
08599585 +0x09:  movb   $0x0,0x24(%eax)
08599589 +0x0d:  mov    0x8(%ebp),%eax
0859958c +0x10:  movb   $0x0,0x25(%eax)
08599590 +0x14:  mov    0x8(%ebp),%eax
08599593 +0x17:  movl   $0x24,0x8(%esp)
0859959b +0x1f:  movl   $0x0,0x4(%esp)
085995a3 +0x27:  mov    %eax,(%esp)
085995a6 +0x2a:  call   0807dcc0 <_init+0x5b8>
085995ab +0x2f:  mov    0x8(%ebp),%eax
085995ae +0x32:  movl   $0x0,0x38(%eax)
085995b5 +0x39:  mov    0x8(%ebp),%eax
085995b8 +0x3c:  movl   $0x0,0x40(%eax)
085995bf +0x43:  mov    0x8(%ebp),%eax
085995c2 +0x46:  movl   $0x0,0x44(%eax)
085995c9 +0x4d:  mov    0x8(%ebp),%eax
085995cc +0x50:  movb   $0x0,0x2c(%eax)
085995d0 +0x54:  mov    0x8(%ebp),%eax
085995d3 +0x57:  movb   $0x0,0x26(%eax)
085995d7 +0x5b:  mov    0x8(%ebp),%eax
085995da +0x5e:  movb   $0x0,0x2d(%eax)
085995de +0x62:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
085995e5 +0x69:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
085995ea +0x6e:  mov    0x8(%ebp),%edx
085995ed +0x71:  mov    %eax,0x30(%edx)
085995f0 +0x74:  mov    0x8(%ebp),%eax
085995f3 +0x77:  movb   $0x0,0x3c(%eax)
085995f7 +0x7b:  mov    0x8(%ebp),%eax
085995fa +0x7e:  movb   $0x0,0x3d(%eax)
085995fe +0x82:  mov    0x8(%ebp),%eax
08599601 +0x85:  mov    %eax,(%esp)
08599604 +0x88:  call   08599918 <_ZN8Sanicova4CPad20GenerateRandomKeyIdxEv>  ; Sanicova::CPad::GenerateRandomKeyIdx()
08599609 +0x8d:  mov    0x8(%ebp),%eax
0859960c +0x90:  mov    %eax,(%esp)
0859960f +0x93:  call   08599946 <_ZN8Sanicova4CPad23GenerateRandomShakeDataEv>  ; Sanicova::CPad::GenerateRandomShakeData()
08599614 +0x98:  leave
08599615 +0x99:  ret
```

## 反编译 C

```c
// Sanicova::CPad::init @ 0x859957c

/* Sanicova::CPad::init() */

void __thiscall Sanicova::CPad::init(CPad *this)

{
  undefined4 uVar1;
  
  this[0x24] = (CPad)0x0;
  this[0x25] = (CPad)0x0;
  memset(this,0,0x24);
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  this[0x2c] = (CPad)0x0;
  this[0x26] = (CPad)0x0;
  this[0x2d] = (CPad)0x0;
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  *(undefined4 *)(this + 0x30) = uVar1;
  this[0x3c] = (CPad)0x0;
  this[0x3d] = (CPad)0x0;
  GenerateRandomKeyIdx(this);
  GenerateRandomShakeData(this);
  return;
}
```
