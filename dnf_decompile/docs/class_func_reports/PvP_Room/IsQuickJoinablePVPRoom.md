# IsQuickJoinablePVPRoom

`_ZN8PvP_Room22IsQuickJoinablePVPRoomEP5CUser`

`PvP_Room::IsQuickJoinablePVPRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d6be6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d6be6  _ZN8PvP_Room22IsQuickJoinablePVPRoomEP5CUser
#           PvP_Room::IsQuickJoinablePVPRoom(CUser*)
# range [0x085d6be6, 0x085d6c43]
085d6be6 +0x00:  push   %ebp
085d6be7 +0x01:  mov    %esp,%ebp
085d6be9 +0x03:  sub    $0x18,%esp
085d6bec +0x06:  mov    0xc(%ebp),%eax
085d6bef +0x09:  mov    %eax,0x4(%esp)
085d6bf3 +0x0d:  mov    0x8(%ebp),%eax
085d6bf6 +0x10:  mov    %eax,(%esp)
085d6bf9 +0x13:  call   085d6c44 <_ZN8PvP_Room14check_joinableEP5CUser>  ; PvP_Room::check_joinable(CUser*)
085d6bfe +0x18:  test   %eax,%eax
085d6c00 +0x1a:  jne    085d6c2d <+0x47>
085d6c02 +0x1c:  mov    0x8(%ebp),%eax
085d6c05 +0x1f:  mov    0x28(%eax),%eax
085d6c08 +0x22:  mov    %eax,(%esp)
085d6c0b +0x25:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
085d6c10 +0x2a:  mov    %eax,0x4(%esp)
085d6c14 +0x2e:  mov    0xc(%ebp),%eax
085d6c17 +0x31:  mov    %eax,(%esp)
085d6c1a +0x34:  call   0865cec0 <_ZN5CUser31find_pvp_masterid_walkingout_meEj>  ; CUser::find_pvp_masterid_walkingout_me(unsigned int)
085d6c1f +0x39:  xor    $0x1,%eax
085d6c22 +0x3c:  test   %al,%al
085d6c24 +0x3e:  je     085d6c2d <+0x47>
085d6c26 +0x40:  mov    $0x1,%eax
085d6c2b +0x45:  jmp    085d6c32 <+0x4c>
085d6c2d +0x47:  mov    $0x0,%eax
085d6c32 +0x4c:  test   %al,%al
085d6c34 +0x4e:  je     085d6c3d <+0x57>
085d6c36 +0x50:  mov    $0x1,%eax
085d6c3b +0x55:  jmp    085d6c42 <+0x5c>
085d6c3d +0x57:  mov    $0x0,%eax
085d6c42 +0x5c:  leave
085d6c43 +0x5d:  ret
```

## 反编译 C

```c
// PvP_Room::IsQuickJoinablePVPRoom @ 0x85d6be6

/* PvP_Room::IsQuickJoinablePVPRoom(CUser*) */

undefined1 __thiscall PvP_Room::IsQuickJoinablePVPRoom(PvP_Room *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = check_joinable(this,param_1);
  if (iVar2 == 0) {
    CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x28));
    cVar1 = CUser::find_pvp_masterid_walkingout_me((uint)param_1);
    if (cVar1 != '\x01') {
      return 1;
    }
  }
  return 0;
}
```
