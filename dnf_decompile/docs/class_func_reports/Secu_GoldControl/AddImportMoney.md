# AddImportMoney

`_ZN16Secu_GoldControl14AddImportMoneyEj`

`Secu_GoldControl::AddImportMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x082877ba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082877ba  _ZN16Secu_GoldControl14AddImportMoneyEj
#           Secu_GoldControl::AddImportMoney(unsigned int)
# range [0x082877ba, 0x08287849]
082877ba +0x00:  push   %ebp
082877bb +0x01:  mov    %esp,%ebp
082877bd +0x03:  push   %ebx
082877be +0x04:  sub    $0x14,%esp
082877c1 +0x07:  mov    0x8(%ebp),%eax
082877c4 +0x0a:  mov    0x48(%eax),%ecx
082877c7 +0x0d:  mov    0x4c(%eax),%ebx
082877ca +0x10:  mov    0xc(%ebp),%eax
082877cd +0x13:  mov    $0x0,%edx
082877d2 +0x18:  add    %ecx,%eax
082877d4 +0x1a:  adc    %ebx,%edx
082877d6 +0x1c:  mov    0x8(%ebp),%ecx
082877d9 +0x1f:  mov    %eax,0x48(%ecx)
082877dc +0x22:  mov    %edx,0x4c(%ecx)
082877df +0x25:  mov    0x8(%ebp),%eax
082877e2 +0x28:  movzwl 0x76(%eax),%eax
082877e6 +0x2c:  lea    0x1(%eax),%edx
082877e9 +0x2f:  mov    0x8(%ebp),%eax
082877ec +0x32:  mov    %dx,0x76(%eax)
082877f0 +0x36:  mov    0x8(%ebp),%eax
082877f3 +0x39:  mov    0xc(%eax),%ecx
082877f6 +0x3c:  mov    0x10(%eax),%ebx
082877f9 +0x3f:  mov    0xc(%ebp),%eax
082877fc +0x42:  mov    $0x0,%edx
08287801 +0x47:  add    %ecx,%eax
08287803 +0x49:  adc    %ebx,%edx
08287805 +0x4b:  mov    0x8(%ebp),%ecx
08287808 +0x4e:  mov    %eax,0xc(%ecx)
0828780b +0x51:  mov    %edx,0x10(%ecx)
0828780e +0x54:  mov    0x8(%ebp),%eax
08287811 +0x57:  movzwl 0x3a(%eax),%eax
08287815 +0x5b:  lea    0x1(%eax),%edx
08287818 +0x5e:  mov    0x8(%ebp),%eax
0828781b +0x61:  mov    %dx,0x3a(%eax)
0828781f +0x65:  mov    0x8(%ebp),%eax
08287822 +0x68:  mov    (%eax),%eax
08287824 +0x6a:  mov    %eax,(%esp)
08287827 +0x6d:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
0828782c +0x72:  movl   $0x1,0x8(%esp)
08287834 +0x7a:  mov    0xc(%ebp),%edx
08287837 +0x7d:  mov    %edx,0x4(%esp)
0828783b +0x81:  mov    %eax,(%esp)
0828783e +0x84:  call   084b93fa <_ZN8XNuclear6CHades8GoldPlusEjNS_24ENUM_GOLD_CONTROL_REASONE>  ; XNuclear::CHades::GoldPlus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)
08287843 +0x89:  add    $0x14,%esp
08287846 +0x8c:  pop    %ebx
08287847 +0x8d:  pop    %ebp
08287848 +0x8e:  ret
08287849 +0x8f:  nop
```

## 反编译 C

```c
// Secu_GoldControl::AddImportMoney @ 0x82877ba

/* Secu_GoldControl::AddImportMoney(unsigned int) */

void __thiscall Secu_GoldControl::AddImportMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  uVar1 = *(uint *)(this + 0x48);
  *(uint *)(this + 0x48) = param_1 + uVar1;
  *(uint *)(this + 0x4c) = *(int *)(this + 0x4c) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x76) = *(short *)(this + 0x76) + 1;
  uVar1 = *(uint *)(this + 0xc);
  *(uint *)(this + 0xc) = param_1 + uVar1;
  *(uint *)(this + 0x10) = *(int *)(this + 0x10) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x3a) = *(short *)(this + 0x3a) + 1;
  pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
  XNuclear::CHades::GoldPlus(pCVar2,param_1,1);
  return;
}
```
