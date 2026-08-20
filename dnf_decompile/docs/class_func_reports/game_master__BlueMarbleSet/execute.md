# execute

`_ZN11game_master13BlueMarbleSet7executeEv`

`game_master::BlueMarbleSet::execute()`

| 类 | 地址 |
|---|---|
| `game_master::BlueMarbleSet` | `0x084b25a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b25a4  _ZN11game_master13BlueMarbleSet7executeEv
#           game_master::BlueMarbleSet::execute()
# range [0x084b25a4, 0x084b2639]
084b25a4 +0x00:  push   %ebp
084b25a5 +0x01:  mov    %esp,%ebp
084b25a7 +0x03:  sub    $0x28,%esp
084b25aa +0x06:  mov    0x8(%ebp),%eax
084b25ad +0x09:  mov    %eax,(%esp)
084b25b0 +0x0c:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b25b5 +0x11:  mov    %eax,-0x10(%ebp)
084b25b8 +0x14:  cmpl   $0x0,-0x10(%ebp)
084b25bc +0x18:  je     084b262d <+0x89>
084b25be +0x1a:  mov    0x8(%ebp),%eax
084b25c1 +0x1d:  movzbl 0xa(%eax),%eax
084b25c5 +0x21:  test   %al,%al
084b25c7 +0x23:  je     084b25e1 <+0x3d>
084b25c9 +0x25:  mov    -0x10(%ebp),%eax
084b25cc +0x28:  mov    %eax,(%esp)
084b25cf +0x2b:  call   08690ed8 <_ZN15CUserCharacInfo25resetBlueMarbleEnterCountEv>  ; CUserCharacInfo::resetBlueMarbleEnterCount()
084b25d4 +0x30:  mov    -0x10(%ebp),%eax
084b25d7 +0x33:  mov    %eax,(%esp)
084b25da +0x36:  call   08690fcc <_ZN5CUser24sendBlueMarbleEnterCountEv>  ; CUser::sendBlueMarbleEnterCount()
084b25df +0x3b:  jmp    084b2637 <+0x93>
084b25e1 +0x3d:  mov    -0x10(%ebp),%eax
084b25e4 +0x40:  mov    %eax,(%esp)
084b25e7 +0x43:  call   086552e6 <_ZN5CUser13getBlueMarbleEv>  ; CUser::getBlueMarble()
084b25ec +0x48:  mov    %eax,-0xc(%ebp)
084b25ef +0x4b:  cmpl   $0x0,-0xc(%ebp)
084b25f3 +0x4f:  je     084b2630 <+0x8c>
084b25f5 +0x51:  mov    0x8(%ebp),%eax
084b25f8 +0x54:  movzbl 0x9(%eax),%eax
084b25fc +0x58:  test   %al,%al
084b25fe +0x5a:  je     084b2633 <+0x8f>
084b2600 +0x5c:  mov    0x8(%ebp),%eax
084b2603 +0x5f:  movzbl 0x8(%eax),%eax
084b2607 +0x63:  test   %al,%al
084b2609 +0x65:  je     084b2636 <+0x92>
084b260b +0x67:  mov    0x8(%ebp),%eax
084b260e +0x6a:  movzbl 0x8(%eax),%eax
084b2612 +0x6e:  movzbl %al,%eax
084b2615 +0x71:  mov    %eax,0x8(%esp)
084b2619 +0x75:  mov    -0x10(%ebp),%eax
084b261c +0x78:  mov    %eax,0x4(%esp)
084b2620 +0x7c:  mov    -0xc(%ebp),%eax
084b2623 +0x7f:  mov    %eax,(%esp)
084b2626 +0x82:  call   080d9a4c <_ZN10BlueMarble12movePositionEP5CUseri>  ; BlueMarble::movePosition(CUser*, int)
084b262b +0x87:  jmp    084b2637 <+0x93>
084b262d +0x89:  nop
084b262e +0x8a:  jmp    084b2637 <+0x93>
084b2630 +0x8c:  nop
084b2631 +0x8d:  jmp    084b2637 <+0x93>
084b2633 +0x8f:  nop
084b2634 +0x90:  jmp    084b2637 <+0x93>
084b2636 +0x92:  nop
084b2637 +0x93:  leave
084b2638 +0x94:  ret
084b2639 +0x95:  nop
```

## 反编译 C

```c
// game_master::BlueMarbleSet::execute @ 0x84b25a4

/* game_master::BlueMarbleSet::execute() */

void __thiscall game_master::BlueMarbleSet::execute(BlueMarbleSet *this)

{
  CUserCharacInfo *this_00;
  BlueMarble *this_01;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  if (this_00 != (CUserCharacInfo *)0x0) {
    if (this[10] == (BlueMarbleSet)0x0) {
      this_01 = (BlueMarble *)CUser::getBlueMarble((CUser *)this_00);
      if (((this_01 != (BlueMarble *)0x0) && (this[9] != (BlueMarbleSet)0x0)) &&
         (this[8] != (BlueMarbleSet)0x0)) {
        BlueMarble::movePosition(this_01,(CUser *)this_00,(uint)(byte)this[8]);
      }
    }
    else {
      CUserCharacInfo::resetBlueMarbleEnterCount(this_00);
      CUser::sendBlueMarbleEnterCount((CUser *)this_00);
    }
  }
  return;
}
```
