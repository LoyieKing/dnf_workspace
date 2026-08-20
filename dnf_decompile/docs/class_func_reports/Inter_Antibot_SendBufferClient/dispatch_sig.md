# dispatch_sig

`_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci`

`Inter_Antibot_SendBufferClient::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Antibot_SendBufferClient` | `0x084e43bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e43bc  _ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci
#           Inter_Antibot_SendBufferClient::dispatch_sig(CUser*, char*, int)
# range [0x084e43bc, 0x084e4773]
084e43bc +0x000:  push   %ebp
084e43bd +0x001:  mov    %esp,%ebp
084e43bf +0x003:  push   %esi
084e43c0 +0x004:  push   %ebx
084e43c1 +0x005:  sub    $&_ZL14gUnicodeBuffer+0xce44,%esp
084e43c7 +0x00b:  mov    0x10(%ebp),%eax
084e43ca +0x00e:  mov    %eax,-0x18(%ebp)
084e43cd +0x011:  movl   $&_ZL14gUnicodeBuffer+0xcdec,0x8(%esp)
084e43d5 +0x019:  movl   $0x0,0x4(%esp)
084e43dd +0x021:  lea    -&_ZL14gUnicodeBuffer+0xce10(%ebp),%eax
084e43e3 +0x027:  mov    %eax,(%esp)
084e43e6 +0x02a:  call   0807dcc0 <_init+0x5b8>
084e43eb +0x02f:  mov    -0x18(%ebp),%eax
084e43ee +0x032:  movzwl 0x8(%eax),%eax
084e43f2 +0x036:  cwtl
084e43f3 +0x037:  mov    0x10(%ebp),%edx
084e43f6 +0x03a:  add    $0xc,%edx
084e43f9 +0x03d:  mov    %eax,0x8(%esp)
084e43fd +0x041:  mov    %edx,0x4(%esp)
084e4401 +0x045:  lea    -&_ZL14gUnicodeBuffer+0xce10(%ebp),%eax
084e4407 +0x04b:  mov    %eax,(%esp)
084e440a +0x04e:  call   0807d8a0 <_init+0x198>
084e440f +0x053:  mov    -0x18(%ebp),%eax
084e4412 +0x056:  mov    0x4(%eax),%eax
084e4415 +0x059:  mov    %eax,(%esp)
084e4418 +0x05c:  call   084bb9cf <_Z7getUserj>  ; getUser(unsigned int)
084e441d +0x061:  mov    %eax,-0x14(%ebp)
084e4420 +0x064:  cmpl   $0x0,-0x14(%ebp)
084e4424 +0x068:  je     084e4435 <+0x79>
084e4426 +0x06a:  mov    -0x14(%ebp),%eax
084e4429 +0x06d:  mov    %eax,(%esp)
084e442c +0x070:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e4431 +0x075:  test   %eax,%eax
084e4433 +0x077:  jne    084e443c <+0x80>
084e4435 +0x079:  mov    $0x1,%eax
084e443a +0x07e:  jmp    084e4441 <+0x85>
084e443c +0x080:  mov    $0x0,%eax
084e4441 +0x085:  test   %al,%al
084e4443 +0x087:  je     084e4531 <+0x175>
084e4449 +0x08d:  mov    -0x18(%ebp),%eax
084e444c +0x090:  mov    0x4(%eax),%eax
084e444f +0x093:  movl   $0x0,0x4(%esp)
084e4457 +0x09b:  mov    %eax,(%esp)
084e445a +0x09e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084e445f +0x0a3:  mov    %eax,%ecx
084e4461 +0x0a5:  cmpl   $0x0,-0x14(%ebp)
084e4465 +0x0a9:  jne    084e446e <+0xb2>
084e4467 +0x0ab:  mov    $"NULL User",%edx
084e446c +0x0b0:  jmp    084e4473 <+0xb7>
084e446e +0x0b2:  mov    $"NONE state",%edx
084e4473 +0x0b7:  mov    -0x18(%ebp),%eax
084e4476 +0x0ba:  movzwl 0x8(%eax),%eax
084e447a +0x0be:  movswl %ax,%ebx
084e447d +0x0c1:  mov    -0x18(%ebp),%eax
084e4480 +0x0c4:  mov    (%eax),%eax
084e4482 +0x0c6:  test   %eax,%eax
084e4484 +0x0c8:  jne    084e448d <+0xd1>
084e4486 +0x0ca:  mov    $"ANTIBOT",%eax
084e448b +0x0cf:  jmp    084e4492 <+0xd6>
084e448d +0x0d1:  mov    $"DPROTO",%eax
084e4492 +0x0d6:  mov    %ecx,0x20(%esp)
084e4496 +0x0da:  mov    %edx,0x1c(%esp)
084e449a +0x0de:  mov    %ebx,0x18(%esp)
084e449e +0x0e2:  mov    %eax,0x14(%esp)
084e44a2 +0x0e6:  movl   $"Ignore SendBuffertoClient [%s][size:%d]; reason:%s, QQID:%s",0x10(%esp)
084e44aa +0x0ee:  movl   $0x5e56,0xc(%esp)
084e44b2 +0x0f6:  movl   $&_ZZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084e44ba +0x0fe:  movl   $"InterDispatcher.cpp",0x4(%esp)
084e44c2 +0x106:  movl   $0x1,(%esp)
084e44c9 +0x10d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084e44ce +0x112:  cmpl   $0x0,-0x14(%ebp)
084e44d2 +0x116:  je     084e4527 <+0x16b>
084e44d4 +0x118:  mov    -0x14(%ebp),%eax
084e44d7 +0x11b:  movzbl 0x8d251(%eax),%eax
084e44de +0x122:  cmp    $0x4,%al
084e44e0 +0x124:  ja     084e4527 <+0x16b>
084e44e2 +0x126:  mov    -0x14(%ebp),%eax
084e44e5 +0x129:  movzbl 0x8d251(%eax),%eax
084e44ec +0x130:  movzbl %al,%edx
084e44ef +0x133:  lea    0x1(%eax),%ecx
084e44f2 +0x136:  mov    -0x14(%ebp),%eax
084e44f5 +0x139:  mov    %cl,0x8d251(%eax)
084e44fb +0x13f:  mov    -0x14(%ebp),%eax
084e44fe +0x142:  add    $0x79700,%eax
084e4503 +0x147:  movl   $0x0,0x10(%esp)
084e450b +0x14f:  mov    %edx,0xc(%esp)
084e450f +0x153:  movl   $0x252,0x8(%esp)
084e4517 +0x15b:  movl   $0x3,0x4(%esp)
084e451f +0x163:  mov    %eax,(%esp)
084e4522 +0x166:  call   08686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>  ; cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)
084e4527 +0x16b:  mov    $0x0,%ebx
084e452c +0x170:  jmp    084e4768 <+0x3ac>
084e4531 +0x175:  mov    -0x18(%ebp),%eax
084e4534 +0x178:  mov    (%eax),%eax
084e4536 +0x17a:  test   %eax,%eax
084e4538 +0x17c:  jne    084e4543 <+0x187>
084e453a +0x17e:  movl   $0x230,-0x10(%ebp)
084e4541 +0x185:  jmp    084e454a <+0x18e>
084e4543 +0x187:  movl   $0x231,-0x10(%ebp)
084e454a +0x18e:  cmpl   $0x230,-0x10(%ebp)
084e4551 +0x195:  jne    084e45d2 <+0x216>
084e4553 +0x197:  mov    -0x14(%ebp),%eax
084e4556 +0x19a:  mov    0x8cf00(%eax),%eax
084e455c +0x1a0:  cmp    $0x2,%eax
084e455f +0x1a3:  jne    084e4588 <+0x1cc>
084e4561 +0x1a5:  mov    -0x14(%ebp),%eax
084e4564 +0x1a8:  add    $0x79700,%eax
084e4569 +0x1ad:  movl   $0x2,0x4(%esp)
084e4571 +0x1b5:  mov    %eax,(%esp)
084e4574 +0x1b8:  call   08686dd0 <_ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE>  ; cUserHistoryLog::AntibotPacketLog(AntibotPacketLogType::T)
084e4579 +0x1bd:  mov    -0x14(%ebp),%eax
084e457c +0x1c0:  movl   $0x3,0x8cf00(%eax)
084e4586 +0x1ca:  jmp    084e45d2 <+0x216>
084e4588 +0x1cc:  mov    -0x14(%ebp),%eax
084e458b +0x1cf:  mov    0x8cf00(%eax),%eax
084e4591 +0x1d5:  cmp    $0x4,%eax
084e4594 +0x1d8:  je     084e45d2 <+0x216>
084e4596 +0x1da:  mov    -0x14(%ebp),%eax
084e4599 +0x1dd:  mov    0x8cf00(%eax),%eax
084e459f +0x1e3:  mov    %eax,%edx
084e45a1 +0x1e5:  mov    -0x18(%ebp),%eax
084e45a4 +0x1e8:  movzwl 0x8(%eax),%eax
084e45a8 +0x1ec:  cwtl
084e45a9 +0x1ed:  mov    -0x14(%ebp),%ecx
084e45ac +0x1f0:  add    $0x79700,%ecx
084e45b2 +0x1f6:  mov    %edx,0x10(%esp)
084e45b6 +0x1fa:  mov    %eax,0xc(%esp)
084e45ba +0x1fe:  movl   $0x25b,0x8(%esp)
084e45c2 +0x206:  movl   $0x4,0x4(%esp)
084e45ca +0x20e:  mov    %ecx,(%esp)
084e45cd +0x211:  call   08686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>  ; cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)
084e45d2 +0x216:  lea    -0x24(%ebp),%eax
084e45d5 +0x219:  mov    %eax,(%esp)
084e45d8 +0x21c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e45dd +0x221:  mov    -0x10(%ebp),%eax
084e45e0 +0x224:  mov    %eax,0x8(%esp)
084e45e4 +0x228:  movl   $0x0,0x4(%esp)
084e45ec +0x230:  lea    -0x24(%ebp),%eax
084e45ef +0x233:  mov    %eax,(%esp)
084e45f2 +0x236:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e45f7 +0x23b:  mov    -0x18(%ebp),%eax
084e45fa +0x23e:  movzwl 0x8(%eax),%eax
084e45fe +0x242:  movswl %ax,%edx
084e4601 +0x245:  lea    -&_ZL14gUnicodeBuffer+0xce10(%ebp),%eax
084e4607 +0x24b:  mov    %edx,0x8(%esp)
084e460b +0x24f:  mov    %eax,0x4(%esp)
084e460f +0x253:  lea    -0x24(%ebp),%eax
084e4612 +0x256:  mov    %eax,(%esp)
084e4615 +0x259:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
084e461a +0x25e:  movl   $0x0,0x4(%esp)
084e4622 +0x266:  lea    -0x24(%ebp),%eax
084e4625 +0x269:  mov    %eax,(%esp)
084e4628 +0x26c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e462d +0x271:  lea    -0x24(%ebp),%eax
084e4630 +0x274:  mov    %eax,0x4(%esp)
084e4634 +0x278:  mov    -0x14(%ebp),%eax
084e4637 +0x27b:  mov    %eax,(%esp)
084e463a +0x27e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e463f +0x283:  mov    %al,-0x9(%ebp)
084e4642 +0x286:  cmpl   $0x230,-0x10(%ebp)
084e4649 +0x28d:  jne    084e46d7 <+0x31b>
084e464f +0x293:  mov    -0x14(%ebp),%eax
084e4652 +0x296:  mov    0x8cf00(%eax),%eax
084e4658 +0x29c:  cmp    $0x3,%eax
084e465b +0x29f:  jne    084e4687 <+0x2cb>
084e465d +0x2a1:  mov    -0x14(%ebp),%eax
084e4660 +0x2a4:  add    $0x79700,%eax
084e4665 +0x2a9:  movl   $0x3,0x4(%esp)
084e466d +0x2b1:  mov    %eax,(%esp)
084e4670 +0x2b4:  call   08686dd0 <_ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE>  ; cUserHistoryLog::AntibotPacketLog(AntibotPacketLogType::T)
084e4675 +0x2b9:  mov    -0x14(%ebp),%eax
084e4678 +0x2bc:  movl   $0x4,0x8cf00(%eax)
084e4682 +0x2c6:  jmp    084e473b <+0x37f>
084e4687 +0x2cb:  mov    -0x14(%ebp),%eax
084e468a +0x2ce:  mov    0x8cf00(%eax),%eax
084e4690 +0x2d4:  cmp    $0x4,%eax
084e4693 +0x2d7:  je     084e473b <+0x37f>
084e4699 +0x2dd:  mov    -0x14(%ebp),%eax
084e469c +0x2e0:  mov    0x8cf00(%eax),%eax
084e46a2 +0x2e6:  mov    %eax,%edx
084e46a4 +0x2e8:  mov    -0x18(%ebp),%eax
084e46a7 +0x2eb:  movzwl 0x8(%eax),%eax
084e46ab +0x2ef:  cwtl
084e46ac +0x2f0:  mov    -0x14(%ebp),%ecx
084e46af +0x2f3:  add    $0x79700,%ecx
084e46b5 +0x2f9:  mov    %edx,0x10(%esp)
084e46b9 +0x2fd:  mov    %eax,0xc(%esp)
084e46bd +0x301:  movl   $0x25b,0x8(%esp)
084e46c5 +0x309:  movl   $0x4,0x4(%esp)
084e46cd +0x311:  mov    %ecx,(%esp)
084e46d0 +0x314:  call   08686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>  ; cUserHistoryLog::AbnormalUser(ENUM_ABNORMAL_USER_LOG_TYPE, unsigned short, int, int)
084e46d5 +0x319:  jmp    084e473b <+0x37f>
084e46d7 +0x31b:  cmpl   $0x231,-0x10(%ebp)
084e46de +0x322:  jne    084e473b <+0x37f>
084e46e0 +0x324:  mov    -0x14(%ebp),%eax
084e46e3 +0x327:  movzbl 0x8d251(%eax),%eax
084e46ea +0x32e:  cmp    $0x4,%al
084e46ec +0x330:  ja     084e473b <+0x37f>
084e46ee +0x332:  movzbl -0x9(%ebp),%ebx
084e46f2 +0x336:  mov    -0x14(%ebp),%eax
084e46f5 +0x339:  movzbl 0x8d251(%eax),%eax
084e46fc +0x340:  movzbl %al,%ecx
084e46ff +0x343:  lea    0x1(%eax),%edx
084e4702 +0x346:  mov    -0x14(%ebp),%eax
084e4705 +0x349:  mov    %dl,0x8d251(%eax)
084e470b +0x34f:  mov    -0x18(%ebp),%eax
084e470e +0x352:  movzwl 0x8(%eax),%eax
084e4712 +0x356:  movswl %ax,%edx
084e4715 +0x359:  mov    -0x18(%ebp),%eax
084e4718 +0x35c:  mov    (%eax),%eax
084e471a +0x35e:  mov    -0x14(%ebp),%esi
084e471d +0x361:  add    $0x79700,%esi
084e4723 +0x367:  mov    %ebx,0x10(%esp)
084e4727 +0x36b:  mov    %ecx,0xc(%esp)
084e472b +0x36f:  mov    %edx,0x8(%esp)
084e472f +0x373:  mov    %eax,0x4(%esp)
084e4733 +0x377:  mov    %esi,(%esp)
084e4736 +0x37a:  call   08686e3a <_ZN15cUserHistoryLog21SendBuffertoClientLogEishb>  ; cUserHistoryLog::SendBuffertoClientLog(int, short, unsigned char, bool)
084e473b +0x37f:  mov    $0x0,%ebx
084e4740 +0x384:  lea    -0x24(%ebp),%eax
084e4743 +0x387:  mov    %eax,(%esp)
084e4746 +0x38a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e474b +0x38f:  jmp    084e4768 <+0x3ac>
084e474d +0x391:  mov    %edx,%ebx
084e474f +0x393:  mov    %eax,%esi
084e4751 +0x395:  lea    -0x24(%ebp),%eax
084e4754 +0x398:  mov    %eax,(%esp)
084e4757 +0x39b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e475c +0x3a0:  mov    %esi,%eax
084e475e +0x3a2:  mov    %ebx,%edx
084e4760 +0x3a4:  mov    %eax,(%esp)
084e4763 +0x3a7:  call   08ae3750 <_Unwind_Resume>
084e4768 +0x3ac:  mov    %ebx,%eax
084e476a +0x3ae:  add    $&_ZL14gUnicodeBuffer+0xce44,%esp
084e4770 +0x3b4:  pop    %ebx
084e4771 +0x3b5:  pop    %esi
084e4772 +0x3b6:  pop    %ebp
084e4773 +0x3b7:  ret
```

## 反编译 C

```c
// Inter_Antibot_SendBufferClient::dispatch_sig @ 0x84e43bc

/* Inter_Antibot_SendBufferClient::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Antibot_SendBufferClient::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CUser CVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_17340 [95000];
  PacketGuard local_28 [12];
  int *local_1c;
  CUser *local_18;
  int local_14;
  undefined1 local_d;
  
  local_1c = (int *)param_3;
  memset(acStack_17340,0,95000);
  memcpy(acStack_17340,(void *)(param_3 + 0xc),(int)(short)local_1c[2]);
  local_18 = (CUser *)getUser(local_1c[1]);
  if ((local_18 == (CUser *)0x0) || (iVar3 = CUser::get_state(local_18), iVar3 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar4 = NumberToString(local_1c[1],0);
    if (local_18 == (CUser *)0x0) {
      pcVar6 = "NULL User";
    }
    else {
      pcVar6 = "NONE state";
    }
    if (*local_1c == 0) {
      pcVar5 = "ANTIBOT";
    }
    else {
      pcVar5 = "DPROTO";
    }
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_Antibot_SendBufferClient::dispatch_sig(CUser*, char*, int)",0x5e56
               ,"Ignore SendBuffertoClient [%s][size:%d]; reason:%s, QQID:%s",pcVar5,
               (int)(short)local_1c[2],pcVar6,uVar4);
    if ((local_18 != (CUser *)0x0) && ((byte)local_18[0x8d251] < 5)) {
      CVar1 = local_18[0x8d251];
      local_18[0x8d251] = (CUser)((char)CVar1 + '\x01');
      cUserHistoryLog::AbnormalUser((cUserHistoryLog *)(local_18 + 0x79700),3,0x252,CVar1,0);
    }
  }
  else {
    if (*local_1c == 0) {
      local_14 = 0x230;
    }
    else {
      local_14 = 0x231;
    }
    if (local_14 == 0x230) {
      if (*(int *)(local_18 + 0x8cf00) == 2) {
        cUserHistoryLog::AntibotPacketLog((cUserHistoryLog *)(local_18 + 0x79700),2);
        *(undefined4 *)(local_18 + 0x8cf00) = 3;
      }
      else if (*(int *)(local_18 + 0x8cf00) != 4) {
        cUserHistoryLog::AbnormalUser
                  ((cUserHistoryLog *)(local_18 + 0x79700),4,0x25b,(int)(short)local_1c[2],
                   *(undefined4 *)(local_18 + 0x8cf00));
      }
    }
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084e45f2 to 084e473a has its CatchHandler @ 084e474d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,local_14);
    InterfacePacketBuf::put_binary
              ((InterfacePacketBuf *)local_28,acStack_17340,(int)(short)local_1c[2]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,false);
    local_d = CUser::Send(local_18,local_28);
    if (local_14 == 0x230) {
      if (*(int *)(local_18 + 0x8cf00) == 3) {
        cUserHistoryLog::AntibotPacketLog((cUserHistoryLog *)(local_18 + 0x79700),3);
        *(undefined4 *)(local_18 + 0x8cf00) = 4;
      }
      else if (*(int *)(local_18 + 0x8cf00) != 4) {
        cUserHistoryLog::AbnormalUser
                  ((cUserHistoryLog *)(local_18 + 0x79700),4,0x25b,(int)(short)local_1c[2],
                   *(undefined4 *)(local_18 + 0x8cf00));
      }
    }
    else if ((local_14 == 0x231) && ((byte)local_18[0x8d251] < 5)) {
      CVar1 = local_18[0x8d251];
      local_18[0x8d251] = (CUser)((char)CVar1 + '\x01');
      cUserHistoryLog::SendBuffertoClientLog
                ((cUserHistoryLog *)(local_18 + 0x79700),*local_1c,(short)local_1c[2],(uchar)CVar1,
                 (bool)local_d);
    }
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}
```
