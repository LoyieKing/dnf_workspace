# set_recv_pvp_end_result_flag

`_ZN8PvP_Room28set_recv_pvp_end_result_flagEP5CUser`

`PvP_Room::set_recv_pvp_end_result_flag(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dbfec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dbfec  _ZN8PvP_Room28set_recv_pvp_end_result_flagEP5CUser
#           PvP_Room::set_recv_pvp_end_result_flag(CUser*)
# range [0x085dbfec, 0x085dc033]
085dbfec +0x00:  push   %ebp
085dbfed +0x01:  mov    %esp,%ebp
085dbfef +0x03:  sub    $0x28,%esp
085dbff2 +0x06:  mov    0xc(%ebp),%eax
085dbff5 +0x09:  mov    %eax,0x4(%esp)
085dbff9 +0x0d:  mov    0x8(%ebp),%eax
085dbffc +0x10:  mov    %eax,(%esp)
085dbfff +0x13:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085dc004 +0x18:  mov    %eax,-0xc(%ebp)
085dc007 +0x1b:  cmpl   $0x0,-0xc(%ebp)
085dc00b +0x1f:  jns    085dc014 <+0x28>
085dc00d +0x21:  mov    $0x0,%eax
085dc012 +0x26:  jmp    085dc031 <+0x45>
085dc014 +0x28:  mov    0x8(%ebp),%eax
085dc017 +0x2b:  lea    0x5bc(%eax),%edx
085dc01d +0x31:  mov    -0xc(%ebp),%eax
085dc020 +0x34:  mov    %eax,0x4(%esp)
085dc024 +0x38:  mov    %edx,(%esp)
085dc027 +0x3b:  call   085d5f98 <_ZN17PvpResultRecvFlag11SetRecvFlagEi>  ; PvpResultRecvFlag::SetRecvFlag(int)
085dc02c +0x40:  mov    $0x1,%eax
085dc031 +0x45:  leave
085dc032 +0x46:  ret
085dc033 +0x47:  nop
```

## 反编译 C

```c
// PvP_Room::set_recv_pvp_end_result_flag @ 0x85dbfec

/* PvP_Room::set_recv_pvp_end_result_flag(CUser*) */

bool __thiscall PvP_Room::set_recv_pvp_end_result_flag(PvP_Room *this,CUser *param_1)

{
  int iVar1;
  
  iVar1 = get_user_seat(this,param_1);
  if (-1 < iVar1) {
    PvpResultRecvFlag::SetRecvFlag((PvpResultRecvFlag *)(this + 0x5bc),iVar1);
  }
  return -1 < iVar1;
}
```
