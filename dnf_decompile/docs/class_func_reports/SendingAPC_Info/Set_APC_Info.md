# Set_APC_Info

`_ZN15SendingAPC_Info12Set_APC_InfoERK9TOD_LayerRK8_APCInfo`

`SendingAPC_Info::Set_APC_Info(TOD_Layer const&, _APCInfo const&)`

| 类 | 地址 |
|---|---|
| `SendingAPC_Info` | `0x085fe906` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe906  _ZN15SendingAPC_Info12Set_APC_InfoERK9TOD_LayerRK8_APCInfo
#           SendingAPC_Info::Set_APC_Info(TOD_Layer const&, _APCInfo const&)
# range [0x085fe906, 0x085febc9]
085fe906 +0x000:  push   %ebp
085fe907 +0x001:  mov    %esp,%ebp
085fe909 +0x003:  push   %edi
085fe90a +0x004:  push   %esi
085fe90b +0x005:  push   %ebx
085fe90c +0x006:  sub    $0x7c,%esp
085fe90f +0x009:  mov    0x8(%ebp),%eax
085fe912 +0x00c:  add    $0x4,%eax
085fe915 +0x00f:  mov    %eax,(%esp)
085fe918 +0x012:  call   0858c8e2 <_ZN9PacketBuf5clearEv>  ; PacketBuf::clear()
085fe91d +0x017:  mov    0x10(%ebp),%eax
085fe920 +0x01a:  mov    (%eax),%edx
085fe922 +0x01c:  mov    0x8(%ebp),%eax
085fe925 +0x01f:  mov    %edx,(%eax)
085fe927 +0x021:  mov    0x8(%ebp),%eax
085fe92a +0x024:  add    $0x4,%eax
085fe92d +0x027:  movl   $0x15a,0x8(%esp)
085fe935 +0x02f:  movl   $0x0,0x4(%esp)
085fe93d +0x037:  mov    %eax,(%esp)
085fe940 +0x03a:  call   0858c94a <_ZN9PacketBuf10put_headerEii>  ; PacketBuf::put_header(int, int)
085fe945 +0x03f:  mov    0xc(%ebp),%eax
085fe948 +0x042:  mov    %eax,(%esp)
085fe94b +0x045:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085fe950 +0x04a:  movzwl %ax,%eax
085fe953 +0x04d:  mov    0x8(%ebp),%edx
085fe956 +0x050:  add    $0x4,%edx
085fe959 +0x053:  mov    %eax,0x4(%esp)
085fe95d +0x057:  mov    %edx,(%esp)
085fe960 +0x05a:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
085fe965 +0x05f:  mov    0x10(%ebp),%eax
085fe968 +0x062:  add    $0x4,%eax
085fe96b +0x065:  mov    %eax,(%esp)
085fe96e +0x068:  call   0807e3b0 <_init+0xca8>
085fe973 +0x06d:  mov    %eax,-0x28(%ebp)
085fe976 +0x070:  mov    0x8(%ebp),%eax
085fe979 +0x073:  lea    0x4(%eax),%edx
085fe97c +0x076:  mov    -0x28(%ebp),%eax
085fe97f +0x079:  mov    %eax,0x4(%esp)
085fe983 +0x07d:  mov    %edx,(%esp)
085fe986 +0x080:  call   080cb8c2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70f
085fe98b +0x085:  mov    0x10(%ebp),%eax
085fe98e +0x088:  lea    0x4(%eax),%ecx
085fe991 +0x08b:  mov    0x8(%ebp),%eax
085fe994 +0x08e:  lea    0x4(%eax),%edx
085fe997 +0x091:  mov    -0x28(%ebp),%eax
085fe99a +0x094:  mov    %eax,0x8(%esp)
085fe99e +0x098:  mov    %ecx,0x4(%esp)
085fe9a2 +0x09c:  mov    %edx,(%esp)
085fe9a5 +0x09f:  call   0822b684 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2e
085fe9aa +0x0a4:  mov    0x10(%ebp),%eax
085fe9ad +0x0a7:  mov    0x24(%eax),%eax
085fe9b0 +0x0aa:  mov    0x8(%ebp),%edx
085fe9b3 +0x0ad:  add    $0x4,%edx
085fe9b6 +0x0b0:  mov    %eax,0x4(%esp)
085fe9ba +0x0b4:  mov    %edx,(%esp)
085fe9bd +0x0b7:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
085fe9c2 +0x0bc:  mov    0x10(%ebp),%eax
085fe9c5 +0x0bf:  mov    0x28(%eax),%eax
085fe9c8 +0x0c2:  mov    0x8(%ebp),%edx
085fe9cb +0x0c5:  add    $0x4,%edx
085fe9ce +0x0c8:  mov    %eax,0x4(%esp)
085fe9d2 +0x0cc:  mov    %edx,(%esp)
085fe9d5 +0x0cf:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
085fe9da +0x0d4:  mov    0x10(%ebp),%eax
085fe9dd +0x0d7:  mov    0x2c(%eax),%eax
085fe9e0 +0x0da:  mov    0x8(%ebp),%edx
085fe9e3 +0x0dd:  add    $0x4,%edx
085fe9e6 +0x0e0:  mov    %eax,0x4(%esp)
085fe9ea +0x0e4:  mov    %edx,(%esp)
085fe9ed +0x0e7:  call   080cb89e <_GLOBAL__I__ZN10BingoEventC2Ev+0x6eb>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6eb
085fe9f2 +0x0ec:  mov    0x10(%ebp),%eax
085fe9f5 +0x0ef:  add    $0x30,%eax
085fe9f8 +0x0f2:  mov    %eax,(%esp)
085fe9fb +0x0f5:  call   0807e3b0 <_init+0xca8>
085fea00 +0x0fa:  mov    %eax,-0x24(%ebp)
085fea03 +0x0fd:  mov    0x8(%ebp),%eax
085fea06 +0x100:  lea    0x4(%eax),%edx
085fea09 +0x103:  mov    -0x24(%ebp),%eax
085fea0c +0x106:  mov    %eax,0x4(%esp)
085fea10 +0x10a:  mov    %edx,(%esp)
085fea13 +0x10d:  call   080cb8c2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70f
085fea18 +0x112:  mov    0x10(%ebp),%eax
085fea1b +0x115:  lea    0x30(%eax),%ecx
085fea1e +0x118:  mov    0x8(%ebp),%eax
085fea21 +0x11b:  lea    0x4(%eax),%edx
085fea24 +0x11e:  mov    -0x24(%ebp),%eax
085fea27 +0x121:  mov    %eax,0x8(%esp)
085fea2b +0x125:  mov    %ecx,0x4(%esp)
085fea2f +0x129:  mov    %edx,(%esp)
085fea32 +0x12c:  call   0822b684 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2e
085fea37 +0x131:  mov    0x10(%ebp),%eax
085fea3a +0x134:  mov    0x48(%eax),%eax
085fea3d +0x137:  mov    0x8(%ebp),%edx
085fea40 +0x13a:  add    $0x4,%edx
085fea43 +0x13d:  mov    %eax,0x4(%esp)
085fea47 +0x141:  mov    %edx,(%esp)
085fea4a +0x144:  call   080cb8c2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70f
085fea4f +0x149:  movl   $0x0,-0x1c(%ebp)
085fea56 +0x150:  jmp    085fea7b <+0x175>
085fea58 +0x152:  mov    -0x1c(%ebp),%edx
085fea5b +0x155:  mov    0x10(%ebp),%eax
085fea5e +0x158:  add    $0x10,%edx
085fea61 +0x15b:  mov    0xc(%eax,%edx,4),%eax
085fea65 +0x15f:  mov    0x8(%ebp),%edx
085fea68 +0x162:  add    $0x4,%edx
085fea6b +0x165:  mov    %eax,0x4(%esp)
085fea6f +0x169:  mov    %edx,(%esp)
085fea72 +0x16c:  call   080cb8c2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70f
085fea77 +0x171:  addl   $0x1,-0x1c(%ebp)
085fea7b +0x175:  cmpl   $0x15,-0x1c(%ebp)
085fea7f +0x179:  setle  %al
085fea82 +0x17c:  test   %al,%al
085fea84 +0x17e:  jne    085fea58 <+0x152>
085fea86 +0x180:  mov    0x10(%ebp),%eax
085fea89 +0x183:  add    $0xa4,%eax
085fea8e +0x188:  mov    %eax,(%esp)
085fea91 +0x18b:  call   0807e3b0 <_init+0xca8>
085fea96 +0x190:  mov    %eax,-0x20(%ebp)
085fea99 +0x193:  mov    0x8(%ebp),%eax
085fea9c +0x196:  lea    0x4(%eax),%edx
085fea9f +0x199:  mov    -0x20(%ebp),%eax
085feaa2 +0x19c:  mov    %eax,0x4(%esp)
085feaa6 +0x1a0:  mov    %edx,(%esp)
085feaa9 +0x1a3:  call   080cb8c2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70f
085feaae +0x1a8:  mov    0x10(%ebp),%eax
085feab1 +0x1ab:  lea    0xa4(%eax),%ecx
085feab7 +0x1b1:  mov    0x8(%ebp),%eax
085feaba +0x1b4:  lea    0x4(%eax),%edx
085feabd +0x1b7:  mov    -0x20(%ebp),%eax
085feac0 +0x1ba:  mov    %eax,0x8(%esp)
085feac4 +0x1be:  mov    %ecx,0x4(%esp)
085feac8 +0x1c2:  mov    %edx,(%esp)
085feacb +0x1c5:  call   0822b684 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd2e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd2e
085fead0 +0x1ca:  mov    0x10(%ebp),%eax
085fead3 +0x1cd:  mov    0xb4(%eax),%eax
085fead9 +0x1d3:  mov    0x8(%ebp),%edx
085feadc +0x1d6:  add    $0x4,%edx
085feadf +0x1d9:  mov    %eax,0x4(%esp)
085feae3 +0x1dd:  mov    %edx,(%esp)
085feae6 +0x1e0:  call   080cb8c2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x70f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x70f
085feaeb +0x1e5:  mov    0x8(%ebp),%eax
085feaee +0x1e8:  add    $0x4,%eax
085feaf1 +0x1eb:  movl   $0x1,0x4(%esp)
085feaf9 +0x1f3:  mov    %eax,(%esp)
085feafc +0x1f6:  call   0858d548 <_ZN9PacketBuf8finalizeEb>  ; PacketBuf::finalize(bool)
085feb01 +0x1fb:  mov    0x10(%ebp),%eax
085feb04 +0x1fe:  mov    0xb4(%eax),%esi
085feb0a +0x204:  mov    0x10(%ebp),%eax
085feb0d +0x207:  add    $0xa4,%eax
085feb12 +0x20c:  mov    %eax,-0x50(%ebp)
085feb15 +0x20f:  mov    0x10(%ebp),%eax
085feb18 +0x212:  mov    0x48(%eax),%eax
085feb1b +0x215:  mov    %eax,-0x4c(%ebp)
085feb1e +0x218:  mov    0x10(%ebp),%eax
085feb21 +0x21b:  add    $0x30,%eax
085feb24 +0x21e:  mov    %eax,-0x48(%ebp)
085feb27 +0x221:  mov    0x10(%ebp),%eax
085feb2a +0x224:  mov    0x2c(%eax),%eax
085feb2d +0x227:  mov    %eax,-0x44(%ebp)
085feb30 +0x22a:  mov    0x10(%ebp),%eax
085feb33 +0x22d:  mov    0x28(%eax),%eax
085feb36 +0x230:  mov    %eax,-0x40(%ebp)
085feb39 +0x233:  mov    0x10(%ebp),%eax
085feb3c +0x236:  mov    0x24(%eax),%eax
085feb3f +0x239:  mov    %eax,-0x3c(%ebp)
085feb42 +0x23c:  mov    0x10(%ebp),%eax
085feb45 +0x23f:  lea    0x4(%eax),%edi
085feb48 +0x242:  mov    0xc(%ebp),%eax
085feb4b +0x245:  mov    %eax,(%esp)
085feb4e +0x248:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085feb53 +0x24d:  movzwl %ax,%ebx
085feb56 +0x250:  movl   $0x5,0xc(%esp)
085feb5e +0x258:  movl   $0x68,0x8(%esp)
085feb66 +0x260:  movl   $&_ZZN15SendingAPC_Info12Set_APC_InfoERK9TOD_LayerRK8_APCInfoE19__PRETTY_FUNCTION__,0x4(%esp)
085feb6e +0x268:  lea    -0x38(%ebp),%eax
085feb71 +0x26b:  mov    %eax,(%esp)
085feb74 +0x26e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085feb79 +0x273:  mov    %esi,0x28(%esp)
085feb7d +0x277:  mov    -0x50(%ebp),%eax
085feb80 +0x27a:  mov    %eax,0x24(%esp)
085feb84 +0x27e:  mov    -0x4c(%ebp),%eax
085feb87 +0x281:  mov    %eax,0x20(%esp)
085feb8b +0x285:  mov    -0x48(%ebp),%eax
085feb8e +0x288:  mov    %eax,0x1c(%esp)
085feb92 +0x28c:  mov    -0x44(%ebp),%eax
085feb95 +0x28f:  mov    %eax,0x18(%esp)
085feb99 +0x293:  mov    -0x40(%ebp),%eax
085feb9c +0x296:  mov    %eax,0x14(%esp)
085feba0 +0x29a:  mov    -0x3c(%ebp),%eax
085feba3 +0x29d:  mov    %eax,0x10(%esp)
085feba7 +0x2a1:  mov    %edi,0xc(%esp)
085febab +0x2a5:  mov    %ebx,0x8(%esp)
085febaf +0x2a9:  movl   $"@TOD : setting layer:%d, name:%s, lv:%d, job:%d, grow_type:%d, guild_name:%s, pvp_grade:%d, creature_name:%s, creature_id:%d",0x4(%esp)
085febb7 +0x2b1:  lea    -0x38(%ebp),%eax
085febba +0x2b4:  mov    %eax,(%esp)
085febbd +0x2b7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085febc2 +0x2bc:  add    $0x7c,%esp
085febc5 +0x2bf:  pop    %ebx
085febc6 +0x2c0:  pop    %esi
085febc7 +0x2c1:  pop    %edi
085febc8 +0x2c2:  pop    %ebp
085febc9 +0x2c3:  ret
```

## 反编译 C

```c
// SendingAPC_Info::Set_APC_Info @ 0x85fe906

/* SendingAPC_Info::Set_APC_Info(TOD_Layer const&, _APCInfo const&) */

void __thiscall
SendingAPC_Info::Set_APC_Info(SendingAPC_Info *this,TOD_Layer *param_1,_APCInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  cMyTrace local_3c [16];
  size_t local_2c;
  size_t local_28;
  size_t local_24;
  int local_20;
  
  PacketBuf::clear((PacketBuf *)(this + 4));
  *(undefined4 *)this = *(undefined4 *)param_2;
  PacketBuf::put_header((PacketBuf *)(this + 4),0,0x15a);
  uVar6 = TOD_Layer::GetLayer(param_1);
  PacketBuf::put_byte((PacketBuf *)(this + 4),uVar6 & 0xffff);
  local_2c = strlen((char *)(param_2 + 4));
  PacketBuf::put_int((PacketBuf *)(this + 4),local_2c);
  PacketBuf::put_str((PacketBuf *)(this + 4),(char *)(param_2 + 4),local_2c);
  PacketBuf::put_byte((PacketBuf *)(this + 4),*(int *)(param_2 + 0x24));
  PacketBuf::put_byte((PacketBuf *)(this + 4),*(int *)(param_2 + 0x28));
  PacketBuf::put_byte((PacketBuf *)(this + 4),*(int *)(param_2 + 0x2c));
  local_28 = strlen((char *)(param_2 + 0x30));
  PacketBuf::put_int((PacketBuf *)(this + 4),local_28);
  PacketBuf::put_str((PacketBuf *)(this + 4),(char *)(param_2 + 0x30),local_28);
  PacketBuf::put_int((PacketBuf *)(this + 4),*(int *)(param_2 + 0x48));
  for (local_20 = 0; local_20 < 0x16; local_20 = local_20 + 1) {
    PacketBuf::put_int((PacketBuf *)(this + 4),*(int *)(param_2 + (local_20 + 0x10) * 4 + 0xc));
  }
  local_24 = strlen((char *)(param_2 + 0xa4));
  PacketBuf::put_int((PacketBuf *)(this + 4),local_24);
  PacketBuf::put_str((PacketBuf *)(this + 4),(char *)(param_2 + 0xa4),local_24);
  PacketBuf::put_int((PacketBuf *)(this + 4),*(int *)(param_2 + 0xb4));
  PacketBuf::finalize((PacketBuf *)(this + 4),true);
  uVar1 = *(undefined4 *)(param_2 + 0xb4);
  uVar2 = *(undefined4 *)(param_2 + 0x48);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = *(undefined4 *)(param_2 + 0x24);
  uVar6 = TOD_Layer::GetLayer(param_1);
  cMyTrace::cMyTrace(local_3c,
                     "void SendingAPC_Info::Set_APC_Info(const TOD_Layer&, const _APCInfo&)",0x68,5)
  ;
  cMyTrace::operator()
            (local_3c,
             "@TOD : setting layer:%d, name:%s, lv:%d, job:%d, grow_type:%d, guild_name:%s, pvp_grade:%d, creature_name:%s, creature_id:%d"
             ,uVar6 & 0xffff,param_2 + 4,uVar5,uVar4,uVar3,param_2 + 0x30,uVar2,param_2 + 0xa4,uVar1
            );
  return;
}
```
