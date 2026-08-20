# process

`_ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Skill_Command_Customizing::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Skill_Command_Customizing` | `0x081d2b42` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2b42  _ZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Skill_Command_Customizing::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d2b42, 0x081d2da3]
081d2b42 +0x000:  push   %ebp
081d2b43 +0x001:  mov    %esp,%ebp
081d2b45 +0x003:  push   %esi
081d2b46 +0x004:  push   %ebx
081d2b47 +0x005:  sub    $0x50,%esp
081d2b4a +0x008:  mov    0x14(%ebp),%eax
081d2b4d +0x00b:  mov    %eax,-0x20(%ebp)
081d2b50 +0x00e:  mov    0x10(%ebp),%eax
081d2b53 +0x011:  mov    %eax,-0x1c(%ebp)
081d2b56 +0x014:  mov    -0x1c(%ebp),%eax
081d2b59 +0x017:  movzbl 0xd(%eax),%eax
081d2b5d +0x01b:  movsbl %al,%eax
081d2b60 +0x01e:  mov    %eax,-0x18(%ebp)
081d2b63 +0x021:  cmpl   $0x31,-0x18(%ebp)
081d2b67 +0x025:  jle    081d2b7d <+0x3b>
081d2b69 +0x027:  mov    -0x20(%ebp),%eax
081d2b6c +0x02a:  movl   $0xfc,0x4(%eax)
081d2b73 +0x031:  mov    $0x0,%eax
081d2b78 +0x036:  jmp    081d2d9c <+0x25a>
081d2b7d +0x03b:  movl   $0x0,-0x14(%ebp)
081d2b84 +0x042:  jmp    081d2d26 <+0x1e4>
081d2b89 +0x047:  lea    -0x2c(%ebp),%eax
081d2b8c +0x04a:  mov    %eax,(%esp)
081d2b8f +0x04d:  call   0822db66 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x3210>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x3210
081d2b94 +0x052:  mov    -0x14(%ebp),%edx
081d2b97 +0x055:  mov    -0x1c(%ebp),%eax
081d2b9a +0x058:  movzwl 0xe(%eax,%edx,8),%eax
081d2b9f +0x05d:  mov    %ax,-0x2c(%ebp)
081d2ba3 +0x061:  mov    -0x14(%ebp),%edx
081d2ba6 +0x064:  mov    -0x1c(%ebp),%eax
081d2ba9 +0x067:  movzbl 0x10(%eax,%edx,8),%eax
081d2bae +0x06c:  mov    %al,-0x2a(%ebp)
081d2bb1 +0x06f:  movzwl -0x2c(%ebp),%eax
081d2bb5 +0x073:  movswl %ax,%esi
081d2bb8 +0x076:  mov    0xc(%ebp),%eax
081d2bbb +0x079:  mov    %eax,(%esp)
081d2bbe +0x07c:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081d2bc3 +0x081:  mov    %eax,%ebx
081d2bc5 +0x083:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d2bca +0x088:  mov    %esi,0x8(%esp)
081d2bce +0x08c:  mov    %ebx,0x4(%esp)
081d2bd2 +0x090:  mov    %eax,(%esp)
081d2bd5 +0x093:  call   0835fda2 <_ZNK12CDataManager10find_skillEii>  ; CDataManager::find_skill(int, int) const
081d2bda +0x098:  mov    %eax,-0x10(%ebp)
081d2bdd +0x09b:  cmpl   $0x0,-0x10(%ebp)
081d2be1 +0x09f:  jne    081d2bf2 <+0xb0>
081d2be3 +0x0a1:  mov    -0x20(%ebp),%eax
081d2be6 +0x0a4:  movl   $0xfc,0x4(%eax)
081d2bed +0x0ab:  jmp    081d2d37 <+0x1f5>
081d2bf2 +0x0b0:  mov    -0x10(%ebp),%eax
081d2bf5 +0x0b3:  mov    %eax,(%esp)
081d2bf8 +0x0b6:  call   0822b5d2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7c
081d2bfd +0x0bb:  xor    $0x1,%eax
081d2c00 +0x0be:  test   %al,%al
081d2c02 +0x0c0:  je     081d2c13 <+0xd1>
081d2c04 +0x0c2:  mov    -0x20(%ebp),%eax
081d2c07 +0x0c5:  movl   $0xf9,0x4(%eax)
081d2c0e +0x0cc:  jmp    081d2d37 <+0x1f5>
081d2c13 +0x0d1:  movzbl -0x2a(%ebp),%eax
081d2c17 +0x0d5:  cmp    $0x5,%al
081d2c19 +0x0d7:  jg     081d2c23 <+0xe1>
081d2c1b +0x0d9:  movzbl -0x2a(%ebp),%eax
081d2c1f +0x0dd:  test   %al,%al
081d2c21 +0x0df:  jg     081d2c32 <+0xf0>
081d2c23 +0x0e1:  mov    -0x20(%ebp),%eax
081d2c26 +0x0e4:  movl   $0xfb,0x4(%eax)
081d2c2d +0x0eb:  jmp    081d2d37 <+0x1f5>
081d2c32 +0x0f0:  movl   $0x0,-0xc(%ebp)
081d2c39 +0x0f7:  jmp    081d2c81 <+0x13f>
081d2c3b +0x0f9:  mov    -0xc(%ebp),%eax
081d2c3e +0x0fc:  mov    -0x14(%ebp),%ebx
081d2c41 +0x0ff:  mov    -0xc(%ebp),%edx
081d2c44 +0x102:  mov    -0x1c(%ebp),%ecx
081d2c47 +0x105:  shl    $0x3,%ebx
081d2c4a +0x108:  add    %ebx,%ecx
081d2c4c +0x10a:  lea    (%ecx,%edx,1),%edx
081d2c4f +0x10d:  add    $0x11,%edx
081d2c52 +0x110:  movzbl (%edx),%edx
081d2c55 +0x113:  mov    %dl,-0x29(%ebp,%eax,1)
081d2c59 +0x117:  mov    -0xc(%ebp),%eax
081d2c5c +0x11a:  movzbl -0x29(%ebp,%eax,1),%eax
081d2c61 +0x11f:  test   %al,%al
081d2c63 +0x121:  js     081d2c71 <+0x12f>
081d2c65 +0x123:  mov    -0xc(%ebp),%eax
081d2c68 +0x126:  movzbl -0x29(%ebp,%eax,1),%eax
081d2c6d +0x12b:  cmp    $0x8,%al
081d2c6f +0x12d:  jle    081d2c7d <+0x13b>
081d2c71 +0x12f:  mov    -0x20(%ebp),%eax
081d2c74 +0x132:  movl   $0xfa,0x4(%eax)
081d2c7b +0x139:  jmp    081d2c92 <+0x150>
081d2c7d +0x13b:  addl   $0x1,-0xc(%ebp)
081d2c81 +0x13f:  movzbl -0x2a(%ebp),%eax
081d2c85 +0x143:  movsbl %al,%eax
081d2c88 +0x146:  cmp    -0xc(%ebp),%eax
081d2c8b +0x149:  setg   %al
081d2c8e +0x14c:  test   %al,%al
081d2c90 +0x14e:  jne    081d2c3b <+0xf9>
081d2c92 +0x150:  movzbl -0x2a(%ebp),%eax
081d2c96 +0x154:  movsbl %al,%eax
081d2c99 +0x157:  sub    $0x1,%eax
081d2c9c +0x15a:  movzbl -0x29(%ebp,%eax,1),%eax
081d2ca1 +0x15f:  test   %al,%al
081d2ca3 +0x161:  je     081d2cf1 <+0x1af>
081d2ca5 +0x163:  movzbl -0x2a(%ebp),%eax
081d2ca9 +0x167:  movsbl %al,%eax
081d2cac +0x16a:  sub    $0x1,%eax
081d2caf +0x16d:  movzbl -0x29(%ebp,%eax,1),%eax
081d2cb4 +0x172:  cmp    $0x1,%al
081d2cb6 +0x174:  je     081d2cf1 <+0x1af>
081d2cb8 +0x176:  movzbl -0x2a(%ebp),%eax
081d2cbc +0x17a:  movsbl %al,%eax
081d2cbf +0x17d:  sub    $0x1,%eax
081d2cc2 +0x180:  movzbl -0x29(%ebp,%eax,1),%eax
081d2cc7 +0x185:  cmp    $0x2,%al
081d2cc9 +0x187:  je     081d2cf1 <+0x1af>
081d2ccb +0x189:  movzbl -0x2a(%ebp),%eax
081d2ccf +0x18d:  movsbl %al,%eax
081d2cd2 +0x190:  sub    $0x1,%eax
081d2cd5 +0x193:  movzbl -0x29(%ebp,%eax,1),%eax
081d2cda +0x198:  cmp    $0x3,%al
081d2cdc +0x19a:  je     081d2cf1 <+0x1af>
081d2cde +0x19c:  movzbl -0x2a(%ebp),%eax
081d2ce2 +0x1a0:  movsbl %al,%eax
081d2ce5 +0x1a3:  sub    $0x1,%eax
081d2ce8 +0x1a6:  movzbl -0x29(%ebp,%eax,1),%eax
081d2ced +0x1ab:  cmp    $0x7,%al
081d2cef +0x1ad:  jne    081d2cfd <+0x1bb>
081d2cf1 +0x1af:  mov    -0x20(%ebp),%eax
081d2cf4 +0x1b2:  movl   $0xfa,0x4(%eax)
081d2cfb +0x1b9:  jmp    081d2d37 <+0x1f5>
081d2cfd +0x1bb:  lea    -0x2c(%ebp),%eax
081d2d00 +0x1be:  mov    %eax,0x4(%esp)
081d2d04 +0x1c2:  mov    0xc(%ebp),%eax
081d2d07 +0x1c5:  mov    %eax,(%esp)
081d2d0a +0x1c8:  call   08654f74 <_ZN5CUser23customizingSkillCommandER18STSkillCommandData>  ; CUser::customizingSkillCommand(STSkillCommandData&)
081d2d0f +0x1cd:  xor    $0x1,%eax
081d2d12 +0x1d0:  test   %al,%al
081d2d14 +0x1d2:  je     081d2d22 <+0x1e0>
081d2d16 +0x1d4:  mov    -0x20(%ebp),%eax
081d2d19 +0x1d7:  movl   $0xfc,0x4(%eax)
081d2d20 +0x1de:  jmp    081d2d37 <+0x1f5>
081d2d22 +0x1e0:  addl   $0x1,-0x14(%ebp)
081d2d26 +0x1e4:  mov    -0x14(%ebp),%eax
081d2d29 +0x1e7:  cmp    -0x18(%ebp),%eax
081d2d2c +0x1ea:  setl   %al
081d2d2f +0x1ed:  test   %al,%al
081d2d31 +0x1ef:  jne    081d2b89 <+0x47>
081d2d37 +0x1f5:  mov    -0x20(%ebp),%eax
081d2d3a +0x1f8:  mov    0x4(%eax),%eax
081d2d3d +0x1fb:  test   %eax,%eax
081d2d3f +0x1fd:  je     081d2d97 <+0x255>
081d2d41 +0x1ff:  mov    0xc(%ebp),%eax
081d2d44 +0x202:  mov    %eax,(%esp)
081d2d47 +0x205:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d2d4c +0x20a:  movl   $0x0,0x4(%esp)
081d2d54 +0x212:  mov    %eax,(%esp)
081d2d57 +0x215:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
081d2d5c +0x21a:  mov    %eax,0x14(%esp)
081d2d60 +0x21e:  movl   $"SKILL_COMMAND_LOG : CUSTOMIZING ERROR!! ALL COMMAND DEFAULT!! m_id (%s)",0x10(%esp)
081d2d68 +0x226:  movl   $0x3051,0xc(%esp)
081d2d70 +0x22e:  movl   $&_ZZN36Dispatcher_Skill_Command_Customizing7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x8(%esp)
081d2d78 +0x236:  movl   $"PacketDispatcher_Impl_1.cpp",0x4(%esp)
081d2d80 +0x23e:  movl   $0x1,(%esp)
081d2d87 +0x245:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081d2d8c +0x24a:  mov    0xc(%ebp),%eax
081d2d8f +0x24d:  mov    %eax,(%esp)
081d2d92 +0x250:  call   086550ee <_ZN5CUser19defaultSkillCommandEv>  ; CUser::defaultSkillCommand()
081d2d97 +0x255:  mov    $0x0,%eax
081d2d9c +0x25a:  add    $0x50,%esp
081d2d9f +0x25d:  pop    %ebx
081d2da0 +0x25e:  pop    %esi
081d2da1 +0x25f:  pop    %ebp
081d2da2 +0x260:  ret
081d2da3 +0x261:  nop
```

## 反编译 C

```c
// Dispatcher_Skill_Command_Customizing::process @ 0x81d2b42

/* Dispatcher_Skill_Command_Customizing::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Skill_Command_Customizing::process
          (Dispatcher_Skill_Command_Customizing *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 local_30;
  MSG_BASE local_2e [10];
  ParamBase *local_24;
  MSG_BASE *local_20;
  int local_1c;
  int local_18;
  CSkill *local_14;
  int local_10;
  
  local_24 = param_3;
  local_20 = param_2;
  local_1c = (int)(char)param_2[0xd];
  if (local_1c < 0x32) {
    for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
      STSkillCommandData::STSkillCommandData((STSkillCommandData *)&local_30);
      local_30 = *(undefined2 *)(local_20 + local_18 * 8 + 0xe);
      local_2e[0] = local_20[local_18 * 8 + 0x10];
      iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      iVar3 = G_CDataManager();
      local_14 = (CSkill *)CDataManager::find_skill(iVar3,iVar2);
      if (local_14 == (CSkill *)0x0) {
        *(undefined4 *)(local_24 + 4) = 0xfc;
        break;
      }
      cVar1 = CSkill::isCommandCustomizing(local_14);
      if (cVar1 != '\x01') {
        *(undefined4 *)(local_24 + 4) = 0xf9;
        break;
      }
      if (('\x05' < (char)local_2e[0]) || ((char)local_2e[0] < '\x01')) {
        *(undefined4 *)(local_24 + 4) = 0xfb;
        break;
      }
      for (local_10 = 0; local_10 < (char)local_2e[0]; local_10 = local_10 + 1) {
        local_2e[local_10 + 1] = local_20[local_10 + local_18 * 8 + 0x11];
        if (((char)local_2e[local_10 + 1] < '\0') || ('\b' < (char)local_2e[local_10 + 1])) {
          *(undefined4 *)(local_24 + 4) = 0xfa;
          break;
        }
      }
      if ((((local_2e[(char)local_2e[0]] == (MSG_BASE)0x0) ||
           (local_2e[(char)local_2e[0]] == (MSG_BASE)0x1)) ||
          (local_2e[(char)local_2e[0]] == (MSG_BASE)0x2)) ||
         ((local_2e[(char)local_2e[0]] == (MSG_BASE)0x3 ||
          (local_2e[(char)local_2e[0]] == (MSG_BASE)0x7)))) {
        *(undefined4 *)(local_24 + 4) = 0xfa;
        break;
      }
      cVar1 = CUser::customizingSkillCommand(param_1,(STSkillCommandData *)&local_30);
      if (cVar1 != '\x01') {
        *(undefined4 *)(local_24 + 4) = 0xfc;
        break;
      }
    }
    if (*(int *)(local_24 + 4) != 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar5 = NumberToString(uVar4,0);
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_1.cpp",
                 "virtual int Dispatcher_Skill_Command_Customizing::process(CUser*, MSG_BASE&, ParamBase&)"
                 ,0x3051,"SKILL_COMMAND_LOG : CUSTOMIZING ERROR!! ALL COMMAND DEFAULT!! m_id (%s)",
                 uVar5);
      CUser::defaultSkillCommand(param_1);
    }
  }
  else {
    *(undefined4 *)(param_3 + 4) = 0xfc;
  }
  return 0;
}
```
