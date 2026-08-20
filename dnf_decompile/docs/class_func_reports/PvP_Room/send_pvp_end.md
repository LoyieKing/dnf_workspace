# send_pvp_end

`_ZN8PvP_Room12send_pvp_endEv`

`PvP_Room::send_pvp_end()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085dc476` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085dc476  _ZN8PvP_Room12send_pvp_endEv
#           PvP_Room::send_pvp_end()
# range [0x085dc476, 0x085dc4b9]
085dc476 +0x00:  push   %ebp
085dc477 +0x01:  mov    %esp,%ebp
085dc479 +0x03:  sub    $0x18,%esp
085dc47c +0x06:  mov    0x8(%ebp),%eax
085dc47f +0x09:  movb   $0x1,0x617(%eax)
085dc486 +0x10:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085dc48b +0x15:  mov    %eax,(%esp)
085dc48e +0x18:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085dc493 +0x1d:  cmp    $0x6,%eax
085dc496 +0x20:  setne  %al
085dc499 +0x23:  test   %al,%al
085dc49b +0x25:  je     085dc4a8 <+0x32>
085dc49d +0x27:  mov    0x8(%ebp),%eax
085dc4a0 +0x2a:  mov    %eax,(%esp)
085dc4a3 +0x2d:  call   085dc866 <_ZN8PvP_Room16update_pvp_pointEv>  ; PvP_Room::update_pvp_point()
085dc4a8 +0x32:  mov    0x8(%ebp),%eax
085dc4ab +0x35:  mov    %eax,(%esp)
085dc4ae +0x38:  call   085da882 <_ZN8PvP_Room10pvp_rewardEv>  ; PvP_Room::pvp_reward()
085dc4b3 +0x3d:  mov    $0x1,%eax
085dc4b8 +0x42:  leave
085dc4b9 +0x43:  ret
```

## 反编译 C

```c
// PvP_Room::send_pvp_end @ 0x85dc476

/* PvP_Room::send_pvp_end() */

undefined4 __thiscall PvP_Room::send_pvp_end(PvP_Room *this)

{
  GameWorld *this_00;
  int iVar1;
  
  this[0x617] = (PvP_Room)0x1;
  this_00 = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this_00);
  if (iVar1 != 6) {
    update_pvp_point(this);
  }
  pvp_reward(this);
  return 1;
}
```
