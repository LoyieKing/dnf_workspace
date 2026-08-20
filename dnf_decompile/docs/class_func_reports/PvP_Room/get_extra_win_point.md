# get_extra_win_point

`_ZN8PvP_Room19get_extra_win_pointEi`

`PvP_Room::get_extra_win_point(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d9358` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d9358  _ZN8PvP_Room19get_extra_win_pointEi
#           PvP_Room::get_extra_win_point(int)
# range [0x085d9358, 0x085d9385]
085d9358 +0x00:  push   %ebp
085d9359 +0x01:  mov    %esp,%ebp
085d935b +0x03:  sub    $0x18,%esp
085d935e +0x06:  mov    0x8(%ebp),%eax
085d9361 +0x09:  mov    0x6e4(%eax),%eax
085d9367 +0x0f:  mov    (%eax),%eax
085d9369 +0x11:  add    $0x1c,%eax
085d936c +0x14:  mov    (%eax),%ecx
085d936e +0x16:  mov    0x8(%ebp),%eax
085d9371 +0x19:  mov    0x6e4(%eax),%eax
085d9377 +0x1f:  mov    0xc(%ebp),%edx
085d937a +0x22:  mov    %edx,0x4(%esp)
085d937e +0x26:  mov    %eax,(%esp)
085d9381 +0x29:  call   *%ecx
085d9383 +0x2b:  leave
085d9384 +0x2c:  ret
085d9385 +0x2d:  nop
```

## 反编译 C

```c
// PvP_Room::get_extra_win_point @ 0x85d9358

/* PvP_Room::get_extra_win_point(int) */

void __thiscall PvP_Room::get_extra_win_point(PvP_Room *this,int param_1)

{
  (**(code **)(**(int **)(this + 0x6e4) + 0x1c))(*(undefined4 *)(this + 0x6e4),param_1);
  return;
}
```
