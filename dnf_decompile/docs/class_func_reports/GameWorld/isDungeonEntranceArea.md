# isDungeonEntranceArea

`_ZN9GameWorld21isDungeonEntranceAreaEP5CUser`

`GameWorld::isDungeonEntranceArea(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cec84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cec84  _ZN9GameWorld21isDungeonEntranceAreaEP5CUser
#           GameWorld::isDungeonEntranceArea(CUser*)
# range [0x086cec84, 0x086ced9f]
086cec84 +0x000:  push   %ebp
086cec85 +0x001:  mov    %esp,%ebp
086cec87 +0x003:  sub    $0x48,%esp
086cec8a +0x006:  movl   $0x0,-0x10(%ebp)
086cec91 +0x00d:  mov    0xc(%ebp),%eax
086cec94 +0x010:  mov    %eax,0x4(%esp)
086cec98 +0x014:  mov    0x8(%ebp),%eax
086cec9b +0x017:  mov    %eax,(%esp)
086cec9e +0x01a:  call   086cd038 <_ZN9GameWorld14getUserVillageEP5CUser>  ; GameWorld::getUserVillage(CUser*)
086ceca3 +0x01f:  mov    %eax,-0x14(%ebp)
086ceca6 +0x022:  cmpl   $0x0,-0x14(%ebp)
086cecaa +0x026:  sete   %al
086cecad +0x029:  test   %al,%al
086cecaf +0x02b:  je     086cecf1 <+0x6d>
086cecb1 +0x02d:  movl   $0x5,0xc(%esp)
086cecb9 +0x035:  movl   $0x1685,0x8(%esp)
086cecc1 +0x03d:  movl   $&_ZZN9GameWorld21isDungeonEntranceAreaEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086cecc9 +0x045:  lea    -0x34(%ebp),%eax
086ceccc +0x048:  mov    %eax,(%esp)
086ceccf +0x04b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086cecd4 +0x050:  movl   $"getUserVillage call failed",0x4(%esp)
086cecdc +0x058:  lea    -0x34(%ebp),%eax
086cecdf +0x05b:  mov    %eax,(%esp)
086cece2 +0x05e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086cece7 +0x063:  mov    $0x0,%eax
086cecec +0x068:  jmp    086ced9e <+0x11a>
086cecf1 +0x06d:  movl   $0x0,0x4(%esp)
086cecf9 +0x075:  mov    0xc(%ebp),%eax
086cecfc +0x078:  mov    %eax,(%esp)
086cecff +0x07b:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
086ced04 +0x080:  mov    %eax,-0xc(%ebp)
086ced07 +0x083:  mov    -0xc(%ebp),%eax
086ced0a +0x086:  mov    %eax,0x4(%esp)
086ced0e +0x08a:  mov    -0x14(%ebp),%eax
086ced11 +0x08d:  mov    %eax,(%esp)
086ced14 +0x090:  call   086c3ba2 <_ZN7Village7getAreaEi>  ; Village::getArea(int)
086ced19 +0x095:  mov    %eax,-0x10(%ebp)
086ced1c +0x098:  cmpl   $0x0,-0x10(%ebp)
086ced20 +0x09c:  sete   %al
086ced23 +0x09f:  test   %al,%al
086ced25 +0x0a1:  je     086ced6b <+0xe7>
086ced27 +0x0a3:  movl   $0x5,0xc(%esp)
086ced2f +0x0ab:  movl   $0x168c,0x8(%esp)
086ced37 +0x0b3:  movl   $&_ZZN9GameWorld21isDungeonEntranceAreaEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
086ced3f +0x0bb:  lea    -0x24(%ebp),%eax
086ced42 +0x0be:  mov    %eax,(%esp)
086ced45 +0x0c1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086ced4a +0x0c6:  mov    -0xc(%ebp),%eax
086ced4d +0x0c9:  mov    %eax,0x8(%esp)
086ced51 +0x0cd:  movl   $"getArea call failed (area no:%d)",0x4(%esp)
086ced59 +0x0d5:  lea    -0x24(%ebp),%eax
086ced5c +0x0d8:  mov    %eax,(%esp)
086ced5f +0x0db:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086ced64 +0x0e0:  mov    $0x0,%eax
086ced69 +0x0e5:  jmp    086ced9e <+0x11a>
086ced6b +0x0e7:  mov    0xc(%ebp),%eax
086ced6e +0x0ea:  mov    %eax,(%esp)
086ced71 +0x0ed:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086ced76 +0x0f2:  cmp    $0x1,%eax
086ced79 +0x0f5:  setle  %al
086ced7c +0x0f8:  test   %al,%al
086ced7e +0x0fa:  je     086ced87 <+0x103>
086ced80 +0x0fc:  mov    $0x1,%eax
086ced85 +0x101:  jmp    086ced9e <+0x11a>
086ced87 +0x103:  mov    -0x10(%ebp),%eax
086ced8a +0x106:  mov    0x68(%eax),%eax
086ced8d +0x109:  cmp    $0x4,%eax
086ced90 +0x10c:  je     086ced99 <+0x115>
086ced92 +0x10e:  mov    $0x0,%eax
086ced97 +0x113:  jmp    086ced9e <+0x11a>
086ced99 +0x115:  mov    $0x1,%eax
086ced9e +0x11a:  leave
086ced9f +0x11b:  ret
```

## 反编译 C

```c
// GameWorld::isDungeonEntranceArea @ 0x86cec84

/* GameWorld::isDungeonEntranceArea(CUser*) */

undefined4 __thiscall GameWorld::isDungeonEntranceArea(GameWorld *this,CUser *param_1)

{
  undefined4 uVar1;
  int iVar2;
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  Village *local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_18 = (Village *)getUserVillage(this,param_1);
  if (local_18 == (Village *)0x0) {
    cMyTrace::cMyTrace(local_38,"bool GameWorld::isDungeonEntranceArea(CUser*)",0x1685,5);
    cMyTrace::operator()(local_38,"getUserVillage call failed");
    uVar1 = 0;
  }
  else {
    local_10 = CUser::get_area(param_1,false);
    local_14 = Village::getArea(local_18,local_10);
    if (local_14 == 0) {
      cMyTrace::cMyTrace(local_28,"bool GameWorld::isDungeonEntranceArea(CUser*)",0x168c,5);
      cMyTrace::operator()(local_28,"getArea call failed (area no:%d)",local_10);
      uVar1 = 0;
    }
    else {
      iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if (iVar2 < 2) {
        uVar1 = 1;
      }
      else if (*(int *)(local_14 + 0x68) == 4) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}
```
