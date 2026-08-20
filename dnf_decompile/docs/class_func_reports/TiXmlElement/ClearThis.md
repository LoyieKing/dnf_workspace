# ClearThis

`_ZN12TiXmlElement9ClearThisEv`

`TiXmlElement::ClearThis()`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e1640` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1640  _ZN12TiXmlElement9ClearThisEv
#           TiXmlElement::ClearThis()
# range [0x087e1640, 0x087e16b9]
087e1640 +0x00:  push   %ebp
087e1641 +0x01:  mov    %esp,%ebp
087e1643 +0x03:  push   %esi
087e1644 +0x04:  push   %ebx
087e1645 +0x05:  sub    $0x10,%esp
087e1648 +0x08:  mov    0x8(%ebp),%esi
087e164b +0x0b:  mov    0x18(%esi),%eax
087e164e +0x0e:  test   %eax,%eax
087e1650 +0x10:  jne    087e165a <+0x1a>
087e1652 +0x12:  jmp    087e1669 <+0x29>
087e1654 +0x14:  lea    0x0(%esi,%eiz,1),%esi
087e1658 +0x18:  mov    %ebx,%eax
087e165a +0x1a:  mov    0x28(%eax),%ebx
087e165d +0x1d:  mov    (%eax),%edx
087e165f +0x1f:  mov    %eax,(%esp)
087e1662 +0x22:  call   *0x4(%edx)
087e1665 +0x25:  test   %ebx,%ebx
087e1667 +0x27:  jne    087e1658 <+0x18>
087e1669 +0x29:  mov    0x4c(%esi),%eax
087e166c +0x2c:  lea    0x2c(%esi),%ebx
087e166f +0x2f:  movl   $0x0,0x18(%esi)
087e1676 +0x36:  movl   $0x0,0x1c(%esi)
087e167d +0x3d:  cmp    %ebx,%eax
087e167f +0x3f:  je     087e16b1 <+0x71>
087e1681 +0x41:  test   %eax,%eax
087e1683 +0x43:  je     087e16b1 <+0x71>
087e1685 +0x45:  mov    0x1c(%eax),%edx
087e1688 +0x48:  mov    0x20(%eax),%ecx
087e168b +0x4b:  mov    %ecx,0x20(%edx)
087e168e +0x4e:  mov    0x20(%eax),%ecx
087e1691 +0x51:  movl   $0x0,0x20(%eax)
087e1698 +0x58:  mov    %edx,0x1c(%ecx)
087e169b +0x5b:  mov    (%eax),%edx
087e169d +0x5d:  movl   $0x0,0x1c(%eax)
087e16a4 +0x64:  mov    %eax,(%esp)
087e16a7 +0x67:  call   *0x4(%edx)
087e16aa +0x6a:  mov    0x4c(%esi),%eax
087e16ad +0x6d:  cmp    %ebx,%eax
087e16af +0x6f:  jne    087e1681 <+0x41>
087e16b1 +0x71:  add    $0x10,%esp
087e16b4 +0x74:  pop    %ebx
087e16b5 +0x75:  pop    %esi
087e16b6 +0x76:  pop    %ebp
087e16b7 +0x77:  ret
087e16b8 +0x78:  nop
087e16b9 +0x79:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TiXmlElement::ClearThis @ 0x87e1640

/* TiXmlElement::ClearThis() */

void __thiscall TiXmlElement::ClearThis(TiXmlElement *this)

{
  int *piVar1;
  TiXmlElement *pTVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = *(int **)(this + 0x18);
  while (piVar5 != (int *)0x0) {
    piVar1 = (int *)piVar5[10];
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar5 = piVar1;
  }
  pTVar2 = *(TiXmlElement **)(this + 0x4c);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  while ((pTVar2 != this + 0x2c && (pTVar2 != (TiXmlElement *)0x0))) {
    iVar3 = *(int *)(pTVar2 + 0x1c);
    *(int *)(iVar3 + 0x20) = *(int *)(pTVar2 + 0x20);
    iVar4 = *(int *)(pTVar2 + 0x20);
    *(int *)(pTVar2 + 0x20) = 0;
    *(int *)(iVar4 + 0x1c) = iVar3;
    *(int *)(pTVar2 + 0x1c) = 0;
    (**(code **)(*(int *)pTVar2 + 4))(pTVar2);
    pTVar2 = *(TiXmlElement **)(this + 0x4c);
  }
  return;
}
```
