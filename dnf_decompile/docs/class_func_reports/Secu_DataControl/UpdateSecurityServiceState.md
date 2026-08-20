# UpdateSecurityServiceState

`_ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc`

`Secu_DataControl::UpdateSecurityServiceState(CUser*, unsigned char, unsigned char, char*)`

| 类 | 地址 |
|---|---|
| `Secu_DataControl` | `0x08286e40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08286e40  _ZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPc
#           Secu_DataControl::UpdateSecurityServiceState(CUser*, unsigned char, unsigned char, char*)
# range [0x08286e40, 0x08287081]
08286e40 +0x000:  push   %ebp
08286e41 +0x001:  mov    %esp,%ebp
08286e43 +0x003:  push   %edi
08286e44 +0x004:  push   %esi
08286e45 +0x005:  push   %ebx
08286e46 +0x006:  sub    $0x9c,%esp
08286e4c +0x00c:  mov    0x10(%ebp),%edx
08286e4f +0x00f:  mov    0x14(%ebp),%eax
08286e52 +0x012:  mov    %dl,-0x8c(%ebp)
08286e58 +0x018:  mov    %al,-0x90(%ebp)
08286e5e +0x01e:  cmpl   $0x0,0xc(%ebp)
08286e62 +0x022:  je     08287077 <+0x237>
08286e68 +0x028:  movb   $0x0,-0x19(%ebp)
08286e6c +0x02c:  movzbl -0x8c(%ebp),%eax
08286e73 +0x033:  test   %eax,%eax
08286e75 +0x035:  je     08286e81 <+0x41>
08286e77 +0x037:  cmp    $0x1,%eax
08286e7a +0x03a:  je     08286eb8 <+0x78>
08286e7c +0x03c:  jmp    08286fce <+0x18e>
08286e81 +0x041:  mov    0xc(%ebp),%eax
08286e84 +0x044:  mov    %eax,(%esp)
08286e87 +0x047:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08286e8c +0x04c:  mov    %eax,(%esp)
08286e8f +0x04f:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
08286e94 +0x054:  test   %al,%al
08286e96 +0x056:  je     08286fcd <+0x18d>
08286e9c +0x05c:  mov    0xc(%ebp),%eax
08286e9f +0x05f:  mov    %eax,(%esp)
08286ea2 +0x062:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08286ea7 +0x067:  mov    %eax,(%esp)
08286eaa +0x06a:  call   085fdd68 <_ZN8WongWork13CSecurityCard4initEv>  ; WongWork::CSecurityCard::init()
08286eaf +0x06f:  movb   $0x1,-0x19(%ebp)
08286eb3 +0x073:  jmp    08286fce <+0x18e>
08286eb8 +0x078:  mov    0xc(%ebp),%eax
08286ebb +0x07b:  mov    %eax,(%esp)
08286ebe +0x07e:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08286ec3 +0x083:  mov    %eax,(%esp)
08286ec6 +0x086:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
08286ecb +0x08b:  test   %al,%al
08286ecd +0x08d:  je     08286fce <+0x18e>
08286ed3 +0x093:  mov    0xc(%ebp),%eax
08286ed6 +0x096:  mov    %eax,(%esp)
08286ed9 +0x099:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08286ede +0x09e:  mov    %eax,(%esp)
08286ee1 +0x0a1:  call   0822efe6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4690>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4690
08286ee6 +0x0a6:  xor    $0x1,%eax
08286ee9 +0x0a9:  test   %al,%al
08286eeb +0x0ab:  je     08286fc4 <+0x184>
08286ef1 +0x0b1:  lea    -0x5c(%ebp),%ebx
08286ef4 +0x0b4:  mov    $0x0,%eax
08286ef9 +0x0b9:  mov    $0x9,%edx
08286efe +0x0be:  mov    %ebx,%edi
08286f00 +0x0c0:  mov    %edx,%ecx
08286f02 +0x0c2:  rep stos %eax,%es:(%edi)
08286f04 +0x0c4:  lea    -0x80(%ebp),%ebx
08286f07 +0x0c7:  mov    $0x0,%eax
08286f0c +0x0cc:  mov    $0x9,%edx
08286f11 +0x0d1:  mov    %ebx,%edi
08286f13 +0x0d3:  mov    %edx,%ecx
08286f15 +0x0d5:  rep stos %eax,%es:(%edi)
08286f17 +0x0d7:  movl   $0x8,0x8(%esp)
08286f1f +0x0df:  mov    0x18(%ebp),%eax
08286f22 +0x0e2:  mov    %eax,0x4(%esp)
08286f26 +0x0e6:  lea    -0x5c(%ebp),%eax
08286f29 +0x0e9:  mov    %eax,(%esp)
08286f2c +0x0ec:  call   0807d8d0 <_init+0x1c8>
08286f31 +0x0f1:  movl   $0x0,0xc(%esp)
08286f39 +0x0f9:  movl   $0xa0,0x8(%esp)
08286f41 +0x101:  movl   $&_ZZN16Secu_DataControl26UpdateSecurityServiceStateEP5CUserhhPcE19__PRETTY_FUNCTION__,0x4(%esp)
08286f49 +0x109:  lea    -0x2c(%ebp),%eax
08286f4c +0x10c:  mov    %eax,(%esp)
08286f4f +0x10f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08286f54 +0x114:  mov    0x18(%ebp),%eax
08286f57 +0x117:  mov    %eax,0x8(%esp)
08286f5b +0x11b:  movl   $"[Secu_Web_Conn] (%s)  ",0x4(%esp)
08286f63 +0x123:  lea    -0x2c(%ebp),%eax
08286f66 +0x126:  mov    %eax,(%esp)
08286f69 +0x129:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08286f6e +0x12e:  mov    &_ZN10GlobalData31s_pcryptRijndael_MousePassword_E,%eax
08286f73 +0x133:  lea    -0x80(%ebp),%edx
08286f76 +0x136:  mov    %edx,0x8(%esp)
08286f7a +0x13a:  lea    -0x5c(%ebp),%edx
08286f7d +0x13d:  mov    %edx,0x4(%esp)
08286f81 +0x141:  mov    %eax,(%esp)
08286f84 +0x144:  call   0846c398 <_Z11encryptAES_P9CRijndaelPcS1_>  ; encryptAES_(CRijndael*, char*, char*)
08286f89 +0x149:  mov    0xc(%ebp),%eax
08286f8c +0x14c:  mov    %eax,(%esp)
08286f8f +0x14f:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08286f94 +0x154:  movl   $0x0,0x4(%esp)
08286f9c +0x15c:  mov    %eax,(%esp)
08286f9f +0x15f:  call   0828712c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x6a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x6a
08286fa4 +0x164:  mov    0xc(%ebp),%eax
08286fa7 +0x167:  mov    %eax,(%esp)
08286faa +0x16a:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08286faf +0x16f:  lea    -0x80(%ebp),%edx
08286fb2 +0x172:  mov    %edx,0x4(%esp)
08286fb6 +0x176:  mov    %eax,(%esp)
08286fb9 +0x179:  call   0828713a <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x78>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x78
08286fbe +0x17e:  movb   $0x1,-0x19(%ebp)
08286fc2 +0x182:  jmp    08286fce <+0x18e>
08286fc4 +0x184:  movb   $0x1,-0x90(%ebp)
08286fcb +0x18b:  jmp    08286fce <+0x18e>
08286fcd +0x18d:  nop
08286fce +0x18e:  cmpb   $0x0,-0x19(%ebp)
08286fd2 +0x192:  je     08287077 <+0x237>
08286fd8 +0x198:  lea    -0x38(%ebp),%eax
08286fdb +0x19b:  mov    %eax,(%esp)
08286fde +0x19e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08286fe3 +0x1a3:  movl   $0x159,0x8(%esp)
08286feb +0x1ab:  movl   $0x0,0x4(%esp)
08286ff3 +0x1b3:  lea    -0x38(%ebp),%eax
08286ff6 +0x1b6:  mov    %eax,(%esp)
08286ff9 +0x1b9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08286ffe +0x1be:  movzbl -0x8c(%ebp),%eax
08287005 +0x1c5:  mov    %eax,0x4(%esp)
08287009 +0x1c9:  lea    -0x38(%ebp),%eax
0828700c +0x1cc:  mov    %eax,(%esp)
0828700f +0x1cf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08287014 +0x1d4:  movzbl -0x90(%ebp),%eax
0828701b +0x1db:  mov    %eax,0x4(%esp)
0828701f +0x1df:  lea    -0x38(%ebp),%eax
08287022 +0x1e2:  mov    %eax,(%esp)
08287025 +0x1e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828702a +0x1ea:  movl   $0x1,0x4(%esp)
08287032 +0x1f2:  lea    -0x38(%ebp),%eax
08287035 +0x1f5:  mov    %eax,(%esp)
08287038 +0x1f8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0828703d +0x1fd:  lea    -0x38(%ebp),%eax
08287040 +0x200:  mov    %eax,0x4(%esp)
08287044 +0x204:  mov    0xc(%ebp),%eax
08287047 +0x207:  mov    %eax,(%esp)
0828704a +0x20a:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0828704f +0x20f:  jmp    0828706c <+0x22c>
08287051 +0x211:  mov    %edx,%ebx
08287053 +0x213:  mov    %eax,%esi
08287055 +0x215:  lea    -0x38(%ebp),%eax
08287058 +0x218:  mov    %eax,(%esp)
0828705b +0x21b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08287060 +0x220:  mov    %esi,%eax
08287062 +0x222:  mov    %ebx,%edx
08287064 +0x224:  mov    %eax,(%esp)
08287067 +0x227:  call   08ae3750 <_Unwind_Resume>
0828706c +0x22c:  lea    -0x38(%ebp),%eax
0828706f +0x22f:  mov    %eax,(%esp)
08287072 +0x232:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08287077 +0x237:  add    $0x9c,%esp
0828707d +0x23d:  pop    %ebx
0828707e +0x23e:  pop    %esi
0828707f +0x23f:  pop    %edi
08287080 +0x240:  pop    %ebp
08287081 +0x241:  ret
```

## 反编译 C

```c
// Secu_DataControl::UpdateSecurityServiceState @ 0x8286e40

/* Secu_DataControl::UpdateSecurityServiceState(CUser*, unsigned char, unsigned char, char*) */

void __thiscall
Secu_DataControl::UpdateSecurityServiceState
          (Secu_DataControl *this,CUser *param_1,uchar param_2,uchar param_3,char *param_4)

{
  char cVar1;
  CSecurityCard *pCVar2;
  CPad *pCVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  byte local_94;
  char local_84 [36];
  char local_60 [36];
  PacketGuard local_3c [12];
  cMyTrace local_30 [19];
  char local_1d;
  
  bVar6 = 0;
  local_94 = param_3;
  if (param_1 != (CUser *)0x0) {
    local_1d = '\0';
    if (param_2 == '\0') {
      pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
      cVar1 = WongWork::CSecurityCard::isActivate(pCVar2);
      if (cVar1 != '\0') {
        pCVar2 = (CSecurityCard *)CUser::getSecurityCard(param_1);
        WongWork::CSecurityCard::init(pCVar2);
        local_1d = '\x01';
      }
    }
    else if (param_2 == '\x01') {
      pCVar3 = (CPad *)CUser::getPad(param_1);
      cVar1 = Sanicova::CPad::isActivate(pCVar3);
      if (cVar1 != '\0') {
        pCVar3 = (CPad *)CUser::getPad(param_1);
        cVar1 = Sanicova::CPad::isCertified(pCVar3);
        if (cVar1 == '\x01') {
          local_94 = 1;
        }
        else {
          pcVar5 = local_60;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
          }
          pcVar5 = local_84;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            pcVar5[0] = '\0';
            pcVar5[1] = '\0';
            pcVar5[2] = '\0';
            pcVar5[3] = '\0';
            pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
          }
          strncpy(local_60,param_4,8);
          cMyTrace::cMyTrace(local_30,
                             "void Secu_DataControl::UpdateSecurityServiceState(CUser*, unsigned char, unsigned char, char*)"
                             ,0xa0,0);
          cMyTrace::operator()(local_30,"[Secu_Web_Conn] (%s)  ",param_4);
          encryptAES_(GlobalData::s_pcryptRijndael_MousePassword_,local_60,local_84);
          pCVar3 = (CPad *)CUser::getPad(param_1);
          Sanicova::CPad::setFailCnt(pCVar3,0);
          pCVar3 = (CPad *)CUser::getPad(param_1);
          Sanicova::CPad::setPassword(pCVar3,local_84);
          local_1d = '\x01';
        }
      }
    }
    if (local_1d != '\0') {
      PacketGuard::PacketGuard(local_3c);
                    /* try { // try from 08286ff9 to 0828704e has its CatchHandler @ 08287051 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_3c,0,0x159);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(uint)param_2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_3c,(uint)local_94);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_3c,true);
      CUser::Send(param_1,local_3c);
      PacketGuard::~PacketGuard(local_3c);
    }
  }
  return;
}
```
