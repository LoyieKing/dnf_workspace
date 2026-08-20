# dispatch_sig

`_ZN28Inter_AutoPunishRuleHackType12dispatch_sigEP5CUserPci`

`Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_AutoPunishRuleHackType` | `0x084d4440` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d4440  _ZN28Inter_AutoPunishRuleHackType12dispatch_sigEP5CUserPci
#           Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int)
# range [0x084d4440, 0x084d46f9]
084d4440 +0x000:  push   %ebp
084d4441 +0x001:  mov    %esp,%ebp
084d4443 +0x003:  push   %edi
084d4444 +0x004:  push   %esi
084d4445 +0x005:  push   %ebx
084d4446 +0x006:  sub    $0x7c,%esp
084d4449 +0x009:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
084d444e +0x00e:  mov    %eax,(%esp)
084d4451 +0x011:  call   082a5a9c <_GLOBAL__I__ZN4CLog5this_E+0x1ec3>  ; global constructors keyed to CLog::this_+0x1ec3
084d4456 +0x016:  mov    0x10(%ebp),%eax
084d4459 +0x019:  mov    %eax,-0x20(%ebp)
084d445c +0x01c:  mov    -0x20(%ebp),%eax
084d445f +0x01f:  mov    0x8(%eax),%edx
084d4462 +0x022:  mov    0x4(%eax),%eax
084d4465 +0x025:  mov    -0x20(%ebp),%ecx
084d4468 +0x028:  mov    (%ecx),%ebx
084d446a +0x02a:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%ecx
084d4470 +0x030:  mov    %eax,0x8(%esp)
084d4474 +0x034:  mov    %edx,0xc(%esp)
084d4478 +0x038:  mov    %ebx,0x4(%esp)
084d447c +0x03c:  mov    %ecx,(%esp)
084d447f +0x03f:  call   084eb9d4 <_GLOBAL__I__Z7getUserj+0x2986>  ; global constructors keyed to getUser(unsigned int)+0x2986
084d4484 +0x044:  mov    -0x20(%ebp),%eax
084d4487 +0x047:  mov    (%eax),%edi
084d4489 +0x049:  mov    -0x20(%ebp),%eax
084d448c +0x04c:  mov    0x4(%eax),%ebx
084d448f +0x04f:  mov    0x8(%eax),%esi
084d4492 +0x052:  movl   $0x0,0xc(%esp)
084d449a +0x05a:  movl   $0x3585,0x8(%esp)
084d44a2 +0x062:  movl   $&_ZZN28Inter_AutoPunishRuleHackType12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d44aa +0x06a:  lea    -0x50(%ebp),%eax
084d44ad +0x06d:  mov    %eax,(%esp)
084d44b0 +0x070:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d44b5 +0x075:  mov    %edi,0x10(%esp)
084d44b9 +0x079:  mov    %ebx,0x8(%esp)
084d44bd +0x07d:  mov    %esi,0xc(%esp)
084d44c1 +0x081:  movl   $"HackType Load Start. (TotalGold: %llu)(TotalCount: %d)",0x4(%esp)
084d44c9 +0x089:  lea    -0x50(%ebp),%eax
084d44cc +0x08c:  mov    %eax,(%esp)
084d44cf +0x08f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d44d4 +0x094:  movl   $0x0,-0x1c(%ebp)
084d44db +0x09b:  jmp    084d469e <+0x25e>
084d44e0 +0x0a0:  mov    -0x1c(%ebp),%edx
084d44e3 +0x0a3:  mov    -0x20(%ebp),%ecx
084d44e6 +0x0a6:  mov    %edx,%eax
084d44e8 +0x0a8:  shl    $0x2,%eax
084d44eb +0x0ab:  add    %edx,%eax
084d44ed +0x0ad:  shl    $0x2,%eax
084d44f0 +0x0b0:  lea    (%ecx,%eax,1),%eax
084d44f3 +0x0b3:  add    $0x20,%eax
084d44f6 +0x0b6:  mov    (%eax),%edi
084d44f8 +0x0b8:  mov    -0x1c(%ebp),%edx
084d44fb +0x0bb:  mov    -0x20(%ebp),%ecx
084d44fe +0x0be:  mov    %edx,%eax
084d4500 +0x0c0:  shl    $0x2,%eax
084d4503 +0x0c3:  add    %edx,%eax
084d4505 +0x0c5:  shl    $0x2,%eax
084d4508 +0x0c8:  lea    (%ecx,%eax,1),%eax
084d450b +0x0cb:  add    $0x1c,%eax
084d450e +0x0ce:  mov    (%eax),%eax
084d4510 +0x0d0:  mov    %eax,-0x68(%ebp)
084d4513 +0x0d3:  mov    -0x1c(%ebp),%edx
084d4516 +0x0d6:  mov    -0x20(%ebp),%ecx
084d4519 +0x0d9:  mov    %edx,%eax
084d451b +0x0db:  shl    $0x2,%eax
084d451e +0x0de:  add    %edx,%eax
084d4520 +0x0e0:  shl    $0x2,%eax
084d4523 +0x0e3:  lea    (%ecx,%eax,1),%eax
084d4526 +0x0e6:  add    $0x10,%eax
084d4529 +0x0e9:  movzwl 0x8(%eax),%eax
084d452d +0x0ed:  movzwl %ax,%eax
084d4530 +0x0f0:  mov    %eax,-0x64(%ebp)
084d4533 +0x0f3:  mov    -0x1c(%ebp),%edx
084d4536 +0x0f6:  mov    -0x20(%ebp),%ecx
084d4539 +0x0f9:  mov    %edx,%eax
084d453b +0x0fb:  shl    $0x2,%eax
084d453e +0x0fe:  add    %edx,%eax
084d4540 +0x100:  shl    $0x2,%eax
084d4543 +0x103:  lea    (%ecx,%eax,1),%eax
084d4546 +0x106:  add    $0x10,%eax
084d4549 +0x109:  movzwl 0x6(%eax),%eax
084d454d +0x10d:  movzwl %ax,%eax
084d4550 +0x110:  mov    %eax,-0x60(%ebp)
084d4553 +0x113:  mov    -0x1c(%ebp),%edx
084d4556 +0x116:  mov    -0x20(%ebp),%ecx
084d4559 +0x119:  mov    %edx,%eax
084d455b +0x11b:  shl    $0x2,%eax
084d455e +0x11e:  add    %edx,%eax
084d4560 +0x120:  shl    $0x2,%eax
084d4563 +0x123:  lea    (%ecx,%eax,1),%eax
084d4566 +0x126:  add    $0x10,%eax
084d4569 +0x129:  movzwl 0x4(%eax),%eax
084d456d +0x12d:  movzwl %ax,%esi
084d4570 +0x130:  mov    -0x1c(%ebp),%edx
084d4573 +0x133:  mov    -0x20(%ebp),%ecx
084d4576 +0x136:  mov    %edx,%eax
084d4578 +0x138:  shl    $0x2,%eax
084d457b +0x13b:  add    %edx,%eax
084d457d +0x13d:  shl    $0x2,%eax
084d4580 +0x140:  lea    (%ecx,%eax,1),%eax
084d4583 +0x143:  add    $0x10,%eax
084d4586 +0x146:  movzwl 0x2(%eax),%eax
084d458a +0x14a:  movzwl %ax,%ebx
084d458d +0x14d:  mov    -0x1c(%ebp),%edx
084d4590 +0x150:  mov    -0x20(%ebp),%ecx
084d4593 +0x153:  mov    %edx,%eax
084d4595 +0x155:  shl    $0x2,%eax
084d4598 +0x158:  add    %edx,%eax
084d459a +0x15a:  shl    $0x2,%eax
084d459d +0x15d:  lea    (%ecx,%eax,1),%eax
084d45a0 +0x160:  add    $0x10,%eax
084d45a3 +0x163:  movzwl (%eax),%eax
084d45a6 +0x166:  movzwl %ax,%edx
084d45a9 +0x169:  mov    &_ZN10GlobalData27g_autoPunishRuleHackTypeMgrE,%eax
084d45ae +0x16e:  mov    %edi,0x1c(%esp)
084d45b2 +0x172:  mov    -0x68(%ebp),%ecx
084d45b5 +0x175:  mov    %ecx,0x18(%esp)
084d45b9 +0x179:  mov    -0x64(%ebp),%ecx
084d45bc +0x17c:  mov    %ecx,0x14(%esp)
084d45c0 +0x180:  mov    -0x60(%ebp),%ecx
084d45c3 +0x183:  mov    %ecx,0x10(%esp)
084d45c7 +0x187:  mov    %esi,0xc(%esp)
084d45cb +0x18b:  mov    %ebx,0x8(%esp)
084d45cf +0x18f:  mov    %edx,0x4(%esp)
084d45d3 +0x193:  mov    %eax,(%esp)
084d45d6 +0x196:  call   084eb854 <_GLOBAL__I__Z7getUserj+0x2806>  ; global constructors keyed to getUser(unsigned int)+0x2806
084d45db +0x19b:  mov    -0x1c(%ebp),%edx
084d45de +0x19e:  mov    -0x20(%ebp),%ecx
084d45e1 +0x1a1:  mov    %edx,%eax
084d45e3 +0x1a3:  shl    $0x2,%eax
084d45e6 +0x1a6:  add    %edx,%eax
084d45e8 +0x1a8:  shl    $0x2,%eax
084d45eb +0x1ab:  lea    (%ecx,%eax,1),%eax
084d45ee +0x1ae:  add    $0x10,%eax
084d45f1 +0x1b1:  movzwl 0x6(%eax),%eax
084d45f5 +0x1b5:  movzwl %ax,%eax
084d45f8 +0x1b8:  mov    %eax,-0x5c(%ebp)
084d45fb +0x1bb:  mov    -0x1c(%ebp),%edx
084d45fe +0x1be:  mov    -0x20(%ebp),%ecx
084d4601 +0x1c1:  mov    %edx,%eax
084d4603 +0x1c3:  shl    $0x2,%eax
084d4606 +0x1c6:  add    %edx,%eax
084d4608 +0x1c8:  shl    $0x2,%eax
084d460b +0x1cb:  lea    (%ecx,%eax,1),%eax
084d460e +0x1ce:  add    $0x10,%eax
084d4611 +0x1d1:  movzwl 0x4(%eax),%eax
084d4615 +0x1d5:  movzwl %ax,%edi
084d4618 +0x1d8:  mov    -0x1c(%ebp),%edx
084d461b +0x1db:  mov    -0x20(%ebp),%ecx
084d461e +0x1de:  mov    %edx,%eax
084d4620 +0x1e0:  shl    $0x2,%eax
084d4623 +0x1e3:  add    %edx,%eax
084d4625 +0x1e5:  shl    $0x2,%eax
084d4628 +0x1e8:  lea    (%ecx,%eax,1),%eax
084d462b +0x1eb:  add    $0x10,%eax
084d462e +0x1ee:  movzwl 0x2(%eax),%eax
084d4632 +0x1f2:  movzwl %ax,%esi
084d4635 +0x1f5:  mov    -0x1c(%ebp),%edx
084d4638 +0x1f8:  mov    -0x20(%ebp),%ecx
084d463b +0x1fb:  mov    %edx,%eax
084d463d +0x1fd:  shl    $0x2,%eax
084d4640 +0x200:  add    %edx,%eax
084d4642 +0x202:  shl    $0x2,%eax
084d4645 +0x205:  lea    (%ecx,%eax,1),%eax
084d4648 +0x208:  add    $0x10,%eax
084d464b +0x20b:  movzwl (%eax),%eax
084d464e +0x20e:  movzwl %ax,%ebx
084d4651 +0x211:  movl   $0x0,0xc(%esp)
084d4659 +0x219:  movl   $0x3596,0x8(%esp)
084d4661 +0x221:  movl   $&_ZZN28Inter_AutoPunishRuleHackType12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d4669 +0x229:  lea    -0x40(%ebp),%eax
084d466c +0x22c:  mov    %eax,(%esp)
084d466f +0x22f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d4674 +0x234:  mov    -0x5c(%ebp),%eax
084d4677 +0x237:  mov    %eax,0x14(%esp)
084d467b +0x23b:  mov    %edi,0x10(%esp)
084d467f +0x23f:  mov    %esi,0xc(%esp)
084d4683 +0x243:  mov    %ebx,0x8(%esp)
084d4687 +0x247:  movl   $"HackType Load (Type: %d -> %d)(SubType: %d -> %d)",0x4(%esp)
084d468f +0x24f:  lea    -0x40(%ebp),%eax
084d4692 +0x252:  mov    %eax,(%esp)
084d4695 +0x255:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d469a +0x25a:  addl   $0x1,-0x1c(%ebp)
084d469e +0x25e:  mov    -0x20(%ebp),%eax
084d46a1 +0x261:  movzwl 0xc(%eax),%eax
084d46a5 +0x265:  movzwl %ax,%eax
084d46a8 +0x268:  cmp    -0x1c(%ebp),%eax
084d46ab +0x26b:  setg   %al
084d46ae +0x26e:  test   %al,%al
084d46b0 +0x270:  jne    084d44e0 <+0xa0>
084d46b6 +0x276:  movl   $0x0,0xc(%esp)
084d46be +0x27e:  movl   $0x3599,0x8(%esp)
084d46c6 +0x286:  movl   $&_ZZN28Inter_AutoPunishRuleHackType12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084d46ce +0x28e:  lea    -0x30(%ebp),%eax
084d46d1 +0x291:  mov    %eax,(%esp)
084d46d4 +0x294:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084d46d9 +0x299:  movl   $"HackType Load End",0x4(%esp)
084d46e1 +0x2a1:  lea    -0x30(%ebp),%eax
084d46e4 +0x2a4:  mov    %eax,(%esp)
084d46e7 +0x2a7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084d46ec +0x2ac:  mov    $0x0,%eax
084d46f1 +0x2b1:  add    $0x7c,%esp
084d46f4 +0x2b4:  pop    %ebx
084d46f5 +0x2b5:  pop    %esi
084d46f6 +0x2b6:  pop    %edi
084d46f7 +0x2b7:  pop    %ebp
084d46f8 +0x2b8:  ret
084d46f9 +0x2b9:  nop
```

## 反编译 C

```c
// Inter_AutoPunishRuleHackType::dispatch_sig @ 0x84d4440

/* Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AutoPunishRuleHackType::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  uint *local_24;
  int local_20;
  
  WongWork::CAutoPunishRuleHackTypeMgr::reset(GlobalData::g_autoPunishRuleHackTypeMgr);
  local_24 = (uint *)param_3;
  WongWork::CAutoPunishRuleHackTypeMgr::setTotalTrade
            ((uint)GlobalData::g_autoPunishRuleHackTypeMgr,*(ulonglong *)param_3);
  uVar5 = *local_24;
  uVar3 = local_24[1];
  uVar4 = local_24[2];
  cMyTrace::cMyTrace(local_54,
                     "virtual int Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int)",
                     0x3585,0);
  cMyTrace::operator()
            (local_54,"HackType Load Start. (TotalGold: %llu)(TotalCount: %d)",uVar3,uVar4,uVar5);
  for (local_20 = 0; local_20 < (int)(uint)(ushort)local_24[3]; local_20 = local_20 + 1) {
    WongWork::CAutoPunishRuleHackTypeMgr::setHackCnt
              (GlobalData::g_autoPunishRuleHackTypeMgr,(short)local_24[local_20 * 5 + 4],
               *(undefined2 *)((int)local_24 + local_20 * 0x14 + 0x12),
               (short)local_24[local_20 * 5 + 5],
               *(undefined2 *)((int)local_24 + local_20 * 0x14 + 0x16),
               (short)local_24[local_20 * 5 + 6],local_24[local_20 * 5 + 7],
               local_24[local_20 * 5 + 8]);
    uVar1 = *(ushort *)((int)local_24 + local_20 * 0x14 + 0x16);
    uVar5 = (uint)(ushort)local_24[local_20 * 5 + 5];
    uVar2 = *(ushort *)((int)local_24 + local_20 * 0x14 + 0x12);
    uVar3 = local_24[local_20 * 5 + 4];
    cMyTrace::cMyTrace(local_44,
                       "virtual int Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int)",
                       0x3596,0);
    cMyTrace::operator()
              (local_44,"HackType Load (Type: %d -> %d)(SubType: %d -> %d)",(uint)(ushort)uVar3,
               (uint)uVar2,uVar5,(uint)uVar1);
  }
  uVar7 = 0;
  uVar6 = 0x3599;
  cMyTrace::cMyTrace(local_34,
                     "virtual int Inter_AutoPunishRuleHackType::dispatch_sig(CUser*, char*, int)",
                     0x3599,0);
  cMyTrace::operator()(local_34,"HackType Load End",uVar6,uVar7,uVar5);
  return 0;
}
```
