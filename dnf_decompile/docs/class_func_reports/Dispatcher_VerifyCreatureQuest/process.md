# process

`_ZN30Dispatcher_VerifyCreatureQuest7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_VerifyCreatureQuest::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_VerifyCreatureQuest` | `0x081e324c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e324c  _ZN30Dispatcher_VerifyCreatureQuest7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_VerifyCreatureQuest::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e324c, 0x081e329d]
081e324c +0x00:  push   %ebp
081e324d +0x01:  mov    %esp,%ebp
081e324f +0x03:  sub    $0x18,%esp
081e3252 +0x06:  cmpl   $0x0,0xc(%ebp)
081e3256 +0x0a:  jne    081e325f <+0x13>
081e3258 +0x0c:  mov    $0x0,%eax
081e325d +0x11:  jmp    081e329b <+0x4f>
081e325f +0x13:  mov    0xc(%ebp),%eax
081e3262 +0x16:  mov    %eax,(%esp)
081e3265 +0x19:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e326a +0x1e:  cmp    $0x2,%eax
081e326d +0x21:  setle  %al
081e3270 +0x24:  test   %al,%al
081e3272 +0x26:  je     081e327b <+0x2f>
081e3274 +0x28:  mov    $0x0,%eax
081e3279 +0x2d:  jmp    081e329b <+0x4f>
081e327b +0x2f:  mov    0xc(%ebp),%eax
081e327e +0x32:  mov    %eax,(%esp)
081e3281 +0x35:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e3286 +0x3a:  mov    %eax,(%esp)
081e3289 +0x3d:  call   081b7408 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x87>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x87
081e328e +0x42:  mov    %eax,(%esp)
081e3291 +0x45:  call   0833d6fa <_ZNK13user_creature12CCreatureMgr26VerifyEquipedCreatureQuestEv>  ; user_creature::CCreatureMgr::VerifyEquipedCreatureQuest() const
081e3296 +0x4a:  mov    $0x0,%eax
081e329b +0x4f:  leave
081e329c +0x50:  ret
081e329d +0x51:  nop
```

## 反编译 C

```c
// Dispatcher_VerifyCreatureQuest::process @ 0x81e324c

/* Dispatcher_VerifyCreatureQuest::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_VerifyCreatureQuest::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  CInventory *this;
  CCreatureMgr *this_00;
  
  if ((param_2 != (MSG_BASE *)0x0) && (iVar1 = CUser::get_state((CUser *)param_2), 2 < iVar1)) {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrR(this);
    user_creature::CCreatureMgr::VerifyEquipedCreatureQuest(this_00);
  }
  return 0;
}
```
