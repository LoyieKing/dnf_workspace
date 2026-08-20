# getPackedCodeArray1

`_ZN10CInventory19getPackedCodeArray1EPmi`

`CInventory::getPackedCodeArray1(unsigned long*, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fa4ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fa4ac  _ZN10CInventory19getPackedCodeArray1EPmi
#           CInventory::getPackedCodeArray1(unsigned long*, int)
# range [0x084fa4ac, 0x084fa66b]
084fa4ac +0x000:  push   %ebp
084fa4ad +0x001:  mov    %esp,%ebp
084fa4af +0x003:  sub    $0x48,%esp
084fa4b2 +0x006:  movl   $0x0,-0x30(%ebp)
084fa4b9 +0x00d:  movl   $0x0,-0x2c(%ebp)
084fa4c0 +0x014:  movl   $0x0,-0x2c(%ebp)
084fa4c7 +0x01b:  jmp    084fa519 <+0x6d>
084fa4c9 +0x01d:  mov    -0x2c(%ebp),%eax
084fa4cc +0x020:  imul   $0x3d,%eax,%eax
084fa4cf +0x023:  add    $0x10,%eax
084fa4d2 +0x026:  add    0x8(%ebp),%eax
084fa4d5 +0x029:  add    $0xc,%eax
084fa4d8 +0x02c:  mov    %eax,-0x28(%ebp)
084fa4db +0x02f:  mov    -0x28(%ebp),%eax
084fa4de +0x032:  mov    0x2(%eax),%eax
084fa4e1 +0x035:  test   %eax,%eax
084fa4e3 +0x037:  je     084fa515 <+0x69>
084fa4e5 +0x039:  mov    -0x28(%ebp),%eax
084fa4e8 +0x03c:  mov    %eax,(%esp)
084fa4eb +0x03f:  call   0850d102 <_GLOBAL__I_g_emptySlot+0x37>  ; global constructors keyed to g_emptySlot+0x37
084fa4f0 +0x044:  mov    %eax,-0x24(%ebp)
084fa4f3 +0x047:  mov    -0x30(%ebp),%eax
084fa4f6 +0x04a:  shl    $0x2,%eax
084fa4f9 +0x04d:  add    0xc(%ebp),%eax
084fa4fc +0x050:  mov    -0x24(%ebp),%edx
084fa4ff +0x053:  mov    %edx,(%eax)
084fa501 +0x055:  addl   $0x1,-0x30(%ebp)
084fa505 +0x059:  mov    0x10(%ebp),%eax
084fa508 +0x05c:  cmp    -0x30(%ebp),%eax
084fa50b +0x05f:  jg     084fa515 <+0x69>
084fa50d +0x061:  mov    -0x30(%ebp),%eax
084fa510 +0x064:  jmp    084fa66a <+0x1be>
084fa515 +0x069:  addl   $0x1,-0x2c(%ebp)
084fa519 +0x06d:  cmpl   $0x19,-0x2c(%ebp)
084fa51d +0x071:  setle  %al
084fa520 +0x074:  test   %al,%al
084fa522 +0x076:  jne    084fa4c9 <+0x1d>
084fa524 +0x078:  movl   $0x0,-0x2c(%ebp)
084fa52b +0x07f:  movl   $0x0,-0x2c(%ebp)
084fa532 +0x086:  jmp    084fa587 <+0xdb>
084fa534 +0x088:  mov    0x8(%ebp),%eax
084fa537 +0x08b:  mov    0x650(%eax),%edx
084fa53d +0x091:  mov    -0x2c(%ebp),%eax
084fa540 +0x094:  imul   $0x3d,%eax,%eax
084fa543 +0x097:  lea    (%edx,%eax,1),%eax
084fa546 +0x09a:  mov    %eax,-0x20(%ebp)
084fa549 +0x09d:  mov    -0x20(%ebp),%eax
084fa54c +0x0a0:  mov    0x2(%eax),%eax
084fa54f +0x0a3:  test   %eax,%eax
084fa551 +0x0a5:  je     084fa583 <+0xd7>
084fa553 +0x0a7:  mov    -0x20(%ebp),%eax
084fa556 +0x0aa:  mov    %eax,(%esp)
084fa559 +0x0ad:  call   0850d102 <_GLOBAL__I_g_emptySlot+0x37>  ; global constructors keyed to g_emptySlot+0x37
084fa55e +0x0b2:  mov    %eax,-0x1c(%ebp)
084fa561 +0x0b5:  mov    -0x30(%ebp),%eax
084fa564 +0x0b8:  shl    $0x2,%eax
084fa567 +0x0bb:  add    0xc(%ebp),%eax
084fa56a +0x0be:  mov    -0x1c(%ebp),%edx
084fa56d +0x0c1:  mov    %edx,(%eax)
084fa56f +0x0c3:  addl   $0x1,-0x30(%ebp)
084fa573 +0x0c7:  mov    0x10(%ebp),%eax
084fa576 +0x0ca:  cmp    -0x30(%ebp),%eax
084fa579 +0x0cd:  jg     084fa583 <+0xd7>
084fa57b +0x0cf:  mov    -0x30(%ebp),%eax
084fa57e +0x0d2:  jmp    084fa66a <+0x1be>
084fa583 +0x0d7:  addl   $0x1,-0x2c(%ebp)
084fa587 +0x0db:  cmpl   $0x137,-0x2c(%ebp)
084fa58e +0x0e2:  setle  %al
084fa591 +0x0e5:  test   %al,%al
084fa593 +0x0e7:  jne    084fa534 <+0x88>
084fa595 +0x0e9:  movl   $0x0,-0x2c(%ebp)
084fa59c +0x0f0:  movl   $0x0,-0x2c(%ebp)
084fa5a3 +0x0f7:  jmp    084fa5f5 <+0x149>
084fa5a5 +0x0f9:  mov    0x8(%ebp),%eax
084fa5a8 +0x0fc:  mov    0x654(%eax),%edx
084fa5ae +0x102:  mov    -0x2c(%ebp),%eax
084fa5b1 +0x105:  imul   $0x3d,%eax,%eax
084fa5b4 +0x108:  lea    (%edx,%eax,1),%eax
084fa5b7 +0x10b:  mov    %eax,-0x18(%ebp)
084fa5ba +0x10e:  mov    -0x18(%ebp),%eax
084fa5bd +0x111:  mov    0x2(%eax),%eax
084fa5c0 +0x114:  test   %eax,%eax
084fa5c2 +0x116:  je     084fa5f1 <+0x145>
084fa5c4 +0x118:  mov    -0x18(%ebp),%eax
084fa5c7 +0x11b:  mov    %eax,(%esp)
084fa5ca +0x11e:  call   0850d102 <_GLOBAL__I_g_emptySlot+0x37>  ; global constructors keyed to g_emptySlot+0x37
084fa5cf +0x123:  mov    %eax,-0x14(%ebp)
084fa5d2 +0x126:  mov    -0x30(%ebp),%eax
084fa5d5 +0x129:  shl    $0x2,%eax
084fa5d8 +0x12c:  add    0xc(%ebp),%eax
084fa5db +0x12f:  mov    -0x14(%ebp),%edx
084fa5de +0x132:  mov    %edx,(%eax)
084fa5e0 +0x134:  addl   $0x1,-0x30(%ebp)
084fa5e4 +0x138:  mov    0x10(%ebp),%eax
084fa5e7 +0x13b:  cmp    -0x30(%ebp),%eax
084fa5ea +0x13e:  jg     084fa5f1 <+0x145>
084fa5ec +0x140:  mov    -0x30(%ebp),%eax
084fa5ef +0x143:  jmp    084fa66a <+0x1be>
084fa5f1 +0x145:  addl   $0x1,-0x2c(%ebp)
084fa5f5 +0x149:  cmpl   $0x68,-0x2c(%ebp)
084fa5f9 +0x14d:  setle  %al
084fa5fc +0x150:  test   %al,%al
084fa5fe +0x152:  jne    084fa5a5 <+0xf9>
084fa600 +0x154:  movl   $0x0,-0x2c(%ebp)
084fa607 +0x15b:  jmp    084fa659 <+0x1ad>
084fa609 +0x15d:  mov    0x8(%ebp),%eax
084fa60c +0x160:  mov    0x6e4(%eax),%edx
084fa612 +0x166:  mov    -0x2c(%ebp),%eax
084fa615 +0x169:  imul   $0x3d,%eax,%eax
084fa618 +0x16c:  lea    (%edx,%eax,1),%eax
084fa61b +0x16f:  mov    %eax,-0x10(%ebp)
084fa61e +0x172:  mov    -0x10(%ebp),%eax
084fa621 +0x175:  mov    0x2(%eax),%eax
084fa624 +0x178:  test   %eax,%eax
084fa626 +0x17a:  je     084fa655 <+0x1a9>
084fa628 +0x17c:  mov    -0x10(%ebp),%eax
084fa62b +0x17f:  mov    %eax,(%esp)
084fa62e +0x182:  call   0850d102 <_GLOBAL__I_g_emptySlot+0x37>  ; global constructors keyed to g_emptySlot+0x37
084fa633 +0x187:  mov    %eax,-0xc(%ebp)
084fa636 +0x18a:  mov    -0x30(%ebp),%eax
084fa639 +0x18d:  shl    $0x2,%eax
084fa63c +0x190:  add    0xc(%ebp),%eax
084fa63f +0x193:  mov    -0xc(%ebp),%edx
084fa642 +0x196:  mov    %edx,(%eax)
084fa644 +0x198:  addl   $0x1,-0x30(%ebp)
084fa648 +0x19c:  mov    0x10(%ebp),%eax
084fa64b +0x19f:  cmp    -0x30(%ebp),%eax
084fa64e +0x1a2:  jg     084fa655 <+0x1a9>
084fa650 +0x1a4:  mov    -0x30(%ebp),%eax
084fa653 +0x1a7:  jmp    084fa66a <+0x1be>
084fa655 +0x1a9:  addl   $0x1,-0x2c(%ebp)
084fa659 +0x1ad:  cmpl   $0xf1,-0x2c(%ebp)
084fa660 +0x1b4:  setle  %al
084fa663 +0x1b7:  test   %al,%al
084fa665 +0x1b9:  jne    084fa609 <+0x15d>
084fa667 +0x1bb:  mov    -0x30(%ebp),%eax
084fa66a +0x1be:  leave
084fa66b +0x1bf:  ret
```

## 反编译 C

```c
// CInventory::getPackedCodeArray1 @ 0x84fa4ac

/* CInventory::getPackedCodeArray1(unsigned long*, int) */

int __thiscall CInventory::getPackedCodeArray1(CInventory *this,ulong *param_1,int param_2)

{
  Inven_Item *pIVar1;
  ulong uVar2;
  int local_34;
  int local_30;
  
  local_34 = 0;
  for (local_30 = 0; local_30 < 0x1a; local_30 = local_30 + 1) {
    if (*(int *)(this + local_30 * 0x3d + 0x1e) != 0) {
      uVar2 = Inven_Item::getPackedCode1((Inven_Item *)(this + local_30 * 0x3d + 0x1c));
      param_1[local_34] = uVar2;
      local_34 = local_34 + 1;
      if (param_2 <= local_34) {
        return local_34;
      }
    }
  }
  for (local_30 = 0; local_30 < 0x138; local_30 = local_30 + 1) {
    pIVar1 = (Inven_Item *)(*(int *)(this + 0x650) + local_30 * 0x3d);
    if (*(int *)(pIVar1 + 2) != 0) {
      uVar2 = Inven_Item::getPackedCode1(pIVar1);
      param_1[local_34] = uVar2;
      local_34 = local_34 + 1;
      if (param_2 <= local_34) {
        return local_34;
      }
    }
  }
  for (local_30 = 0; local_30 < 0x69; local_30 = local_30 + 1) {
    pIVar1 = (Inven_Item *)(*(int *)(this + 0x654) + local_30 * 0x3d);
    if (*(int *)(pIVar1 + 2) != 0) {
      uVar2 = Inven_Item::getPackedCode1(pIVar1);
      param_1[local_34] = uVar2;
      local_34 = local_34 + 1;
      if (param_2 <= local_34) {
        return local_34;
      }
    }
  }
  local_30 = 0;
  do {
    if (0xf1 < local_30) {
      return local_34;
    }
    pIVar1 = (Inven_Item *)(*(int *)(this + 0x6e4) + local_30 * 0x3d);
    if (*(int *)(pIVar1 + 2) != 0) {
      uVar2 = Inven_Item::getPackedCode1(pIVar1);
      param_1[local_34] = uVar2;
      local_34 = local_34 + 1;
      if (param_2 <= local_34) {
        return local_34;
      }
    }
    local_30 = local_30 + 1;
  } while( true );
}
```
