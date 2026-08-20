# SubImportMoney

`_ZN16Secu_GoldControl14SubImportMoneyEj`

`Secu_GoldControl::SubImportMoney(unsigned int)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287a74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287a74  _ZN16Secu_GoldControl14SubImportMoneyEj
#           Secu_GoldControl::SubImportMoney(unsigned int)
# range [0x08287a74, 0x08287b03]
08287a74 +0x00:  push   %ebp
08287a75 +0x01:  mov    %esp,%ebp
08287a77 +0x03:  push   %ebx
08287a78 +0x04:  sub    $0x14,%esp
08287a7b +0x07:  mov    0x8(%ebp),%eax
08287a7e +0x0a:  mov    0x58(%eax),%ecx
08287a81 +0x0d:  mov    0x5c(%eax),%ebx
08287a84 +0x10:  mov    0xc(%ebp),%eax
08287a87 +0x13:  mov    $0x0,%edx
08287a8c +0x18:  add    %ecx,%eax
08287a8e +0x1a:  adc    %ebx,%edx
08287a90 +0x1c:  mov    0x8(%ebp),%ecx
08287a93 +0x1f:  mov    %eax,0x58(%ecx)
08287a96 +0x22:  mov    %edx,0x5c(%ecx)
08287a99 +0x25:  mov    0x8(%ebp),%eax
08287a9c +0x28:  movzwl 0x7a(%eax),%eax
08287aa0 +0x2c:  lea    0x1(%eax),%edx
08287aa3 +0x2f:  mov    0x8(%ebp),%eax
08287aa6 +0x32:  mov    %dx,0x7a(%eax)
08287aaa +0x36:  mov    0x8(%ebp),%eax
08287aad +0x39:  mov    0x1c(%eax),%ecx
08287ab0 +0x3c:  mov    0x20(%eax),%ebx
08287ab3 +0x3f:  mov    0xc(%ebp),%eax
08287ab6 +0x42:  mov    $0x0,%edx
08287abb +0x47:  add    %ecx,%eax
08287abd +0x49:  adc    %ebx,%edx
08287abf +0x4b:  mov    0x8(%ebp),%ecx
08287ac2 +0x4e:  mov    %eax,0x1c(%ecx)
08287ac5 +0x51:  mov    %edx,0x20(%ecx)
08287ac8 +0x54:  mov    0x8(%ebp),%eax
08287acb +0x57:  movzwl 0x3e(%eax),%eax
08287acf +0x5b:  lea    0x1(%eax),%edx
08287ad2 +0x5e:  mov    0x8(%ebp),%eax
08287ad5 +0x61:  mov    %dx,0x3e(%eax)
08287ad9 +0x65:  mov    0x8(%ebp),%eax
08287adc +0x68:  mov    (%eax),%eax
08287ade +0x6a:  mov    %eax,(%esp)
08287ae1 +0x6d:  call   08230800 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5eaa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5eaa
08287ae6 +0x72:  movl   $0x1,0x8(%esp)
08287aee +0x7a:  mov    0xc(%ebp),%edx
08287af1 +0x7d:  mov    %edx,0x4(%esp)
08287af5 +0x81:  mov    %eax,(%esp)
08287af8 +0x84:  call   084b944a <_ZN8XNuclear6CHades9GoldMinusEjNS_24ENUM_GOLD_CONTROL_REASONE>  ; XNuclear::CHades::GoldMinus(unsigned int, XNuclear::ENUM_GOLD_CONTROL_REASON)
08287afd +0x89:  add    $0x14,%esp
08287b00 +0x8c:  pop    %ebx
08287b01 +0x8d:  pop    %ebp
08287b02 +0x8e:  ret
08287b03 +0x8f:  nop
```

## 反编译 C

```c
// Secu_GoldControl::SubImportMoney @ 0x8287a74

/* Secu_GoldControl::SubImportMoney(unsigned int) */

void __thiscall Secu_GoldControl::SubImportMoney(Secu_GoldControl *this,uint param_1)

{
  uint uVar1;
  CHades *pCVar2;
  
  uVar1 = *(uint *)(this + 0x58);
  *(uint *)(this + 0x58) = param_1 + uVar1;
  *(uint *)(this + 0x5c) = *(int *)(this + 0x5c) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x7a) = *(short *)(this + 0x7a) + 1;
  uVar1 = *(uint *)(this + 0x1c);
  *(uint *)(this + 0x1c) = param_1 + uVar1;
  *(uint *)(this + 0x20) = *(int *)(this + 0x20) + (uint)CARRY4(param_1,uVar1);
  *(short *)(this + 0x3e) = *(short *)(this + 0x3e) + 1;
  pCVar2 = (CHades *)CUser::getHades(*(CUser **)this);
  XNuclear::CHades::GoldMinus(pCVar2,param_1,1);
  return;
}
```
