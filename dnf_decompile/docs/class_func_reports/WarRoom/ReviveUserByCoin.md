# ReviveUserByCoin

`_ZN7WarRoom16ReviveUserByCoinEP5CUsert`

`WarRoom::ReviveUserByCoin(CUser*, unsigned short)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bf324` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bf324  _ZN7WarRoom16ReviveUserByCoinEP5CUsert
#           WarRoom::ReviveUserByCoin(CUser*, unsigned short)
# range [0x086bf324, 0x086bf483]
086bf324 +0x000:  push   %ebp
086bf325 +0x001:  mov    %esp,%ebp
086bf327 +0x003:  sub    $0x48,%esp
086bf32a +0x006:  mov    0x10(%ebp),%eax
086bf32d +0x009:  mov    %ax,-0x1c(%ebp)
086bf331 +0x00d:  mov    0x8(%ebp),%eax
086bf334 +0x010:  mov    %eax,(%esp)
086bf337 +0x013:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bf33c +0x018:  cmp    $0x3,%eax
086bf33f +0x01b:  je     086bf358 <+0x34>
086bf341 +0x01d:  mov    0x8(%ebp),%eax
086bf344 +0x020:  mov    %eax,(%esp)
086bf347 +0x023:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bf34c +0x028:  cmp    $0x4,%eax
086bf34f +0x02b:  je     086bf358 <+0x34>
086bf351 +0x02d:  mov    $0x1,%eax
086bf356 +0x032:  jmp    086bf35d <+0x39>
086bf358 +0x034:  mov    $0x0,%eax
086bf35d +0x039:  test   %al,%al
086bf35f +0x03b:  je     086bf36b <+0x47>
086bf361 +0x03d:  mov    $0x13,%eax
086bf366 +0x042:  jmp    086bf482 <+0x15e>
086bf36b +0x047:  movl   $0x0,-0x10(%ebp)
086bf372 +0x04e:  movl   $0x0,-0xc(%ebp)
086bf379 +0x055:  jmp    086bf3df <+0xbb>
086bf37b +0x057:  mov    -0xc(%ebp),%edx
086bf37e +0x05a:  mov    0x8(%ebp),%eax
086bf381 +0x05d:  add    $0x48,%edx
086bf384 +0x060:  mov    0xc(%eax,%edx,4),%eax
086bf388 +0x064:  test   %eax,%eax
086bf38a +0x066:  je     086bf3da <+0xb6>
086bf38c +0x068:  mov    -0xc(%ebp),%edx
086bf38f +0x06b:  mov    0x8(%ebp),%eax
086bf392 +0x06e:  add    $0x48,%edx
086bf395 +0x071:  mov    0xc(%eax,%edx,4),%eax
086bf399 +0x075:  mov    %eax,(%esp)
086bf39c +0x078:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086bf3a1 +0x07d:  cmp    -0x1c(%ebp),%ax
086bf3a5 +0x081:  sete   %al
086bf3a8 +0x084:  test   %al,%al
086bf3aa +0x086:  je     086bf3db <+0xb7>
086bf3ac +0x088:  mov    -0xc(%ebp),%eax
086bf3af +0x08b:  mov    0x8(%ebp),%edx
086bf3b2 +0x08e:  movzbl 0x184(%edx,%eax,1),%eax
086bf3ba +0x096:  test   %al,%al
086bf3bc +0x098:  je     086bf3c8 <+0xa4>
086bf3be +0x09a:  mov    $0x12,%eax
086bf3c3 +0x09f:  jmp    086bf482 <+0x15e>
086bf3c8 +0x0a4:  mov    -0xc(%ebp),%edx
086bf3cb +0x0a7:  mov    0x8(%ebp),%eax
086bf3ce +0x0aa:  add    $0x48,%edx
086bf3d1 +0x0ad:  mov    0xc(%eax,%edx,4),%eax
086bf3d5 +0x0b1:  mov    %eax,-0x10(%ebp)
086bf3d8 +0x0b4:  jmp    086bf3ea <+0xc6>
086bf3da +0x0b6:  nop
086bf3db +0x0b7:  addl   $0x1,-0xc(%ebp)
086bf3df +0x0bb:  cmpl   $0x5,-0xc(%ebp)
086bf3e3 +0x0bf:  setle  %al
086bf3e6 +0x0c2:  test   %al,%al
086bf3e8 +0x0c4:  jne    086bf37b <+0x57>
086bf3ea +0x0c6:  cmpl   $0x0,-0x10(%ebp)
086bf3ee +0x0ca:  jne    086bf3fa <+0xd6>
086bf3f0 +0x0cc:  mov    $0x15,%eax
086bf3f5 +0x0d1:  jmp    086bf482 <+0x15e>
086bf3fa +0x0d6:  mov    0xc(%ebp),%eax
086bf3fd +0x0d9:  mov    %eax,(%esp)
086bf400 +0x0dc:  call   086c0b80 <_GLOBAL__I__ZN7WarRoomC2Ev+0x79>  ; global constructors keyed to WarRoom::WarRoom()+0x79
086bf405 +0x0e1:  mov    0x8(%ebp),%edx
086bf408 +0x0e4:  mov    0x1d0(%edx),%edx
086bf40e +0x0ea:  mov    0x87c(%edx),%edx
086bf414 +0x0f0:  cmp    %edx,%eax
086bf416 +0x0f2:  setge  %al
086bf419 +0x0f5:  test   %al,%al
086bf41b +0x0f7:  je     086bf424 <+0x100>
086bf41d +0x0f9:  mov    $0x16,%eax
086bf422 +0x0fe:  jmp    086bf482 <+0x15e>
086bf424 +0x100:  mov    -0x10(%ebp),%eax
086bf427 +0x103:  mov    %eax,(%esp)
086bf42a +0x106:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086bf42f +0x10b:  mov    0xc(%ebp),%edx
086bf432 +0x10e:  mov    0x796f8(%edx),%edx
086bf438 +0x114:  mov    %eax,0x4(%esp)
086bf43c +0x118:  mov    %edx,(%esp)
086bf43f +0x11b:  call   084ba030 <_ZN10HistoryLog12WriteUseCoinEP8_IO_FILEPKc>  ; HistoryLog::WriteUseCoin(_IO_FILE*, char const*)
086bf444 +0x120:  movl   $0xff,0x18(%esp)
086bf44c +0x128:  movl   $0x0,0x14(%esp)
086bf454 +0x130:  movl   $0x1,0x10(%esp)
086bf45c +0x138:  movl   $0x1,0xc(%esp)
086bf464 +0x140:  mov    -0x10(%ebp),%eax
086bf467 +0x143:  mov    %eax,0x8(%esp)
086bf46b +0x147:  mov    -0xc(%ebp),%eax
086bf46e +0x14a:  mov    %eax,0x4(%esp)
086bf472 +0x14e:  mov    0x8(%ebp),%eax
086bf475 +0x151:  mov    %eax,(%esp)
086bf478 +0x154:  call   086be8b4 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi>  ; WarRoom::SetCharacterLive(int, CUser*, bool, bool, short, int)
086bf47d +0x159:  mov    $0x0,%eax
086bf482 +0x15e:  leave
086bf483 +0x15f:  ret
```

## 反编译 C

```c
// WarRoom::ReviveUserByCoin @ 0x86bf324

/* WarRoom::ReviveUserByCoin(CUser*, unsigned short) */

undefined4 __thiscall WarRoom::ReviveUserByCoin(WarRoom *this,CUser *param_1,ushort param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  CUserCharacInfo *local_14;
  int local_10;
  
  iVar3 = GetState(this);
  if ((iVar3 == 3) || (iVar3 = GetState(this), iVar3 == 4)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = 0x13;
  }
  else {
    local_14 = (CUserCharacInfo *)0x0;
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if ((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) &&
         (uVar2 = CUser::get_unique_id(*(CUser **)(this + (local_10 + 0x48) * 4 + 0xc)),
         uVar2 == param_2)) {
        if (this[local_10 + 0x184] != (WarRoom)0x0) {
          return 0x12;
        }
        local_14 = *(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc);
        break;
      }
    }
    if (local_14 == (CUserCharacInfo *)0x0) {
      uVar4 = 0x15;
    }
    else {
      iVar3 = CUser::GetUsedCoinCount(param_1);
      if (iVar3 < *(int *)(*(int *)(this + 0x1d0) + 0x87c)) {
        pcVar5 = (char *)CUserCharacInfo::getCurCharacName(local_14);
        HistoryLog::WriteUseCoin(*(_IO_FILE **)(param_1 + 0x796f8),pcVar5);
        SetCharacterLive(this,local_10,(CUser *)local_14,true,true,0,0xff);
        uVar4 = 0;
      }
      else {
        uVar4 = 0x16;
      }
    }
  }
  return uVar4;
}
```
