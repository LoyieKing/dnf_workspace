# dispatch_sig

`_ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci`

`Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_OnTimeEventAckReward` | `0x084e11ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e11ec  _ZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPci
#           Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)
# range [0x084e11ec, 0x084e1577]
084e11ec +0x000:  push   %ebp
084e11ed +0x001:  mov    %esp,%ebp
084e11ef +0x003:  push   %edi
084e11f0 +0x004:  push   %esi
084e11f1 +0x005:  push   %ebx
084e11f2 +0x006:  sub    $0x8c,%esp
084e11f8 +0x00c:  mov    0x10(%ebp),%eax
084e11fb +0x00f:  mov    %eax,-0x1c(%ebp)
084e11fe +0x012:  mov    -0x1c(%ebp),%eax
084e1201 +0x015:  movzwl 0xa(%eax),%eax
084e1205 +0x019:  movswl %ax,%ebx
084e1208 +0x01c:  movl   $0x0,0xc(%esp)
084e1210 +0x024:  movl   $0x502d,0x8(%esp)
084e1218 +0x02c:  movl   $&_ZZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e1220 +0x034:  lea    -0x6c(%ebp),%eax
084e1223 +0x037:  mov    %eax,(%esp)
084e1226 +0x03a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e122b +0x03f:  mov    %ebx,0x8(%esp)
084e122f +0x043:  movl   $"[ON_TIME_EVENT] Request Reward Ack(result_no:%u)",0x4(%esp)
084e1237 +0x04b:  lea    -0x6c(%ebp),%eax
084e123a +0x04e:  mov    %eax,(%esp)
084e123d +0x051:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e1242 +0x056:  cmpl   $0x0,0xc(%ebp)
084e1246 +0x05a:  jne    084e1252 <+0x66>
084e1248 +0x05c:  mov    $0x0,%eax
084e124d +0x061:  jmp    084e156c <+0x380>
084e1252 +0x066:  mov    -0x1c(%ebp),%eax
084e1255 +0x069:  movzwl 0xa(%eax),%eax
084e1259 +0x06d:  test   %ax,%ax
084e125c +0x070:  je     084e1311 <+0x125>
084e1262 +0x076:  mov    0xc(%ebp),%eax
084e1265 +0x079:  mov    %eax,(%esp)
084e1268 +0x07c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e126d +0x081:  cmp    $0x2,%eax
084e1270 +0x084:  setg   %al
084e1273 +0x087:  test   %al,%al
084e1275 +0x089:  je     084e1298 <+0xac>
084e1277 +0x08b:  mov    -0x1c(%ebp),%eax
084e127a +0x08e:  movzwl 0xa(%eax),%eax
084e127e +0x092:  movzbl %al,%eax
084e1281 +0x095:  mov    %eax,0x8(%esp)
084e1285 +0x099:  movl   $0x120,0x4(%esp)
084e128d +0x0a1:  mov    0xc(%ebp),%eax
084e1290 +0x0a4:  mov    %eax,(%esp)
084e1293 +0x0a7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e1298 +0x0ac:  mov    -0x1c(%ebp),%eax
084e129b +0x0af:  movzwl 0xa(%eax),%eax
084e129f +0x0b3:  movswl %ax,%edi
084e12a2 +0x0b6:  mov    -0x1c(%ebp),%eax
084e12a5 +0x0b9:  mov    0x10(%eax),%esi
084e12a8 +0x0bc:  mov    0xc(%ebp),%eax
084e12ab +0x0bf:  mov    %eax,(%esp)
084e12ae +0x0c2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e12b3 +0x0c7:  movl   $0x0,0x4(%esp)
084e12bb +0x0cf:  mov    %eax,(%esp)
084e12be +0x0d2:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084e12c3 +0x0d7:  mov    %eax,%ebx
084e12c5 +0x0d9:  movl   $0x0,0xc(%esp)
084e12cd +0x0e1:  movl   $0x503a,0x8(%esp)
084e12d5 +0x0e9:  movl   $&_ZZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e12dd +0x0f1:  lea    -0x5c(%ebp),%eax
084e12e0 +0x0f4:  mov    %eax,(%esp)
084e12e3 +0x0f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e12e8 +0x0fc:  mov    %edi,0x10(%esp)
084e12ec +0x100:  mov    %esi,0xc(%esp)
084e12f0 +0x104:  mov    %ebx,0x8(%esp)
084e12f4 +0x108:  movl   $"[ON_TIME_EVENT] Request Reward Ack:err_wrong(m_id:%s,char_no:%u,result_no:%u)",0x4(%esp)
084e12fc +0x110:  lea    -0x5c(%ebp),%eax
084e12ff +0x113:  mov    %eax,(%esp)
084e1302 +0x116:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e1307 +0x11b:  mov    $0x0,%eax
084e130c +0x120:  jmp    084e156c <+0x380>
084e1311 +0x125:  cmpl   $0x0,0xc(%ebp)
084e1315 +0x129:  je     084e1336 <+0x14a>
084e1317 +0x12b:  mov    0xc(%ebp),%eax
084e131a +0x12e:  mov    %eax,(%esp)
084e131d +0x131:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084e1322 +0x136:  test   %eax,%eax
084e1324 +0x138:  je     084e1336 <+0x14a>
084e1326 +0x13a:  mov    0xc(%ebp),%eax
084e1329 +0x13d:  mov    %eax,(%esp)
084e132c +0x140:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e1331 +0x145:  cmp    $0x2,%eax
084e1334 +0x148:  jg     084e1347 <+0x15b>
084e1336 +0x14a:  mov    -0x1c(%ebp),%eax
084e1339 +0x14d:  mov    0x10(%eax),%eax
084e133c +0x150:  test   %eax,%eax
084e133e +0x152:  je     084e1347 <+0x15b>
084e1340 +0x154:  mov    $0x1,%eax
084e1345 +0x159:  jmp    084e134c <+0x160>
084e1347 +0x15b:  mov    $0x0,%eax
084e134c +0x160:  test   %al,%al
084e134e +0x162:  je     084e1411 <+0x225>
084e1354 +0x168:  mov    -0x1c(%ebp),%eax
084e1357 +0x16b:  mov    0x18(%eax),%ecx
084e135a +0x16e:  mov    -0x1c(%ebp),%eax
084e135d +0x171:  mov    0x14(%eax),%edx
084e1360 +0x174:  mov    -0x1c(%ebp),%eax
084e1363 +0x177:  mov    0x10(%eax),%eax
084e1366 +0x17a:  mov    %ecx,0xc(%esp)
084e136a +0x17e:  mov    %edx,0x8(%esp)
084e136e +0x182:  mov    %eax,0x4(%esp)
084e1372 +0x186:  mov    0x8(%ebp),%eax
084e1375 +0x189:  mov    %eax,(%esp)
084e1378 +0x18c:  call   084e1578 <_ZN26Inter_OnTimeEventAckReward22SendOnTimeRewardByMailEjjj>  ; Inter_OnTimeEventAckReward::SendOnTimeRewardByMail(unsigned int, unsigned int, unsigned int)
084e137d +0x191:  movl   $0x11,0x8(%esp)
084e1385 +0x199:  movl   $0x120,0x4(%esp)
084e138d +0x1a1:  mov    0xc(%ebp),%eax
084e1390 +0x1a4:  mov    %eax,(%esp)
084e1393 +0x1a7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e1398 +0x1ac:  mov    -0x1c(%ebp),%eax
084e139b +0x1af:  movzwl 0xa(%eax),%eax
084e139f +0x1b3:  movswl %ax,%edi
084e13a2 +0x1b6:  mov    -0x1c(%ebp),%eax
084e13a5 +0x1b9:  mov    0x10(%eax),%esi
084e13a8 +0x1bc:  mov    0xc(%ebp),%eax
084e13ab +0x1bf:  mov    %eax,(%esp)
084e13ae +0x1c2:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e13b3 +0x1c7:  movl   $0x0,0x4(%esp)
084e13bb +0x1cf:  mov    %eax,(%esp)
084e13be +0x1d2:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084e13c3 +0x1d7:  mov    %eax,%ebx
084e13c5 +0x1d9:  movl   $0x0,0xc(%esp)
084e13cd +0x1e1:  movl   $0x5049,0x8(%esp)
084e13d5 +0x1e9:  movl   $&_ZZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e13dd +0x1f1:  lea    -0x4c(%ebp),%eax
084e13e0 +0x1f4:  mov    %eax,(%esp)
084e13e3 +0x1f7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e13e8 +0x1fc:  mov    %edi,0x10(%esp)
084e13ec +0x200:  mov    %esi,0xc(%esp)
084e13f0 +0x204:  mov    %ebx,0x8(%esp)
084e13f4 +0x208:  movl   $"[ON_TIME_EVENT] Request Reward Ack:err_logout(m_id:%s,char_no:%u,result_no:%u)",0x4(%esp)
084e13fc +0x210:  lea    -0x4c(%ebp),%eax
084e13ff +0x213:  mov    %eax,(%esp)
084e1402 +0x216:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e1407 +0x21b:  mov    $0x0,%eax
084e140c +0x220:  jmp    084e156c <+0x380>
084e1411 +0x225:  mov    -0x1c(%ebp),%eax
084e1414 +0x228:  mov    0x10(%eax),%ebx
084e1417 +0x22b:  movl   $0xffffffff,0x4(%esp)
084e141f +0x233:  mov    0xc(%ebp),%eax
084e1422 +0x236:  mov    %eax,(%esp)
084e1425 +0x239:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
084e142a +0x23e:  cmp    %eax,%ebx
084e142c +0x240:  setne  %al
084e142f +0x243:  test   %al,%al
084e1431 +0x245:  je     084e143d <+0x251>
084e1433 +0x247:  mov    $0x0,%eax
084e1438 +0x24c:  jmp    084e156c <+0x380>
084e143d +0x251:  mov    -0x1c(%ebp),%eax
084e1440 +0x254:  mov    0x18(%eax),%edx
084e1443 +0x257:  mov    -0x1c(%ebp),%eax
084e1446 +0x25a:  mov    0x14(%eax),%eax
084e1449 +0x25d:  mov    %edx,0x8(%esp)
084e144d +0x261:  mov    %eax,0x4(%esp)
084e1451 +0x265:  mov    0xc(%ebp),%eax
084e1454 +0x268:  mov    %eax,(%esp)
084e1457 +0x26b:  call   08681c30 <_ZN5CUser23InsertOnTimeEventRewardEjj>  ; CUser::InsertOnTimeEventReward(unsigned int, unsigned int)
084e145c +0x270:  xor    $0x1,%eax
084e145f +0x273:  test   %al,%al
084e1461 +0x275:  je     084e14f8 <+0x30c>
084e1467 +0x27b:  movl   $0x11,0x8(%esp)
084e146f +0x283:  movl   $0x120,0x4(%esp)
084e1477 +0x28b:  mov    0xc(%ebp),%eax
084e147a +0x28e:  mov    %eax,(%esp)
084e147d +0x291:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e1482 +0x296:  mov    -0x1c(%ebp),%eax
084e1485 +0x299:  movzwl 0xa(%eax),%eax
084e1489 +0x29d:  movswl %ax,%edi
084e148c +0x2a0:  mov    -0x1c(%ebp),%eax
084e148f +0x2a3:  mov    0x10(%eax),%esi
084e1492 +0x2a6:  mov    0xc(%ebp),%eax
084e1495 +0x2a9:  mov    %eax,(%esp)
084e1498 +0x2ac:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e149d +0x2b1:  movl   $0x0,0x4(%esp)
084e14a5 +0x2b9:  mov    %eax,(%esp)
084e14a8 +0x2bc:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084e14ad +0x2c1:  mov    %eax,%ebx
084e14af +0x2c3:  movl   $0x0,0xc(%esp)
084e14b7 +0x2cb:  movl   $0x505a,0x8(%esp)
084e14bf +0x2d3:  movl   $&_ZZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e14c7 +0x2db:  lea    -0x3c(%ebp),%eax
084e14ca +0x2de:  mov    %eax,(%esp)
084e14cd +0x2e1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e14d2 +0x2e6:  mov    %edi,0x10(%esp)
084e14d6 +0x2ea:  mov    %esi,0xc(%esp)
084e14da +0x2ee:  mov    %ebx,0x8(%esp)
084e14de +0x2f2:  movl   $"[ON_TIME_EVENT] Request Reward Ack:err_item(m_id:%s,char_no:%u,result_no:%u)",0x4(%esp)
084e14e6 +0x2fa:  lea    -0x3c(%ebp),%eax
084e14e9 +0x2fd:  mov    %eax,(%esp)
084e14ec +0x300:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e14f1 +0x305:  mov    $0x0,%eax
084e14f6 +0x30a:  jmp    084e156c <+0x380>
084e14f8 +0x30c:  mov    -0x1c(%ebp),%eax
084e14fb +0x30f:  movzwl 0xa(%eax),%eax
084e14ff +0x313:  movswl %ax,%edi
084e1502 +0x316:  mov    -0x1c(%ebp),%eax
084e1505 +0x319:  mov    0x10(%eax),%esi
084e1508 +0x31c:  mov    0xc(%ebp),%eax
084e150b +0x31f:  mov    %eax,(%esp)
084e150e +0x322:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e1513 +0x327:  movl   $0x0,0x4(%esp)
084e151b +0x32f:  mov    %eax,(%esp)
084e151e +0x332:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084e1523 +0x337:  mov    %eax,%ebx
084e1525 +0x339:  movl   $0x0,0xc(%esp)
084e152d +0x341:  movl   $0x505d,0x8(%esp)
084e1535 +0x349:  movl   $&_ZZN26Inter_OnTimeEventAckReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e153d +0x351:  lea    -0x2c(%ebp),%eax
084e1540 +0x354:  mov    %eax,(%esp)
084e1543 +0x357:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e1548 +0x35c:  mov    %edi,0x10(%esp)
084e154c +0x360:  mov    %esi,0xc(%esp)
084e1550 +0x364:  mov    %ebx,0x8(%esp)
084e1554 +0x368:  movl   $"[ON_TIME_EVENT] Request Reward Ack:success(m_id:%s,char_no:%u,result_no:%u)",0x4(%esp)
084e155c +0x370:  lea    -0x2c(%ebp),%eax
084e155f +0x373:  mov    %eax,(%esp)
084e1562 +0x376:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e1567 +0x37b:  mov    $0x0,%eax
084e156c +0x380:  add    $0x8c,%esp
084e1572 +0x386:  pop    %ebx
084e1573 +0x387:  pop    %esi
084e1574 +0x388:  pop    %edi
084e1575 +0x389:  pop    %ebp
084e1576 +0x38a:  ret
084e1577 +0x38b:  nop
```

## 反编译 C

```c
// Inter_OnTimeEventAckReward::dispatch_sig @ 0x84e11ec

/* Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_OnTimeEventAckReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  int local_20;
  
  local_20 = param_3;
  sVar1 = *(short *)(param_3 + 10);
  cMyTrace::cMyTrace(local_70,
                     "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)",
                     0x502d,0);
  cMyTrace::operator()(local_70,"[ON_TIME_EVENT] Request Reward Ack(result_no:%u)",(int)sVar1);
  if (param_2 != (char *)0x0) {
    if (*(short *)(local_20 + 10) == 0) {
      if ((((param_2 == (char *)0x0) ||
           (iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2), iVar5 == 0)) ||
          (iVar5 = CUser::get_state((CUser *)param_2), iVar5 < 3)) &&
         (*(int *)(local_20 + 0x10) != 0)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        SendOnTimeRewardByMail
                  ((Inter_OnTimeEventAckReward *)param_1,*(uint *)(local_20 + 0x10),
                   *(uint *)(local_20 + 0x14),*(uint *)(local_20 + 0x18));
        CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0x11);
        sVar1 = *(short *)(local_20 + 10);
        uVar2 = *(undefined4 *)(local_20 + 0x10);
        uVar6 = CUser::get_acc_id((CUser *)param_2);
        uVar7 = NumberToString(uVar6,0);
        cMyTrace::cMyTrace(local_50,
                           "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)"
                           ,0x5049,0);
        cMyTrace::operator()
                  (local_50,
                   "[ON_TIME_EVENT] Request Reward Ack:err_logout(m_id:%s,char_no:%u,result_no:%u)",
                   uVar7,uVar2,(int)sVar1);
      }
      else {
        iVar5 = *(int *)(local_20 + 0x10);
        iVar8 = CUser::get_charac_no((CUser *)param_2,-1);
        if (iVar5 == iVar8) {
          cVar4 = CUser::InsertOnTimeEventReward
                            ((CUser *)param_2,*(uint *)(local_20 + 0x14),*(uint *)(local_20 + 0x18))
          ;
          if (cVar4 == '\x01') {
            sVar1 = *(short *)(local_20 + 10);
            uVar2 = *(undefined4 *)(local_20 + 0x10);
            uVar6 = CUser::get_acc_id((CUser *)param_2);
            uVar7 = NumberToString(uVar6,0);
            cMyTrace::cMyTrace(local_30,
                               "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)"
                               ,0x505d,0);
            cMyTrace::operator()
                      (local_30,
                       "[ON_TIME_EVENT] Request Reward Ack:success(m_id:%s,char_no:%u,result_no:%u)"
                       ,uVar7,uVar2,(int)sVar1);
          }
          else {
            CUser::SendCmdErrorPacket((CUser *)param_2,0x120,0x11);
            sVar1 = *(short *)(local_20 + 10);
            uVar2 = *(undefined4 *)(local_20 + 0x10);
            uVar6 = CUser::get_acc_id((CUser *)param_2);
            uVar7 = NumberToString(uVar6,0);
            cMyTrace::cMyTrace(local_40,
                               "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)"
                               ,0x505a,0);
            cMyTrace::operator()
                      (local_40,
                       "[ON_TIME_EVENT] Request Reward Ack:err_item(m_id:%s,char_no:%u,result_no:%u)"
                       ,uVar7,uVar2,(int)sVar1);
          }
        }
      }
    }
    else {
      iVar5 = CUser::get_state((CUser *)param_2);
      if (2 < iVar5) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x120,(char)*(undefined2 *)(local_20 + 10));
      }
      sVar1 = *(short *)(local_20 + 10);
      uVar2 = *(undefined4 *)(local_20 + 0x10);
      uVar6 = CUser::get_acc_id((CUser *)param_2);
      uVar7 = NumberToString(uVar6,0);
      cMyTrace::cMyTrace(local_60,
                         "virtual int Inter_OnTimeEventAckReward::dispatch_sig(CUser*, char*, int)",
                         0x503a,0);
      cMyTrace::operator()
                (local_60,
                 "[ON_TIME_EVENT] Request Reward Ack:err_wrong(m_id:%s,char_no:%u,result_no:%u)",
                 uVar7,uVar2,(int)sVar1);
    }
  }
  return 0;
}
```
