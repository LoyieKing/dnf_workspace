# GetStomach

`_ZN13user_creature9CCreature10GetStomachEv`

`user_creature::CCreature::GetStomach()`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083384ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083384ee  _ZN13user_creature9CCreature10GetStomachEv
#           user_creature::CCreature::GetStomach()
# range [0x083384ee, 0x08338535]
083384ee +0x00:  push   %ebp
083384ef +0x01:  mov    %esp,%ebp
083384f1 +0x03:  sub    $0x28,%esp
083384f4 +0x06:  mov    0x8(%ebp),%eax
083384f7 +0x09:  movzbl 0x4c(%eax),%eax
083384fb +0x0d:  movzbl %al,%edx
083384fe +0x10:  mov    0x8(%ebp),%eax
08338501 +0x13:  mov    0x3c(%eax),%eax
08338504 +0x16:  mov    0x8(%ebp),%ecx
08338507 +0x19:  add    $0x34,%ecx
0833850a +0x1c:  mov    %edx,0x8(%esp)
0833850e +0x20:  mov    %eax,0x4(%esp)
08338512 +0x24:  mov    %ecx,(%esp)
08338515 +0x27:  call   08336cfc <_ZN13user_creature8CStomach15GetStomachValueENS_14CREATURE_STATEEb>  ; user_creature::CStomach::GetStomachValue(user_creature::CREATURE_STATE, bool)
0833851a +0x2c:  fnstcw -0xa(%ebp)
0833851d +0x2f:  movzwl -0xa(%ebp),%eax
08338521 +0x33:  mov    $0xc,%ah
08338523 +0x35:  mov    %ax,-0xc(%ebp)
08338527 +0x39:  fldcw  -0xc(%ebp)
0833852a +0x3c:  fistpl -0x10(%ebp)
0833852d +0x3f:  fldcw  -0xa(%ebp)
08338530 +0x42:  mov    -0x10(%ebp),%eax
08338533 +0x45:  leave
08338534 +0x46:  ret
08338535 +0x47:  nop
```

## 反编译 C

```c
// user_creature::CCreature::GetStomach @ 0x83384ee

/* user_creature::CCreature::GetStomach() */

int __thiscall user_creature::CCreature::GetStomach(CCreature *this)

{
  longdouble lVar1;
  
  lVar1 = (longdouble)
          CStomach::GetStomachValue
                    ((CStomach *)(this + 0x34),*(undefined4 *)(this + 0x3c),this[0x4c]);
  return (int)ROUND(lVar1);
}
```
