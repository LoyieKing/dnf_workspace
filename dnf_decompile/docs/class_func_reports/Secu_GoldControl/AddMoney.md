# AddMoney

`_ZN16Secu_GoldControl8AddMoneyEj`

`Secu_GoldControl::AddMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x0828772a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828772a  _ZN16Secu_GoldControl8AddMoneyEj
#           Secu_GoldControl::AddMoney(unsigned int)
# range [0x0828772a, 0x082877b9]
0828772a +0x00:  push   %ebp
0828772b +0x01:  mov    %esp,%ebp
0828772d +0x03:  push   %ebx
0828772e +0x04:  sub    $0x14,%esp
08287731 +0x07:  mov    0x8(%ebp),%eax
08287734 +0x0a:  mov    0x40(%eax),%ecx
08287737 +0x0d:  mov    0x44(%eax),%ebx
0828773a +0x10:  mov    0xc(%ebp),%eax
0828773d +0x13:  mov    $0x0,%edx
08287742 +0x18:  add    %ecx,%eax
08287744 +0x1a:  adc    %ebx,%edx
08287746 +0x1c:  mov    0x8(%ebp),%ecx
08287749 +0x1f:  mov    %eax,0x40(%ecx)
0828774c +0x22:  mov    %edx,0x44(%ecx)
0828774f +0x25:  mov    0x8(%ebp),%eax
08287752 +0x28:  movzwl 0x74(%eax),%eax
08287756 +0x2c:  lea    0x1(%eax),%edx
08287759 +0x2f:  mov    0x8(%ebp),%eax
0828775c +0x32:  mov    %dx,0x74(%eax)
08287760 +0x36:  mov    0x8(%ebp),%eax
08287763 +0x39:  mov    0x4(%eax),%ecx
08287766 +0x3c:  mov    0x8(%eax),%ebx
08287769 +0x3f:  mov    0xc(%ebp),%eax
0828776c +0x42:  mov    $0x0,%edx
08287771 +0x47:  add    %ecx,%eax
08287773 +0x49:  adc    %ebx,%edx
08287775 +0x4b:  mov    0x8(%ebp),%ecx
08287778 +0x4e:  mov    %eax,0x4(%ecx)
0828777b +0x51:  mov    %edx,0x8(%ecx)
0828777e +0x54:  mov    0x8(%ebp),%eax
08287781 +0x57:  movzwl 0x38(%eax),%eax
08287785 +0x5b:  lea    0x1(%eax),%edx
08287788 +0x5e:  mov    0x8(%ebp),%eax
0828778b +0x61:  mov    %dx,0x38(%eax)
0828778f +0x65:  mov    0x8(%ebp),%eax
08287792 +0x68:  mov    (%eax),%eax
08287794 +0x6a:  mov    %eax,(%esp)
08287797 +0x6d:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
0828779c +0x72:  movl   $0x0,0x8(%esp)
082877a4 +0x7a:  mov    0xc(%ebp),%edx
082877a7 +0x7d:  mov    %edx,0x4(%esp)
082877ab +0x81:  mov    %eax,(%esp)
082877ae +0x84:  call   084b93fa <_ZN8XNuclear6CHades8GoldPlusEjNS_24ENUM_GOLD_CONTROL_REASONE>  ; XNuclear::CHades::GoldPlus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)
082877b3 +0x89:  add    $0x14,%esp
082877b6 +0x8c:  pop    %ebx
082877b7 +0x8d:  pop    %ebp
082877b8 +0x8e:  ret
082877b9 +0x8f:  nop
```

## 反编译 C

```c
// Secu_GoldControl::AddMoney @ 0x828772a

/* Secu_GoldControl::AddMoney(unsigned int) */

void __thiscall Secu_GoldControl::AddMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  uVar1 = *(uint *)(this + 0x40);
  *(uint *)(this + 0x40) = param_1 + uVar1;
  *(uint *)(this + 0x44) = *(int *)(this + 0x44) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x74) = *(short *)(this + 0x74) + 1;
  uVar1 = *(uint *)(this + 4);
  *(uint *)(this + 4) = param_1 + uVar1;
  *(uint *)(this + 8) = *(int *)(this + 8) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x38) = *(short *)(this + 0x38) + 1;
  pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
  XNuclear::CHades::GoldPlus(pCVar2,param_1,0);
  return;
}
```
