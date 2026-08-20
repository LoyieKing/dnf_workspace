# check_authority

`_ZN8PvP_Room15check_authorityEP5CUseri`

`PvP_Room::check_authority(CUser*, int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d65b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d65b4  _ZN8PvP_Room15check_authorityEP5CUseri
#           PvP_Room::check_authority(CUser*, int)
# range [0x085d65b4, 0x085d65e7]
085d65b4 +0x00:  push   %ebp
085d65b5 +0x01:  mov    %esp,%ebp
085d65b7 +0x03:  mov    0x8(%ebp),%eax
085d65ba +0x06:  mov    0x28(%eax),%eax
085d65bd +0x09:  cmp    0xc(%ebp),%eax
085d65c0 +0x0c:  jne    085d65c9 <+0x15>
085d65c2 +0x0e:  mov    $0x1,%eax
085d65c7 +0x13:  jmp    085d65e6 <+0x32>
085d65c9 +0x15:  mov    0x10(%ebp),%edx
085d65cc +0x18:  mov    0x8(%ebp),%eax
085d65cf +0x1b:  add    $0xc,%edx
085d65d2 +0x1e:  mov    (%eax,%edx,4),%eax
085d65d5 +0x21:  cmp    0xc(%ebp),%eax
085d65d8 +0x24:  jne    085d65e1 <+0x2d>
085d65da +0x26:  mov    $0x1,%eax
085d65df +0x2b:  jmp    085d65e6 <+0x32>
085d65e1 +0x2d:  mov    $0x0,%eax
085d65e6 +0x32:  pop    %ebp
085d65e7 +0x33:  ret
```

## 反编译 C

```c
// PvP_Room::check_authority @ 0x85d65b4

/* PvP_Room::check_authority(CUser*, int) */

undefined4 __thiscall PvP_Room::check_authority(PvP_Room *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(CUser **)(this + 0x28) == param_1) {
    uVar1 = 1;
  }
  else if (*(CUser **)(this + (param_2 + 0xc) * 4) == param_1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
