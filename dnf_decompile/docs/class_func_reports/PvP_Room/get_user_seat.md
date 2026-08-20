# get_user_seat

`_ZN8PvP_Room13get_user_seatEP5CUser`

`PvP_Room::get_user_seat(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d91e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d91e2  _ZN8PvP_Room13get_user_seatEP5CUser
#           PvP_Room::get_user_seat(CUser*)
# range [0x085d91e2, 0x085d921d]
085d91e2 +0x00:  push   %ebp
085d91e3 +0x01:  mov    %esp,%ebp
085d91e5 +0x03:  sub    $0x10,%esp
085d91e8 +0x06:  movl   $0x0,-0x4(%ebp)
085d91ef +0x0d:  jmp    085d920b <+0x29>
085d91f1 +0x0f:  mov    -0x4(%ebp),%edx
085d91f4 +0x12:  mov    0x8(%ebp),%eax
085d91f7 +0x15:  add    $0xc,%edx
085d91fa +0x18:  mov    (%eax,%edx,4),%eax
085d91fd +0x1b:  cmp    0xc(%ebp),%eax
085d9200 +0x1e:  jne    085d9207 <+0x25>
085d9202 +0x20:  mov    -0x4(%ebp),%eax
085d9205 +0x23:  jmp    085d921b <+0x39>
085d9207 +0x25:  addl   $0x1,-0x4(%ebp)
085d920b +0x29:  cmpl   $0x7,-0x4(%ebp)
085d920f +0x2d:  setle  %al
085d9212 +0x30:  test   %al,%al
085d9214 +0x32:  jne    085d91f1 <+0xf>
085d9216 +0x34:  mov    $0xffffffff,%eax
085d921b +0x39:  leave
085d921c +0x3a:  ret
085d921d +0x3b:  nop
```

## 反编译 C

```c
// PvP_Room::get_user_seat @ 0x85d91e2

/* PvP_Room::get_user_seat(CUser*) */

int __thiscall PvP_Room::get_user_seat(PvP_Room *this,CUser *param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (7 < local_8) {
      return -1;
    }
    if (*(CUser **)(this + (local_8 + 0xc) * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
