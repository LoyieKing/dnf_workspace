# IsPowerWarSafeZone

`_ZN9GameWorld18IsPowerWarSafeZoneEii20ENUM_POWER_SIDE_TYPE`

`GameWorld::IsPowerWarSafeZone(int, int, ENUM_POWER_SIDE_TYPE)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c592c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c592c  _ZN9GameWorld18IsPowerWarSafeZoneEii20ENUM_POWER_SIDE_TYPE
#           GameWorld::IsPowerWarSafeZone(int, int, ENUM_POWER_SIDE_TYPE)
# range [0x086c592c, 0x086c59dd]
086c592c +0x00:  push   %ebp
086c592d +0x01:  mov    %esp,%ebp
086c592f +0x03:  sub    $0x28,%esp
086c5932 +0x06:  cmpl   $0x7,0xc(%ebp)
086c5936 +0x0a:  jne    086c594c <+0x20>
086c5938 +0x0c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086c593d +0x11:  mov    %eax,(%esp)
086c5940 +0x14:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
086c5945 +0x19:  xor    $0x1,%eax
086c5948 +0x1c:  test   %al,%al
086c594a +0x1e:  je     086c5953 <+0x27>
086c594c +0x20:  mov    $0x1,%eax
086c5951 +0x25:  jmp    086c5958 <+0x2c>
086c5953 +0x27:  mov    $0x0,%eax
086c5958 +0x2c:  test   %al,%al
086c595a +0x2e:  je     086c5963 <+0x37>
086c595c +0x30:  mov    $0x0,%eax
086c5961 +0x35:  jmp    086c59dc <+0xb0>
086c5963 +0x37:  cmpl   $0x0,0xc(%ebp)
086c5967 +0x3b:  js     086c5973 <+0x47>
086c5969 +0x3d:  mov    &MAX_VILLAGE_NUM,%eax
086c596e +0x42:  cmp    %eax,0xc(%ebp)
086c5971 +0x45:  jl     086c597a <+0x4e>
086c5973 +0x47:  mov    $0x1,%eax
086c5978 +0x4c:  jmp    086c59dc <+0xb0>
086c597a +0x4e:  mov    0x8(%ebp),%eax
086c597d +0x51:  mov    0x1c(%eax),%edx
086c5980 +0x54:  mov    0xc(%ebp),%eax
086c5983 +0x57:  imul   $0x34,%eax,%eax
086c5986 +0x5a:  lea    (%edx,%eax,1),%eax
086c5989 +0x5d:  mov    %eax,-0x10(%ebp)
086c598c +0x60:  mov    0x10(%ebp),%eax
086c598f +0x63:  mov    %eax,0x4(%esp)
086c5993 +0x67:  mov    -0x10(%ebp),%eax
086c5996 +0x6a:  mov    %eax,(%esp)
086c5999 +0x6d:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c599e +0x72:  mov    %eax,-0xc(%ebp)
086c59a1 +0x75:  cmpl   $0x0,-0xc(%ebp)
086c59a5 +0x79:  jne    086c59ae <+0x82>
086c59a7 +0x7b:  mov    $0x1,%eax
086c59ac +0x80:  jmp    086c59dc <+0xb0>
086c59ae +0x82:  cmpl   $0x1,0x14(%ebp)
086c59b2 +0x86:  jne    086c59bf <+0x93>
086c59b4 +0x88:  mov    -0xc(%ebp),%eax
086c59b7 +0x8b:  mov    0x68(%eax),%eax
086c59ba +0x8e:  cmp    $0x5,%eax
086c59bd +0x91:  je     086c59d0 <+0xa4>
086c59bf +0x93:  cmpl   $0x2,0x14(%ebp)
086c59c3 +0x97:  jne    086c59d7 <+0xab>
086c59c5 +0x99:  mov    -0xc(%ebp),%eax
086c59c8 +0x9c:  mov    0x68(%eax),%eax
086c59cb +0x9f:  cmp    $0x6,%eax
086c59ce +0xa2:  jne    086c59d7 <+0xab>
086c59d0 +0xa4:  mov    $0x1,%eax
086c59d5 +0xa9:  jmp    086c59dc <+0xb0>
086c59d7 +0xab:  mov    $0x0,%eax
086c59dc +0xb0:  leave
086c59dd +0xb1:  ret
```

## 反编译 C

```c
// GameWorld::IsPowerWarSafeZone @ 0x86c592c

/* GameWorld::IsPowerWarSafeZone(int, int, ENUM_POWER_SIDE_TYPE) */

undefined4 __thiscall
GameWorld::IsPowerWarSafeZone(GameWorld *this,int param_1,int param_2,int param_4)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 7) {
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_086c5958;
    }
  }
  bVar1 = true;
LAB_086c5958:
  if (bVar1) {
    uVar3 = 0;
  }
  else if ((param_1 < 0) || (MAX_VILLAGE_NUM <= param_1)) {
    uVar3 = 1;
  }
  else {
    iVar4 = Village::getArea((Village *)(*(int *)(this + 0x1c) + param_1 * 0x34),param_2);
    if (iVar4 == 0) {
      uVar3 = 1;
    }
    else if (((param_4 == 1) && (*(int *)(iVar4 + 0x68) == 5)) ||
            ((param_4 == 2 && (*(int *)(iVar4 + 0x68) == 6)))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
