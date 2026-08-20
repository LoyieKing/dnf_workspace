# checkItemUpgradePossible

`_ZNK10CEquipItem24checkItemUpgradePossibleEv`

`CEquipItem::checkItemUpgradePossible() const`

| 类 | 地址 |
|---|---|
| `CEquipItem` | `0x0851388e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0851388e  _ZNK10CEquipItem24checkItemUpgradePossibleEv
#           CEquipItem::checkItemUpgradePossible() const
# range [0x0851388e, 0x085138e7]
0851388e +0x00:  push   %ebp
0851388f +0x01:  mov    %esp,%ebp
08513891 +0x03:  push   %ebx
08513892 +0x04:  sub    $0x14,%esp
08513895 +0x07:  mov    0x8(%ebp),%eax
08513898 +0x0a:  mov    (%eax),%eax
0851389a +0x0c:  add    $0x30,%eax
0851389d +0x0f:  mov    (%eax),%edx
0851389f +0x11:  mov    0x8(%ebp),%eax
085138a2 +0x14:  mov    %eax,(%esp)
085138a5 +0x17:  call   *%edx
085138a7 +0x19:  test   %al,%al
085138a9 +0x1b:  je     085138b2 <+0x24>
085138ab +0x1d:  mov    $0x0,%eax
085138b0 +0x22:  jmp    085138e2 <+0x54>
085138b2 +0x24:  mov    0x8(%ebp),%eax
085138b5 +0x27:  mov    0x234(%eax),%eax
085138bb +0x2d:  cmp    $0x15,%eax
085138be +0x30:  ja     085138dd <+0x4f>
085138c0 +0x32:  mov    $0x1,%edx
085138c5 +0x37:  mov    %edx,%ebx
085138c7 +0x39:  mov    %eax,%ecx
085138c9 +0x3b:  shl    %cl,%ebx
085138cb +0x3d:  mov    %ebx,%eax
085138cd +0x3f:  and    $0x3ff400,%eax
085138d2 +0x44:  test   %eax,%eax
085138d4 +0x46:  je     085138dd <+0x4f>
085138d6 +0x48:  mov    $0x1,%eax
085138db +0x4d:  jmp    085138e2 <+0x54>
085138dd +0x4f:  mov    $0x0,%eax
085138e2 +0x54:  add    $0x14,%esp
085138e5 +0x57:  pop    %ebx
085138e6 +0x58:  pop    %ebp
085138e7 +0x59:  ret
```

## 反编译 C

```c
// CEquipItem::checkItemUpgradePossible @ 0x851388e

/* CEquipItem::checkItemUpgradePossible() const */

undefined4 __thiscall CEquipItem::checkItemUpgradePossible(CEquipItem *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*(int *)this + 0x30))(this);
  if (cVar1 == '\0') {
    if ((*(uint *)(this + 0x234) < 0x16) &&
       ((1 << ((byte)*(uint *)(this + 0x234) & 0x1f) & 0x3ff400U) != 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
