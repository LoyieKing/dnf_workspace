# resetRangeMoney

`_ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_`

`Secu_GoldControl::resetRangeMoney(user_gold_info&, user_gold_info&)`

| 类 | 地址 |
|---|---|
| `Secu_GoldControl` | `0x08287bdc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08287bdc  _ZN16Secu_GoldControl15resetRangeMoneyER14user_gold_infoS1_
#           Secu_GoldControl::resetRangeMoney(user_gold_info&, user_gold_info&)
# range [0x08287bdc, 0x08287df1]
08287bdc +0x000:  push   %ebp
08287bdd +0x001:  mov    %esp,%ebp
08287bdf +0x003:  sub    $0x18,%esp
08287be2 +0x006:  movl   $0x3c,0x8(%esp)
08287bea +0x00e:  mov    0xc(%ebp),%eax
08287bed +0x011:  mov    %eax,0x4(%esp)
08287bf1 +0x015:  mov    0x10(%ebp),%eax
08287bf4 +0x018:  mov    %eax,(%esp)
08287bf7 +0x01b:  call   0807d8a0 <_init+0x198>
08287bfc +0x020:  mov    0xc(%ebp),%eax
08287bff +0x023:  mov    0x4(%eax),%edx
08287c02 +0x026:  mov    (%eax),%eax
08287c04 +0x028:  cmp    $0x0,%edx
08287c07 +0x02b:  jb     08287c3b <+0x5f>
08287c09 +0x02d:  cmp    $0x0,%edx
08287c0c +0x030:  ja     08287c13 <+0x37>
08287c0e +0x032:  cmp    $0xfffffffe,%eax
08287c11 +0x035:  jbe    08287c3b <+0x5f>
08287c13 +0x037:  mov    0x10(%ebp),%eax
08287c16 +0x03a:  movl   $0xffffffff,(%eax)
08287c1c +0x040:  movl   $0x0,0x4(%eax)
08287c23 +0x047:  mov    0xc(%ebp),%eax
08287c26 +0x04a:  mov    0x4(%eax),%edx
08287c29 +0x04d:  mov    (%eax),%eax
08287c2b +0x04f:  add    $0x1,%eax
08287c2e +0x052:  adc    $0xffffffff,%edx
08287c31 +0x055:  mov    0xc(%ebp),%ecx
08287c34 +0x058:  mov    %eax,(%ecx)
08287c36 +0x05a:  mov    %edx,0x4(%ecx)
08287c39 +0x05d:  jmp    08287c4b <+0x6f>
08287c3b +0x05f:  mov    0xc(%ebp),%eax
08287c3e +0x062:  movl   $0x0,(%eax)
08287c44 +0x068:  movl   $0x0,0x4(%eax)
08287c4b +0x06f:  mov    0xc(%ebp),%eax
08287c4e +0x072:  mov    0xc(%eax),%edx
08287c51 +0x075:  mov    0x8(%eax),%eax
08287c54 +0x078:  cmp    $0x0,%edx
08287c57 +0x07b:  jb     08287c8e <+0xb2>
08287c59 +0x07d:  cmp    $0x0,%edx
08287c5c +0x080:  ja     08287c63 <+0x87>
08287c5e +0x082:  cmp    $0xfffffffe,%eax
08287c61 +0x085:  jbe    08287c8e <+0xb2>
08287c63 +0x087:  mov    0x10(%ebp),%eax
08287c66 +0x08a:  movl   $0xffffffff,0x8(%eax)
08287c6d +0x091:  movl   $0x0,0xc(%eax)
08287c74 +0x098:  mov    0xc(%ebp),%eax
08287c77 +0x09b:  mov    0xc(%eax),%edx
08287c7a +0x09e:  mov    0x8(%eax),%eax
08287c7d +0x0a1:  add    $0x1,%eax
08287c80 +0x0a4:  adc    $0xffffffff,%edx
08287c83 +0x0a7:  mov    0xc(%ebp),%ecx
08287c86 +0x0aa:  mov    %eax,0x8(%ecx)
08287c89 +0x0ad:  mov    %edx,0xc(%ecx)
08287c8c +0x0b0:  jmp    08287c9f <+0xc3>
08287c8e +0x0b2:  mov    0xc(%ebp),%eax
08287c91 +0x0b5:  movl   $0x0,0x8(%eax)
08287c98 +0x0bc:  movl   $0x0,0xc(%eax)
08287c9f +0x0c3:  mov    0xc(%ebp),%eax
08287ca2 +0x0c6:  mov    0x14(%eax),%edx
08287ca5 +0x0c9:  mov    0x10(%eax),%eax
08287ca8 +0x0cc:  cmp    $0x0,%edx
08287cab +0x0cf:  jb     08287ce2 <+0x106>
08287cad +0x0d1:  cmp    $0x0,%edx
08287cb0 +0x0d4:  ja     08287cb7 <+0xdb>
08287cb2 +0x0d6:  cmp    $0xfffffffe,%eax
08287cb5 +0x0d9:  jbe    08287ce2 <+0x106>
08287cb7 +0x0db:  mov    0x10(%ebp),%eax
08287cba +0x0de:  movl   $0xffffffff,0x10(%eax)
08287cc1 +0x0e5:  movl   $0x0,0x14(%eax)
08287cc8 +0x0ec:  mov    0xc(%ebp),%eax
08287ccb +0x0ef:  mov    0x14(%eax),%edx
08287cce +0x0f2:  mov    0x10(%eax),%eax
08287cd1 +0x0f5:  add    $0x1,%eax
08287cd4 +0x0f8:  adc    $0xffffffff,%edx
08287cd7 +0x0fb:  mov    0xc(%ebp),%ecx
08287cda +0x0fe:  mov    %eax,0x10(%ecx)
08287cdd +0x101:  mov    %edx,0x14(%ecx)
08287ce0 +0x104:  jmp    08287cf3 <+0x117>
08287ce2 +0x106:  mov    0xc(%ebp),%eax
08287ce5 +0x109:  movl   $0x0,0x10(%eax)
08287cec +0x110:  movl   $0x0,0x14(%eax)
08287cf3 +0x117:  mov    0xc(%ebp),%eax
08287cf6 +0x11a:  mov    0x1c(%eax),%edx
08287cf9 +0x11d:  mov    0x18(%eax),%eax
08287cfc +0x120:  cmp    $0x0,%edx
08287cff +0x123:  jb     08287d36 <+0x15a>
08287d01 +0x125:  cmp    $0x0,%edx
08287d04 +0x128:  ja     08287d0b <+0x12f>
08287d06 +0x12a:  cmp    $0xfffffffe,%eax
08287d09 +0x12d:  jbe    08287d36 <+0x15a>
08287d0b +0x12f:  mov    0x10(%ebp),%eax
08287d0e +0x132:  movl   $0xffffffff,0x18(%eax)
08287d15 +0x139:  movl   $0x0,0x1c(%eax)
08287d1c +0x140:  mov    0xc(%ebp),%eax
08287d1f +0x143:  mov    0x1c(%eax),%edx
08287d22 +0x146:  mov    0x18(%eax),%eax
08287d25 +0x149:  add    $0x1,%eax
08287d28 +0x14c:  adc    $0xffffffff,%edx
08287d2b +0x14f:  mov    0xc(%ebp),%ecx
08287d2e +0x152:  mov    %eax,0x18(%ecx)
08287d31 +0x155:  mov    %edx,0x1c(%ecx)
08287d34 +0x158:  jmp    08287d47 <+0x16b>
08287d36 +0x15a:  mov    0xc(%ebp),%eax
08287d39 +0x15d:  movl   $0x0,0x18(%eax)
08287d40 +0x164:  movl   $0x0,0x1c(%eax)
08287d47 +0x16b:  mov    0xc(%ebp),%eax
08287d4a +0x16e:  mov    0x24(%eax),%edx
08287d4d +0x171:  mov    0x20(%eax),%eax
08287d50 +0x174:  cmp    $0x0,%edx
08287d53 +0x177:  jb     08287d8a <+0x1ae>
08287d55 +0x179:  cmp    $0x0,%edx
08287d58 +0x17c:  ja     08287d5f <+0x183>
08287d5a +0x17e:  cmp    $0xfffffffe,%eax
08287d5d +0x181:  jbe    08287d8a <+0x1ae>
08287d5f +0x183:  mov    0x10(%ebp),%eax
08287d62 +0x186:  movl   $0xffffffff,0x20(%eax)
08287d69 +0x18d:  movl   $0x0,0x24(%eax)
08287d70 +0x194:  mov    0xc(%ebp),%eax
08287d73 +0x197:  mov    0x24(%eax),%edx
08287d76 +0x19a:  mov    0x20(%eax),%eax
08287d79 +0x19d:  add    $0x1,%eax
08287d7c +0x1a0:  adc    $0xffffffff,%edx
08287d7f +0x1a3:  mov    0xc(%ebp),%ecx
08287d82 +0x1a6:  mov    %eax,0x20(%ecx)
08287d85 +0x1a9:  mov    %edx,0x24(%ecx)
08287d88 +0x1ac:  jmp    08287d9b <+0x1bf>
08287d8a +0x1ae:  mov    0xc(%ebp),%eax
08287d8d +0x1b1:  movl   $0x0,0x20(%eax)
08287d94 +0x1b8:  movl   $0x0,0x24(%eax)
08287d9b +0x1bf:  mov    0xc(%ebp),%eax
08287d9e +0x1c2:  mov    0x2c(%eax),%edx
08287da1 +0x1c5:  mov    0x28(%eax),%eax
08287da4 +0x1c8:  cmp    $0x0,%edx
08287da7 +0x1cb:  jb     08287dde <+0x202>
08287da9 +0x1cd:  cmp    $0x0,%edx
08287dac +0x1d0:  ja     08287db3 <+0x1d7>
08287dae +0x1d2:  cmp    $0xfffffffe,%eax
08287db1 +0x1d5:  jbe    08287dde <+0x202>
08287db3 +0x1d7:  mov    0x10(%ebp),%eax
08287db6 +0x1da:  movl   $0xffffffff,0x28(%eax)
08287dbd +0x1e1:  movl   $0x0,0x2c(%eax)
08287dc4 +0x1e8:  mov    0xc(%ebp),%eax
08287dc7 +0x1eb:  mov    0x2c(%eax),%edx
08287dca +0x1ee:  mov    0x28(%eax),%eax
08287dcd +0x1f1:  add    $0x1,%eax
08287dd0 +0x1f4:  adc    $0xffffffff,%edx
08287dd3 +0x1f7:  mov    0xc(%ebp),%ecx
08287dd6 +0x1fa:  mov    %eax,0x28(%ecx)
08287dd9 +0x1fd:  mov    %edx,0x2c(%ecx)
08287ddc +0x200:  jmp    08287def <+0x213>
08287dde +0x202:  mov    0xc(%ebp),%eax
08287de1 +0x205:  movl   $0x0,0x28(%eax)
08287de8 +0x20c:  movl   $0x0,0x2c(%eax)
08287def +0x213:  leave
08287df0 +0x214:  ret
08287df1 +0x215:  nop
```

## 反编译 C

```c
// Secu_GoldControl::resetRangeMoney @ 0x8287bdc

/* Secu_GoldControl::resetRangeMoney(user_gold_info&, user_gold_info&) */

void __thiscall
Secu_GoldControl::resetRangeMoney
          (Secu_GoldControl *this,user_gold_info *param_1,user_gold_info *param_2)

{
  uint uVar1;
  
  memcpy(param_2,param_1,0x3c);
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)param_1 != -1)) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    *(undefined4 *)param_2 = 0xffffffff;
    *(undefined4 *)(param_2 + 4) = 0;
    uVar1 = *(uint *)param_1;
    *(uint *)param_1 = uVar1 + 1;
    *(uint *)(param_1 + 4) = *(int *)(param_1 + 4) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 8) != -1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 8) = 0xffffffff;
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar1 = *(uint *)(param_1 + 8);
    *(uint *)(param_1 + 8) = uVar1 + 1;
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0x14) == 0) && (*(int *)(param_1 + 0x10) != -1)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x10) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x14) = 0;
    uVar1 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = uVar1 + 1;
    *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x18) != -1)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    uVar1 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0x24) == 0) && (*(int *)(param_1 + 0x20) != -1)) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x24) = 0;
    uVar1 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = uVar1 + 1;
    *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1 + (uint)(0xfffffffe < uVar1);
  }
  if ((*(int *)(param_1 + 0x2c) == 0) && (*(int *)(param_1 + 0x28) != -1)) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar1 = *(uint *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = uVar1 + 1;
    *(uint *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1 + (uint)(0xfffffffe < uVar1);
  }
  return;
}
```
