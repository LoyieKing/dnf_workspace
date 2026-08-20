# process

`_ZN21Dispatcher_ComboSkill7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ComboSkill::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ComboSkill` | `0x0825f2fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825f2fc  _ZN21Dispatcher_ComboSkill7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ComboSkill::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0825f2fc, 0x0825f3cd]
0825f2fc +0x00:  push   %ebp
0825f2fd +0x01:  mov    %esp,%ebp
0825f2ff +0x03:  push   %esi
0825f300 +0x04:  push   %ebx
0825f301 +0x05:  sub    $0x20,%esp
0825f304 +0x08:  mov    0x14(%ebp),%eax
0825f307 +0x0b:  mov    %eax,-0x10(%ebp)
0825f30a +0x0e:  mov    0x10(%ebp),%eax
0825f30d +0x11:  mov    %eax,0x8(%esp)
0825f311 +0x15:  mov    0xc(%ebp),%eax
0825f314 +0x18:  mov    %eax,0x4(%esp)
0825f318 +0x1c:  mov    0x8(%ebp),%eax
0825f31b +0x1f:  mov    %eax,(%esp)
0825f31e +0x22:  call   0825f3ce <_ZN21Dispatcher_ComboSkill11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ComboSkill::check_error(CUser*, MSG_BASE&)
0825f323 +0x27:  mov    -0x10(%ebp),%edx
0825f326 +0x2a:  mov    %eax,0x4(%edx)
0825f329 +0x2d:  mov    -0x10(%ebp),%eax
0825f32c +0x30:  mov    0x4(%eax),%eax
0825f32f +0x33:  test   %eax,%eax
0825f331 +0x35:  jle    0825f33d <+0x41>
0825f333 +0x37:  mov    $0x0,%eax
0825f338 +0x3c:  jmp    0825f3c6 <+0xca>
0825f33d +0x41:  mov    -0x10(%ebp),%eax
0825f340 +0x44:  mov    0x4(%eax),%eax
0825f343 +0x47:  test   %eax,%eax
0825f345 +0x49:  jns    0825f36f <+0x73>
0825f347 +0x4b:  mov    -0x10(%ebp),%eax
0825f34a +0x4e:  mov    0x4(%eax),%eax
0825f34d +0x51:  movl   $0x0,0xc(%esp)
0825f355 +0x59:  mov    %eax,0x8(%esp)
0825f359 +0x5d:  movl   $&_ZZN21Dispatcher_ComboSkill7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
0825f361 +0x65:  movl   $0x33f,(%esp)
0825f368 +0x6c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0825f36d +0x71:  jmp    0825f3c6 <+0xca>
0825f36f +0x73:  mov    0x10(%ebp),%eax
0825f372 +0x76:  mov    %eax,-0xc(%ebp)
0825f375 +0x79:  mov    -0xc(%ebp),%eax
0825f378 +0x7c:  lea    0xe(%eax),%esi
0825f37b +0x7f:  mov    -0xc(%ebp),%eax
0825f37e +0x82:  movzbl 0xd(%eax),%eax
0825f382 +0x86:  movsbl %al,%ebx
0825f385 +0x89:  mov    0xc(%ebp),%eax
0825f388 +0x8c:  mov    %eax,(%esp)
0825f38b +0x8f:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0825f390 +0x94:  mov    %esi,0x8(%esp)
0825f394 +0x98:  mov    %ebx,0x4(%esp)
0825f398 +0x9c:  mov    %eax,(%esp)
0825f39b +0x9f:  call   08608c30 <_ZN9SkillSlot17setComboSkillInfoE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE>  ; SkillSlot::setComboSkillInfo(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int, std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int, std::allocator<int> > > > >&)
0825f3a0 +0xa4:  mov    -0xc(%ebp),%eax
0825f3a3 +0xa7:  movzbl 0xd(%eax),%eax
0825f3a7 +0xab:  movsbl %al,%ebx
0825f3aa +0xae:  mov    0xc(%ebp),%eax
0825f3ad +0xb1:  mov    %eax,(%esp)
0825f3b0 +0xb4:  call   0822f140 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47ea
0825f3b5 +0xb9:  mov    %ebx,0x4(%esp)
0825f3b9 +0xbd:  mov    %eax,(%esp)
0825f3bc +0xc0:  call   0860922c <_ZN9SkillSlot20verifyComboSkillTreeE20ENUM_SKILL_TREE_KIND>  ; SkillSlot::verifyComboSkillTree(ENUM_SKILL_TREE_KIND)
0825f3c1 +0xc5:  mov    $0x0,%eax
0825f3c6 +0xca:  add    $0x20,%esp
0825f3c9 +0xcd:  pop    %ebx
0825f3ca +0xce:  pop    %esi
0825f3cb +0xcf:  pop    %ebp
0825f3cc +0xd0:  ret
0825f3cd +0xd1:  nop
```

## 反编译 C

```c
// Dispatcher_ComboSkill::process @ 0x825f2fc

/* Dispatcher_ComboSkill::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ComboSkill::process
          (Dispatcher_ComboSkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  undefined4 uVar2;
  SkillSlot *pSVar3;
  
  uVar2 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar2;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = LineFunc(0x33f,
                       "virtual int Dispatcher_ComboSkill::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),0);
    }
    else {
      MVar1 = param_2[0xd];
      pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
      SkillSlot::setComboSkillInfo(pSVar3,(int)(char)MVar1,param_2 + 0xe);
      MVar1 = param_2[0xd];
      pSVar3 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
      SkillSlot::verifyComboSkillTree(pSVar3,(int)(char)MVar1);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
