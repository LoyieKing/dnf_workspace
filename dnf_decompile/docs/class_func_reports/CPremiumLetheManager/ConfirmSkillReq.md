# ConfirmSkillReq

`_ZN20CPremiumLetheManager15ConfirmSkillReqEP5CUser`

`CPremiumLetheManager::ConfirmSkillReq(CUser*)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c3d70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c3d70  _ZN20CPremiumLetheManager15ConfirmSkillReqEP5CUser
#           CPremiumLetheManager::ConfirmSkillReq(CUser*)
# range [0x085c3d70, 0x085c3e29]
085c3d70 +0x00:  push   %ebp
085c3d71 +0x01:  mov    %esp,%ebp
085c3d73 +0x03:  push   %ebx
085c3d74 +0x04:  sub    $0x24,%esp
085c3d77 +0x07:  cmpl   $0x0,0xc(%ebp)
085c3d7b +0x0b:  jne    085c3d87 <+0x17>
085c3d7d +0x0d:  mov    $0x0,%eax
085c3d82 +0x12:  jmp    085c3e23 <+0xb3>
085c3d87 +0x17:  movl   $0x21,0x4(%esp)
085c3d8f +0x1f:  mov    0xc(%ebp),%eax
085c3d92 +0x22:  mov    %eax,(%esp)
085c3d95 +0x25:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
085c3d9a +0x2a:  xor    $0x1,%eax
085c3d9d +0x2d:  test   %al,%al
085c3d9f +0x2f:  je     085c3da8 <+0x38>
085c3da1 +0x31:  mov    $0x0,%eax
085c3da6 +0x36:  jmp    085c3e23 <+0xb3>
085c3da8 +0x38:  mov    0xc(%ebp),%eax
085c3dab +0x3b:  mov    %eax,(%esp)
085c3dae +0x3e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
085c3db3 +0x43:  mov    %eax,%ebx
085c3db5 +0x45:  movl   $0x0,0xc(%esp)
085c3dbd +0x4d:  movl   $0x35,0x8(%esp)
085c3dc5 +0x55:  movl   $&_ZZN20CPremiumLetheManager15ConfirmSkillReqEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085c3dcd +0x5d:  lea    -0x18(%ebp),%eax
085c3dd0 +0x60:  mov    %eax,(%esp)
085c3dd3 +0x63:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c3dd8 +0x68:  mov    %ebx,0x8(%esp)
085c3ddc +0x6c:  movl   $"ONE_DAY_LETHE : CONFIRM_SKILL, char(%s)",0x4(%esp)
085c3de4 +0x74:  lea    -0x18(%ebp),%eax
085c3de7 +0x77:  mov    %eax,(%esp)
085c3dea +0x7a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c3def +0x7f:  mov    0xc(%ebp),%eax
085c3df2 +0x82:  mov    %eax,(%esp)
085c3df5 +0x85:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
085c3dfa +0x8a:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%edx
085c3e01 +0x91:  movzbl %dl,%edx
085c3e04 +0x94:  mov    %eax,0xc(%esp)
085c3e08 +0x98:  mov    %edx,0x8(%esp)
085c3e0c +0x9c:  mov    0xc(%ebp),%eax
085c3e0f +0x9f:  mov    %eax,0x4(%esp)
085c3e13 +0xa3:  mov    0x8(%ebp),%eax
085c3e16 +0xa6:  mov    %eax,(%esp)
085c3e19 +0xa9:  call   085c4842 <_ZN20CPremiumLetheManager7_updateEP5CUserh20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::_update(CUser*, unsigned char, ENUM_SKILL_TREE_KIND)
085c3e1e +0xae:  mov    $0x1,%eax
085c3e23 +0xb3:  add    $0x24,%esp
085c3e26 +0xb6:  pop    %ebx
085c3e27 +0xb7:  pop    %ebp
085c3e28 +0xb8:  ret
085c3e29 +0xb9:  nop
```

## 反编译 C

```c
// CPremiumLetheManager::ConfirmSkillReq @ 0x85c3d70

/* CPremiumLetheManager::ConfirmSkillReq(CUser*) */

undefined4 __thiscall
CPremiumLetheManager::ConfirmSkillReq(CPremiumLetheManager *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_1c [20];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CUser::isAffectedPremium(param_1,0x21);
    if (cVar1 == '\x01') {
      uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_1c,"bool CPremiumLetheManager::ConfirmSkillReq(CUser*)",0x35,0);
      cMyTrace::operator()(local_1c,"ONE_DAY_LETHE : CONFIRM_SKILL, char(%s)",uVar2);
      uVar2 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
      _update(this,param_1,SKILL_CONFIRM_STATE,uVar2);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
