# dispatch_sig

`_ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AssertManager` | `0x0821e1f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0821e1f4  _ZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)
# range [0x0821e1f4, 0x0821e473]
0821e1f4 +0x000:  push   %ebp
0821e1f5 +0x001:  mov    %esp,%ebp
0821e1f7 +0x003:  push   %ebx
0821e1f8 +0x004:  sub    $0x234,%esp
0821e1fe +0x00a:  lea    -0x21c(%ebp),%eax
0821e204 +0x010:  mov    %eax,(%esp)
0821e207 +0x013:  call   0822bd18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x13c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x13c2
0821e20c +0x018:  lea    -0x21c(%ebp),%eax
0821e212 +0x01e:  add    $0xa,%eax
0821e215 +0x021:  mov    %eax,0x4(%esp)
0821e219 +0x025:  mov    0x10(%ebp),%eax
0821e21c +0x028:  mov    %eax,(%esp)
0821e21f +0x02b:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0821e224 +0x030:  xor    $0x1,%eax
0821e227 +0x033:  test   %al,%al
0821e229 +0x035:  je     0821e254 <+0x60>
0821e22b +0x037:  movl   $0x0,0xc(%esp)
0821e233 +0x03f:  movl   $0x0,0x8(%esp)
0821e23b +0x047:  movl   $&_ZZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e243 +0x04f:  movl   $0xd275,(%esp)
0821e24a +0x056:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e24f +0x05b:  jmp    0821e46a <+0x276>
0821e254 +0x060:  mov    -0x212(%ebp),%eax
0821e25a +0x066:  cmp    $0xff,%eax
0821e25f +0x06b:  jle    0821e28a <+0x96>
0821e261 +0x06d:  movl   $0x0,0xc(%esp)
0821e269 +0x075:  movl   $0x0,0x8(%esp)
0821e271 +0x07d:  movl   $&_ZZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e279 +0x085:  movl   $0xd279,(%esp)
0821e280 +0x08c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e285 +0x091:  jmp    0821e46a <+0x276>
0821e28a +0x096:  mov    -0x212(%ebp),%eax
0821e290 +0x09c:  mov    %eax,0x8(%esp)
0821e294 +0x0a0:  lea    -0x21c(%ebp),%eax
0821e29a +0x0a6:  add    $0xe,%eax
0821e29d +0x0a9:  mov    %eax,0x4(%esp)
0821e2a1 +0x0ad:  mov    0x10(%ebp),%eax
0821e2a4 +0x0b0:  mov    %eax,(%esp)
0821e2a7 +0x0b3:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0821e2ac +0x0b8:  xor    $0x1,%eax
0821e2af +0x0bb:  test   %al,%al
0821e2b1 +0x0bd:  je     0821e2dc <+0xe8>
0821e2b3 +0x0bf:  movl   $0x0,0xc(%esp)
0821e2bb +0x0c7:  movl   $0x0,0x8(%esp)
0821e2c3 +0x0cf:  movl   $&_ZZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e2cb +0x0d7:  movl   $0xd27a,(%esp)
0821e2d2 +0x0de:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e2d7 +0x0e3:  jmp    0821e46a <+0x276>
0821e2dc +0x0e8:  lea    -0x21c(%ebp),%eax
0821e2e2 +0x0ee:  add    $0x10e,%eax
0821e2e7 +0x0f3:  mov    %eax,0x4(%esp)
0821e2eb +0x0f7:  mov    0x10(%ebp),%eax
0821e2ee +0x0fa:  mov    %eax,(%esp)
0821e2f1 +0x0fd:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0821e2f6 +0x102:  xor    $0x1,%eax
0821e2f9 +0x105:  test   %al,%al
0821e2fb +0x107:  je     0821e326 <+0x132>
0821e2fd +0x109:  movl   $0x0,0xc(%esp)
0821e305 +0x111:  movl   $0x0,0x8(%esp)
0821e30d +0x119:  movl   $&_ZZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e315 +0x121:  movl   $0xd27d,(%esp)
0821e31c +0x128:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e321 +0x12d:  jmp    0821e46a <+0x276>
0821e326 +0x132:  lea    -0x21c(%ebp),%eax
0821e32c +0x138:  add    $0x110,%eax
0821e331 +0x13d:  mov    %eax,0x4(%esp)
0821e335 +0x141:  mov    0x10(%ebp),%eax
0821e338 +0x144:  mov    %eax,(%esp)
0821e33b +0x147:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
0821e340 +0x14c:  xor    $0x1,%eax
0821e343 +0x14f:  test   %al,%al
0821e345 +0x151:  je     0821e370 <+0x17c>
0821e347 +0x153:  movl   $0x0,0xc(%esp)
0821e34f +0x15b:  movl   $0x0,0x8(%esp)
0821e357 +0x163:  movl   $&_ZZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e35f +0x16b:  movl   $0xd27f,(%esp)
0821e366 +0x172:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e36b +0x177:  jmp    0821e46a <+0x276>
0821e370 +0x17c:  mov    -0x10c(%ebp),%eax
0821e376 +0x182:  cmp    $0xff,%eax
0821e37b +0x187:  jg     0821e387 <+0x193>
0821e37d +0x189:  mov    -0x10c(%ebp),%eax
0821e383 +0x18f:  test   %eax,%eax
0821e385 +0x191:  jns    0821e3b0 <+0x1bc>
0821e387 +0x193:  movl   $0x0,0xc(%esp)
0821e38f +0x19b:  movl   $0x0,0x8(%esp)
0821e397 +0x1a3:  movl   $&_ZZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e39f +0x1ab:  movl   $0xd280,(%esp)
0821e3a6 +0x1b2:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e3ab +0x1b7:  jmp    0821e46a <+0x276>
0821e3b0 +0x1bc:  mov    -0x10c(%ebp),%eax
0821e3b6 +0x1c2:  test   %eax,%eax
0821e3b8 +0x1c4:  jle    0821e40b <+0x217>
0821e3ba +0x1c6:  mov    -0x10c(%ebp),%eax
0821e3c0 +0x1cc:  mov    %eax,0x8(%esp)
0821e3c4 +0x1d0:  lea    -0x21c(%ebp),%eax
0821e3ca +0x1d6:  add    $0x114,%eax
0821e3cf +0x1db:  mov    %eax,0x4(%esp)
0821e3d3 +0x1df:  mov    0x10(%ebp),%eax
0821e3d6 +0x1e2:  mov    %eax,(%esp)
0821e3d9 +0x1e5:  call   0858d3b2 <_ZN9PacketBuf10get_binaryEPci>  ; PacketBuf::get_binary(char*, int)
0821e3de +0x1ea:  xor    $0x1,%eax
0821e3e1 +0x1ed:  test   %al,%al
0821e3e3 +0x1ef:  je     0821e42e <+0x23a>
0821e3e5 +0x1f1:  movl   $0x0,0xc(%esp)
0821e3ed +0x1f9:  movl   $0x0,0x8(%esp)
0821e3f5 +0x201:  movl   $&_ZZN24Dispatcher_AssertManager12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0821e3fd +0x209:  movl   $0xd283,(%esp)
0821e404 +0x210:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
0821e409 +0x215:  jmp    0821e46a <+0x276>
0821e40b +0x217:  movl   $0x100,0x8(%esp)
0821e413 +0x21f:  movl   $0x0,0x4(%esp)
0821e41b +0x227:  lea    -0x21c(%ebp),%eax
0821e421 +0x22d:  add    $0x114,%eax
0821e426 +0x232:  mov    %eax,(%esp)
0821e429 +0x235:  call   0807dcc0 <_init+0x5b8>
0821e42e +0x23a:  lea    -0x21c(%ebp),%ebx
0821e434 +0x240:  mov    0xc(%ebp),%eax
0821e437 +0x243:  mov    %eax,(%esp)
0821e43a +0x246:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0821e43f +0x24b:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0821e445 +0x251:  mov    %eax,0x4(%esp)
0821e449 +0x255:  mov    %edx,(%esp)
0821e44c +0x258:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0821e451 +0x25d:  movl   $0x214,0x8(%esp)
0821e459 +0x265:  mov    %ebx,0x4(%esp)
0821e45d +0x269:  mov    %eax,(%esp)
0821e460 +0x26c:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0821e465 +0x271:  mov    $0x0,%eax
0821e46a +0x276:  add    $0x234,%esp
0821e470 +0x27c:  pop    %ebx
0821e471 +0x27d:  pop    %ebp
0821e472 +0x27e:  ret
0821e473 +0x27f:  nop
```

## 反编译 C

```c
// Dispatcher_AssertManager::dispatch_sig @ 0x821e1f4

/* Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_AssertManager::dispatch_sig
          (Dispatcher_AssertManager *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Assert_Manager_Info local_220 [10];
  int local_216;
  char acStack_212 [256];
  ushort uStack_112;
  int local_110;
  char acStack_10c [260];
  
  Packet_Assert_Manager_Info::Packet_Assert_Manager_Info(local_220);
  cVar1 = PacketBuf::get_int(param_2,&local_216);
  if (cVar1 == '\x01') {
    if (local_216 < 0x100) {
      cVar1 = PacketBuf::get_binary(param_2,acStack_212,local_216);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_2,&uStack_112);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_2,&local_110);
          if (cVar1 == '\x01') {
            if ((local_110 < 0x100) && (-1 < local_110)) {
              if (local_110 < 1) {
                memset(acStack_10c,0,0x100);
              }
              else {
                cVar1 = PacketBuf::get_binary(param_2,acStack_10c,local_110);
                if (cVar1 != '\x01') {
                  uVar2 = LineFunc(0xd283,
                                   "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                  return uVar2;
                }
              }
              uVar2 = CUser::GetServerGroup(param_1);
              this_00 = (CStatisticServerProxy *)
                        CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                                  (GlobalData::s_statistic_proxy_mgr,uVar2);
              CStatisticServerProxy::SendPacket(this_00,(char *)local_220,0x214);
              uVar2 = 0;
            }
            else {
              uVar2 = LineFunc(0xd280,
                               "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0xd27f,
                             "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0xd27d,
                           "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0xd27a,
                         "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0xd279,
                       "virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0xd275,"virtual int Dispatcher_AssertManager::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar2;
}
```
