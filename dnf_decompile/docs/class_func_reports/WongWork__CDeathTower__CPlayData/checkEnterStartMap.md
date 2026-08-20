# checkEnterStartMap

`_ZN8WongWork11CDeathTower9CPlayData18checkEnterStartMapEi`

`WongWork::CDeathTower::CPlayData::checkEnterStartMap(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPlayData` | `0x08461e4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461e4a  _ZN8WongWork11CDeathTower9CPlayData18checkEnterStartMapEi
#           WongWork::CDeathTower::CPlayData::checkEnterStartMap(int)
# range [0x08461e4a, 0x08461e7d]
08461e4a +0x00:  push   %ebp
08461e4b +0x01:  mov    %esp,%ebp
08461e4d +0x03:  mov    0xc(%ebp),%eax
08461e50 +0x06:  mov    0x8(%ebp),%edx
08461e53 +0x09:  movzbl 0xa28(%edx,%eax,1),%eax
08461e5b +0x11:  xor    $0x1,%eax
08461e5e +0x14:  test   %al,%al
08461e60 +0x16:  je     08461e77 <+0x2d>
08461e62 +0x18:  mov    0xc(%ebp),%eax
08461e65 +0x1b:  mov    0x8(%ebp),%edx
08461e68 +0x1e:  movb   $0x1,0xa28(%edx,%eax,1)
08461e70 +0x26:  mov    $0x1,%eax
08461e75 +0x2b:  jmp    08461e7c <+0x32>
08461e77 +0x2d:  mov    $0x0,%eax
08461e7c +0x32:  pop    %ebp
08461e7d +0x33:  ret
```

## 反编译 C

```c
// WongWork::CDeathTower::CPlayData::checkEnterStartMap @ 0x8461e4a

/* WongWork::CDeathTower::CPlayData::checkEnterStartMap(int) */

bool __thiscall WongWork::CDeathTower::CPlayData::checkEnterStartMap(CPlayData *this,int param_1)

{
  CPlayData CVar1;
  
  CVar1 = this[param_1 + 0xa28];
  if (CVar1 != (CPlayData)0x1) {
    this[param_1 + 0xa28] = (CPlayData)0x1;
  }
  return CVar1 != (CPlayData)0x1;
}
```
