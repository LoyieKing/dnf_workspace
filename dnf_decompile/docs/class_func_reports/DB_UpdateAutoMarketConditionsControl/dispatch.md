# dispatch

`_ZN36DB_UpdateAutoMarketConditionsControl8dispatchEiiP6Stream`

`DB_UpdateAutoMarketConditionsControl::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAutoMarketConditionsControl` | `0x08433bb8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08433bb8  _ZN36DB_UpdateAutoMarketConditionsControl8dispatchEiiP6Stream
#           DB_UpdateAutoMarketConditionsControl::dispatch(int, int, Stream*)
# range [0x08433bb8, 0x08433d6f]
08433bb8 +0x000:  push   %ebp
08433bb9 +0x001:  mov    %esp,%ebp
08433bbb +0x003:  push   %edi
08433bbc +0x004:  push   %esi
08433bbd +0x005:  push   %ebx
08433bbe +0x006:  sub    $0x8c,%esp
08433bc4 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08433bc9 +0x011:  movl   $0x0,0x8(%esp)
08433bd1 +0x019:  movl   $0x2,0x4(%esp)
08433bd9 +0x021:  mov    %eax,(%esp)
08433bdc +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08433be1 +0x029:  mov    %eax,-0x20(%ebp)
08433be4 +0x02c:  mov    0x14(%ebp),%eax
08433be7 +0x02f:  mov    %eax,(%esp)
08433bea +0x032:  call   08453074 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5c8a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5c8a
08433bef +0x037:  mov    %eax,-0x1c(%ebp)
08433bf2 +0x03a:  mov    -0x1c(%ebp),%eax
08433bf5 +0x03d:  mov    0x28(%eax),%eax
08433bf8 +0x040:  mov    %eax,-0x40(%ebp)
08433bfb +0x043:  mov    -0x1c(%ebp),%eax
08433bfe +0x046:  mov    0x24(%eax),%edi
08433c01 +0x049:  mov    -0x1c(%ebp),%eax
08433c04 +0x04c:  mov    0x20(%eax),%esi
08433c07 +0x04f:  mov    -0x1c(%ebp),%eax
08433c0a +0x052:  mov    0x10(%eax),%ecx
08433c0d +0x055:  mov    0x14(%eax),%ebx
08433c10 +0x058:  mov    -0x1c(%ebp),%eax
08433c13 +0x05b:  mov    %eax,-0x50(%ebp)
08433c16 +0x05e:  mov    -0x50(%ebp),%edx
08433c19 +0x061:  mov    0x18(%edx),%eax
08433c1c +0x064:  mov    0x1c(%edx),%edx
08433c1f +0x067:  mov    %eax,-0x50(%ebp)
08433c22 +0x06a:  mov    %edx,-0x4c(%ebp)
08433c25 +0x06d:  mov    -0x40(%ebp),%eax
08433c28 +0x070:  mov    %eax,0x20(%esp)
08433c2c +0x074:  mov    %edi,0x1c(%esp)
08433c30 +0x078:  mov    %esi,0x18(%esp)
08433c34 +0x07c:  mov    %ecx,0x10(%esp)
08433c38 +0x080:  mov    %ebx,0x14(%esp)
08433c3c +0x084:  mov    -0x50(%ebp),%edx
08433c3f +0x087:  mov    -0x4c(%ebp),%ecx
08433c42 +0x08a:  mov    %edx,0x8(%esp)
08433c46 +0x08e:  mov    %ecx,0xc(%esp)
08433c4a +0x092:  movl   $"upDate  auto_market_condition_ctrl_daily set optimum_gold_supply=%qd, over_gold=%qd, gold_phase=%d, item_phase=%d, durability_phase=%d where occ_time = CURDATE()",0x4(%esp)
08433c52 +0x09a:  mov    -0x20(%ebp),%eax
08433c55 +0x09d:  mov    %eax,(%esp)
08433c58 +0x0a0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08433c5d +0x0a5:  movl   $0x1,0x4(%esp)
08433c65 +0x0ad:  mov    -0x20(%ebp),%eax
08433c68 +0x0b0:  mov    %eax,(%esp)
08433c6b +0x0b3:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08433c70 +0x0b8:  xor    $0x1,%eax
08433c73 +0x0bb:  test   %al,%al
08433c75 +0x0bd:  je     08433c81 <+0xc9>
08433c77 +0x0bf:  mov    $0x0,%eax
08433c7c +0x0c4:  jmp    08433d65 <+0x1ad>
08433c81 +0x0c9:  mov    -0x20(%ebp),%eax
08433c84 +0x0cc:  mov    %eax,(%esp)
08433c87 +0x0cf:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08433c8c +0x0d4:  or     %edx,%eax
08433c8e +0x0d6:  test   %eax,%eax
08433c90 +0x0d8:  sete   %al
08433c93 +0x0db:  test   %al,%al
08433c95 +0x0dd:  je     08433d60 <+0x1a8>
08433c9b +0x0e3:  mov    -0x1c(%ebp),%eax
08433c9e +0x0e6:  mov    0x28(%eax),%eax
08433ca1 +0x0e9:  mov    %eax,-0x3c(%ebp)
08433ca4 +0x0ec:  mov    -0x1c(%ebp),%eax
08433ca7 +0x0ef:  mov    0x24(%eax),%eax
08433caa +0x0f2:  mov    %eax,-0x38(%ebp)
08433cad +0x0f5:  mov    -0x1c(%ebp),%eax
08433cb0 +0x0f8:  mov    0x20(%eax),%eax
08433cb3 +0x0fb:  mov    %eax,-0x34(%ebp)
08433cb6 +0x0fe:  mov    -0x1c(%ebp),%eax
08433cb9 +0x101:  mov    0x10(%eax),%edx
08433cbc +0x104:  mov    0x14(%eax),%ecx
08433cbf +0x107:  mov    %edx,-0x30(%ebp)
08433cc2 +0x10a:  mov    %ecx,-0x2c(%ebp)
08433cc5 +0x10d:  mov    -0x1c(%ebp),%eax
08433cc8 +0x110:  mov    0x18(%eax),%esi
08433ccb +0x113:  mov    0x1c(%eax),%edi
08433cce +0x116:  mov    -0x1c(%ebp),%eax
08433cd1 +0x119:  mov    0x8(%eax),%ecx
08433cd4 +0x11c:  mov    0xc(%eax),%ebx
08433cd7 +0x11f:  mov    -0x1c(%ebp),%eax
08433cda +0x122:  mov    %eax,-0x50(%ebp)
08433cdd +0x125:  mov    -0x50(%ebp),%edx
08433ce0 +0x128:  mov    (%edx),%eax
08433ce2 +0x12a:  mov    0x4(%edx),%edx
08433ce5 +0x12d:  mov    %eax,-0x50(%ebp)
08433ce8 +0x130:  mov    %edx,-0x4c(%ebp)
08433ceb +0x133:  mov    -0x3c(%ebp),%eax
08433cee +0x136:  mov    %eax,0x30(%esp)
08433cf2 +0x13a:  mov    -0x38(%ebp),%edx
08433cf5 +0x13d:  mov    %edx,0x2c(%esp)
08433cf9 +0x141:  mov    -0x34(%ebp),%eax
08433cfc +0x144:  mov    %eax,0x28(%esp)
08433d00 +0x148:  mov    -0x30(%ebp),%eax
08433d03 +0x14b:  mov    -0x2c(%ebp),%edx
08433d06 +0x14e:  mov    %eax,0x20(%esp)
08433d0a +0x152:  mov    %edx,0x24(%esp)
08433d0e +0x156:  mov    %esi,0x18(%esp)
08433d12 +0x15a:  mov    %edi,0x1c(%esp)
08433d16 +0x15e:  mov    %ecx,0x10(%esp)
08433d1a +0x162:  mov    %ebx,0x14(%esp)
08433d1e +0x166:  mov    -0x50(%ebp),%edx
08433d21 +0x169:  mov    -0x4c(%ebp),%ecx
08433d24 +0x16c:  mov    %edx,0x8(%esp)
08433d28 +0x170:  mov    %ecx,0xc(%esp)
08433d2c +0x174:  movl   $"inSert into auto_market_condition_ctrl_daily(occ_time, total_gold, auction_gold, optimum_gold_supply, over_gold, gold_phase, item_phase, durability_phase) values(CURDATE(),%qd,%qd,%qd,%qd,%d,%d,%d)",0x4(%esp)
08433d34 +0x17c:  mov    -0x20(%ebp),%eax
08433d37 +0x17f:  mov    %eax,(%esp)
08433d3a +0x182:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08433d3f +0x187:  movl   $0x1,0x4(%esp)
08433d47 +0x18f:  mov    -0x20(%ebp),%eax
08433d4a +0x192:  mov    %eax,(%esp)
08433d4d +0x195:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08433d52 +0x19a:  xor    $0x1,%eax
08433d55 +0x19d:  test   %al,%al
08433d57 +0x19f:  je     08433d60 <+0x1a8>
08433d59 +0x1a1:  mov    $0x0,%eax
08433d5e +0x1a6:  jmp    08433d65 <+0x1ad>
08433d60 +0x1a8:  mov    $0x1,%eax
08433d65 +0x1ad:  add    $0x8c,%esp
08433d6b +0x1b3:  pop    %ebx
08433d6c +0x1b4:  pop    %esi
08433d6d +0x1b5:  pop    %edi
08433d6e +0x1b6:  pop    %ebp
08433d6f +0x1b7:  ret
```

## 反编译 C

```c
// DB_UpdateAutoMarketConditionsControl::dispatch @ 0x8433bb8

/* DB_UpdateAutoMarketConditionsControl::dispatch(int, int, Stream*) */

undefined4 DB_UpdateAutoMarketConditionsControl::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROL *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_AUTO_MARKET_CONDITIONS_CONTROL>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate  auto_market_condition_ctrl_daily set optimum_gold_supply=%qd, over_gold=%qd, gold_phase=%d, item_phase=%d, durability_phase=%d where occ_time = CURDATE()"
                   ,*(undefined4 *)(pSVar2 + 0x18),*(undefined4 *)(pSVar2 + 0x1c),
                   *(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)(pSVar2 + 0x14),
                   *(undefined4 *)(pSVar2 + 0x20),*(undefined4 *)(pSVar2 + 0x24),
                   *(undefined4 *)(pSVar2 + 0x28));
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,
                       "inSert into auto_market_condition_ctrl_daily(occ_time, total_gold, auction_gold, optimum_gold_supply, over_gold, gold_phase, item_phase, durability_phase) values(CURDATE(),%qd,%qd,%qd,%qd,%d,%d,%d)"
                       ,*(undefined4 *)pSVar2,*(undefined4 *)(pSVar2 + 4),
                       *(undefined4 *)(pSVar2 + 8),*(undefined4 *)(pSVar2 + 0xc),
                       *(undefined4 *)(pSVar2 + 0x18),*(undefined4 *)(pSVar2 + 0x1c),
                       *(undefined4 *)(pSVar2 + 0x10),*(undefined4 *)(pSVar2 + 0x14),
                       *(undefined4 *)(pSVar2 + 0x20),*(undefined4 *)(pSVar2 + 0x24),
                       *(undefined4 *)(pSVar2 + 0x28));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
