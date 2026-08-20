# GetTeamIndex

`_ZN8PvP_Room12GetTeamIndexEP5CUser`

`PvP_Room::GetTeamIndex(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc6ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc6ee  _ZN8PvP_Room12GetTeamIndexEP5CUser
#           PvP_Room::GetTeamIndex(CUser*)
# range [0x085dc6ee, 0x085dc777]
085dc6ee +0x00:  push   %ebp
085dc6ef +0x01:  mov    %esp,%ebp
085dc6f1 +0x03:  sub    $0x10,%esp
085dc6f4 +0x06:  movl   $0x0,-0x4(%ebp)
085dc6fb +0x0d:  jmp    085dc725 <+0x37>
085dc6fd +0x0f:  mov    -0x4(%ebp),%edx
085dc700 +0x12:  mov    0x8(%ebp),%eax
085dc703 +0x15:  add    $0xc,%edx
085dc706 +0x18:  mov    (%eax,%edx,4),%eax
085dc709 +0x1b:  test   %eax,%eax
085dc70b +0x1d:  je     085dc720 <+0x32>
085dc70d +0x1f:  mov    -0x4(%ebp),%edx
085dc710 +0x22:  mov    0x8(%ebp),%eax
085dc713 +0x25:  add    $0xc,%edx
085dc716 +0x28:  mov    (%eax,%edx,4),%eax
085dc719 +0x2b:  cmp    0xc(%ebp),%eax
085dc71c +0x2e:  je     085dc732 <+0x44>
085dc71e +0x30:  jmp    085dc721 <+0x33>
085dc720 +0x32:  nop
085dc721 +0x33:  addl   $0x1,-0x4(%ebp)
085dc725 +0x37:  cmpl   $0x7,-0x4(%ebp)
085dc729 +0x3b:  setle  %al
085dc72c +0x3e:  test   %al,%al
085dc72e +0x40:  jne    085dc6fd <+0xf>
085dc730 +0x42:  jmp    085dc733 <+0x45>
085dc732 +0x44:  nop
085dc733 +0x45:  cmpl   $0x8,-0x4(%ebp)
085dc737 +0x49:  jne    085dc740 <+0x52>
085dc739 +0x4b:  mov    $0xffffffff,%eax
085dc73e +0x50:  jmp    085dc775 <+0x87>
085dc740 +0x52:  mov    0x8(%ebp),%eax
085dc743 +0x55:  mov    0x4(%eax),%eax
085dc746 +0x58:  cmp    $0x1,%eax
085dc749 +0x5b:  je     085dc756 <+0x68>
085dc74b +0x5d:  mov    0x8(%ebp),%eax
085dc74e +0x60:  mov    0x4(%eax),%eax
085dc751 +0x63:  cmp    $0x4,%eax
085dc754 +0x66:  jne    085dc75e <+0x70>
085dc756 +0x68:  mov    -0x4(%ebp),%eax
085dc759 +0x6b:  mov    %eax,-0x8(%ebp)
085dc75c +0x6e:  jmp    085dc772 <+0x84>
085dc75e +0x70:  mov    -0x4(%ebp),%eax
085dc761 +0x73:  mov    0x8(%ebp),%edx
085dc764 +0x76:  movzbl 0x5d0(%edx,%eax,1),%eax
085dc76c +0x7e:  movzbl %al,%eax
085dc76f +0x81:  mov    %eax,-0x8(%ebp)
085dc772 +0x84:  mov    -0x8(%ebp),%eax
085dc775 +0x87:  leave
085dc776 +0x88:  ret
085dc777 +0x89:  nop
```

## 反编译 C

```c
// PvP_Room::GetTeamIndex @ 0x85dc6ee

/* PvP_Room::GetTeamIndex(CUser*) */

uint __thiscall PvP_Room::GetTeamIndex(PvP_Room *this,CUser *param_1)

{
  uint local_8;
  
  local_8 = 0;
  while (((int)local_8 < 8 &&
         ((*(int *)(this + (local_8 + 0xc) * 4) == 0 ||
          (*(CUser **)(this + (local_8 + 0xc) * 4) != param_1))))) {
    local_8 = local_8 + 1;
  }
  if (local_8 == 8) {
    local_8 = 0xffffffff;
  }
  else if ((*(int *)(this + 4) != 1) && (*(int *)(this + 4) != 4)) {
    local_8 = (uint)(byte)this[local_8 + 0x5d0];
  }
  return local_8;
}
```
