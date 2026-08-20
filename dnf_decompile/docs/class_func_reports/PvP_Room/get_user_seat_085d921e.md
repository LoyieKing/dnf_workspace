# get_user_seat

`_ZN8PvP_Room13get_user_seatEi`

`PvP_Room::get_user_seat(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d921e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d921e  _ZN8PvP_Room13get_user_seatEi
#           PvP_Room::get_user_seat(int)
# range [0x085d921e, 0x085d9241]
085d921e +0x00:  push   %ebp
085d921f +0x01:  mov    %esp,%ebp
085d9221 +0x03:  cmpl   $0x0,0xc(%ebp)
085d9225 +0x07:  js     085d922d <+0xf>
085d9227 +0x09:  cmpl   $0x7,0xc(%ebp)
085d922b +0x0d:  jle    085d9234 <+0x16>
085d922d +0x0f:  mov    $0x0,%eax
085d9232 +0x14:  jmp    085d9240 <+0x22>
085d9234 +0x16:  mov    0xc(%ebp),%edx
085d9237 +0x19:  mov    0x8(%ebp),%eax
085d923a +0x1c:  add    $0xc,%edx
085d923d +0x1f:  mov    (%eax,%edx,4),%eax
085d9240 +0x22:  pop    %ebp
085d9241 +0x23:  ret
```

## 反编译 C

```c
// PvP_Room::get_user_seat @ 0x85d921e

/* PvP_Room::get_user_seat(int) */

undefined4 __thiscall PvP_Room::get_user_seat(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (7 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (param_1 + 0xc) * 4);
  }
  return uVar1;
}
```
