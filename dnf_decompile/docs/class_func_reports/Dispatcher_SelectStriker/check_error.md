# check_error

`_ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_SelectStriker::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SelectStriker` | `0x081e4066` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e4066  _ZN24Dispatcher_SelectStriker11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_SelectStriker::check_error(CUser*, MSG_BASE&)
# range [0x081e4066, 0x081e42ed]
081e4066 +0x000:  push   %ebp
081e4067 +0x001:  mov    %esp,%ebp
081e4069 +0x003:  push   %edi
081e406a +0x004:  push   %esi
081e406b +0x005:  push   %ebx
081e406c +0x006:  sub    $0x3c,%esp
081e406f +0x009:  cmpl   $0x0,0xc(%ebp)
081e4073 +0x00d:  jne    081e407f <+0x19>
081e4075 +0x00f:  mov    $0xffffffff,%eax
081e407a +0x014:  jmp    081e42e6 <+0x280>
081e407f +0x019:  mov    0xc(%ebp),%eax
081e4082 +0x01c:  mov    %eax,(%esp)
081e4085 +0x01f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e408a +0x024:  cmp    $0x3,%eax
081e408d +0x027:  setne  %al
081e4090 +0x02a:  test   %al,%al
081e4092 +0x02c:  je     081e409e <+0x38>
081e4094 +0x02e:  mov    $0x7fffffff,%eax
081e4099 +0x033:  jmp    081e42e6 <+0x280>
081e409e +0x038:  mov    0xc(%ebp),%eax
081e40a1 +0x03b:  mov    %eax,(%esp)
081e40a4 +0x03e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
081e40a9 +0x043:  test   %eax,%eax
081e40ab +0x045:  sete   %al
081e40ae +0x048:  test   %al,%al
081e40b0 +0x04a:  je     081e40bc <+0x56>
081e40b2 +0x04c:  mov    $0x7fffffff,%eax
081e40b7 +0x051:  jmp    081e42e6 <+0x280>
081e40bc +0x056:  mov    0x10(%ebp),%eax
081e40bf +0x059:  mov    %eax,-0x2c(%ebp)
081e40c2 +0x05c:  movl   $0xffffffff,0x4(%esp)
081e40ca +0x064:  mov    0xc(%ebp),%eax
081e40cd +0x067:  mov    %eax,(%esp)
081e40d0 +0x06a:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
081e40d5 +0x06f:  mov    %eax,0x4(%esp)
081e40d9 +0x073:  mov    0xc(%ebp),%eax
081e40dc +0x076:  mov    %eax,(%esp)
081e40df +0x079:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
081e40e4 +0x07e:  mov    %eax,-0x28(%ebp)
081e40e7 +0x081:  cmpl   $0xffffffff,-0x28(%ebp)
081e40eb +0x085:  jne    081e40f7 <+0x91>
081e40ed +0x087:  mov    $0x39,%eax
081e40f2 +0x08c:  jmp    081e42e6 <+0x280>
081e40f7 +0x091:  mov    -0x2c(%ebp),%eax
081e40fa +0x094:  movzbl 0xd(%eax),%eax
081e40fe +0x098:  movsbl %al,%eax
081e4101 +0x09b:  cmp    -0x28(%ebp),%eax
081e4104 +0x09e:  jne    081e4159 <+0xf3>
081e4106 +0x0a0:  mov    0xc(%ebp),%eax
081e4109 +0x0a3:  movl   $0x0,0x4(%esp)
081e4111 +0x0ab:  mov    %eax,(%esp)
081e4114 +0x0ae:  call   0822f0e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x478e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x478e
081e4119 +0x0b3:  mov    0xc(%ebp),%eax
081e411c +0x0b6:  movl   $0x0,0x4(%esp)
081e4124 +0x0be:  mov    %eax,(%esp)
081e4127 +0x0c1:  call   0822f0b0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x475a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x475a
081e412c +0x0c6:  mov    0xc(%ebp),%eax
081e412f +0x0c9:  add    $0x796f4,%eax
081e4134 +0x0ce:  mov    %eax,(%esp)
081e4137 +0x0d1:  call   0822fbda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5284>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5284
081e413c +0x0d6:  mov    0xc(%ebp),%eax
081e413f +0x0d9:  movl   $0x0,0x4(%esp)
081e4147 +0x0e1:  mov    %eax,(%esp)
081e414a +0x0e4:  call   0864e28e <_ZN15CUserCharacInfo12setTagCharacEP12_Charac_info>  ; CUserCharacInfo::setTagCharac(_Charac_info*)
081e414f +0x0e9:  mov    $0x7fffffff,%eax
081e4154 +0x0ee:  jmp    081e42e6 <+0x280>
081e4159 +0x0f3:  mov    -0x2c(%ebp),%eax
081e415c +0x0f6:  movzbl 0xd(%eax),%eax
081e4160 +0x0fa:  test   %al,%al
081e4162 +0x0fc:  js     081e417f <+0x119>
081e4164 +0x0fe:  mov    -0x2c(%ebp),%eax
081e4167 +0x101:  movzbl 0xd(%eax),%ebx
081e416b +0x105:  mov    0xc(%ebp),%eax
081e416e +0x108:  add    $0x796e8,%eax
081e4173 +0x10d:  mov    %eax,(%esp)
081e4176 +0x110:  call   081a0b9a <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x289>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x289
081e417b +0x115:  cmp    %al,%bl
081e417d +0x117:  jl     081e4186 <+0x120>
081e417f +0x119:  mov    $0x1,%eax
081e4184 +0x11e:  jmp    081e418b <+0x125>
081e4186 +0x120:  mov    $0x0,%eax
081e418b +0x125:  test   %al,%al
081e418d +0x127:  je     081e4199 <+0x133>
081e418f +0x129:  mov    $0x39,%eax
081e4194 +0x12e:  jmp    081e42e6 <+0x280>
081e4199 +0x133:  mov    -0x2c(%ebp),%eax
081e419c +0x136:  movzbl 0xd(%eax),%eax
081e41a0 +0x13a:  movsbl %al,%eax
081e41a3 +0x13d:  mov    0xc(%ebp),%edx
081e41a6 +0x140:  add    $0x796e8,%edx
081e41ac +0x146:  mov    %eax,0x4(%esp)
081e41b0 +0x14a:  mov    %edx,(%esp)
081e41b3 +0x14d:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e41b8 +0x152:  movzwl 0x27(%eax),%eax
081e41bc +0x156:  movswl %ax,%ebx
081e41bf +0x159:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e41c4 +0x15e:  mov    0x629c(%eax),%eax
081e41ca +0x164:  cmp    %eax,%ebx
081e41cc +0x166:  setl   %al
081e41cf +0x169:  test   %al,%al
081e41d1 +0x16b:  je     081e41dd <+0x177>
081e41d3 +0x16d:  mov    $0xe,%eax
081e41d8 +0x172:  jmp    081e42e6 <+0x280>
081e41dd +0x177:  mov    -0x2c(%ebp),%eax
081e41e0 +0x17a:  movzbl 0xd(%eax),%eax
081e41e4 +0x17e:  movsbl %al,%eax
081e41e7 +0x181:  mov    0xc(%ebp),%edx
081e41ea +0x184:  add    $0x796e8,%edx
081e41f0 +0x18a:  mov    %eax,0x4(%esp)
081e41f4 +0x18e:  mov    %edx,(%esp)
081e41f7 +0x191:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e41fc +0x196:  add    $0x892,%eax
081e4201 +0x19b:  mov    %eax,(%esp)
081e4204 +0x19e:  call   086086aa <_ZN9SkillSlot18IsLoadStrikerSkillEv>  ; SkillSlot::IsLoadStrikerSkill()
081e4209 +0x1a3:  xor    $0x1,%eax
081e420c +0x1a6:  test   %al,%al
081e420e +0x1a8:  je     081e421a <+0x1b4>
081e4210 +0x1aa:  mov    $0x13,%eax
081e4215 +0x1af:  jmp    081e42e6 <+0x280>
081e421a +0x1b4:  mov    -0x2c(%ebp),%eax
081e421d +0x1b7:  movzbl 0xd(%eax),%eax
081e4221 +0x1bb:  movsbl %al,%eax
081e4224 +0x1be:  mov    0xc(%ebp),%edx
081e4227 +0x1c1:  add    $0x796e8,%edx
081e422d +0x1c7:  mov    %eax,0x4(%esp)
081e4231 +0x1cb:  mov    %edx,(%esp)
081e4234 +0x1ce:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e4239 +0x1d3:  movzbl 0x26(%eax),%eax
081e423d +0x1d7:  movsbl %al,%eax
081e4240 +0x1da:  mov    %eax,-0x24(%ebp)
081e4243 +0x1dd:  mov    -0x2c(%ebp),%eax
081e4246 +0x1e0:  movzbl 0xd(%eax),%eax
081e424a +0x1e4:  movsbl %al,%eax
081e424d +0x1e7:  mov    0xc(%ebp),%edx
081e4250 +0x1ea:  add    $0x796e8,%edx
081e4256 +0x1f0:  mov    %eax,0x4(%esp)
081e425a +0x1f4:  mov    %edx,(%esp)
081e425d +0x1f7:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e4262 +0x1fc:  movzbl 0x29(%eax),%eax
081e4266 +0x200:  shl    $0x4,%eax
081e4269 +0x203:  sar    $0x4,%al
081e426c +0x206:  movsbl %al,%eax
081e426f +0x209:  mov    %eax,-0x20(%ebp)
081e4272 +0x20c:  mov    -0x2c(%ebp),%eax
081e4275 +0x20f:  movzbl 0xd(%eax),%eax
081e4279 +0x213:  movsbl %al,%eax
081e427c +0x216:  mov    0xc(%ebp),%edx
081e427f +0x219:  add    $0x796e8,%edx
081e4285 +0x21f:  mov    %eax,0x4(%esp)
081e4289 +0x223:  mov    %edx,(%esp)
081e428c +0x226:  call   081a0bb8 <_GLOBAL__I__ZN4ARAD10DISPATCHER26Dispatcher_AvartarRoulette14checkWorkStateEP5CUserRN4arad17SigAvatarRouletteE+0x2a7>  ; global constructors keyed to ARAD::DISPATCHER::Dispatcher_AvartarRoulette::checkWorkState(CUser*, arad::SigAvatarRoulette&)+0x2a7
081e4291 +0x22b:  movzbl 0x1239(%eax),%eax
081e4298 +0x232:  movsbl %al,%eax
081e429b +0x235:  mov    %eax,-0x1c(%ebp)
081e429e +0x238:  mov    -0x2c(%ebp),%eax
081e42a1 +0x23b:  movzbl 0xe(%eax),%eax
081e42a5 +0x23f:  movzbl %al,%edi
081e42a8 +0x242:  mov    -0x20(%ebp),%eax
081e42ab +0x245:  movswl %ax,%esi
081e42ae +0x248:  mov    -0x24(%ebp),%eax
081e42b1 +0x24b:  movswl %ax,%ebx
081e42b4 +0x24e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e42b9 +0x253:  mov    0x6390(%eax),%eax
081e42bf +0x259:  mov    %edi,0xc(%esp)
081e42c3 +0x25d:  mov    %esi,0x8(%esp)
081e42c7 +0x261:  mov    %ebx,0x4(%esp)
081e42cb +0x265:  mov    %eax,(%esp)
081e42ce +0x268:  call   08a9e868 <_ZN13StrikerScript15checkSkillIndexEssi>  ; StrikerScript::checkSkillIndex(short, short, int)
081e42d3 +0x26d:  xor    $0x1,%eax
081e42d6 +0x270:  test   %al,%al
081e42d8 +0x272:  je     081e42e1 <+0x27b>
081e42da +0x274:  mov    $0x15,%eax
081e42df +0x279:  jmp    081e42e6 <+0x280>
081e42e1 +0x27b:  mov    $0x0,%eax
081e42e6 +0x280:  add    $0x3c,%esp
081e42e9 +0x283:  pop    %ebx
081e42ea +0x284:  pop    %esi
081e42eb +0x285:  pop    %edi
081e42ec +0x286:  pop    %ebp
081e42ed +0x287:  ret
```

## 反编译 C

```c
// Dispatcher_SelectStriker::check_error @ 0x81e4066

/* Dispatcher_SelectStriker::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SelectStriker::check_error
          (Dispatcher_SelectStriker *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  
  if (param_1 == (CUser *)0x0) {
    return 0xffffffff;
  }
  iVar6 = CUser::get_state(param_1);
  if (iVar6 != 3) {
    return 0x7fffffff;
  }
  iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar6 == 0) {
    return 0x7fffffff;
  }
  uVar7 = CUser::get_charac_no(param_1,-1);
  iVar6 = CUser::get_charac_idx(param_1,uVar7);
  if (iVar6 != -1) {
    if ((char)param_2[0xd] != iVar6) {
      if (((char)param_2[0xd] < '\0') ||
         (MVar1 = param_2[0xd],
         cVar5 = std::vector<_Charac_info,std::allocator<_Charac_info>>::size
                           ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8)
                           ), cVar5 <= (char)MVar1)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        uVar8 = 0x39;
      }
      else {
        iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                          ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                           (int)(char)param_2[0xd]);
        sVar3 = *(short *)(iVar6 + 0x27);
        iVar6 = G_CDataManager();
        if ((int)sVar3 < *(int *)(iVar6 + 0x629c)) {
          uVar8 = 0xe;
        }
        else {
          iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                            ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                             (param_1 + 0x796e8),(int)(char)param_2[0xd]);
          cVar5 = SkillSlot::IsLoadStrikerSkill((SkillSlot *)(iVar6 + 0x892));
          if (cVar5 == '\x01') {
            iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                              ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                               (param_1 + 0x796e8),(int)(char)param_2[0xd]);
            cVar5 = *(char *)(iVar6 + 0x26);
            iVar6 = std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                              ((vector<_Charac_info,std::allocator<_Charac_info>> *)
                               (param_1 + 0x796e8),(int)(char)param_2[0xd]);
            cVar2 = *(char *)(iVar6 + 0x29);
            std::vector<_Charac_info,std::allocator<_Charac_info>>::operator[]
                      ((vector<_Charac_info,std::allocator<_Charac_info>> *)(param_1 + 0x796e8),
                       (int)(char)param_2[0xd]);
            MVar1 = param_2[0xe];
            iVar6 = G_CDataManager();
            cVar5 = StrikerScript::checkSkillIndex
                              (*(StrikerScript **)(iVar6 + 0x6390),(short)cVar5,
                               (short)((char)(cVar2 << 4) >> 4),(uint)(byte)MVar1);
            if (cVar5 == '\x01') {
              uVar8 = 0;
            }
            else {
              uVar8 = 0x15;
            }
          }
          else {
            uVar8 = 0x13;
          }
        }
      }
      return uVar8;
    }
    CUserCharacInfo::setCurCharacTagCharacNo((CUserCharacInfo *)param_1,0);
    CUserCharacInfo::setCurCharacStrikerSkillIndex((CUserCharacInfo *)param_1,'\0');
    CCharacterView::enableSaveCharacView((CCharacterView *)(param_1 + 0x796f4));
    CUserCharacInfo::setTagCharac((CUserCharacInfo *)param_1,(_Charac_info *)0x0);
    return 0x7fffffff;
  }
  return 0x39;
}
```
