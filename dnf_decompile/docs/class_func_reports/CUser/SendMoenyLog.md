# SendMoenyLog

`_ZN5CUser12SendMoenyLogEv`

`CUser::SendMoenyLog()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868f472` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868f472  _ZN5CUser12SendMoenyLogEv
#           CUser::SendMoenyLog()
# range [0x0868f472, 0x0868f5c9]
0868f472 +0x000:  push   %ebp
0868f473 +0x001:  mov    %esp,%ebp
0868f475 +0x003:  push   %ebx
0868f476 +0x004:  sub    $0x44,%esp
0868f479 +0x007:  mov    0x8(%ebp),%eax
0868f47c +0x00a:  mov    %eax,(%esp)
0868f47f +0x00d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0868f484 +0x012:  test   %eax,%eax
0868f486 +0x014:  setne  %al
0868f489 +0x017:  test   %al,%al
0868f48b +0x019:  je     0868f5b9 <+0x147>
0868f491 +0x01f:  movl   $0x0,-0xc(%ebp)
0868f498 +0x026:  jmp    0868f591 <+0x11f>
0868f49d +0x02b:  mov    -0xc(%ebp),%edx
0868f4a0 +0x02e:  mov    0x8(%ebp),%ecx
0868f4a3 +0x031:  mov    %edx,%eax
0868f4a5 +0x033:  add    %eax,%eax
0868f4a7 +0x035:  add    %edx,%eax
0868f4a9 +0x037:  shl    $0x2,%eax
0868f4ac +0x03a:  lea    (%ecx,%eax,1),%eax
0868f4af +0x03d:  add    $0x79674,%eax
0868f4b4 +0x042:  mov    (%eax),%eax
0868f4b6 +0x044:  test   %eax,%eax
0868f4b8 +0x046:  jne    0868f4db <+0x69>
0868f4ba +0x048:  mov    -0xc(%ebp),%edx
0868f4bd +0x04b:  mov    0x8(%ebp),%ecx
0868f4c0 +0x04e:  mov    %edx,%eax
0868f4c2 +0x050:  add    %eax,%eax
0868f4c4 +0x052:  add    %edx,%eax
0868f4c6 +0x054:  shl    $0x2,%eax
0868f4c9 +0x057:  lea    (%ecx,%eax,1),%eax
0868f4cc +0x05a:  add    $0x79678,%eax
0868f4d1 +0x05f:  mov    (%eax),%eax
0868f4d3 +0x061:  test   %eax,%eax
0868f4d5 +0x063:  je     0868f58c <+0x11a>
0868f4db +0x069:  lea    -0x2a(%ebp),%eax
0868f4de +0x06c:  mov    %eax,(%esp)
0868f4e1 +0x06f:  call   08694602 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xe57>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xe57
0868f4e6 +0x074:  mov    0x8(%ebp),%eax
0868f4e9 +0x077:  mov    %eax,(%esp)
0868f4ec +0x07a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0868f4f1 +0x07f:  mov    %eax,-0x20(%ebp)
0868f4f4 +0x082:  mov    -0xc(%ebp),%edx
0868f4f7 +0x085:  mov    0x8(%ebp),%ecx
0868f4fa +0x088:  mov    %edx,%eax
0868f4fc +0x08a:  add    %eax,%eax
0868f4fe +0x08c:  add    %edx,%eax
0868f500 +0x08e:  shl    $0x2,%eax
0868f503 +0x091:  lea    (%ecx,%eax,1),%eax
0868f506 +0x094:  add    $0x79674,%eax
0868f50b +0x099:  mov    (%eax),%eax
0868f50d +0x09b:  mov    %eax,-0x1c(%ebp)
0868f510 +0x09e:  mov    -0xc(%ebp),%edx
0868f513 +0x0a1:  mov    0x8(%ebp),%ecx
0868f516 +0x0a4:  mov    %edx,%eax
0868f518 +0x0a6:  add    %eax,%eax
0868f51a +0x0a8:  add    %edx,%eax
0868f51c +0x0aa:  shl    $0x2,%eax
0868f51f +0x0ad:  lea    (%ecx,%eax,1),%eax
0868f522 +0x0b0:  add    $0x79678,%eax
0868f527 +0x0b5:  mov    (%eax),%eax
0868f529 +0x0b7:  mov    %eax,-0x18(%ebp)
0868f52c +0x0ba:  mov    0x8(%ebp),%eax
0868f52f +0x0bd:  mov    %eax,(%esp)
0868f532 +0x0c0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0868f537 +0x0c5:  mov    %eax,-0x14(%ebp)
0868f53a +0x0c8:  mov    -0xc(%ebp),%edx
0868f53d +0x0cb:  mov    0x8(%ebp),%ecx
0868f540 +0x0ce:  mov    %edx,%eax
0868f542 +0x0d0:  add    %eax,%eax
0868f544 +0x0d2:  add    %edx,%eax
0868f546 +0x0d4:  shl    $0x2,%eax
0868f549 +0x0d7:  lea    (%ecx,%eax,1),%eax
0868f54c +0x0da:  add    $0x7967c,%eax
0868f551 +0x0df:  mov    (%eax),%eax
0868f553 +0x0e1:  mov    %eax,-0x10(%ebp)
0868f556 +0x0e4:  lea    -0x2a(%ebp),%ebx
0868f559 +0x0e7:  mov    0x8(%ebp),%eax
0868f55c +0x0ea:  mov    %eax,(%esp)
0868f55f +0x0ed:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
0868f564 +0x0f2:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
0868f56a +0x0f8:  mov    %eax,0x4(%esp)
0868f56e +0x0fc:  mov    %edx,(%esp)
0868f571 +0x0ff:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0868f576 +0x104:  movl   $0x1e,0x8(%esp)
0868f57e +0x10c:  mov    %ebx,0x4(%esp)
0868f582 +0x110:  mov    %eax,(%esp)
0868f585 +0x113:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0868f58a +0x118:  jmp    0868f58d <+0x11b>
0868f58c +0x11a:  nop
0868f58d +0x11b:  addl   $0x1,-0xc(%ebp)
0868f591 +0x11f:  cmpl   $0x6,-0xc(%ebp)
0868f595 +0x123:  jg     0868f5ac <+0x13a>
0868f597 +0x125:  mov    0x8(%ebp),%eax
0868f59a +0x128:  mov    0x796c8(%eax),%eax
0868f5a0 +0x12e:  cmp    -0xc(%ebp),%eax
0868f5a3 +0x131:  jl     0868f5ac <+0x13a>
0868f5a5 +0x133:  mov    $0x1,%eax
0868f5aa +0x138:  jmp    0868f5b1 <+0x13f>
0868f5ac +0x13a:  mov    $0x0,%eax
0868f5b1 +0x13f:  test   %al,%al
0868f5b3 +0x141:  jne    0868f49d <+0x2b>
0868f5b9 +0x147:  mov    0x8(%ebp),%eax
0868f5bc +0x14a:  mov    %eax,(%esp)
0868f5bf +0x14d:  call   08697182 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x39d7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x39d7
0868f5c4 +0x152:  add    $0x44,%esp
0868f5c7 +0x155:  pop    %ebx
0868f5c8 +0x156:  pop    %ebp
0868f5c9 +0x157:  ret
```

## 反编译 C

```c
// CUser::SendMoenyLog @ 0x868f472

/* CUser::SendMoenyLog() */

void __thiscall CUser::SendMoenyLog(CUser *this)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CStatisticServerProxy *this_00;
  MoneyLogPacket local_2e [10];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar2 != 0) {
    local_10 = 0;
    while( true ) {
      if ((local_10 < 7) && (local_10 <= *(int *)(this + 0x796c8))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
      if ((*(int *)(this + local_10 * 0xc + 0x79674) != 0) ||
         (*(int *)(this + local_10 * 0xc + 0x79678) != 0)) {
        MoneyLogPacket::MoneyLogPacket(local_2e);
        local_24 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
        local_20 = *(undefined4 *)(this + local_10 * 0xc + 0x79674);
        local_1c = *(undefined4 *)(this + local_10 * 0xc + 0x79678);
        local_18 = get_acc_id(this);
        local_14 = *(undefined4 *)(this + local_10 * 0xc + 0x7967c);
        uVar3 = GetServerGroup(this);
        this_00 = (CStatisticServerProxy *)
                  CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                            (GlobalData::s_statistic_proxy_mgr,uVar3);
        CStatisticServerProxy::SendPacket(this_00,(char *)local_2e,0x1e);
      }
      local_10 = local_10 + 1;
    }
  }
  resetMoneyLog(this);
  return;
}
```
