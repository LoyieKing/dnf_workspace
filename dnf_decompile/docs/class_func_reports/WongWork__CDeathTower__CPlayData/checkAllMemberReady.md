# checkAllMemberReady

`_ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi`

`WongWork::CDeathTower::CPlayData::checkAllMemberReady(int)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CPlayData` | `0x08461e7e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08461e7e  _ZN8WongWork11CDeathTower9CPlayData19checkAllMemberReadyEi
#           WongWork::CDeathTower::CPlayData::checkAllMemberReady(int)
# range [0x08461e7e, 0x08461ee5]
08461e7e +0x00:  push   %ebp
08461e7f +0x01:  mov    %esp,%ebp
08461e81 +0x03:  sub    $0x10,%esp
08461e84 +0x06:  mov    0x8(%ebp),%eax
08461e87 +0x09:  movzbl 0xc(%eax),%eax
08461e8b +0x0d:  test   %al,%al
08461e8d +0x0f:  je     08461e96 <+0x18>
08461e8f +0x11:  mov    $0x1,%eax
08461e94 +0x16:  jmp    08461ee3 <+0x65>
08461e96 +0x18:  movl   $0x0,-0x8(%ebp)
08461e9d +0x1f:  movl   $0x0,-0x4(%ebp)
08461ea4 +0x26:  jmp    08461ed3 <+0x55>
08461ea6 +0x28:  mov    -0x4(%ebp),%eax
08461ea9 +0x2b:  mov    0x8(%ebp),%edx
08461eac +0x2e:  movzbl 0x8(%edx,%eax,1),%eax
08461eb1 +0x33:  test   %al,%al
08461eb3 +0x35:  je     08461ecf <+0x51>
08461eb5 +0x37:  addl   $0x1,-0x8(%ebp)
08461eb9 +0x3b:  mov    -0x8(%ebp),%eax
08461ebc +0x3e:  cmp    0xc(%ebp),%eax
08461ebf +0x41:  jne    08461ecf <+0x51>
08461ec1 +0x43:  mov    0x8(%ebp),%eax
08461ec4 +0x46:  movb   $0x1,0xc(%eax)
08461ec8 +0x4a:  mov    $0x1,%eax
08461ecd +0x4f:  jmp    08461ee3 <+0x65>
08461ecf +0x51:  addl   $0x1,-0x4(%ebp)
08461ed3 +0x55:  cmpl   $0x3,-0x4(%ebp)
08461ed7 +0x59:  setle  %al
08461eda +0x5c:  test   %al,%al
08461edc +0x5e:  jne    08461ea6 <+0x28>
08461ede +0x60:  mov    $0x0,%eax
08461ee3 +0x65:  leave
08461ee4 +0x66:  ret
08461ee5 +0x67:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CPlayData::checkAllMemberReady @ 0x8461e7e

/* WongWork::CDeathTower::CPlayData::checkAllMemberReady(int) */

undefined4 __thiscall
WongWork::CDeathTower::CPlayData::checkAllMemberReady(CPlayData *this,int param_1)

{
  undefined4 uVar1;
  int local_c;
  int local_8;
  
  if (this[0xc] == (CPlayData)0x0) {
    local_c = 0;
    for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
      if ((this[local_8 + 8] != (CPlayData)0x0) && (local_c = local_c + 1, local_c == param_1)) {
        this[0xc] = (CPlayData)0x1;
        return 1;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
