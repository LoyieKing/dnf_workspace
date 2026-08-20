# IsPowerWarSafeZone

`_ZN9GameWorld18IsPowerWarSafeZoneEii`

`GameWorld::IsPowerWarSafeZone(int, int)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086c59de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c59de  _ZN9GameWorld18IsPowerWarSafeZoneEii
#           GameWorld::IsPowerWarSafeZone(int, int)
# range [0x086c59de, 0x086c5a83]
086c59de +0x00:  push   %ebp
086c59df +0x01:  mov    %esp,%ebp
086c59e1 +0x03:  sub    $0x28,%esp
086c59e4 +0x06:  cmpl   $0x7,0xc(%ebp)
086c59e8 +0x0a:  jne    086c59fe <+0x20>
086c59ea +0x0c:  mov    &_ZN10GlobalData15s_power_managerE,%eax
086c59ef +0x11:  mov    %eax,(%esp)
086c59f2 +0x14:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
086c59f7 +0x19:  xor    $0x1,%eax
086c59fa +0x1c:  test   %al,%al
086c59fc +0x1e:  je     086c5a05 <+0x27>
086c59fe +0x20:  mov    $0x1,%eax
086c5a03 +0x25:  jmp    086c5a0a <+0x2c>
086c5a05 +0x27:  mov    $0x0,%eax
086c5a0a +0x2c:  test   %al,%al
086c5a0c +0x2e:  je     086c5a15 <+0x37>
086c5a0e +0x30:  mov    $0x0,%eax
086c5a13 +0x35:  jmp    086c5a82 <+0xa4>
086c5a15 +0x37:  cmpl   $0x0,0xc(%ebp)
086c5a19 +0x3b:  js     086c5a25 <+0x47>
086c5a1b +0x3d:  mov    &MAX_VILLAGE_NUM,%eax
086c5a20 +0x42:  cmp    %eax,0xc(%ebp)
086c5a23 +0x45:  jl     086c5a2c <+0x4e>
086c5a25 +0x47:  mov    $0x1,%eax
086c5a2a +0x4c:  jmp    086c5a82 <+0xa4>
086c5a2c +0x4e:  mov    0x8(%ebp),%eax
086c5a2f +0x51:  mov    0x1c(%eax),%edx
086c5a32 +0x54:  mov    0xc(%ebp),%eax
086c5a35 +0x57:  imul   $0x34,%eax,%eax
086c5a38 +0x5a:  lea    (%edx,%eax,1),%eax
086c5a3b +0x5d:  mov    %eax,-0x10(%ebp)
086c5a3e +0x60:  mov    0x10(%ebp),%eax
086c5a41 +0x63:  mov    %eax,0x4(%esp)
086c5a45 +0x67:  mov    -0x10(%ebp),%eax
086c5a48 +0x6a:  mov    %eax,(%esp)
086c5a4b +0x6d:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086c5a50 +0x72:  mov    %eax,-0xc(%ebp)
086c5a53 +0x75:  cmpl   $0x0,-0xc(%ebp)
086c5a57 +0x79:  jne    086c5a60 <+0x82>
086c5a59 +0x7b:  mov    $0x1,%eax
086c5a5e +0x80:  jmp    086c5a82 <+0xa4>
086c5a60 +0x82:  mov    -0xc(%ebp),%eax
086c5a63 +0x85:  mov    0x68(%eax),%eax
086c5a66 +0x88:  cmp    $0x5,%eax
086c5a69 +0x8b:  je     086c5a76 <+0x98>
086c5a6b +0x8d:  mov    -0xc(%ebp),%eax
086c5a6e +0x90:  mov    0x68(%eax),%eax
086c5a71 +0x93:  cmp    $0x6,%eax
086c5a74 +0x96:  jne    086c5a7d <+0x9f>
086c5a76 +0x98:  mov    $0x1,%eax
086c5a7b +0x9d:  jmp    086c5a82 <+0xa4>
086c5a7d +0x9f:  mov    $0x0,%eax
086c5a82 +0xa4:  leave
086c5a83 +0xa5:  ret
```

## 反编译 C

```c
// GameWorld::IsPowerWarSafeZone @ 0x86c59de

/* GameWorld::IsPowerWarSafeZone(int, int) */

undefined4 __thiscall GameWorld::IsPowerWarSafeZone(GameWorld *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 7) {
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_086c5a0a;
    }
  }
  bVar1 = true;
LAB_086c5a0a:
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
    else if ((*(int *)(iVar4 + 0x68) == 5) || (*(int *)(iVar4 + 0x68) == 6)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
