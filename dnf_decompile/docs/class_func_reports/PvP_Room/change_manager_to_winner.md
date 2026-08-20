# change_manager_to_winner

`_ZN8PvP_Room24change_manager_to_winnerEv`

`PvP_Room::change_manager_to_winner()`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d7df0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d7df0  _ZN8PvP_Room24change_manager_to_winnerEv
#           PvP_Room::change_manager_to_winner()
# range [0x085d7df0, 0x085d7ef3]
085d7df0 +0x000:  push   %ebp
085d7df1 +0x001:  mov    %esp,%ebp
085d7df3 +0x003:  sub    $0x28,%esp
085d7df6 +0x006:  mov    0x8(%ebp),%eax
085d7df9 +0x009:  mov    0x28(%eax),%eax
085d7dfc +0x00c:  test   %eax,%eax
085d7dfe +0x00e:  jne    085d7e0a <+0x1a>
085d7e00 +0x010:  mov    $0x0,%eax
085d7e05 +0x015:  jmp    085d7ef1 <+0x101>
085d7e0a +0x01a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d7e0f +0x01f:  mov    %eax,(%esp)
085d7e12 +0x022:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085d7e17 +0x027:  cmp    $0xf,%eax
085d7e1a +0x02a:  sete   %al
085d7e1d +0x02d:  test   %al,%al
085d7e1f +0x02f:  je     085d7e2b <+0x3b>
085d7e21 +0x031:  mov    $0x1,%eax
085d7e26 +0x036:  jmp    085d7ef1 <+0x101>
085d7e2b +0x03b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d7e30 +0x040:  mov    %eax,(%esp)
085d7e33 +0x043:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
085d7e38 +0x048:  cmp    $0x7,%eax
085d7e3b +0x04b:  je     085d7e4e <+0x5e>
085d7e3d +0x04d:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
085d7e42 +0x052:  mov    %eax,(%esp)
085d7e45 +0x055:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
085d7e4a +0x05a:  test   %al,%al
085d7e4c +0x05c:  je     085d7e55 <+0x65>
085d7e4e +0x05e:  mov    $0x1,%eax
085d7e53 +0x063:  jmp    085d7e5a <+0x6a>
085d7e55 +0x065:  mov    $0x0,%eax
085d7e5a +0x06a:  test   %al,%al
085d7e5c +0x06c:  je     085d7e68 <+0x78>
085d7e5e +0x06e:  mov    $0x1,%eax
085d7e63 +0x073:  jmp    085d7ef1 <+0x101>
085d7e68 +0x078:  mov    0x8(%ebp),%eax
085d7e6b +0x07b:  mov    0x2c(%eax),%eax
085d7e6e +0x07e:  mov    %eax,0x4(%esp)
085d7e72 +0x082:  mov    0x8(%ebp),%eax
085d7e75 +0x085:  mov    %eax,(%esp)
085d7e78 +0x088:  call   085d7d9c <_ZN8PvP_Room11is_last_winEi>  ; PvP_Room::is_last_win(int)
085d7e7d +0x08d:  test   %al,%al
085d7e7f +0x08f:  je     085d7e88 <+0x98>
085d7e81 +0x091:  mov    $0x1,%eax
085d7e86 +0x096:  jmp    085d7ef1 <+0x101>
085d7e88 +0x098:  movl   $0x0,-0xc(%ebp)
085d7e8f +0x09f:  jmp    085d7ee1 <+0xf1>
085d7e91 +0x0a1:  mov    -0xc(%ebp),%edx
085d7e94 +0x0a4:  mov    0x8(%ebp),%eax
085d7e97 +0x0a7:  add    $0xc,%edx
085d7e9a +0x0aa:  mov    (%eax,%edx,4),%eax
085d7e9d +0x0ad:  test   %eax,%eax
085d7e9f +0x0af:  je     085d7edd <+0xed>
085d7ea1 +0x0b1:  mov    -0xc(%ebp),%eax
085d7ea4 +0x0b4:  mov    %eax,0x4(%esp)
085d7ea8 +0x0b8:  mov    0x8(%ebp),%eax
085d7eab +0x0bb:  mov    %eax,(%esp)
085d7eae +0x0be:  call   085d7d9c <_ZN8PvP_Room11is_last_winEi>  ; PvP_Room::is_last_win(int)
085d7eb3 +0x0c3:  xor    $0x1,%eax
085d7eb6 +0x0c6:  test   %al,%al
085d7eb8 +0x0c8:  jne    085d7edc <+0xec>
085d7eba +0x0ca:  mov    -0xc(%ebp),%edx
085d7ebd +0x0cd:  mov    0x8(%ebp),%eax
085d7ec0 +0x0d0:  add    $0xc,%edx
085d7ec3 +0x0d3:  mov    (%eax,%edx,4),%edx
085d7ec6 +0x0d6:  mov    0x8(%ebp),%eax
085d7ec9 +0x0d9:  mov    %edx,0x28(%eax)
085d7ecc +0x0dc:  mov    0x8(%ebp),%eax
085d7ecf +0x0df:  mov    -0xc(%ebp),%edx
085d7ed2 +0x0e2:  mov    %edx,0x2c(%eax)
085d7ed5 +0x0e5:  mov    $0x1,%eax
085d7eda +0x0ea:  jmp    085d7ef1 <+0x101>
085d7edc +0x0ec:  nop
085d7edd +0x0ed:  addl   $0x1,-0xc(%ebp)
085d7ee1 +0x0f1:  cmpl   $0x7,-0xc(%ebp)
085d7ee5 +0x0f5:  setle  %al
085d7ee8 +0x0f8:  test   %al,%al
085d7eea +0x0fa:  jne    085d7e91 <+0xa1>
085d7eec +0x0fc:  mov    $0x0,%eax
085d7ef1 +0x101:  leave
085d7ef2 +0x102:  ret
085d7ef3 +0x103:  nop
```

## 反编译 C

```c
// PvP_Room::change_manager_to_winner @ 0x85d7df0

/* PvP_Room::change_manager_to_winner() */

undefined4 __thiscall PvP_Room::change_manager_to_winner(PvP_Room *this)

{
  bool bVar1;
  char cVar2;
  GameWorld *pGVar3;
  int iVar4;
  undefined4 uVar5;
  int local_10;
  
  if (*(int *)(this + 0x28) == 0) {
    return 0;
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar3);
  if (iVar4 == 0xf) {
    return 1;
  }
  pGVar3 = (GameWorld *)G_GameWorld();
  iVar4 = GameWorld::GetChannelType(pGVar3);
  if (iVar4 != 7) {
    pGVar3 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsSchoolPvPChannel(pGVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_085d7e5a;
    }
  }
  bVar1 = true;
LAB_085d7e5a:
  if (bVar1) {
    uVar5 = 1;
  }
  else {
    cVar2 = is_last_win(this,*(int *)(this + 0x2c));
    if (cVar2 == '\0') {
      for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
        if ((*(int *)(this + (local_10 + 0xc) * 4) != 0) &&
           (cVar2 = is_last_win(this,local_10), cVar2 == '\x01')) {
          *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + (local_10 + 0xc) * 4);
          *(int *)(this + 0x2c) = local_10;
          return 1;
        }
      }
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}
```
