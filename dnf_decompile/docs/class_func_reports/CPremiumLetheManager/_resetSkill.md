# _resetSkill

`_ZN20CPremiumLetheManager11_resetSkillEP5CUser`

`CPremiumLetheManager::_resetSkill(CUser*)`

| 类 | 地址 |
|---|---|
| `CPremiumLetheManager` | `0x085c40aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c40aa  _ZN20CPremiumLetheManager11_resetSkillEP5CUser
#           CPremiumLetheManager::_resetSkill(CUser*)
# range [0x085c40aa, 0x085c421d]
085c40aa +0x000:  push   %ebp
085c40ab +0x001:  mov    %esp,%ebp
085c40ad +0x003:  push   %esi
085c40ae +0x004:  push   %ebx
085c40af +0x005:  sub    $0x30,%esp
085c40b2 +0x008:  mov    0xc(%ebp),%eax
085c40b5 +0x00b:  mov    %eax,(%esp)
085c40b8 +0x00e:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
085c40bd +0x013:  cmp    $0xffffffff,%eax
085c40c0 +0x016:  je     085c40d1 <+0x27>
085c40c2 +0x018:  mov    0xc(%ebp),%eax
085c40c5 +0x01b:  mov    %eax,(%esp)
085c40c8 +0x01e:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
085c40cd +0x023:  test   %eax,%eax
085c40cf +0x025:  jne    085c40d8 <+0x2e>
085c40d1 +0x027:  mov    $0x1,%eax
085c40d6 +0x02c:  jmp    085c40dd <+0x33>
085c40d8 +0x02e:  mov    $0x0,%eax
085c40dd +0x033:  test   %al,%al
085c40df +0x035:  je     085c40f1 <+0x47>
085c40e1 +0x037:  mov    0xc(%ebp),%eax
085c40e4 +0x03a:  mov    %eax,(%esp)
085c40e7 +0x03d:  call   085c4b8c <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x1c>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x1c
085c40ec +0x042:  mov    %al,-0x9(%ebp)
085c40ef +0x045:  jmp    085c40ff <+0x55>
085c40f1 +0x047:  mov    0xc(%ebp),%eax
085c40f4 +0x04a:  mov    %eax,(%esp)
085c40f7 +0x04d:  call   085c4bb0 <_GLOBAL__I__ZN20CPremiumLetheManagerC2Ev+0x40>  ; global constructors keyed to CPremiumLetheManager::CPremiumLetheManager()+0x40
085c40fc +0x052:  mov    %al,-0x9(%ebp)
085c40ff +0x055:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
085c4106 +0x05c:  cmp    %al,-0x9(%ebp)
085c4109 +0x05f:  jne    085c41de <+0x134>
085c410f +0x065:  movl   $0x21,0x4(%esp)
085c4117 +0x06d:  mov    0xc(%ebp),%eax
085c411a +0x070:  mov    %eax,(%esp)
085c411d +0x073:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
085c4122 +0x078:  xor    $0x1,%eax
085c4125 +0x07b:  test   %al,%al
085c4127 +0x07d:  jne    085c4216 <+0x16c>
085c412d +0x083:  mov    0xc(%ebp),%eax
085c4130 +0x086:  mov    %eax,(%esp)
085c4133 +0x089:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
085c4138 +0x08e:  mov    %eax,0xc(%esp)
085c413c +0x092:  movl   $0x1,0x8(%esp)
085c4144 +0x09a:  mov    0xc(%ebp),%eax
085c4147 +0x09d:  mov    %eax,0x4(%esp)
085c414b +0x0a1:  mov    0x8(%ebp),%eax
085c414e +0x0a4:  mov    %eax,(%esp)
085c4151 +0x0a7:  call   085c421e <_ZN20CPremiumLetheManager9InitSkillEP5CUserb20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::InitSkill(CUser*, bool, ENUM_SKILL_TREE_KIND)
085c4156 +0x0ac:  lea    -0x28(%ebp),%eax
085c4159 +0x0af:  mov    %eax,(%esp)
085c415c +0x0b2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085c4161 +0x0b7:  movl   $0xd5,0x8(%esp)
085c4169 +0x0bf:  movl   $0x1,0x4(%esp)
085c4171 +0x0c7:  lea    -0x28(%ebp),%eax
085c4174 +0x0ca:  mov    %eax,(%esp)
085c4177 +0x0cd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085c417c +0x0d2:  movl   $0x1,0x4(%esp)
085c4184 +0x0da:  lea    -0x28(%ebp),%eax
085c4187 +0x0dd:  mov    %eax,(%esp)
085c418a +0x0e0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085c418f +0x0e5:  movl   $0x1,0x4(%esp)
085c4197 +0x0ed:  lea    -0x28(%ebp),%eax
085c419a +0x0f0:  mov    %eax,(%esp)
085c419d +0x0f3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085c41a2 +0x0f8:  lea    -0x28(%ebp),%eax
085c41a5 +0x0fb:  mov    %eax,0x4(%esp)
085c41a9 +0x0ff:  mov    0xc(%ebp),%eax
085c41ac +0x102:  mov    %eax,(%esp)
085c41af +0x105:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085c41b4 +0x10a:  jmp    085c41d1 <+0x127>
085c41b6 +0x10c:  mov    %edx,%ebx
085c41b8 +0x10e:  mov    %eax,%esi
085c41ba +0x110:  lea    -0x28(%ebp),%eax
085c41bd +0x113:  mov    %eax,(%esp)
085c41c0 +0x116:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085c41c5 +0x11b:  mov    %esi,%eax
085c41c7 +0x11d:  mov    %ebx,%edx
085c41c9 +0x11f:  mov    %eax,(%esp)
085c41cc +0x122:  call   08ae3750 <_Unwind_Resume>
085c41d1 +0x127:  lea    -0x28(%ebp),%eax
085c41d4 +0x12a:  mov    %eax,(%esp)
085c41d7 +0x12d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085c41dc +0x132:  jmp    085c4217 <+0x16d>
085c41de +0x134:  movl   $0x0,0xc(%esp)
085c41e6 +0x13c:  movl   $0x93,0x8(%esp)
085c41ee +0x144:  movl   $&_ZZN20CPremiumLetheManager11_resetSkillEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
085c41f6 +0x14c:  lea    -0x1c(%ebp),%eax
085c41f9 +0x14f:  mov    %eax,(%esp)
085c41fc +0x152:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085c4201 +0x157:  movl   $"ONE_DAY_LETHE : CAN'T USE INIT STATE",0x4(%esp)
085c4209 +0x15f:  lea    -0x1c(%ebp),%eax
085c420c +0x162:  mov    %eax,(%esp)
085c420f +0x165:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085c4214 +0x16a:  jmp    085c4217 <+0x16d>
085c4216 +0x16c:  nop
085c4217 +0x16d:  add    $0x30,%esp
085c421a +0x170:  pop    %ebx
085c421b +0x171:  pop    %esi
085c421c +0x172:  pop    %ebp
085c421d +0x173:  ret
```

## 反编译 C

```c
// CPremiumLetheManager::_resetSkill @ 0x85c40aa

/* CPremiumLetheManager::_resetSkill(CUser*) */

void __thiscall CPremiumLetheManager::_resetSkill(CPremiumLetheManager *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  PacketGuard local_2c [12];
  cMyTrace local_20 [19];
  char local_d;
  
  iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
  if (iVar3 != -1) {
    iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_085c40dd;
    }
  }
  bVar1 = true;
LAB_085c40dd:
  if (bVar1) {
    local_d = CUserCharacInfo::GetOneDayLetheFlag((CUserCharacInfo *)param_1);
  }
  else {
    local_d = CUserCharacInfo::GetOneDayLetheFlag2ND((CUserCharacInfo *)param_1);
  }
  if (local_d == USE_LETHE_STATE) {
    cVar2 = CUser::isAffectedPremium(param_1,0x21);
    if (cVar2 == '\x01') {
      uVar4 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
      InitSkill(this,param_1,1,uVar4);
      PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 085c4177 to 085c41b3 has its CatchHandler @ 085c41b6 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xd5);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send(param_1,local_2c);
      PacketGuard::~PacketGuard(local_2c);
    }
  }
  else {
    cMyTrace::cMyTrace(local_20,"void CPremiumLetheManager::_resetSkill(CUser*)",0x93,0);
    cMyTrace::operator()(local_20,"ONE_DAY_LETHE : CAN\'T USE INIT STATE");
  }
  return;
}
```
