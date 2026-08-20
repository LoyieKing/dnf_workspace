# process

`_ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_WarRoomWpPerMonster::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_WarRoomWpPerMonster` | `0x081d5ca8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d5ca8  _ZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_WarRoomWpPerMonster::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d5ca8, 0x081d5df1]
081d5ca8 +0x000:  push   %ebp
081d5ca9 +0x001:  mov    %esp,%ebp
081d5cab +0x003:  push   %ebx
081d5cac +0x004:  sub    $0x44,%esp
081d5caf +0x007:  mov    0x10(%ebp),%eax
081d5cb2 +0x00a:  mov    %eax,0x8(%esp)
081d5cb6 +0x00e:  mov    0xc(%ebp),%eax
081d5cb9 +0x011:  mov    %eax,0x4(%esp)
081d5cbd +0x015:  mov    0x8(%ebp),%eax
081d5cc0 +0x018:  mov    %eax,(%esp)
081d5cc3 +0x01b:  call   081d5df2 <_ZN30Dispatcher_WarRoomWpPerMonster11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_WarRoomWpPerMonster::check_error(CUser*, MSG_BASE&)
081d5cc8 +0x020:  mov    %eax,-0x1c(%ebp)
081d5ccb +0x023:  cmpl   $0x0,-0x1c(%ebp)
081d5ccf +0x027:  jle    081d5cd9 <+0x31>
081d5cd1 +0x029:  mov    -0x1c(%ebp),%eax
081d5cd4 +0x02c:  jmp    081d5dec <+0x144>
081d5cd9 +0x031:  cmpl   $0x0,-0x1c(%ebp)
081d5cdd +0x035:  jns    081d5ce9 <+0x41>
081d5cdf +0x037:  mov    $0xffffffff,%eax
081d5ce4 +0x03c:  jmp    081d5dec <+0x144>
081d5ce9 +0x041:  mov    0x10(%ebp),%eax
081d5cec +0x044:  mov    %eax,-0x18(%ebp)
081d5cef +0x047:  mov    0x14(%ebp),%eax
081d5cf2 +0x04a:  mov    %eax,-0x14(%ebp)
081d5cf5 +0x04d:  mov    0xc(%ebp),%eax
081d5cf8 +0x050:  mov    %eax,(%esp)
081d5cfb +0x053:  call   0822fe84 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x552e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x552e
081d5d00 +0x058:  movswl %ax,%ebx
081d5d03 +0x05b:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
081d5d08 +0x060:  mov    %ebx,0x4(%esp)
081d5d0c +0x064:  mov    %eax,(%esp)
081d5d0f +0x067:  call   082a25d0 <_ZN12CGameManager10GetWarRoomEi>  ; CGameManager::GetWarRoom(int)
081d5d14 +0x06c:  mov    %eax,-0x10(%ebp)
081d5d17 +0x06f:  cmpl   $0x0,-0x10(%ebp)
081d5d1b +0x073:  jne    081d5d4d <+0xa5>
081d5d1d +0x075:  mov    0xc(%ebp),%eax
081d5d20 +0x078:  mov    %eax,(%esp)
081d5d23 +0x07b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d5d28 +0x080:  mov    %eax,0xc(%esp)
081d5d2c +0x084:  movl   $0x0,0x8(%esp)
081d5d34 +0x08c:  movl   $&_ZZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d5d3c +0x094:  movl   $0x3999,(%esp)
081d5d43 +0x09b:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5d48 +0x0a0:  jmp    081d5dec <+0x144>
081d5d4d +0x0a5:  mov    -0x18(%ebp),%eax
081d5d50 +0x0a8:  movzwl 0x15(%eax),%eax
081d5d54 +0x0ac:  cmp    $0xffff,%ax
081d5d58 +0x0b0:  jne    081d5d63 <+0xbb>
081d5d5a +0x0b2:  movl   $0x0,-0xc(%ebp)
081d5d61 +0x0b9:  jmp    081d5db4 <+0x10c>
081d5d63 +0x0bb:  mov    -0x18(%ebp),%eax
081d5d66 +0x0be:  movzwl 0x15(%eax),%eax
081d5d6a +0x0c2:  movzwl %ax,%ebx
081d5d6d +0x0c5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081d5d72 +0x0ca:  mov    %ebx,0x4(%esp)
081d5d76 +0x0ce:  mov    %eax,(%esp)
081d5d79 +0x0d1:  call   086c4b9c <_ZN9GameWorld15find_from_worldEt>  ; GameWorld::find_from_world(unsigned short)
081d5d7e +0x0d6:  mov    %eax,-0xc(%ebp)
081d5d81 +0x0d9:  cmpl   $0x0,-0xc(%ebp)
081d5d85 +0x0dd:  jne    081d5db4 <+0x10c>
081d5d87 +0x0df:  mov    0xc(%ebp),%eax
081d5d8a +0x0e2:  mov    %eax,(%esp)
081d5d8d +0x0e5:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d5d92 +0x0ea:  mov    %eax,0xc(%esp)
081d5d96 +0x0ee:  movl   $0x0,0x8(%esp)
081d5d9e +0x0f6:  movl   $&_ZZN30Dispatcher_WarRoomWpPerMonster7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d5da6 +0x0fe:  movl   $0x39a4,(%esp)
081d5dad +0x105:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d5db2 +0x10a:  jmp    081d5dec <+0x144>
081d5db4 +0x10c:  mov    -0x18(%ebp),%eax
081d5db7 +0x10f:  mov    0x11(%eax),%edx
081d5dba +0x112:  mov    -0x18(%ebp),%eax
081d5dbd +0x115:  mov    0xd(%eax),%eax
081d5dc0 +0x118:  mov    -0xc(%ebp),%ecx
081d5dc3 +0x11b:  mov    %ecx,0x10(%esp)
081d5dc7 +0x11f:  mov    %edx,0xc(%esp)
081d5dcb +0x123:  mov    %eax,0x8(%esp)
081d5dcf +0x127:  mov    0xc(%ebp),%eax
081d5dd2 +0x12a:  mov    %eax,0x4(%esp)
081d5dd6 +0x12e:  mov    -0x10(%ebp),%eax
081d5dd9 +0x131:  mov    %eax,(%esp)
081d5ddc +0x134:  call   086c0574 <_ZN7WarRoom18HandleWpPerMonsterEP5CUseriiS1_>  ; WarRoom::HandleWpPerMonster(CUser*, int, int, CUser*)
081d5de1 +0x139:  mov    -0x14(%ebp),%edx
081d5de4 +0x13c:  mov    %eax,0x4(%edx)
081d5de7 +0x13f:  mov    $0x0,%eax
081d5dec +0x144:  add    $0x44,%esp
081d5def +0x147:  pop    %ebx
081d5df0 +0x148:  pop    %ebp
081d5df1 +0x149:  ret
```

## 反编译 C

```c
// Dispatcher_WarRoomWpPerMonster::process @ 0x81d5ca8

/* Dispatcher_WarRoomWpPerMonster::process(CUser*, MSG_BASE&, ParamBase&) */

int __thiscall
Dispatcher_WarRoomWpPerMonster::process
          (Dispatcher_WarRoomWpPerMonster *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ushort uVar1;
  int iVar2;
  WarRoom *this_00;
  uint uVar3;
  GameWorld *this_01;
  undefined4 uVar4;
  CUser *local_10;
  
  iVar2 = check_error((CUser *)this,(MSG_BASE *)param_1);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    else {
      CUser::GetWarRoomIndex(param_1);
      iVar2 = G_CGameManager();
      this_00 = (WarRoom *)CGameManager::GetWarRoom(iVar2);
      if (this_00 == (WarRoom *)0x0) {
        uVar3 = CUser::get_acc_id(param_1);
        iVar2 = LineFunc(0x3999,
                         "virtual int Dispatcher_WarRoomWpPerMonster::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,uVar3);
      }
      else {
        if (*(short *)(param_2 + 0x15) == -1) {
          local_10 = (CUser *)0x0;
        }
        else {
          uVar1 = *(ushort *)(param_2 + 0x15);
          this_01 = (GameWorld *)G_GameWorld();
          local_10 = (CUser *)GameWorld::find_from_world(this_01,uVar1);
          if (local_10 == (CUser *)0x0) {
            uVar3 = CUser::get_acc_id(param_1);
            iVar2 = LineFunc(0x39a4,
                             "virtual int Dispatcher_WarRoomWpPerMonster::process(CUser*, MSG_BASE&, ParamBase&)"
                             ,0,uVar3);
            return iVar2;
          }
        }
        uVar4 = WarRoom::HandleWpPerMonster
                          (this_00,param_1,*(int *)(param_2 + 0xd),*(int *)(param_2 + 0x11),local_10
                          );
        *(undefined4 *)(param_3 + 4) = uVar4;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}
```
