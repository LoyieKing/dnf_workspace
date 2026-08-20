# dispatch_sig

`_ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci`

`ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DISPATCHER::Arad_INTER_kEmblemCompound` | `0x0819a0c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819a0c0  _ZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPci
#           ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser*, char*, int)
# range [0x0819a0c0, 0x0819a20d]
0819a0c0 +0x000:  push   %ebp
0819a0c1 +0x001:  mov    %esp,%ebp
0819a0c3 +0x003:  push   %edi
0819a0c4 +0x004:  push   %esi
0819a0c5 +0x005:  push   %ebx
0819a0c6 +0x006:  sub    $0x5c,%esp
0819a0c9 +0x009:  cmpl   $0x0,0xc(%ebp)
0819a0cd +0x00d:  jne    0819a0d9 <+0x19>
0819a0cf +0x00f:  mov    $0x6b6,%eax
0819a0d4 +0x014:  jmp    0819a205 <+0x145>
0819a0d9 +0x019:  mov    0xc(%ebp),%eax
0819a0dc +0x01c:  mov    %eax,(%esp)
0819a0df +0x01f:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0819a0e4 +0x024:  test   %eax,%eax
0819a0e6 +0x026:  sete   %al
0819a0e9 +0x029:  test   %al,%al
0819a0eb +0x02b:  je     0819a0f7 <+0x37>
0819a0ed +0x02d:  mov    $0x6b9,%eax
0819a0f2 +0x032:  jmp    0819a205 <+0x145>
0819a0f7 +0x037:  mov    0x10(%ebp),%eax
0819a0fa +0x03a:  mov    %eax,-0x1c(%ebp)
0819a0fd +0x03d:  cmpl   $0x0,-0x1c(%ebp)
0819a101 +0x041:  jne    0819a139 <+0x79>
0819a103 +0x043:  movl   $"EMBLEM COMPOUND INTER_DSP(kEmblemCompound) null.",0x10(%esp)
0819a10b +0x04b:  movl   $0x6be,0xc(%esp)
0819a113 +0x053:  movl   $&_ZZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
0819a11b +0x05b:  movl   $"localjapan/Arad_InterDispatcher.cpp",0x4(%esp)
0819a123 +0x063:  movl   $0x1,(%esp)
0819a12a +0x06a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0819a12f +0x06f:  mov    $0x6bf,%eax
0819a134 +0x074:  jmp    0819a205 <+0x145>
0819a139 +0x079:  call   08193776 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x3de>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x3de
0819a13e +0x07e:  mov    -0x1c(%ebp),%edx
0819a141 +0x081:  mov    %edx,0x8(%esp)
0819a145 +0x085:  mov    0xc(%ebp),%edx
0819a148 +0x088:  mov    %edx,0x4(%esp)
0819a14c +0x08c:  mov    %eax,(%esp)
0819a14f +0x08f:  call   08191636 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE>  ; EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*)
0819a154 +0x094:  xor    $0x1,%eax
0819a157 +0x097:  test   %al,%al
0819a159 +0x099:  je     0819a165 <+0xa5>
0819a15b +0x09b:  mov    $0x0,%eax
0819a160 +0x0a0:  jmp    0819a205 <+0x145>
0819a165 +0x0a5:  call   08193776 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x3de>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x3de
0819a16a +0x0aa:  mov    -0x1c(%ebp),%edx
0819a16d +0x0ad:  mov    %edx,0x8(%esp)
0819a171 +0x0b1:  mov    0xc(%ebp),%edx
0819a174 +0x0b4:  mov    %edx,0x4(%esp)
0819a178 +0x0b8:  mov    %eax,(%esp)
0819a17b +0x0bb:  call   08191afa <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE>  ; EmblemCompoundServer::Process(CUser*, arad::SigAradEmblemCompound*)
0819a180 +0x0c0:  xor    $0x1,%eax
0819a183 +0x0c3:  test   %al,%al
0819a185 +0x0c5:  je     0819a18e <+0xce>
0819a187 +0x0c7:  mov    $0x0,%eax
0819a18c +0x0cc:  jmp    0819a205 <+0x145>
0819a18e +0x0ce:  mov    0xc(%ebp),%eax
0819a191 +0x0d1:  mov    %eax,(%esp)
0819a194 +0x0d4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0819a199 +0x0d9:  mov    %eax,%ebx
0819a19b +0x0db:  mov    -0x1c(%ebp),%eax
0819a19e +0x0de:  mov    0x10(%eax),%eax
0819a1a1 +0x0e1:  mov    %eax,-0x3c(%ebp)
0819a1a4 +0x0e4:  mov    -0x1c(%ebp),%eax
0819a1a7 +0x0e7:  movzwl 0x8(%eax),%eax
0819a1ab +0x0eb:  movzwl %ax,%edi
0819a1ae +0x0ee:  mov    -0x1c(%ebp),%eax
0819a1b1 +0x0f1:  movzwl (%eax),%eax
0819a1b4 +0x0f4:  movzwl %ax,%esi
0819a1b7 +0x0f7:  movl   $0x0,0xc(%esp)
0819a1bf +0x0ff:  movl   $0x6cc,0x8(%esp)
0819a1c7 +0x107:  movl   $&_ZZN4ARAD10DISPATCHER26Arad_INTER_kEmblemCompound12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
0819a1cf +0x10f:  lea    -0x2c(%ebp),%eax
0819a1d2 +0x112:  mov    %eax,(%esp)
0819a1d5 +0x115:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0819a1da +0x11a:  mov    %ebx,0x14(%esp)
0819a1de +0x11e:  mov    -0x3c(%ebp),%eax
0819a1e1 +0x121:  mov    %eax,0x10(%esp)
0819a1e5 +0x125:  mov    %edi,0xc(%esp)
0819a1e9 +0x129:  mov    %esi,0x8(%esp)
0819a1ed +0x12d:  movl   $"EMBLEM COMPOUND : success [slot1:%d] [slot2:%d] [selectNo:%d] [resultIdx:%d] [charac_no:%d]",0x4(%esp)
0819a1f5 +0x135:  lea    -0x2c(%ebp),%eax
0819a1f8 +0x138:  mov    %eax,(%esp)
0819a1fb +0x13b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0819a200 +0x140:  mov    $0x0,%eax
0819a205 +0x145:  add    $0x5c,%esp
0819a208 +0x148:  pop    %ebx
0819a209 +0x149:  pop    %esi
0819a20a +0x14a:  pop    %edi
0819a20b +0x14b:  pop    %ebp
0819a20c +0x14c:  ret
0819a20d +0x14d:  nop
```

## 反编译 C

```c
// ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig @ 0x819a0c0

/* ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  EmblemCompoundServer *pEVar6;
  undefined4 uVar7;
  cMyTrace local_30 [16];
  SigAradEmblemCompound *local_20;
  
  if (param_2 == (char *)0x0) {
    uVar4 = 0x6b6;
  }
  else {
    iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar5 == 0) {
      uVar4 = 0x6b9;
    }
    else {
      local_20 = (SigAradEmblemCompound *)param_3;
      if (param_3 == 0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_InterDispatcher.cpp",
                   "virtual int ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser*, char*, int)"
                   ,0x6be,"EMBLEM COMPOUND INTER_DSP(kEmblemCompound) null.");
        uVar4 = 0x6bf;
      }
      else {
        pEVar6 = (EmblemCompoundServer *)Singleton<EmblemCompoundServer>::Get();
        cVar3 = EmblemCompoundServer::CheckCondition(pEVar6,(CUser *)param_2,local_20);
        if (cVar3 == '\x01') {
          pEVar6 = (EmblemCompoundServer *)Singleton<EmblemCompoundServer>::Get();
          cVar3 = EmblemCompoundServer::Process(pEVar6,(CUser *)param_2,local_20);
          if (cVar3 == '\x01') {
            uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
            uVar4 = *(undefined4 *)(local_20 + 0x10);
            uVar1 = *(ushort *)(local_20 + 8);
            uVar2 = *(ushort *)local_20;
            cMyTrace::cMyTrace(local_30,
                               "virtual int ARAD::DISPATCHER::Arad_INTER_kEmblemCompound::dispatch_sig(CUser*, char*, int)"
                               ,0x6cc,0);
            cMyTrace::operator()
                      (local_30,
                       "EMBLEM COMPOUND : success [slot1:%d] [slot2:%d] [selectNo:%d] [resultIdx:%d] [charac_no:%d]"
                       ,(uint)uVar2,(uint)uVar1,uVar4,uVar7);
            uVar4 = 0;
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}
```
