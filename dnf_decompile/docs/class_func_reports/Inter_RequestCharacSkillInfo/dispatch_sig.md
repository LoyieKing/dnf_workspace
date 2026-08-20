# dispatch_sig

`_ZN28Inter_RequestCharacSkillInfo12dispatch_sigEP5CUserPci`

`Inter_RequestCharacSkillInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_RequestCharacSkillInfo` | `0x084e7884` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7884  _ZN28Inter_RequestCharacSkillInfo12dispatch_sigEP5CUserPci
#           Inter_RequestCharacSkillInfo::dispatch_sig(CUser*, char*, int)
# range [0x084e7884, 0x084e79f1]
084e7884 +0x000:  push   %ebp
084e7885 +0x001:  mov    %esp,%ebp
084e7887 +0x003:  push   %ebx
084e7888 +0x004:  sub    $0x24,%esp
084e788b +0x007:  mov    0x10(%ebp),%eax
084e788e +0x00a:  mov    %eax,-0x14(%ebp)
084e7891 +0x00d:  cmpl   $0x0,0xc(%ebp)
084e7895 +0x011:  jne    084e78a1 <+0x1d>
084e7897 +0x013:  mov    $0x0,%eax
084e789c +0x018:  jmp    084e79ec <+0x168>
084e78a1 +0x01d:  mov    0xc(%ebp),%eax
084e78a4 +0x020:  mov    %eax,(%esp)
084e78a7 +0x023:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e78ac +0x028:  cmp    $0x2,%eax
084e78af +0x02b:  setle  %al
084e78b2 +0x02e:  test   %al,%al
084e78b4 +0x030:  je     084e78c0 <+0x3c>
084e78b6 +0x032:  mov    $0x0,%eax
084e78bb +0x037:  jmp    084e79ec <+0x168>
084e78c0 +0x03c:  mov    -0x14(%ebp),%eax
084e78c3 +0x03f:  mov    (%eax),%eax
084e78c5 +0x041:  mov    %eax,0x4(%esp)
084e78c9 +0x045:  mov    0xc(%ebp),%eax
084e78cc +0x048:  mov    %eax,(%esp)
084e78cf +0x04b:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
084e78d4 +0x050:  mov    %eax,-0x10(%ebp)
084e78d7 +0x053:  cmpl   $0xffffffff,-0x10(%ebp)
084e78db +0x057:  jne    084e78e7 <+0x63>
084e78dd +0x059:  mov    $0x0,%eax
084e78e2 +0x05e:  jmp    084e79ec <+0x168>
084e78e7 +0x063:  mov    -0x10(%ebp),%eax
084e78ea +0x066:  mov    0xc(%ebp),%edx
084e78ed +0x069:  add    $0x796e8,%edx
084e78f3 +0x06f:  mov    %eax,0x4(%esp)
084e78f7 +0x073:  mov    %edx,(%esp)
084e78fa +0x076:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084e78ff +0x07b:  mov    -0x14(%ebp),%edx
084e7902 +0x07e:  movzbl 0x19c(%edx),%edx
084e7909 +0x085:  mov    %dl,0x1239(%eax)
084e790f +0x08b:  movzbl 0x1239(%eax),%eax
084e7916 +0x092:  mov    %al,-0x9(%ebp)
084e7919 +0x095:  mov    -0x10(%ebp),%eax
084e791c +0x098:  mov    0xc(%ebp),%edx
084e791f +0x09b:  add    $0x796e8,%edx
084e7925 +0x0a1:  mov    %eax,0x4(%esp)
084e7929 +0x0a5:  mov    %edx,(%esp)
084e792c +0x0a8:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084e7931 +0x0ad:  lea    0x892(%eax),%edx
084e7937 +0x0b3:  mov    0xc(%ebp),%eax
084e793a +0x0b6:  mov    %eax,0x4(%esp)
084e793e +0x0ba:  mov    %edx,(%esp)
084e7941 +0x0bd:  call   0822ee2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x44d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x44d8
084e7946 +0x0c2:  mov    -0x10(%ebp),%eax
084e7949 +0x0c5:  mov    0xc(%ebp),%edx
084e794c +0x0c8:  add    $0x796e8,%edx
084e7952 +0x0ce:  mov    %eax,0x4(%esp)
084e7956 +0x0d2:  mov    %edx,(%esp)
084e7959 +0x0d5:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084e795e +0x0da:  lea    0x892(%eax),%ecx
084e7964 +0x0e0:  mov    -0x14(%ebp),%eax
084e7967 +0x0e3:  lea    0x4(%eax),%edx
084e796a +0x0e6:  movsbl -0x9(%ebp),%eax
084e796e +0x0ea:  mov    %ecx,0xc(%esp)
084e7972 +0x0ee:  mov    %edx,0x8(%esp)
084e7976 +0x0f2:  mov    %eax,0x4(%esp)
084e797a +0x0f6:  mov    0x8(%ebp),%eax
084e797d +0x0f9:  mov    %eax,(%esp)
084e7980 +0x0fc:  call   084e7820 <_ZN28Inter_RequestCharacSkillInfo21_PutSkillInfoToCharacEcPK15_Mastered_skillP9SkillSlot>  ; Inter_RequestCharacSkillInfo::_PutSkillInfoToCharac(char, _Mastered_skill const*, SkillSlot*)
084e7985 +0x101:  movsbl -0x9(%ebp),%ebx
084e7989 +0x105:  mov    -0x10(%ebp),%eax
084e798c +0x108:  mov    0xc(%ebp),%edx
084e798f +0x10b:  add    $0x796e8,%edx
084e7995 +0x111:  mov    %eax,0x4(%esp)
084e7999 +0x115:  mov    %edx,(%esp)
084e799c +0x118:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084e79a1 +0x11d:  lea    0x892(%eax),%edx
084e79a7 +0x123:  mov    %ebx,0x8(%esp)
084e79ab +0x127:  mov    -0x10(%ebp),%eax
084e79ae +0x12a:  mov    %eax,0x4(%esp)
084e79b2 +0x12e:  mov    %edx,(%esp)
084e79b5 +0x131:  call   086086ce <_ZN9SkillSlot13SendSkillInfoEi20ENUM_SKILL_TREE_KIND>  ; SkillSlot::SendSkillInfo(int, ENUM_SKILL_TREE_KIND)
084e79ba +0x136:  mov    -0x10(%ebp),%eax
084e79bd +0x139:  mov    0xc(%ebp),%edx
084e79c0 +0x13c:  add    $0x796e8,%edx
084e79c6 +0x142:  mov    %eax,0x4(%esp)
084e79ca +0x146:  mov    %edx,(%esp)
084e79cd +0x149:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
084e79d2 +0x14e:  add    $0x892,%eax
084e79d7 +0x153:  movl   $0x1,0x4(%esp)
084e79df +0x15b:  mov    %eax,(%esp)
084e79e2 +0x15e:  call   086086b6 <_ZN9SkillSlot19SetLoadStrikerSkillEb>  ; SkillSlot::SetLoadStrikerSkill(bool)
084e79e7 +0x163:  mov    $0x0,%eax
084e79ec +0x168:  add    $0x24,%esp
084e79ef +0x16b:  pop    %ebx
084e79f0 +0x16c:  pop    %ebp
084e79f1 +0x16d:  ret
```

## 反编译 C

```c
// Inter_RequestCharacSkillInfo::dispatch_sig @ 0x84e7884

/* Inter_RequestCharacSkillInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_RequestCharacSkillInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  if (((param_2 != (char *)0x0) && (iVar2 = CUser::get_state((CUser *)param_2), 2 < iVar2)) &&
     (uVar3 = CUser::get_charac_idx((CUser *)param_2,*(uint *)param_3), uVar3 != 0xffffffff)) {
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    *(undefined1 *)(iVar2 + 0x1239) = *(undefined1 *)(param_3 + 0x19c);
    cVar1 = *(char *)(iVar2 + 0x1239);
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    SkillSlot::set_parent((SkillSlot *)(iVar2 + 0x892),(CUser *)param_2);
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    _PutSkillInfoToCharac
              ((Inter_RequestCharacSkillInfo *)param_1,cVar1,(_Mastered_skill *)(param_3 + 4),
               (SkillSlot *)(iVar2 + 0x892));
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    SkillSlot::SendSkillInfo((SkillSlot *)(iVar2 + 0x892),uVar3,(int)cVar1);
    iVar2 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_2 + 0x796e8),
                       uVar3);
    SkillSlot::SetLoadStrikerSkill((SkillSlot *)(iVar2 + 0x892),true);
  }
  return 0;
}
```
