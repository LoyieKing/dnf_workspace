# dispatch_sig

`_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Antibot` | `0x0820b50c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0820b50c  _ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&)
# range [0x0820b50c, 0x0820b801]
0820b50c +0x000:  push   %ebp
0820b50d +0x001:  mov    %esp,%ebp
0820b50f +0x003:  push   %edi
0820b510 +0x004:  push   %esi
0820b511 +0x005:  push   %ebx
0820b512 +0x006:  sub    $0x6c,%esp
0820b515 +0x009:  lea    -0x50(%ebp),%eax
0820b518 +0x00c:  mov    %eax,0x4(%esp)
0820b51c +0x010:  mov    0x10(%ebp),%eax
0820b51f +0x013:  mov    %eax,(%esp)
0820b522 +0x016:  call   0858d240 <_ZN9PacketBuf7get_intERj>  ; PacketBuf::get_int(unsigned int&)
0820b527 +0x01b:  xor    $0x1,%eax
0820b52a +0x01e:  test   %al,%al
0820b52c +0x020:  je     0820b557 <+0x4b>
0820b52e +0x022:  movl   $0x0,0xc(%esp)
0820b536 +0x02a:  movl   $0x0,0x8(%esp)
0820b53e +0x032:  movl   $&_ZZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b546 +0x03a:  movl   $0xa7c1,(%esp)
0820b54d +0x041:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0820b552 +0x046:  jmp    0820b7fa <+0x2ee>
0820b557 +0x04b:  mov    0x10(%ebp),%eax
0820b55a +0x04e:  mov    %eax,(%esp)
0820b55d +0x051:  call   08110b1c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2e
0820b562 +0x056:  mov    %eax,0x4(%esp)
0820b566 +0x05a:  mov    0x10(%ebp),%eax
0820b569 +0x05d:  mov    %eax,(%esp)
0820b56c +0x060:  call   0858da38 <_ZN9PacketBuf11get_buf_ptrEi>  ; PacketBuf::get_buf_ptr(int)
0820b571 +0x065:  mov    %eax,-0x2c(%ebp)
0820b574 +0x068:  mov    0xc(%ebp),%eax
0820b577 +0x06b:  mov    0x8cf00(%eax),%eax
0820b57d +0x071:  test   %eax,%eax
0820b57f +0x073:  jne    0820b5a8 <+0x9c>
0820b581 +0x075:  mov    0xc(%ebp),%eax
0820b584 +0x078:  add    $0x79700,%eax
0820b589 +0x07d:  movl   $0x0,0x4(%esp)
0820b591 +0x085:  mov    %eax,(%esp)
0820b594 +0x088:  call   08686dd0 <_ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE>  ; cUserHistoryLog::AntibotPacketLog(AntibotPacketLogType::T)
0820b599 +0x08d:  mov    0xc(%ebp),%eax
0820b59c +0x090:  movl   $0x1,0x8cf00(%eax)
0820b5a6 +0x09a:  jmp    0820b5ed <+0xe1>
0820b5a8 +0x09c:  mov    0xc(%ebp),%eax
0820b5ab +0x09f:  mov    0x8cf00(%eax),%eax
0820b5b1 +0x0a5:  cmp    $0x4,%eax
0820b5b4 +0x0a8:  je     0820b5ed <+0xe1>
0820b5b6 +0x0aa:  mov    0xc(%ebp),%eax
0820b5b9 +0x0ad:  mov    0x8cf00(%eax),%eax
0820b5bf +0x0b3:  mov    %eax,%edx
0820b5c1 +0x0b5:  mov    -0x50(%ebp),%eax
0820b5c4 +0x0b8:  mov    0xc(%ebp),%ecx
0820b5c7 +0x0bb:  add    $0x79700,%ecx
0820b5cd +0x0c1:  mov    %edx,0x10(%esp)
0820b5d1 +0x0c5:  mov    %eax,0xc(%esp)
0820b5d5 +0x0c9:  movl   $0x25b,0x8(%esp)
0820b5dd +0x0d1:  movl   $0x4,0x4(%esp)
0820b5e5 +0x0d9:  mov    %ecx,(%esp)
0820b5e8 +0x0dc:  call   08686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>  ; cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)
0820b5ed +0x0e1:  cmpl   $0x0,-0x2c(%ebp)
0820b5f1 +0x0e5:  je     0820b719 <+0x20d>
0820b5f7 +0x0eb:  cmpl   $0x0,0xc(%ebp)
0820b5fb +0x0ef:  jne    0820b63d <+0x131>
0820b5fd +0x0f1:  movl   $0x0,0xc(%esp)
0820b605 +0x0f9:  movl   $0xa7df,0x8(%esp)
0820b60d +0x101:  movl   $&_ZZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b615 +0x109:  lea    -0x4c(%ebp),%eax
0820b618 +0x10c:  mov    %eax,(%esp)
0820b61b +0x10f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0820b620 +0x114:  movl   $"Antibot Packet log will write, but user ptr is null",0x4(%esp)
0820b628 +0x11c:  lea    -0x4c(%ebp),%eax
0820b62b +0x11f:  mov    %eax,(%esp)
0820b62e +0x122:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0820b633 +0x127:  mov    $0x0,%eax
0820b638 +0x12c:  jmp    0820b7fa <+0x2ee>
0820b63d +0x131:  mov    -0x2c(%ebp),%eax
0820b640 +0x134:  add    $0x2,%eax
0820b643 +0x137:  mov    %eax,-0x24(%ebp)
0820b646 +0x13a:  movl   $0x0,-0x54(%ebp)
0820b64d +0x141:  cmpl   $0x0,-0x24(%ebp)
0820b651 +0x145:  je     0820b66d <+0x161>
0820b653 +0x147:  movl   $0x4,0x8(%esp)
0820b65b +0x14f:  mov    -0x24(%ebp),%eax
0820b65e +0x152:  mov    %eax,0x4(%esp)
0820b662 +0x156:  lea    -0x54(%ebp),%eax
0820b665 +0x159:  mov    %eax,(%esp)
0820b668 +0x15c:  call   0807d8a0 <_init+0x198>
0820b66d +0x161:  mov    -0x54(%ebp),%eax
0820b670 +0x164:  mov    %eax,(%esp)
0820b673 +0x167:  call   0807db80 <_init+0x478>
0820b678 +0x16c:  mov    %eax,-0x20(%ebp)
0820b67b +0x16f:  mov    0xc(%ebp),%eax
0820b67e +0x172:  mov    %eax,(%esp)
0820b681 +0x175:  call   0823089c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f46>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f46
0820b686 +0x17a:  mov    %eax,-0x1c(%ebp)
0820b689 +0x17d:  cmpl   $0x0,-0x1c(%ebp)
0820b68d +0x181:  je     0820b707 <+0x1fb>
0820b68f +0x183:  mov    -0x1c(%ebp),%eax
0820b692 +0x186:  add    $0x1,%eax
0820b695 +0x189:  cmp    -0x20(%ebp),%eax
0820b698 +0x18c:  je     0820b707 <+0x1fb>
0820b69a +0x18e:  mov    0xc(%ebp),%eax
0820b69d +0x191:  mov    %eax,(%esp)
0820b6a0 +0x194:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0820b6a5 +0x199:  mov    %eax,%esi
0820b6a7 +0x19b:  mov    0xc(%ebp),%eax
0820b6aa +0x19e:  mov    %eax,(%esp)
0820b6ad +0x1a1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820b6b2 +0x1a6:  mov    %eax,%ebx
0820b6b4 +0x1a8:  mov    -0x54(%ebp),%edi
0820b6b7 +0x1ab:  movl   $0x0,0xc(%esp)
0820b6bf +0x1b3:  movl   $0xa7e9,0x8(%esp)
0820b6c7 +0x1bb:  movl   $&_ZZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0820b6cf +0x1c3:  lea    -0x3c(%ebp),%eax
0820b6d2 +0x1c6:  mov    %eax,(%esp)
0820b6d5 +0x1c9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0820b6da +0x1ce:  mov    -0x1c(%ebp),%eax
0820b6dd +0x1d1:  mov    %eax,0x18(%esp)
0820b6e1 +0x1d5:  mov    %esi,0x14(%esp)
0820b6e5 +0x1d9:  mov    %ebx,0x10(%esp)
0820b6e9 +0x1dd:  mov    %edi,0xc(%esp)
0820b6ed +0x1e1:  mov    -0x20(%ebp),%eax
0820b6f0 +0x1e4:  mov    %eax,0x8(%esp)
0820b6f4 +0x1e8:  movl   $"Antibot Packet Serial Number host_byte_order:%u, network_byte_order:%u, m_id:%u, charac_no:%d, pre_serial_number:%u",0x4(%esp)
0820b6fc +0x1f0:  lea    -0x3c(%ebp),%eax
0820b6ff +0x1f3:  mov    %eax,(%esp)
0820b702 +0x1f6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0820b707 +0x1fb:  mov    -0x20(%ebp),%eax
0820b70a +0x1fe:  mov    %eax,0x4(%esp)
0820b70e +0x202:  mov    0xc(%ebp),%eax
0820b711 +0x205:  mov    %eax,(%esp)
0820b714 +0x208:  call   082308aa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f54>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f54
0820b719 +0x20d:  mov    &_ZN10GlobalData17s_antibotChecker_E,%eax
0820b71e +0x212:  mov    (%eax),%eax
0820b720 +0x214:  add    $0xc,%eax
0820b723 +0x217:  mov    (%eax),%edi
0820b725 +0x219:  mov    -0x50(%ebp),%eax
0820b728 +0x21c:  movzwl %ax,%esi
0820b72b +0x21f:  mov    0xc(%ebp),%eax
0820b72e +0x222:  mov    %eax,(%esp)
0820b731 +0x225:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0820b736 +0x22a:  mov    %eax,%ebx
0820b738 +0x22c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0820b73d +0x231:  mov    %eax,(%esp)
0820b740 +0x234:  call   08234516 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9bc0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9bc0
0820b745 +0x239:  mov    &_ZN10GlobalData17s_antibotChecker_E,%edx
0820b74b +0x23f:  mov    %esi,0x14(%esp)
0820b74f +0x243:  mov    -0x2c(%ebp),%ecx
0820b752 +0x246:  mov    %ecx,0x10(%esp)
0820b756 +0x24a:  mov    %ebx,0xc(%esp)
0820b75a +0x24e:  movl   $0x0,0x8(%esp)
0820b762 +0x256:  mov    %eax,0x4(%esp)
0820b766 +0x25a:  mov    %edx,(%esp)
0820b769 +0x25d:  call   *%edi
0820b76b +0x25f:  mov    %eax,-0x28(%ebp)
0820b76e +0x262:  mov    0xc(%ebp),%eax
0820b771 +0x265:  mov    0x8cf00(%eax),%eax
0820b777 +0x26b:  cmp    $0x1,%eax
0820b77a +0x26e:  jne    0820b7a3 <+0x297>
0820b77c +0x270:  mov    0xc(%ebp),%eax
0820b77f +0x273:  add    $0x79700,%eax
0820b784 +0x278:  movl   $0x1,0x4(%esp)
0820b78c +0x280:  mov    %eax,(%esp)
0820b78f +0x283:  call   08686dd0 <_ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE>  ; cUserHistoryLog::AntibotPacketLog(AntibotPacketLogType::T)
0820b794 +0x288:  mov    0xc(%ebp),%eax
0820b797 +0x28b:  movl   $0x2,0x8cf00(%eax)
0820b7a1 +0x295:  jmp    0820b7e8 <+0x2dc>
0820b7a3 +0x297:  mov    0xc(%ebp),%eax
0820b7a6 +0x29a:  mov    0x8cf00(%eax),%eax
0820b7ac +0x2a0:  cmp    $0x4,%eax
0820b7af +0x2a3:  je     0820b7e8 <+0x2dc>
0820b7b1 +0x2a5:  mov    0xc(%ebp),%eax
0820b7b4 +0x2a8:  mov    0x8cf00(%eax),%eax
0820b7ba +0x2ae:  mov    %eax,%edx
0820b7bc +0x2b0:  mov    -0x50(%ebp),%eax
0820b7bf +0x2b3:  mov    0xc(%ebp),%ecx
0820b7c2 +0x2b6:  add    $0x79700,%ecx
0820b7c8 +0x2bc:  mov    %edx,0x10(%esp)
0820b7cc +0x2c0:  mov    %eax,0xc(%esp)
0820b7d0 +0x2c4:  movl   $0x25b,0x8(%esp)
0820b7d8 +0x2cc:  movl   $0x4,0x4(%esp)
0820b7e0 +0x2d4:  mov    %ecx,(%esp)
0820b7e3 +0x2d7:  call   08686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>  ; cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)
0820b7e8 +0x2dc:  cmpl   $0xffffffff,-0x28(%ebp)
0820b7ec +0x2e0:  jne    0820b7f5 <+0x2e9>
0820b7ee +0x2e2:  mov    $0x0,%eax
0820b7f3 +0x2e7:  jmp    0820b7fa <+0x2ee>
0820b7f5 +0x2e9:  mov    $0x0,%eax
0820b7fa +0x2ee:  add    $0x6c,%esp
0820b7fd +0x2f1:  pop    %ebx
0820b7fe +0x2f2:  pop    %esi
0820b7ff +0x2f3:  pop    %edi
0820b800 +0x2f4:  pop    %ebp
0820b801 +0x2f5:  ret
```

## 反编译 C

```c
// Dispatcher_Antibot::dispatch_sig @ 0x820b50c

/* Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Antibot::dispatch_sig(Dispatcher_Antibot *this,CUser *param_1,PacketBuf *param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  CEnvironment *this_00;
  uint uVar7;
  uint32_t local_58;
  uint local_54;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  int local_30;
  int local_2c;
  void *local_28;
  uint32_t local_24;
  int local_20;
  
  cVar3 = PacketBuf::get_int(param_2,&local_54);
  if (cVar3 == '\x01') {
    iVar5 = PacketBuf::get_index(param_2);
    local_30 = PacketBuf::get_buf_ptr(param_2,iVar5);
    if (*(int *)(param_1 + 0x8cf00) == 0) {
      cUserHistoryLog::AntibotPacketLog((cUserHistoryLog *)(param_1 + 0x79700),0);
      *(undefined4 *)(param_1 + 0x8cf00) = 1;
    }
    else if (*(int *)(param_1 + 0x8cf00) != 4) {
      cUserHistoryLog::AbnormalUser
                ((cUserHistoryLog *)(param_1 + 0x79700),4,0x25b,local_54,
                 *(undefined4 *)(param_1 + 0x8cf00));
    }
    if (local_30 != 0) {
      if (param_1 == (CUser *)0x0) {
        cMyTrace::cMyTrace(local_50,
                           "virtual int Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&)",0xa7df
                           ,0);
        cMyTrace::operator()(local_50,"Antibot Packet log will write, but user ptr is null");
        return 0;
      }
      local_28 = (void *)(local_30 + 2);
      local_58 = 0;
      if (local_28 != (void *)0x0) {
        memcpy(&local_58,local_28,4);
      }
      local_24 = ntohl(local_58);
      local_20 = CUser::getCharacAntibotSerialNum(param_1);
      if ((local_20 != 0) && (local_20 + 1U != local_24)) {
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar6 = CUser::get_acc_id(param_1);
        uVar2 = local_58;
        cMyTrace::cMyTrace(local_40,
                           "virtual int Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&)",0xa7e9
                           ,0);
        cMyTrace::operator()
                  (local_40,
                   "Antibot Packet Serial Number host_byte_order:%u, network_byte_order:%u, m_id:%u, charac_no:%d, pre_serial_number:%u"
                   ,local_24,uVar2,uVar6,uVar4,local_20);
      }
      CUser::setCharacAntibotSerialNum(param_1,local_24);
    }
    pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0xc);
    uVar7 = local_54 & 0xffff;
    uVar4 = CUser::get_acc_id(param_1);
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar6 = CEnvironment::getProcessSequence(this_00);
    local_2c = (*pcVar1)(GlobalData::s_antibotChecker_,uVar6,0,uVar4,local_30,uVar7);
    if (*(int *)(param_1 + 0x8cf00) == 1) {
      cUserHistoryLog::AntibotPacketLog((cUserHistoryLog *)(param_1 + 0x79700),1);
      *(undefined4 *)(param_1 + 0x8cf00) = 2;
    }
    else if (*(int *)(param_1 + 0x8cf00) != 4) {
      cUserHistoryLog::AbnormalUser
                ((cUserHistoryLog *)(param_1 + 0x79700),4,0x25b,local_54,
                 *(undefined4 *)(param_1 + 0x8cf00));
    }
    if (local_2c == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = LineFunc(0xa7c1,"virtual int Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  return uVar4;
}
```
