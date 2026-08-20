# execute

`_ZN11game_master15NpcLimitBuyItem7executeEv`

`game_master::NpcLimitBuyItem::execute()`

| 类 | 地址 |
|---|---|
| `game_master::NpcLimitBuyItem` | `0x084b1f28` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b1f28  _ZN11game_master15NpcLimitBuyItem7executeEv
#           game_master::NpcLimitBuyItem::execute()
# range [0x084b1f28, 0x084b1f8b]
084b1f28 +0x00:  push   %ebp
084b1f29 +0x01:  mov    %esp,%ebp
084b1f2b +0x03:  push   %ebx
084b1f2c +0x04:  sub    $0x24,%esp
084b1f2f +0x07:  mov    0x8(%ebp),%eax
084b1f32 +0x0a:  mov    %eax,(%esp)
084b1f35 +0x0d:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b1f3a +0x12:  mov    %eax,-0xc(%ebp)
084b1f3d +0x15:  cmpl   $0x0,-0xc(%ebp)
084b1f41 +0x19:  je     084b1f84 <+0x5c>
084b1f43 +0x1b:  lea    -0x16(%ebp),%eax
084b1f46 +0x1e:  mov    %eax,(%esp)
084b1f49 +0x21:  call   084b41fe <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x2b1>  ; global constructors keyed to game_master::CMacro::Reset()+0x2b1
084b1f4e +0x26:  lea    -0x16(%ebp),%ebx
084b1f51 +0x29:  mov    -0xc(%ebp),%eax
084b1f54 +0x2c:  mov    %eax,(%esp)
084b1f57 +0x2f:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084b1f5c +0x34:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%edx
084b1f62 +0x3a:  mov    %eax,0x4(%esp)
084b1f66 +0x3e:  mov    %edx,(%esp)
084b1f69 +0x41:  call   0811208a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x159c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x159c
084b1f6e +0x46:  movl   $0xa,0x8(%esp)
084b1f76 +0x4e:  mov    %ebx,0x4(%esp)
084b1f7a +0x52:  mov    %eax,(%esp)
084b1f7d +0x55:  call   08470df4 <_ZN19CMonitorServerProxy10SendPacketEPci>  ; CMonitorServerProxy::SendPacket(char*, int)
084b1f82 +0x5a:  jmp    084b1f85 <+0x5d>
084b1f84 +0x5c:  nop
084b1f85 +0x5d:  add    $0x24,%esp
084b1f88 +0x60:  pop    %ebx
084b1f89 +0x61:  pop    %ebp
084b1f8a +0x62:  ret
084b1f8b +0x63:  nop
```

## 反编译 C

```c
// game_master::NpcLimitBuyItem::execute @ 0x84b1f28

/* game_master::NpcLimitBuyItem::execute() */

void __thiscall game_master::NpcLimitBuyItem::execute(NpcLimitBuyItem *this)

{
  undefined4 uVar1;
  CMonitorServerProxy *this_00;
  LimitNpcBuyItemRequestInfo local_1a [10];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (local_10 != (CUser *)0x0) {
    LimitNpcBuyItemRequestInfo::LimitNpcBuyItemRequestInfo(local_1a);
    uVar1 = CUser::GetServerGroup(local_10);
    this_00 = (CMonitorServerProxy *)
              CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                        (GlobalData::s_monitor_proxy_mgr,uVar1);
    CMonitorServerProxy::SendPacket(this_00,(char *)local_1a,10);
  }
  return;
}
```
