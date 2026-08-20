# SubAuctionMoney

`_ZN16Secu_GoldControl15SubAuctionMoneyEj`

`Secu_GoldControl::SubAuctionMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x0828795a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828795a  _ZN16Secu_GoldControl15SubAuctionMoneyEj
#           Secu_GoldControl::SubAuctionMoney(unsigned int)
# range [0x0828795a, 0x082879e3]
0828795a +0x00:  push   %ebp
0828795b +0x01:  mov    %esp,%ebp
0828795d +0x03:  push   %ebx
0828795e +0x04:  sub    $0x14,%esp
08287961 +0x07:  cmpl   $0x1387,0xc(%ebp)
08287968 +0x0e:  jbe    082879dd <+0x83>
0828796a +0x10:  mov    0x8(%ebp),%eax
0828796d +0x13:  mov    0x68(%eax),%ecx
08287970 +0x16:  mov    0x6c(%eax),%ebx
08287973 +0x19:  mov    0xc(%ebp),%eax
08287976 +0x1c:  mov    $0x0,%edx
0828797b +0x21:  add    %ecx,%eax
0828797d +0x23:  adc    %ebx,%edx
0828797f +0x25:  mov    0x8(%ebp),%ecx
08287982 +0x28:  mov    %eax,0x68(%ecx)
08287985 +0x2b:  mov    %edx,0x6c(%ecx)
08287988 +0x2e:  mov    0x8(%ebp),%eax
0828798b +0x31:  mov    0x2c(%eax),%ecx
0828798e +0x34:  mov    0x30(%eax),%ebx
08287991 +0x37:  mov    0xc(%ebp),%eax
08287994 +0x3a:  mov    $0x0,%edx
08287999 +0x3f:  add    %ecx,%eax
0828799b +0x41:  adc    %ebx,%edx
0828799d +0x43:  mov    0x8(%ebp),%ecx
082879a0 +0x46:  mov    %eax,0x2c(%ecx)
082879a3 +0x49:  mov    %edx,0x30(%ecx)
082879a6 +0x4c:  mov    0x8(%ebp),%eax
082879a9 +0x4f:  movzwl 0x36(%eax),%eax
082879ad +0x53:  lea    0x1(%eax),%edx
082879b0 +0x56:  mov    0x8(%ebp),%eax
082879b3 +0x59:  mov    %dx,0x36(%eax)
082879b7 +0x5d:  mov    0x8(%ebp),%eax
082879ba +0x60:  mov    (%eax),%eax
082879bc +0x62:  mov    %eax,(%esp)
082879bf +0x65:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
082879c4 +0x6a:  movl   $0x2,0x8(%esp)
082879cc +0x72:  mov    0xc(%ebp),%edx
082879cf +0x75:  mov    %edx,0x4(%esp)
082879d3 +0x79:  mov    %eax,(%esp)
082879d6 +0x7c:  call   084b944a <_ZN8XNuclear6CHades9GoldMinusEjNS_24ENUM_GOLD_CONTROL_REASONE>  ; XNuclear::CHades::GoldMinus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)
082879db +0x81:  jmp    082879de <+0x84>
082879dd +0x83:  nop
082879de +0x84:  add    $0x14,%esp
082879e1 +0x87:  pop    %ebx
082879e2 +0x88:  pop    %ebp
082879e3 +0x89:  ret
```

## 反编译 C

```c
// Secu_GoldControl::SubAuctionMoney @ 0x828795a

/* Secu_GoldControl::SubAuctionMoney(unsigned int) */

void __thiscall Secu_GoldControl::SubAuctionMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  if (4999 < param_1) {
    uVar1 = *(uint *)(this + 0x68);
    *(uint *)(this + 0x68) = param_1 + uVar1;
    *(uint *)(this + 0x6c) = *(int *)(this + 0x6c) + (uint)CARRY4(param_1,uVar1);
    uVar1 = *(uint *)(this + 0x2c);
    *(uint *)(this + 0x2c) = param_1 + uVar1;
    *(uint *)(this + 0x30) = *(int *)(this + 0x30) + (uint)CARRY4(param_1,uVar1);
    *(short *)(this + 0x36) = *(short *)(this + 0x36) + 1;
    pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
    XNuclear::CHades::GoldMinus(pCVar2,param_1,2);
  }
  return;
}
```
