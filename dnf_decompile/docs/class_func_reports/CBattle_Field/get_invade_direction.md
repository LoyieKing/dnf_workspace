# get_invade_direction

`_ZN13CBattle_Field20get_invade_directionEii`

`CBattle_Field::get_invade_direction(int, int)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08307e44` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08307e44  _ZN13CBattle_Field20get_invade_directionEii
#           CBattle_Field::get_invade_direction(int, int)
# range [0x08307e44, 0x08307ec9]
08307e44 +0x00:  push   %ebp
08307e45 +0x01:  mov    %esp,%ebp
08307e47 +0x03:  sub    $0x28,%esp
08307e4a +0x06:  movl   $0xffffffff,-0x10(%ebp)
08307e51 +0x0d:  movl   $0xffffffff,-0x14(%ebp)
08307e58 +0x14:  lea    -0x14(%ebp),%eax
08307e5b +0x17:  mov    %eax,0x8(%esp)
08307e5f +0x1b:  lea    -0x10(%ebp),%eax
08307e62 +0x1e:  mov    %eax,0x4(%esp)
08307e66 +0x22:  mov    0x8(%ebp),%eax
08307e69 +0x25:  mov    %eax,(%esp)
08307e6c +0x28:  call   08300da6 <_ZN13CBattle_Field11getCurPosXYERiS0_>  ; CBattle_Field::getCurPosXY(int&, int&)
08307e71 +0x2d:  movl   $0x0,-0xc(%ebp)
08307e78 +0x34:  mov    -0x10(%ebp),%eax
08307e7b +0x37:  cmp    0xc(%ebp),%eax
08307e7e +0x3a:  jne    08307e9e <+0x5a>
08307e80 +0x3c:  mov    -0x14(%ebp),%eax
08307e83 +0x3f:  cmp    0x10(%ebp),%eax
08307e86 +0x42:  jle    08307e8f <+0x4b>
08307e88 +0x44:  movl   $0x8,-0xc(%ebp)
08307e8f +0x4b:  mov    -0x14(%ebp),%eax
08307e92 +0x4e:  cmp    0x10(%ebp),%eax
08307e95 +0x51:  jge    08307e9e <+0x5a>
08307e97 +0x53:  movl   $0x2,-0xc(%ebp)
08307e9e +0x5a:  mov    -0x14(%ebp),%eax
08307ea1 +0x5d:  cmp    0x10(%ebp),%eax
08307ea4 +0x60:  jne    08307ec4 <+0x80>
08307ea6 +0x62:  mov    -0x10(%ebp),%eax
08307ea9 +0x65:  cmp    0xc(%ebp),%eax
08307eac +0x68:  jge    08307eb5 <+0x71>
08307eae +0x6a:  movl   $0x4,-0xc(%ebp)
08307eb5 +0x71:  mov    -0x10(%ebp),%eax
08307eb8 +0x74:  cmp    0xc(%ebp),%eax
08307ebb +0x77:  jle    08307ec4 <+0x80>
08307ebd +0x79:  movl   $0x1,-0xc(%ebp)
08307ec4 +0x80:  mov    -0xc(%ebp),%eax
08307ec7 +0x83:  leave
08307ec8 +0x84:  ret
08307ec9 +0x85:  nop
```

## 反编译 C

```c
// CBattle_Field::get_invade_direction @ 0x8307e44

/* CBattle_Field::get_invade_direction(int, int) */

undefined4 __thiscall
CBattle_Field::get_invade_direction(CBattle_Field *this,int param_1,int param_2)

{
  int local_18;
  int local_14;
  undefined4 local_10;
  
  local_14 = -1;
  local_18 = -1;
  getCurPosXY(this,&local_14,&local_18);
  local_10 = 0;
  if (local_14 == param_1) {
    if (param_2 < local_18) {
      local_10 = 8;
    }
    if (local_18 < param_2) {
      local_10 = 2;
    }
  }
  if (local_18 == param_2) {
    if (local_14 < param_1) {
      local_10 = 4;
    }
    if (param_1 < local_14) {
      local_10 = 1;
    }
  }
  return local_10;
}
```
