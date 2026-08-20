# _TryEnchantOther

`_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t`

`expert_job::CEnchanter::_TryEnchantOther(CUser*, stItemPos_t*)`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849da3e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849da3e  _ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t
#           expert_job::CEnchanter::_TryEnchantOther(CUser*, stItemPos_t*)
# range [0x0849da3e, 0x0849dcc3]
0849da3e +0x000:  push   %ebp
0849da3f +0x001:  mov    %esp,%ebp
0849da41 +0x003:  push   %esi
0849da42 +0x004:  push   %ebx
0849da43 +0x005:  sub    $0x30,%esp
0849da46 +0x008:  mov    0x8(%ebp),%eax
0849da49 +0x00b:  add    $0x8,%eax
0849da4c +0x00e:  mov    %eax,(%esp)
0849da4f +0x011:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849da54 +0x016:  test   %al,%al
0849da56 +0x018:  je     0849da62 <+0x24>
0849da58 +0x01a:  mov    $0x15,%eax
0849da5d +0x01f:  jmp    0849dcbc <+0x27e>
0849da62 +0x024:  mov    0x8(%ebp),%eax
0849da65 +0x027:  mov    %eax,(%esp)
0849da68 +0x02a:  call   0849ca06 <_ZN10expert_job10CEnchanter13IsRecipeRightEv>  ; expert_job::CEnchanter::IsRecipeRight()
0849da6d +0x02f:  xor    $0x1,%eax
0849da70 +0x032:  test   %al,%al
0849da72 +0x034:  je     0849da7e <+0x40>
0849da74 +0x036:  mov    $0x11,%eax
0849da79 +0x03b:  jmp    0849dcbc <+0x27e>
0849da7e +0x040:  mov    0x8(%ebp),%eax
0849da81 +0x043:  mov    0x40(%eax),%eax
0849da84 +0x046:  mov    %eax,0x4(%esp)
0849da88 +0x04a:  mov    0xc(%ebp),%eax
0849da8b +0x04d:  mov    %eax,(%esp)
0849da8e +0x050:  call   0849b590 <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem>  ; expert_job::CExpertJob::IsLearnRecipe(CUser*, CStackableItem const*)
0849da93 +0x055:  xor    $0x1,%eax
0849da96 +0x058:  test   %al,%al
0849da98 +0x05a:  je     0849daa4 <+0x66>
0849da9a +0x05c:  mov    $0x11,%eax
0849da9f +0x061:  jmp    0849dcbc <+0x27e>
0849daa4 +0x066:  mov    0x8(%ebp),%eax
0849daa7 +0x069:  add    $0x18,%eax
0849daaa +0x06c:  mov    %eax,(%esp)
0849daad +0x06f:  call   0849f286 <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0xb7>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0xb7
0849dab2 +0x074:  test   %al,%al
0849dab4 +0x076:  je     0849dac0 <+0x82>
0849dab6 +0x078:  mov    $0x14,%eax
0849dabb +0x07d:  jmp    0849dcbc <+0x27e>
0849dac0 +0x082:  mov    0x8(%ebp),%eax
0849dac3 +0x085:  mov    0x1c(%eax),%edx
0849dac6 +0x088:  mov    0x8(%ebp),%eax
0849dac9 +0x08b:  mov    %edx,0x3c(%eax)
0849dacc +0x08e:  mov    0x8(%ebp),%eax
0849dacf +0x091:  mov    0x3c(%eax),%eax
0849dad2 +0x094:  test   %eax,%eax
0849dad4 +0x096:  jne    0849dae0 <+0xa2>
0849dad6 +0x098:  mov    $0x11,%eax
0849dadb +0x09d:  jmp    0849dcbc <+0x27e>
0849dae0 +0x0a2:  mov    0x8(%ebp),%eax
0849dae3 +0x0a5:  mov    %eax,(%esp)
0849dae6 +0x0a8:  call   0849ca6a <_ZN10expert_job10CEnchanter17IsEqualMonsterCadEv>  ; expert_job::CEnchanter::IsEqualMonsterCad()
0849daeb +0x0ad:  xor    $0x1,%eax
0849daee +0x0b0:  test   %al,%al
0849daf0 +0x0b2:  je     0849dafc <+0xbe>
0849daf2 +0x0b4:  mov    $0x11,%eax
0849daf7 +0x0b9:  jmp    0849dcbc <+0x27e>
0849dafc +0x0be:  mov    0x8(%ebp),%eax
0849daff +0x0c1:  mov    0x40(%eax),%edx
0849db02 +0x0c4:  mov    0x8(%ebp),%eax
0849db05 +0x0c7:  mov    0xc(%eax),%eax
0849db08 +0x0ca:  mov    %edx,0x4(%esp)
0849db0c +0x0ce:  mov    %eax,(%esp)
0849db0f +0x0d1:  call   0849d768 <_Z11EnableWorldPK5CItemS1_>  ; EnableWorld(CItem const*, CItem const*)
0849db14 +0x0d6:  xor    $0x1,%eax
0849db17 +0x0d9:  test   %al,%al
0849db19 +0x0db:  je     0849db25 <+0xe7>
0849db1b +0x0dd:  mov    $0x11,%eax
0849db20 +0x0e2:  jmp    0849dcbc <+0x27e>
0849db25 +0x0e7:  mov    0x8(%ebp),%eax
0849db28 +0x0ea:  mov    0x3c(%eax),%eax
0849db2b +0x0ed:  mov    (%eax),%eax
0849db2d +0x0ef:  add    $0x20,%eax
0849db30 +0x0f2:  mov    (%eax),%ebx
0849db32 +0x0f4:  mov    0x8(%ebp),%eax
0849db35 +0x0f7:  mov    0xc(%eax),%eax
0849db38 +0x0fa:  mov    (%eax),%eax
0849db3a +0x0fc:  add    $0xc,%eax
0849db3d +0x0ff:  mov    (%eax),%edx
0849db3f +0x101:  mov    0x8(%ebp),%eax
0849db42 +0x104:  mov    0xc(%eax),%eax
0849db45 +0x107:  mov    %eax,(%esp)
0849db48 +0x10a:  call   *%edx
0849db4a +0x10c:  mov    0x8(%ebp),%edx
0849db4d +0x10f:  mov    0x3c(%edx),%edx
0849db50 +0x112:  mov    %eax,0x4(%esp)
0849db54 +0x116:  mov    %edx,(%esp)
0849db57 +0x119:  call   *%ebx
0849db59 +0x11b:  xor    $0x1,%eax
0849db5c +0x11e:  test   %al,%al
0849db5e +0x120:  je     0849db6a <+0x12c>
0849db60 +0x122:  mov    $0x17,%eax
0849db65 +0x127:  jmp    0849dcbc <+0x27e>
0849db6a +0x12c:  movl   $0x0,-0x14(%ebp)
0849db71 +0x133:  mov    0x8(%ebp),%eax
0849db74 +0x136:  mov    0x40(%eax),%eax
0849db77 +0x139:  lea    -0x14(%ebp),%edx
0849db7a +0x13c:  mov    %edx,0x8(%esp)
0849db7e +0x140:  mov    %eax,0x4(%esp)
0849db82 +0x144:  mov    0xc(%ebp),%eax
0849db85 +0x147:  mov    %eax,(%esp)
0849db88 +0x14a:  call   0849b2e8 <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi>  ; expert_job::CExpertJob::GetSuccessRate(CUser*, CStackableItem const*, int&)
0849db8d +0x14f:  mov    %eax,-0x10(%ebp)
0849db90 +0x152:  cmpl   $0x0,-0x10(%ebp)
0849db94 +0x156:  jne    0849dba0 <+0x162>
0849db96 +0x158:  mov    $0x17,%eax
0849db9b +0x15d:  jmp    0849dcbc <+0x27e>
0849dba0 +0x162:  mov    -0x10(%ebp),%eax
0849dba3 +0x165:  mov    0x4(%eax),%edx
0849dba6 +0x168:  mov    -0x14(%ebp),%eax
0849dba9 +0x16b:  lea    (%edx,%eax,1),%eax
0849dbac +0x16e:  mov    %eax,-0xc(%ebp)
0849dbaf +0x171:  cmpl   $0x64,-0xc(%ebp)
0849dbb3 +0x175:  jle    0849dbbc <+0x17e>
0849dbb5 +0x177:  movl   $0x64,-0xc(%ebp)
0849dbbc +0x17e:  mov    0x8(%ebp),%eax
0849dbbf +0x181:  mov    0x2c(%eax),%eax
0849dbc2 +0x184:  test   %eax,%eax
0849dbc4 +0x186:  je     0849dbdf <+0x1a1>
0849dbc6 +0x188:  mov    0x8(%ebp),%eax
0849dbc9 +0x18b:  mov    0x2c(%eax),%eax
0849dbcc +0x18e:  mov    %eax,(%esp)
0849dbcf +0x191:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0849dbd4 +0x196:  test   %eax,%eax
0849dbd6 +0x198:  je     0849dbdf <+0x1a1>
0849dbd8 +0x19a:  mov    $0x1,%eax
0849dbdd +0x19f:  jmp    0849dbe4 <+0x1a6>
0849dbdf +0x1a1:  mov    $0x0,%eax
0849dbe4 +0x1a6:  test   %al,%al
0849dbe6 +0x1a8:  je     0849dcb7 <+0x279>
0849dbec +0x1ae:  lea    -0x20(%ebp),%eax
0849dbef +0x1b1:  mov    %eax,(%esp)
0849dbf2 +0x1b4:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849dbf7 +0x1b9:  movl   $0x9c,0x8(%esp)
0849dbff +0x1c1:  movl   $0x0,0x4(%esp)
0849dc07 +0x1c9:  lea    -0x20(%ebp),%eax
0849dc0a +0x1cc:  mov    %eax,(%esp)
0849dc0d +0x1cf:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849dc12 +0x1d4:  movl   $0x1,0x4(%esp)
0849dc1a +0x1dc:  lea    -0x20(%ebp),%eax
0849dc1d +0x1df:  mov    %eax,(%esp)
0849dc20 +0x1e2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849dc25 +0x1e7:  mov    -0xc(%ebp),%eax
0849dc28 +0x1ea:  mov    %eax,0x4(%esp)
0849dc2c +0x1ee:  lea    -0x20(%ebp),%eax
0849dc2f +0x1f1:  mov    %eax,(%esp)
0849dc32 +0x1f4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849dc37 +0x1f9:  movl   $0x1,0x4(%esp)
0849dc3f +0x201:  lea    -0x20(%ebp),%eax
0849dc42 +0x204:  mov    %eax,(%esp)
0849dc45 +0x207:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849dc4a +0x20c:  mov    0x8(%ebp),%eax
0849dc4d +0x20f:  mov    0x40(%eax),%eax
0849dc50 +0x212:  mov    %eax,(%esp)
0849dc53 +0x215:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0849dc58 +0x21a:  mov    %eax,0x4(%esp)
0849dc5c +0x21e:  lea    -0x20(%ebp),%eax
0849dc5f +0x221:  mov    %eax,(%esp)
0849dc62 +0x224:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0849dc67 +0x229:  movl   $0x1,0x4(%esp)
0849dc6f +0x231:  lea    -0x20(%ebp),%eax
0849dc72 +0x234:  mov    %eax,(%esp)
0849dc75 +0x237:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849dc7a +0x23c:  mov    0x8(%ebp),%eax
0849dc7d +0x23f:  mov    0x2c(%eax),%eax
0849dc80 +0x242:  lea    -0x20(%ebp),%edx
0849dc83 +0x245:  mov    %edx,0x4(%esp)
0849dc87 +0x249:  mov    %eax,(%esp)
0849dc8a +0x24c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849dc8f +0x251:  jmp    0849dcac <+0x26e>
0849dc91 +0x253:  mov    %edx,%ebx
0849dc93 +0x255:  mov    %eax,%esi
0849dc95 +0x257:  lea    -0x20(%ebp),%eax
0849dc98 +0x25a:  mov    %eax,(%esp)
0849dc9b +0x25d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849dca0 +0x262:  mov    %esi,%eax
0849dca2 +0x264:  mov    %ebx,%edx
0849dca4 +0x266:  mov    %eax,(%esp)
0849dca7 +0x269:  call   08ae3750 <_Unwind_Resume>
0849dcac +0x26e:  lea    -0x20(%ebp),%eax
0849dcaf +0x271:  mov    %eax,(%esp)
0849dcb2 +0x274:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849dcb7 +0x279:  mov    $0x0,%eax
0849dcbc +0x27e:  add    $0x30,%esp
0849dcbf +0x281:  pop    %ebx
0849dcc0 +0x282:  pop    %esi
0849dcc1 +0x283:  pop    %ebp
0849dcc2 +0x284:  ret
0849dcc3 +0x285:  nop
```

## 反编译 C

```c
// expert_job::CEnchanter::_TryEnchantOther @ 0x849da3e

/* expert_job::CEnchanter::_TryEnchantOther(CUser*, stItemPos_t*) */

undefined4 expert_job::CEnchanter::_TryEnchantOther(CUser *param_1,stItemPos_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  int local_10;
  
  cVar3 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(param_1 + 8));
  if (cVar3 != '\0') {
    return 0x15;
  }
  cVar3 = IsRecipeRight((CEnchanter *)param_1);
  if (cVar3 != '\x01') {
    return 0x11;
  }
  cVar3 = CExpertJob::IsLearnRecipe((CUser *)param_2,*(CStackableItem **)(param_1 + 0x40));
  if (cVar3 != '\x01') {
    return 0x11;
  }
  cVar3 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(param_1 + 0x18));
  if (cVar3 != '\0') {
    return 0x14;
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0x11;
  }
  cVar3 = IsEqualMonsterCad((CEnchanter *)param_1);
  if (cVar3 != '\x01') {
    return 0x11;
  }
  cVar3 = EnableWorld(*(CItem **)(param_1 + 0xc),*(CItem **)(param_1 + 0x40));
  if (cVar3 != '\x01') {
    return 0x11;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x3c) + 0x20);
  uVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_1 + 0xc));
  cVar3 = (*pcVar1)(*(undefined4 *)(param_1 + 0x3c),uVar4);
  if (cVar3 == '\x01') {
    local_18 = 0;
    local_14 = CExpertJob::GetSuccessRate
                         ((CUser *)param_2,*(CStackableItem **)(param_1 + 0x40),&local_18);
    if (local_14 != 0) {
      local_10 = *(int *)(local_14 + 4) + local_18;
      if (100 < local_10) {
        local_10 = 100;
      }
      if ((*(int *)(param_1 + 0x2c) == 0) ||
         (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(param_1 + 0x2c)), iVar5 == 0)
         ) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0849dc0d to 0849dc8e has its CatchHandler @ 0849dc91 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x9c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        iVar5 = CItem::get_index(*(CItem **)(param_1 + 0x40));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,iVar5);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send(*(CUser **)(param_1 + 0x2c),local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      return 0;
    }
    return 0x17;
  }
  return 0x17;
}
```
