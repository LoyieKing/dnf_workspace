# set_recv_pvp_rank_flag

`_ZN8PvP_Room22set_recv_pvp_rank_flagEP5CUser`

`PvP_Room::set_recv_pvp_rank_flag(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dbf82` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dbf82  _ZN8PvP_Room22set_recv_pvp_rank_flagEP5CUser
#           PvP_Room::set_recv_pvp_rank_flag(CUser*)
# range [0x085dbf82, 0x085dbfeb]
085dbf82 +0x00:  push   %ebp
085dbf83 +0x01:  mov    %esp,%ebp
085dbf85 +0x03:  sub    $0x28,%esp
085dbf88 +0x06:  mov    0xc(%ebp),%eax
085dbf8b +0x09:  mov    %eax,0x4(%esp)
085dbf8f +0x0d:  mov    0x8(%ebp),%eax
085dbf92 +0x10:  mov    %eax,(%esp)
085dbf95 +0x13:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085dbf9a +0x18:  mov    %eax,-0xc(%ebp)
085dbf9d +0x1b:  cmpl   $0x0,-0xc(%ebp)
085dbfa1 +0x1f:  jns    085dbfaa <+0x28>
085dbfa3 +0x21:  mov    $0x0,%eax
085dbfa8 +0x26:  jmp    085dbfea <+0x68>
085dbfaa +0x28:  mov    0x8(%ebp),%eax
085dbfad +0x2b:  lea    0x5b4(%eax),%edx
085dbfb3 +0x31:  mov    -0xc(%ebp),%eax
085dbfb6 +0x34:  mov    %eax,0x4(%esp)
085dbfba +0x38:  mov    %edx,(%esp)
085dbfbd +0x3b:  call   085d5ff0 <_ZNK17PvpResultRecvFlag6IsRecvEi>  ; PvpResultRecvFlag::IsRecv(int) const
085dbfc2 +0x40:  test   %al,%al
085dbfc4 +0x42:  je     085dbfcd <+0x4b>
085dbfc6 +0x44:  mov    $0x0,%eax
085dbfcb +0x49:  jmp    085dbfea <+0x68>
085dbfcd +0x4b:  mov    0x8(%ebp),%eax
085dbfd0 +0x4e:  lea    0x5b4(%eax),%edx
085dbfd6 +0x54:  mov    -0xc(%ebp),%eax
085dbfd9 +0x57:  mov    %eax,0x4(%esp)
085dbfdd +0x5b:  mov    %edx,(%esp)
085dbfe0 +0x5e:  call   085d5f98 <_ZN17PvpResultRecvFlag11SetRecvFlagEi>  ; PvpResultRecvFlag::SetRecvFlag(int)
085dbfe5 +0x63:  mov    $0x1,%eax
085dbfea +0x68:  leave
085dbfeb +0x69:  ret
```

## 反编译 C

```c
// PvP_Room::set_recv_pvp_rank_flag @ 0x85dbf82

/* PvP_Room::set_recv_pvp_rank_flag(CUser*) */

undefined4 __thiscall PvP_Room::set_recv_pvp_rank_flag(PvP_Room *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = get_user_seat(this,param_1);
  if (iVar2 < 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = PvpResultRecvFlag::IsRecv((PvpResultRecvFlag *)(this + 0x5b4),iVar2);
    if (cVar1 == '\0') {
      PvpResultRecvFlag::SetRecvFlag((PvpResultRecvFlag *)(this + 0x5b4),iVar2);
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
