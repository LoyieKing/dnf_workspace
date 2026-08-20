# process

`_ZN25Dispatcher_P2P_Statistics7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_P2P_Statistics` | `0x081e2bde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e2bde  _ZN25Dispatcher_P2P_Statistics7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e2bde, 0x081e2ef5]
081e2bde +0x000:  push   %ebp
081e2bdf +0x001:  mov    %esp,%ebp
081e2be1 +0x003:  push   %edi
081e2be2 +0x004:  push   %esi
081e2be3 +0x005:  push   %ebx
081e2be4 +0x006:  sub    $0xfc,%esp
081e2bea +0x00c:  mov    0x10(%ebp),%eax
081e2bed +0x00f:  mov    %eax,-0x1c(%ebp)
081e2bf0 +0x012:  lea    -0x9b(%ebp),%eax
081e2bf6 +0x018:  mov    %eax,(%esp)
081e2bf9 +0x01b:  call   0822c696 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1d40>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1d40
081e2bfe +0x020:  mov    -0x1c(%ebp),%eax
081e2c01 +0x023:  movzbl 0xd(%eax),%eax
081e2c05 +0x027:  movsbl %al,%edx
081e2c08 +0x02a:  mov    -0x1c(%ebp),%eax
081e2c0b +0x02d:  movzbl 0xe(%eax),%eax
081e2c0f +0x031:  movsbl %al,%eax
081e2c12 +0x034:  mov    %edx,%ecx
081e2c14 +0x036:  sub    %eax,%ecx
081e2c16 +0x038:  mov    %ecx,%eax
081e2c18 +0x03a:  mov    %eax,-0x91(%ebp)
081e2c1e +0x040:  mov    -0x1c(%ebp),%eax
081e2c21 +0x043:  movzbl 0xe(%eax),%eax
081e2c25 +0x047:  movsbl %al,%eax
081e2c28 +0x04a:  mov    %eax,-0x8d(%ebp)
081e2c2e +0x050:  mov    0xc(%ebp),%eax
081e2c31 +0x053:  mov    %eax,(%esp)
081e2c34 +0x056:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081e2c39 +0x05b:  mov    %al,-0x89(%ebp)
081e2c3f +0x061:  mov    -0x1c(%ebp),%eax
081e2c42 +0x064:  movzwl 0x10(%eax),%eax
081e2c46 +0x068:  mov    %ax,-0x88(%ebp)
081e2c4d +0x06f:  mov    -0x1c(%ebp),%eax
081e2c50 +0x072:  movzwl 0x12(%eax),%eax
081e2c54 +0x076:  mov    %ax,-0x86(%ebp)
081e2c5b +0x07d:  mov    -0x1c(%ebp),%eax
081e2c5e +0x080:  movzwl 0x14(%eax),%eax
081e2c62 +0x084:  mov    %ax,-0x84(%ebp)
081e2c69 +0x08b:  mov    -0x1c(%ebp),%eax
081e2c6c +0x08e:  mov    0x18(%eax),%eax
081e2c6f +0x091:  mov    %eax,-0x82(%ebp)
081e2c75 +0x097:  mov    -0x1c(%ebp),%eax
081e2c78 +0x09a:  mov    0x1c(%eax),%eax
081e2c7b +0x09d:  mov    %eax,-0x7e(%ebp)
081e2c7e +0x0a0:  mov    -0x1c(%ebp),%eax
081e2c81 +0x0a3:  mov    0x20(%eax),%eax
081e2c84 +0x0a6:  mov    %eax,-0x7a(%ebp)
081e2c87 +0x0a9:  mov    -0x1c(%ebp),%eax
081e2c8a +0x0ac:  mov    0x24(%eax),%eax
081e2c8d +0x0af:  mov    %eax,-0x76(%ebp)
081e2c90 +0x0b2:  mov    -0x1c(%ebp),%eax
081e2c93 +0x0b5:  movzwl 0x28(%eax),%eax
081e2c97 +0x0b9:  mov    %ax,-0x72(%ebp)
081e2c9b +0x0bd:  mov    -0x1c(%ebp),%eax
081e2c9e +0x0c0:  movzwl 0x2a(%eax),%eax
081e2ca2 +0x0c4:  mov    %ax,-0x70(%ebp)
081e2ca6 +0x0c8:  mov    -0x1c(%ebp),%eax
081e2ca9 +0x0cb:  movzwl 0x2c(%eax),%eax
081e2cad +0x0cf:  mov    %ax,-0x6e(%ebp)
081e2cb1 +0x0d3:  mov    -0x1c(%ebp),%eax
081e2cb4 +0x0d6:  mov    0x30(%eax),%eax
081e2cb7 +0x0d9:  mov    %eax,-0x6c(%ebp)
081e2cba +0x0dc:  mov    -0x1c(%ebp),%eax
081e2cbd +0x0df:  mov    0x34(%eax),%eax
081e2cc0 +0x0e2:  mov    %eax,-0x68(%ebp)
081e2cc3 +0x0e5:  mov    -0x1c(%ebp),%eax
081e2cc6 +0x0e8:  mov    0x38(%eax),%eax
081e2cc9 +0x0eb:  mov    %eax,-0x64(%ebp)
081e2ccc +0x0ee:  mov    -0x1c(%ebp),%eax
081e2ccf +0x0f1:  mov    0x3c(%eax),%eax
081e2cd2 +0x0f4:  mov    %eax,-0x60(%ebp)
081e2cd5 +0x0f7:  movl   $0x0,0xc(%esp)
081e2cdd +0x0ff:  movl   $0x5953,0x8(%esp)
081e2ce5 +0x107:  movl   $&_ZZN25Dispatcher_P2P_Statistics7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e2ced +0x10f:  lea    -0x5c(%ebp),%eax
081e2cf0 +0x112:  mov    %eax,(%esp)
081e2cf3 +0x115:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e2cf8 +0x11a:  movl   $"p2p statistics",0x4(%esp)
081e2d00 +0x122:  lea    -0x5c(%ebp),%eax
081e2d03 +0x125:  mov    %eax,(%esp)
081e2d06 +0x128:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e2d0b +0x12d:  mov    -0x76(%ebp),%edi
081e2d0e +0x130:  mov    -0x7a(%ebp),%eax
081e2d11 +0x133:  mov    %eax,-0xd0(%ebp)
081e2d17 +0x139:  mov    -0x7e(%ebp),%ecx
081e2d1a +0x13c:  mov    %ecx,-0xcc(%ebp)
081e2d20 +0x142:  mov    -0x82(%ebp),%eax
081e2d26 +0x148:  mov    %eax,-0xc8(%ebp)
081e2d2c +0x14e:  movzwl -0x84(%ebp),%eax
081e2d33 +0x155:  cwtl
081e2d34 +0x156:  mov    %eax,-0xc4(%ebp)
081e2d3a +0x15c:  movzwl -0x86(%ebp),%eax
081e2d41 +0x163:  cwtl
081e2d42 +0x164:  mov    %eax,-0xc0(%ebp)
081e2d48 +0x16a:  movzwl -0x88(%ebp),%eax
081e2d4f +0x171:  movswl %ax,%esi
081e2d52 +0x174:  mov    -0x91(%ebp),%ebx
081e2d58 +0x17a:  movl   $0x0,0xc(%esp)
081e2d60 +0x182:  movl   $0x5954,0x8(%esp)
081e2d68 +0x18a:  movl   $&_ZZN25Dispatcher_P2P_Statistics7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e2d70 +0x192:  lea    -0x4c(%ebp),%eax
081e2d73 +0x195:  mov    %eax,(%esp)
081e2d76 +0x198:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e2d7b +0x19d:  mov    %edi,0x24(%esp)
081e2d7f +0x1a1:  mov    -0xd0(%ebp),%ecx
081e2d85 +0x1a7:  mov    %ecx,0x20(%esp)
081e2d89 +0x1ab:  mov    -0xcc(%ebp),%eax
081e2d8f +0x1b1:  mov    %eax,0x1c(%esp)
081e2d93 +0x1b5:  mov    -0xc8(%ebp),%ecx
081e2d99 +0x1bb:  mov    %ecx,0x18(%esp)
081e2d9d +0x1bf:  mov    -0xc4(%ebp),%eax
081e2da3 +0x1c5:  mov    %eax,0x14(%esp)
081e2da7 +0x1c9:  mov    -0xc0(%ebp),%ecx
081e2dad +0x1cf:  mov    %ecx,0x10(%esp)
081e2db1 +0x1d3:  mov    %esi,0xc(%esp)
081e2db5 +0x1d7:  mov    %ebx,0x8(%esp)
081e2db9 +0x1db:  movl   $"num(%d) min(%d) max(%d), avg(%d), 100(%u), 200(%u), 300(%u), 400(%u)",0x4(%esp)
081e2dc1 +0x1e3:  lea    -0x4c(%ebp),%eax
081e2dc4 +0x1e6:  mov    %eax,(%esp)
081e2dc7 +0x1e9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e2dcc +0x1ee:  movl   $0x0,0xc(%esp)
081e2dd4 +0x1f6:  movl   $0x595e,0x8(%esp)
081e2ddc +0x1fe:  movl   $&_ZZN25Dispatcher_P2P_Statistics7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e2de4 +0x206:  lea    -0x3c(%ebp),%eax
081e2de7 +0x209:  mov    %eax,(%esp)
081e2dea +0x20c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e2def +0x211:  movl   $"relay statistics",0x4(%esp)
081e2df7 +0x219:  lea    -0x3c(%ebp),%eax
081e2dfa +0x21c:  mov    %eax,(%esp)
081e2dfd +0x21f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e2e02 +0x224:  mov    -0x60(%ebp),%edi
081e2e05 +0x227:  mov    -0x64(%ebp),%eax
081e2e08 +0x22a:  mov    %eax,-0xbc(%ebp)
081e2e0e +0x230:  mov    -0x68(%ebp),%ecx
081e2e11 +0x233:  mov    %ecx,-0xb8(%ebp)
081e2e17 +0x239:  mov    -0x6c(%ebp),%eax
081e2e1a +0x23c:  mov    %eax,-0xb4(%ebp)
081e2e20 +0x242:  movzwl -0x6e(%ebp),%eax
081e2e24 +0x246:  cwtl
081e2e25 +0x247:  mov    %eax,-0xb0(%ebp)
081e2e2b +0x24d:  movzwl -0x70(%ebp),%eax
081e2e2f +0x251:  cwtl
081e2e30 +0x252:  mov    %eax,-0xac(%ebp)
081e2e36 +0x258:  movzwl -0x72(%ebp),%eax
081e2e3a +0x25c:  movswl %ax,%esi
081e2e3d +0x25f:  mov    -0x8d(%ebp),%ebx
081e2e43 +0x265:  movl   $0x0,0xc(%esp)
081e2e4b +0x26d:  movl   $0x595f,0x8(%esp)
081e2e53 +0x275:  movl   $&_ZZN25Dispatcher_P2P_Statistics7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e2e5b +0x27d:  lea    -0x2c(%ebp),%eax
081e2e5e +0x280:  mov    %eax,(%esp)
081e2e61 +0x283:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081e2e66 +0x288:  mov    %edi,0x24(%esp)
081e2e6a +0x28c:  mov    -0xbc(%ebp),%ecx
081e2e70 +0x292:  mov    %ecx,0x20(%esp)
081e2e74 +0x296:  mov    -0xb8(%ebp),%eax
081e2e7a +0x29c:  mov    %eax,0x1c(%esp)
081e2e7e +0x2a0:  mov    -0xb4(%ebp),%ecx
081e2e84 +0x2a6:  mov    %ecx,0x18(%esp)
081e2e88 +0x2aa:  mov    -0xb0(%ebp),%eax
081e2e8e +0x2b0:  mov    %eax,0x14(%esp)
081e2e92 +0x2b4:  mov    -0xac(%ebp),%ecx
081e2e98 +0x2ba:  mov    %ecx,0x10(%esp)
081e2e9c +0x2be:  mov    %esi,0xc(%esp)
081e2ea0 +0x2c2:  mov    %ebx,0x8(%esp)
081e2ea4 +0x2c6:  movl   $"num(%d) min(%d) max(%d), avg(%d), 100(%u), 200(%u), 300(%u), 400(%u)",0x4(%esp)
081e2eac +0x2ce:  lea    -0x2c(%ebp),%eax
081e2eaf +0x2d1:  mov    %eax,(%esp)
081e2eb2 +0x2d4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
081e2eb7 +0x2d9:  lea    -0x9b(%ebp),%ebx
081e2ebd +0x2df:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
081e2ec2 +0x2e4:  movl   $0x0,0x4(%esp)
081e2eca +0x2ec:  mov    %eax,(%esp)
081e2ecd +0x2ef:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
081e2ed2 +0x2f4:  movl   $0x3f,0x8(%esp)
081e2eda +0x2fc:  mov    %ebx,0x4(%esp)
081e2ede +0x300:  mov    %eax,(%esp)
081e2ee1 +0x303:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
081e2ee6 +0x308:  mov    $0x0,%eax
081e2eeb +0x30d:  add    $0xfc,%esp
081e2ef1 +0x313:  pop    %ebx
081e2ef2 +0x314:  pop    %esi
081e2ef3 +0x315:  pop    %edi
081e2ef4 +0x316:  pop    %ebp
081e2ef5 +0x317:  ret
```

## 反编译 C

```c
// Dispatcher_P2P_Statistics::process @ 0x81e2bde

/* Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_P2P_Statistics::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  CStatisticServerProxy *this;
  int iVar8;
  Packet_P2P_Statistics local_9f [10];
  int local_95;
  int local_91;
  undefined1 local_8d;
  short local_8c;
  short local_8a;
  short local_88;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  short local_76;
  short local_74;
  short local_72;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  ParamBase *local_20;
  
  local_20 = param_3;
  Packet_P2P_Statistics::Packet_P2P_Statistics(local_9f);
  local_95 = (int)(char)local_20[0xd] - (int)(char)local_20[0xe];
  local_91 = (int)(char)local_20[0xe];
  local_8d = CUser::GetServerGroup((CUser *)param_2);
  local_8c = *(short *)(local_20 + 0x10);
  local_8a = *(short *)(local_20 + 0x12);
  local_88 = *(short *)(local_20 + 0x14);
  local_86 = *(undefined4 *)(local_20 + 0x18);
  local_82 = *(undefined4 *)(local_20 + 0x1c);
  local_7e = *(undefined4 *)(local_20 + 0x20);
  local_7a = *(undefined4 *)(local_20 + 0x24);
  local_76 = *(short *)(local_20 + 0x28);
  local_74 = *(short *)(local_20 + 0x2a);
  local_72 = *(short *)(local_20 + 0x2c);
  local_70 = *(undefined4 *)(local_20 + 0x30);
  local_6c = *(undefined4 *)(local_20 + 0x34);
  local_68 = *(undefined4 *)(local_20 + 0x38);
  local_64 = *(undefined4 *)(local_20 + 0x3c);
  cMyTrace::cMyTrace(local_60,
                     "virtual int Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0x5953,0);
  cMyTrace::operator()(local_60,"p2p statistics");
  uVar5 = local_7a;
  uVar4 = local_7e;
  uVar3 = local_82;
  uVar2 = local_86;
  iVar1 = local_95;
  iVar6 = (int)local_88;
  iVar7 = (int)local_8a;
  iVar8 = (int)local_8c;
  cMyTrace::cMyTrace(local_50,
                     "virtual int Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0x5954,0);
  cMyTrace::operator()
            (local_50,"num(%d) min(%d) max(%d), avg(%d), 100(%u), 200(%u), 300(%u), 400(%u)",iVar1,
             iVar8,iVar7,iVar6,uVar2,uVar3,uVar4,uVar5);
  cMyTrace::cMyTrace(local_40,
                     "virtual int Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0x595e,0);
  cMyTrace::operator()(local_40,"relay statistics");
  uVar5 = local_64;
  uVar4 = local_68;
  uVar3 = local_6c;
  uVar2 = local_70;
  iVar1 = local_91;
  iVar6 = (int)local_72;
  iVar7 = (int)local_74;
  iVar8 = (int)local_76;
  cMyTrace::cMyTrace(local_30,
                     "virtual int Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0x595f,0);
  cMyTrace::operator()
            (local_30,"num(%d) min(%d) max(%d), avg(%d), 100(%u), 200(%u), 300(%u), 400(%u)",iVar1,
             iVar8,iVar7,iVar6,uVar2,uVar3,uVar4,uVar5);
  this = (CStatisticServerProxy *)
         CServerProxyMgr<CStatisticServerProxy>::GetServerProxy(GlobalData::s_statistic_proxy_mgr,0)
  ;
  CStatisticServerProxy::SendPacket(this,(char *)local_9f,0x3f);
  return 0;
}
```
