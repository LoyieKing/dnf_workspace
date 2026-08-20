# process

`_ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_PcRoomPlayTimeReward::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PcRoomPlayTimeReward` | `0x081e4f5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e4f5c  _ZN31Dispatcher_PcRoomPlayTimeReward7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_PcRoomPlayTimeReward::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e4f5c, 0x081e501f]
081e4f5c +0x00:  push   %ebp
081e4f5d +0x01:  mov    %esp,%ebp
081e4f5f +0x03:  sub    $0x28,%esp
081e4f62 +0x06:  mov    0xc(%ebp),%eax
081e4f65 +0x09:  mov    %eax,(%esp)
081e4f68 +0x0c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e4f6d +0x11:  cmp    $0x2,%eax
081e4f70 +0x14:  jle    081e4f81 <+0x25>
081e4f72 +0x16:  mov    0xc(%ebp),%eax
081e4f75 +0x19:  mov    %eax,(%esp)
081e4f78 +0x1c:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081e4f7d +0x21:  test   %eax,%eax
081e4f7f +0x23:  jne    081e4f88 <+0x2c>
081e4f81 +0x25:  mov    $0x1,%eax
081e4f86 +0x2a:  jmp    081e4f8d <+0x31>
081e4f88 +0x2c:  mov    $0x0,%eax
081e4f8d +0x31:  test   %al,%al
081e4f8f +0x33:  je     081e4f9b <+0x3f>
081e4f91 +0x35:  mov    $0x3,%eax
081e4f96 +0x3a:  jmp    081e501e <+0xc2>
081e4f9b +0x3f:  mov    0x14(%ebp),%eax
081e4f9e +0x42:  mov    %eax,-0x10(%ebp)
081e4fa1 +0x45:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e4fa6 +0x4a:  mov    %eax,(%esp)
081e4fa9 +0x4d:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081e4fae +0x52:  movl   $0x5c,0x4(%esp)
081e4fb6 +0x5a:  mov    %eax,(%esp)
081e4fb9 +0x5d:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
081e4fbe +0x62:  mov    %eax,-0xc(%ebp)
081e4fc1 +0x65:  cmpl   $0x0,-0xc(%ebp)
081e4fc5 +0x69:  jne    081e4fd8 <+0x7c>
081e4fc7 +0x6b:  mov    -0x10(%ebp),%eax
081e4fca +0x6e:  movl   $0xb2,0x4(%eax)
081e4fd1 +0x75:  mov    $0x0,%eax
081e4fd6 +0x7a:  jmp    081e501e <+0xc2>
081e4fd8 +0x7c:  mov    0xc(%ebp),%eax
081e4fdb +0x7f:  mov    %eax,0x4(%esp)
081e4fdf +0x83:  mov    -0xc(%ebp),%eax
081e4fe2 +0x86:  mov    %eax,(%esp)
081e4fe5 +0x89:  call   08110a38 <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser>  ; EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(CUser*)
081e4fea +0x8e:  mov    -0x10(%ebp),%edx
081e4fed +0x91:  mov    %eax,0x4(%edx)
081e4ff0 +0x94:  mov    -0x10(%ebp),%eax
081e4ff3 +0x97:  mov    0x4(%eax),%eax
081e4ff6 +0x9a:  test   %eax,%eax
081e4ff8 +0x9c:  je     081e5001 <+0xa5>
081e4ffa +0x9e:  mov    $0x0,%eax
081e4fff +0xa3:  jmp    081e501e <+0xc2>
081e5001 +0xa5:  mov    0xc(%ebp),%eax
081e5004 +0xa8:  mov    %eax,0x4(%esp)
081e5008 +0xac:  mov    -0xc(%ebp),%eax
081e500b +0xaf:  mov    %eax,(%esp)
081e500e +0xb2:  call   0811089c <_ZN13EventClassify15CPcRoomPlayTime26processEventPcRoomPlayTimeEP5CUser>  ; EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(CUser*)
081e5013 +0xb7:  mov    -0x10(%ebp),%edx
081e5016 +0xba:  mov    %eax,0x4(%edx)
081e5019 +0xbd:  mov    $0x0,%eax
081e501e +0xc2:  leave
081e501f +0xc3:  ret
```

## 反编译 C

```c
// Dispatcher_PcRoomPlayTimeReward::process @ 0x81e4f5c

/* Dispatcher_PcRoomPlayTimeReward::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_PcRoomPlayTimeReward::process
          (Dispatcher_PcRoomPlayTimeReward *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3
          )

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CPcRoomPlayTime *this_01;
  
  iVar2 = CUser::get_state(param_1);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081e4f8d;
    }
  }
  bVar1 = true;
LAB_081e4f8d:
  if (bVar1) {
    uVar3 = 3;
  }
  else {
    this_00 = (CDataManager *)G_CDataManager();
    iVar2 = CDataManager::get_event_script_mng(this_00);
    this_01 = (CPcRoomPlayTime *)EventClassify::CEventScriptMng::get_event_entity(iVar2);
    if (this_01 == (CPcRoomPlayTime *)0x0) {
      *(undefined4 *)(param_3 + 4) = 0xb2;
      uVar3 = 0;
    }
    else {
      uVar3 = EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(this_01,param_1);
      *(undefined4 *)(param_3 + 4) = uVar3;
      if (*(int *)(param_3 + 4) == 0) {
        uVar3 = EventClassify::CPcRoomPlayTime::processEventPcRoomPlayTime(this_01,param_1);
        *(undefined4 *)(param_3 + 4) = uVar3;
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}
```
