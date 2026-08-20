# SubMoney

`_ZN16Secu_GoldControl8SubMoneyEj`

`Secu_GoldControl::SubMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x082879e4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082879e4  _ZN16Secu_GoldControl8SubMoneyEj
#           Secu_GoldControl::SubMoney(unsigned int)
# range [0x082879e4, 0x08287a73]
082879e4 +0x00:  push   %ebp
082879e5 +0x01:  mov    %esp,%ebp
082879e7 +0x03:  push   %ebx
082879e8 +0x04:  sub    $0x14,%esp
082879eb +0x07:  mov    0x8(%ebp),%eax
082879ee +0x0a:  mov    0x50(%eax),%ecx
082879f1 +0x0d:  mov    0x54(%eax),%ebx
082879f4 +0x10:  mov    0xc(%ebp),%eax
082879f7 +0x13:  mov    $0x0,%edx
082879fc +0x18:  add    %ecx,%eax
082879fe +0x1a:  adc    %ebx,%edx
08287a00 +0x1c:  mov    0x8(%ebp),%ecx
08287a03 +0x1f:  mov    %eax,0x50(%ecx)
08287a06 +0x22:  mov    %edx,0x54(%ecx)
08287a09 +0x25:  mov    0x8(%ebp),%eax
08287a0c +0x28:  movzwl 0x78(%eax),%eax
08287a10 +0x2c:  lea    0x1(%eax),%edx
08287a13 +0x2f:  mov    0x8(%ebp),%eax
08287a16 +0x32:  mov    %dx,0x78(%eax)
08287a1a +0x36:  mov    0x8(%ebp),%eax
08287a1d +0x39:  mov    0x14(%eax),%ecx
08287a20 +0x3c:  mov    0x18(%eax),%ebx
08287a23 +0x3f:  mov    0xc(%ebp),%eax
08287a26 +0x42:  mov    $0x0,%edx
08287a2b +0x47:  add    %ecx,%eax
08287a2d +0x49:  adc    %ebx,%edx
08287a2f +0x4b:  mov    0x8(%ebp),%ecx
08287a32 +0x4e:  mov    %eax,0x14(%ecx)
08287a35 +0x51:  mov    %edx,0x18(%ecx)
08287a38 +0x54:  mov    0x8(%ebp),%eax
08287a3b +0x57:  movzwl 0x3c(%eax),%eax
08287a3f +0x5b:  lea    0x1(%eax),%edx
08287a42 +0x5e:  mov    0x8(%ebp),%eax
08287a45 +0x61:  mov    %dx,0x3c(%eax)
08287a49 +0x65:  mov    0x8(%ebp),%eax
08287a4c +0x68:  mov    (%eax),%eax
08287a4e +0x6a:  mov    %eax,(%esp)
08287a51 +0x6d:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08287a56 +0x72:  movl   $0x0,0x8(%esp)
08287a5e +0x7a:  mov    0xc(%ebp),%edx
08287a61 +0x7d:  mov    %edx,0x4(%esp)
08287a65 +0x81:  mov    %eax,(%esp)
08287a68 +0x84:  call   084b944a <_ZN8XNuclear6CHades9GoldMinusEjNS_24ENUM_GOLD_CONTROL_REASONE>  ; XNuclear::CHades::GoldMinus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)
08287a6d +0x89:  add    $0x14,%esp
08287a70 +0x8c:  pop    %ebx
08287a71 +0x8d:  pop    %ebp
08287a72 +0x8e:  ret
08287a73 +0x8f:  nop
```

## 反编译 C

```c
// Secu_GoldControl::SubMoney @ 0x82879e4

/* Secu_GoldControl::SubMoney(unsigned int) */

void __thiscall Secu_GoldControl::SubMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  uVar1 = *(uint *)(this + 0x50);
  *(uint *)(this + 0x50) = param_1 + uVar1;
  *(uint *)(this + 0x54) = *(int *)(this + 0x54) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x78) = *(short *)(this + 0x78) + 1;
  uVar1 = *(uint *)(this + 0x14);
  *(uint *)(this + 0x14) = param_1 + uVar1;
  *(uint *)(this + 0x18) = *(int *)(this + 0x18) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x3c) = *(short *)(this + 0x3c) + 1;
  pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
  XNuclear::CHades::GoldMinus(pCVar2,param_1,0);
  return;
}
```
