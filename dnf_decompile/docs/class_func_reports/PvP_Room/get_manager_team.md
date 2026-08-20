# get_manager_team

`_ZN8PvP_Room16get_manager_teamEv`

`PvP_Room::get_manager_team()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d9242` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d9242  _ZN8PvP_Room16get_manager_teamEv
#           PvP_Room::get_manager_team()
# range [0x085d9242, 0x085d9271]
085d9242 +0x00:  push   %ebp
085d9243 +0x01:  mov    %esp,%ebp
085d9245 +0x03:  mov    0x8(%ebp),%eax
085d9248 +0x06:  mov    0x2c(%eax),%eax
085d924b +0x09:  test   %eax,%eax
085d924d +0x0b:  js     085d925a <+0x18>
085d924f +0x0d:  mov    0x8(%ebp),%eax
085d9252 +0x10:  mov    0x2c(%eax),%eax
085d9255 +0x13:  cmp    $0x7,%eax
085d9258 +0x16:  jle    085d9261 <+0x1f>
085d925a +0x18:  mov    $0xfe,%eax
085d925f +0x1d:  jmp    085d9270 <+0x2e>
085d9261 +0x1f:  mov    0x8(%ebp),%eax
085d9264 +0x22:  mov    0x2c(%eax),%edx
085d9267 +0x25:  mov    0x8(%ebp),%eax
085d926a +0x28:  add    $0x14,%edx
085d926d +0x2b:  mov    (%eax,%edx,4),%eax
085d9270 +0x2e:  pop    %ebp
085d9271 +0x2f:  ret
```

## 反编译 C

```c
// PvP_Room::get_manager_team @ 0x85d9242

/* PvP_Room::get_manager_team() */

undefined4 __thiscall PvP_Room::get_manager_team(PvP_Room *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x2c) < 0) || (7 < *(int *)(this + 0x2c))) {
    uVar1 = 0xfe;
  }
  else {
    uVar1 = *(undefined4 *)(this + (*(int *)(this + 0x2c) + 0x14) * 4);
  }
  return uVar1;
}
```
