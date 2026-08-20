# setState

`_ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE`

`WongWork::CDeathTower::CStage::setState(WongWork::CDeathTower::ENUM_STAGE_STATE)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x08461c5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461c5a  _ZN8WongWork11CDeathTower6CStage8setStateENS0_16ENUM_STAGE_STATEE
#           WongWork::CDeathTower::CStage::setState(WongWork::CDeathTower::ENUM_STAGE_STATE)
# range [0x08461c5a, 0x08461cb3]
08461c5a +0x00:  push   %ebp
08461c5b +0x01:  mov    %esp,%ebp
08461c5d +0x03:  mov    0xc(%ebp),%eax
08461c60 +0x06:  cmp    $0x1,%eax
08461c63 +0x09:  je     08461c6c <+0x12>
08461c65 +0x0b:  cmp    $0x2,%eax
08461c68 +0x0e:  je     08461c80 <+0x26>
08461c6a +0x10:  jmp    08461c95 <+0x3b>
08461c6c +0x12:  mov    0x8(%ebp),%eax
08461c6f +0x15:  mov    0xf8(%eax),%eax
08461c75 +0x1b:  test   %eax,%eax
08461c77 +0x1d:  je     08461c9c <+0x42>
08461c79 +0x1f:  mov    $0x0,%eax
08461c7e +0x24:  jmp    08461cb1 <+0x57>
08461c80 +0x26:  mov    0x8(%ebp),%eax
08461c83 +0x29:  mov    0xf8(%eax),%eax
08461c89 +0x2f:  cmp    $0x1,%eax
08461c8c +0x32:  je     08461c9f <+0x45>
08461c8e +0x34:  mov    $0x0,%eax
08461c93 +0x39:  jmp    08461cb1 <+0x57>
08461c95 +0x3b:  mov    $0x0,%eax
08461c9a +0x40:  jmp    08461cb1 <+0x57>
08461c9c +0x42:  nop
08461c9d +0x43:  jmp    08461ca0 <+0x46>
08461c9f +0x45:  nop
08461ca0 +0x46:  mov    0x8(%ebp),%eax
08461ca3 +0x49:  mov    0xc(%ebp),%edx
08461ca6 +0x4c:  mov    %edx,0xf8(%eax)
08461cac +0x52:  mov    $0x1,%eax
08461cb1 +0x57:  pop    %ebp
08461cb2 +0x58:  ret
08461cb3 +0x59:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::setState @ 0x8461c5a

/* WongWork::CDeathTower::CStage::setState(WongWork::CDeathTower::ENUM_STAGE_STATE) */

undefined4 __thiscall WongWork::CDeathTower::CStage::setState(CStage *this,int param_2)

{
  if (param_2 == 1) {
    if (*(int *)(this + 0xf8) != 0) {
      return 0;
    }
  }
  else {
    if (param_2 != 2) {
      return 0;
    }
    if (*(int *)(this + 0xf8) != 1) {
      return 0;
    }
  }
  *(int *)(this + 0xf8) = param_2;
  return 1;
}
```
