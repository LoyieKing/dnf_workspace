# get_team

`_ZN8PvP_Room8get_teamEi`

`PvP_Room::get_team(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d9272` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d9272  _ZN8PvP_Room8get_teamEi
#           PvP_Room::get_team(int)
# range [0x085d9272, 0x085d9295]
085d9272 +0x00:  push   %ebp
085d9273 +0x01:  mov    %esp,%ebp
085d9275 +0x03:  cmpl   $0x0,0xc(%ebp)
085d9279 +0x07:  js     085d9281 <+0xf>
085d927b +0x09:  cmpl   $0x7,0xc(%ebp)
085d927f +0x0d:  jle    085d9288 <+0x16>
085d9281 +0x0f:  mov    $0xfe,%eax
085d9286 +0x14:  jmp    085d9294 <+0x22>
085d9288 +0x16:  mov    0xc(%ebp),%edx
085d928b +0x19:  mov    0x8(%ebp),%eax
085d928e +0x1c:  add    $0x14,%edx
085d9291 +0x1f:  mov    (%eax,%edx,4),%eax
085d9294 +0x22:  pop    %ebp
085d9295 +0x23:  ret
```

## 反编译 C

```c
// PvP_Room::get_team @ 0x85d9272

/* PvP_Room::get_team(int) */

undefined4 __thiscall PvP_Room::get_team(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (7 < param_1)) {
    uVar1 = 0xfe;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0x14) * 4);
  }
  return uVar1;
}
```
