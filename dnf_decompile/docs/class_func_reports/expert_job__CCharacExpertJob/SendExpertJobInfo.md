# SendExpertJobInfo

`_ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser`

`expert_job::CCharacExpertJob::SendExpertJobInfo(CUser*)`

| 类 | 地址 |
|---|---|
| `expert_job::CCharacExpertJob` | `0x0832b454` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832b454  _ZN10expert_job16CCharacExpertJob17SendExpertJobInfoEP5CUser
#           expert_job::CCharacExpertJob::SendExpertJobInfo(CUser*)
# range [0x0832b454, 0x0832b655]
0832b454 +0x000:  push   %ebp
0832b455 +0x001:  mov    %esp,%ebp
0832b457 +0x003:  push   %esi
0832b458 +0x004:  push   %ebx
0832b459 +0x005:  sub    $0x30,%esp
0832b45c +0x008:  lea    -0x24(%ebp),%eax
0832b45f +0x00b:  mov    %eax,(%esp)
0832b462 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0832b467 +0x013:  movl   $0xcd,0x8(%esp)
0832b46f +0x01b:  movl   $0x0,0x4(%esp)
0832b477 +0x023:  lea    -0x24(%ebp),%eax
0832b47a +0x026:  mov    %eax,(%esp)
0832b47d +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0832b482 +0x02e:  mov    0x8(%ebp),%eax
0832b485 +0x031:  movzwl 0x6(%eax),%eax
0832b489 +0x035:  movzwl %ax,%eax
0832b48c +0x038:  mov    %eax,0x4(%esp)
0832b490 +0x03c:  lea    -0x24(%ebp),%eax
0832b493 +0x03f:  mov    %eax,(%esp)
0832b496 +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0832b49b +0x047:  mov    0xc(%ebp),%eax
0832b49e +0x04a:  mov    %eax,(%esp)
0832b4a1 +0x04d:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0832b4a6 +0x052:  mov    %eax,0x4(%esp)
0832b4aa +0x056:  lea    -0x24(%ebp),%eax
0832b4ad +0x059:  mov    %eax,(%esp)
0832b4b0 +0x05c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0832b4b5 +0x061:  mov    0xc(%ebp),%eax
0832b4b8 +0x064:  mov    %eax,(%esp)
0832b4bb +0x067:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0832b4c0 +0x06c:  cmp    $0x3,%eax
0832b4c3 +0x06f:  je     0832b5d4 <+0x180>
0832b4c9 +0x075:  cmp    $0x3,%eax
0832b4cc +0x078:  jg     0832b4d9 <+0x85>
0832b4ce +0x07a:  cmp    $0x1,%eax
0832b4d1 +0x07d:  jl     0832b601 <+0x1ad>
0832b4d7 +0x083:  jmp    0832b4e2 <+0x8e>
0832b4d9 +0x085:  cmp    $0x4,%eax
0832b4dc +0x088:  jne    0832b601 <+0x1ad>
0832b4e2 +0x08e:  movl   $0x0,-0x18(%ebp)
0832b4e9 +0x095:  lea    -0x24(%ebp),%eax
0832b4ec +0x098:  mov    %eax,(%esp)
0832b4ef +0x09b:  call   08110b4c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x5e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x5e
0832b4f4 +0x0a0:  mov    %eax,-0x28(%ebp)
0832b4f7 +0x0a3:  mov    -0x18(%ebp),%eax
0832b4fa +0x0a6:  mov    %eax,0x4(%esp)
0832b4fe +0x0aa:  lea    -0x24(%ebp),%eax
0832b501 +0x0ad:  mov    %eax,(%esp)
0832b504 +0x0b0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0832b509 +0x0b5:  mov    0xc(%ebp),%eax
0832b50c +0x0b8:  mov    %eax,(%esp)
0832b50f +0x0bb:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
0832b514 +0x0c0:  mov    %eax,%ebx
0832b516 +0x0c2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0832b51b +0x0c7:  mov    %ebx,0x4(%esp)
0832b51f +0x0cb:  mov    %eax,(%esp)
0832b522 +0x0ce:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
0832b527 +0x0d3:  mov    %eax,-0x14(%ebp)
0832b52a +0x0d6:  cmpl   $0x0,-0x14(%ebp)
0832b52e +0x0da:  je     0832b5b9 <+0x165>
0832b534 +0x0e0:  movl   $0x0,-0x10(%ebp)
0832b53b +0x0e7:  jmp    0832b5ab <+0x157>
0832b53d +0x0e9:  mov    -0x10(%ebp),%eax
0832b540 +0x0ec:  mov    %eax,0x4(%esp)
0832b544 +0x0f0:  mov    0x8(%ebp),%eax
0832b547 +0x0f3:  mov    %eax,(%esp)
0832b54a +0x0f6:  call   0832b306 <_ZNK10expert_job16CCharacExpertJob10get_recipeEi>  ; expert_job::CCharacExpertJob::get_recipe(int) const
0832b54f +0x0fb:  xor    $0x1,%eax
0832b552 +0x0fe:  test   %al,%al
0832b554 +0x100:  jne    0832b5a0 <+0x14c>
0832b556 +0x102:  movl   $0x0,-0xc(%ebp)
0832b55d +0x109:  mov    -0x10(%ebp),%eax
0832b560 +0x10c:  mov    %eax,0x4(%esp)
0832b564 +0x110:  mov    -0x14(%ebp),%eax
0832b567 +0x113:  mov    %eax,(%esp)
0832b56a +0x116:  call   0832b6b6 <_GLOBAL__I__ZN10expert_job16CCharacExpertJob6_resetEv+0x1c>  ; global constructors keyed to expert_job::CCharacExpertJob::_reset()+0x1c
0832b56f +0x11b:  mov    %eax,-0xc(%ebp)
0832b572 +0x11e:  cmpl   $0x0,-0xc(%ebp)
0832b576 +0x122:  sete   %al
0832b579 +0x125:  test   %al,%al
0832b57b +0x127:  jne    0832b5a3 <+0x14f>
0832b57d +0x129:  mov    -0xc(%ebp),%eax
0832b580 +0x12c:  mov    (%eax),%eax
0832b582 +0x12e:  test   %eax,%eax
0832b584 +0x130:  je     0832b5a6 <+0x152>
0832b586 +0x132:  mov    -0xc(%ebp),%eax
0832b589 +0x135:  mov    (%eax),%eax
0832b58b +0x137:  mov    %eax,0x4(%esp)
0832b58f +0x13b:  lea    -0x24(%ebp),%eax
0832b592 +0x13e:  mov    %eax,(%esp)
0832b595 +0x141:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0832b59a +0x146:  addl   $0x1,-0x18(%ebp)
0832b59e +0x14a:  jmp    0832b5a7 <+0x153>
0832b5a0 +0x14c:  nop
0832b5a1 +0x14d:  jmp    0832b5a7 <+0x153>
0832b5a3 +0x14f:  nop
0832b5a4 +0x150:  jmp    0832b5a7 <+0x153>
0832b5a6 +0x152:  nop
0832b5a7 +0x153:  addl   $0x1,-0x10(%ebp)
0832b5ab +0x157:  cmpl   $0xef,-0x10(%ebp)
0832b5b2 +0x15e:  setle  %al
0832b5b5 +0x161:  test   %al,%al
0832b5b7 +0x163:  jne    0832b53d <+0xe9>
0832b5b9 +0x165:  mov    -0x18(%ebp),%eax
0832b5bc +0x168:  mov    %eax,0x8(%esp)
0832b5c0 +0x16c:  lea    -0x28(%ebp),%eax
0832b5c3 +0x16f:  mov    %eax,0x4(%esp)
0832b5c7 +0x173:  lea    -0x24(%ebp),%eax
0832b5ca +0x176:  mov    %eax,(%esp)
0832b5cd +0x179:  call   08110b28 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x3a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x3a
0832b5d2 +0x17e:  jmp    0832b601 <+0x1ad>
0832b5d4 +0x180:  mov    0x8(%ebp),%eax
0832b5d7 +0x183:  mov    0xc(%eax),%eax
0832b5da +0x186:  add    $0x1,%eax
0832b5dd +0x189:  mov    %eax,0x4(%esp)
0832b5e1 +0x18d:  lea    -0x24(%ebp),%eax
0832b5e4 +0x190:  mov    %eax,(%esp)
0832b5e7 +0x193:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0832b5ec +0x198:  mov    0x8(%ebp),%eax
0832b5ef +0x19b:  mov    0x8(%eax),%eax
0832b5f2 +0x19e:  mov    %eax,0x4(%esp)
0832b5f6 +0x1a2:  lea    -0x24(%ebp),%eax
0832b5f9 +0x1a5:  mov    %eax,(%esp)
0832b5fc +0x1a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0832b601 +0x1ad:  movl   $0x1,0x4(%esp)
0832b609 +0x1b5:  lea    -0x24(%ebp),%eax
0832b60c +0x1b8:  mov    %eax,(%esp)
0832b60f +0x1bb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0832b614 +0x1c0:  lea    -0x24(%ebp),%eax
0832b617 +0x1c3:  mov    %eax,0x4(%esp)
0832b61b +0x1c7:  mov    0xc(%ebp),%eax
0832b61e +0x1ca:  mov    %eax,(%esp)
0832b621 +0x1cd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0832b626 +0x1d2:  mov    $0x1,%ebx
0832b62b +0x1d7:  lea    -0x24(%ebp),%eax
0832b62e +0x1da:  mov    %eax,(%esp)
0832b631 +0x1dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0832b636 +0x1e2:  mov    %ebx,%eax
0832b638 +0x1e4:  add    $0x30,%esp
0832b63b +0x1e7:  pop    %ebx
0832b63c +0x1e8:  pop    %esi
0832b63d +0x1e9:  pop    %ebp
0832b63e +0x1ea:  ret
0832b63f +0x1eb:  mov    %edx,%ebx
0832b641 +0x1ed:  mov    %eax,%esi
0832b643 +0x1ef:  lea    -0x24(%ebp),%eax
0832b646 +0x1f2:  mov    %eax,(%esp)
0832b649 +0x1f5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0832b64e +0x1fa:  mov    %esi,%eax
0832b650 +0x1fc:  mov    %ebx,%edx
0832b652 +0x1fe:  mov    %eax,(%esp)
0832b655 +0x201:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// expert_job::CCharacExpertJob::SendExpertJobInfo @ 0x832b454

/* expert_job::CCharacExpertJob::SendExpertJobInfo(CUser*) */

undefined4 __thiscall
expert_job::CCharacExpertJob::SendExpertJobInfo(CCharacExpertJob *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int local_2c;
  PacketGuard local_28 [12];
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0832b47d to 0832b625 has its CatchHandler @ 0832b63f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xcd);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(uint)*(ushort *)(this + 6));
  iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar2);
  iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  if (iVar2 == 3) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(this + 0xc) + 1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(this + 8));
  }
  else {
    if (iVar2 < 4) {
      if (iVar2 < 1) goto LAB_0832b601;
    }
    else if (iVar2 != 4) goto LAB_0832b601;
    local_1c = 0;
    local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,local_1c);
    CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    iVar2 = G_CDataManager();
    local_18 = CDataManager::GetExpertJobScript(iVar2);
    if (local_18 != 0) {
      for (local_14 = 0; local_14 < 0xf0; local_14 = local_14 + 1) {
        cVar1 = get_recipe(this,local_14);
        if (cVar1 == '\x01') {
          local_10 = (int *)0x0;
          local_10 = (int *)STExpertJobScript::GetRecipeInfo(local_18);
          if ((local_10 != (int *)0x0) && (*local_10 != 0)) {
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*local_10);
            local_1c = local_1c + 1;
          }
        }
      }
    }
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,&local_2c,local_1c);
  }
LAB_0832b601:
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  CUser::Send(param_1,local_28);
  PacketGuard::~PacketGuard(local_28);
  return 1;
}
```
