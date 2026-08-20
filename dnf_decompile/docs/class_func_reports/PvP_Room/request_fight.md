# request_fight

`_ZN8PvP_Room13request_fightEP5CUser`

`PvP_Room::request_fight(CUser*)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085ddfbe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ddfbe  _ZN8PvP_Room13request_fightEP5CUser
#           PvP_Room::request_fight(CUser*)
# range [0x085ddfbe, 0x085de019]
085ddfbe +0x00:  push   %ebp
085ddfbf +0x01:  mov    %esp,%ebp
085ddfc1 +0x03:  sub    $0x28,%esp
085ddfc4 +0x06:  mov    0x8(%ebp),%eax
085ddfc7 +0x09:  movzbl 0x614(%eax),%eax
085ddfce +0x10:  test   %al,%al
085ddfd0 +0x12:  je     085ddfd9 <+0x1b>
085ddfd2 +0x14:  mov    $0x1,%eax
085ddfd7 +0x19:  jmp    085de018 <+0x5a>
085ddfd9 +0x1b:  mov    0xc(%ebp),%eax
085ddfdc +0x1e:  mov    %eax,0x4(%esp)
085ddfe0 +0x22:  mov    0x8(%ebp),%eax
085ddfe3 +0x25:  mov    %eax,(%esp)
085ddfe6 +0x28:  call   085d91e2 <_ZN8PvP_Room13get_user_seatEP5CUser>  ; PvP_Room::get_user_seat(CUser*)
085ddfeb +0x2d:  mov    %eax,-0xc(%ebp)
085ddfee +0x30:  cmpl   $0x0,-0xc(%ebp)
085ddff2 +0x34:  jns    085ddffb <+0x3d>
085ddff4 +0x36:  mov    $0x0,%eax
085ddff9 +0x3b:  jmp    085de018 <+0x5a>
085ddffb +0x3d:  mov    0x8(%ebp),%eax
085ddffe +0x40:  lea    0x620(%eax),%edx
085de004 +0x46:  mov    -0xc(%ebp),%eax
085de007 +0x49:  mov    %eax,0x4(%esp)
085de00b +0x4d:  mov    %edx,(%esp)
085de00e +0x50:  call   085de18c <_ZN15CRelayBattleMgr14OnRequestFightEi>  ; CRelayBattleMgr::OnRequestFight(int)
085de013 +0x55:  mov    $0x1,%eax
085de018 +0x5a:  leave
085de019 +0x5b:  ret
```

## 反编译 C

```c
// PvP_Room::request_fight @ 0x85ddfbe

/* PvP_Room::request_fight(CUser*) */

undefined4 __thiscall PvP_Room::request_fight(PvP_Room *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (this[0x614] == (PvP_Room)0x0) {
    iVar2 = get_user_seat(this,param_1);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      CRelayBattleMgr::OnRequestFight((CRelayBattleMgr *)(this + 0x620),iVar2);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
