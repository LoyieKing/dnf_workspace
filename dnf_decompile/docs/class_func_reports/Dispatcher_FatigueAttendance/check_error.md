# check_error

`_ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_FatigueAttendance::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_FatigueAttendance` | `0x081db310` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081db310  _ZN28Dispatcher_FatigueAttendance11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_FatigueAttendance::check_error(CUser*, MSG_BASE&)
# range [0x081db310, 0x081db391]
081db310 +0x00:  push   %ebp
081db311 +0x01:  mov    %esp,%ebp
081db313 +0x03:  sub    $0x28,%esp
081db316 +0x06:  cmpl   $0x0,0xc(%ebp)
081db31a +0x0a:  jne    081db323 <+0x13>
081db31c +0x0c:  mov    $0xffffffff,%eax
081db321 +0x11:  jmp    081db390 <+0x80>
081db323 +0x13:  mov    0x10(%ebp),%eax
081db326 +0x16:  mov    %eax,-0xc(%ebp)
081db329 +0x19:  mov    0xc(%ebp),%eax
081db32c +0x1c:  mov    %eax,(%esp)
081db32f +0x1f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081db334 +0x24:  test   %eax,%eax
081db336 +0x26:  sete   %al
081db339 +0x29:  test   %al,%al
081db33b +0x2b:  je     081db344 <+0x34>
081db33d +0x2d:  mov    $0xffffffff,%eax
081db342 +0x32:  jmp    081db390 <+0x80>
081db344 +0x34:  mov    0xc(%ebp),%eax
081db347 +0x37:  mov    %eax,(%esp)
081db34a +0x3a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081db34f +0x3f:  cmp    $0x3,%eax
081db352 +0x42:  setne  %al
081db355 +0x45:  test   %al,%al
081db357 +0x47:  je     081db360 <+0x50>
081db359 +0x49:  mov    $0x63,%eax
081db35e +0x4e:  jmp    081db390 <+0x80>
081db360 +0x50:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081db365 +0x55:  mov    %eax,(%esp)
081db368 +0x58:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
081db36d +0x5d:  movl   $0x56,0x4(%esp)
081db375 +0x65:  mov    %eax,(%esp)
081db378 +0x68:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
081db37d +0x6d:  xor    $0x1,%eax
081db380 +0x70:  test   %al,%al
081db382 +0x72:  je     081db38b <+0x7b>
081db384 +0x74:  mov    $0x7,%eax
081db389 +0x79:  jmp    081db390 <+0x80>
081db38b +0x7b:  mov    $0x0,%eax
081db390 +0x80:  leave
081db391 +0x81:  ret
```

## 反编译 C

```c
// Dispatcher_FatigueAttendance::check_error @ 0x81db310

/* Dispatcher_FatigueAttendance::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_FatigueAttendance::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *this;
  CEventScriptMng *this_00;
  
  if (param_2 == (MSG_BASE *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar3 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = CUser::get_state((CUser *)param_2);
      if (iVar3 == 3) {
        this = (CDataManager *)G_CDataManager();
        this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
        cVar1 = EventClassify::CEventScriptMng::is_eventing(this_00,0x56);
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = 7;
        }
      }
      else {
        uVar2 = 99;
      }
    }
  }
  return uVar2;
}
```
