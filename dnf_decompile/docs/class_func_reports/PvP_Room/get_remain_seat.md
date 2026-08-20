# get_remain_seat

`_ZNK8PvP_Room15get_remain_seatEv`

`PvP_Room::get_remain_seat() const`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6844` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6844  _ZNK8PvP_Room15get_remain_seatEv
#           PvP_Room::get_remain_seat() const
# range [0x085d6844, 0x085d6861]
085d6844 +0x00:  push   %ebp
085d6845 +0x01:  mov    %esp,%ebp
085d6847 +0x03:  sub    $0x18,%esp
085d684a +0x06:  mov    0x8(%ebp),%eax
085d684d +0x09:  mov    %eax,(%esp)
085d6850 +0x0c:  call   085d6862 <_ZNK8PvP_Room16get_waiter_countEv>  ; PvP_Room::get_waiter_count() const
085d6855 +0x11:  mov    $0x8,%edx
085d685a +0x16:  mov    %edx,%ecx
085d685c +0x18:  sub    %eax,%ecx
085d685e +0x1a:  mov    %ecx,%eax
085d6860 +0x1c:  leave
085d6861 +0x1d:  ret
```

## 反编译 C

```c
// PvP_Room::get_remain_seat @ 0x85d6844

/* PvP_Room::get_remain_seat() const */

int __thiscall PvP_Room::get_remain_seat(PvP_Room *this)

{
  int iVar1;
  
  iVar1 = get_waiter_count(this);
  return 8 - iVar1;
}
```
