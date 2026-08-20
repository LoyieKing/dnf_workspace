# send_gift_fatigue_item

`_ZN13EventClassify15CEventScriptMng22send_gift_fatigue_itemEP5CUserj`

`EventClassify::CEventScriptMng::send_gift_fatigue_item(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c1ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c1ea  _ZN13EventClassify15CEventScriptMng22send_gift_fatigue_itemEP5CUserj
#           EventClassify::CEventScriptMng::send_gift_fatigue_item(CUser*, unsigned int)
# range [0x0810c1ea, 0x0810c26f]
0810c1ea +0x00:  push   %ebp
0810c1eb +0x01:  mov    %esp,%ebp
0810c1ed +0x03:  sub    $0x28,%esp
0810c1f0 +0x06:  movl   $0x65,0x4(%esp)
0810c1f8 +0x0e:  mov    0x8(%ebp),%eax
0810c1fb +0x11:  mov    %eax,(%esp)
0810c1fe +0x14:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810c203 +0x19:  xor    $0x1,%eax
0810c206 +0x1c:  test   %al,%al
0810c208 +0x1e:  jne    0810c269 <+0x7f>
0810c20a +0x20:  movl   $0x65,0x4(%esp)
0810c212 +0x28:  mov    0x8(%ebp),%eax
0810c215 +0x2b:  mov    %eax,(%esp)
0810c218 +0x2e:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810c21d +0x33:  mov    %eax,-0xc(%ebp)
0810c220 +0x36:  cmpl   $0x0,-0xc(%ebp)
0810c224 +0x3a:  je     0810c26c <+0x82>
0810c226 +0x3c:  mov    0xc(%ebp),%eax
0810c229 +0x3f:  mov    %eax,0x4(%esp)
0810c22d +0x43:  mov    -0xc(%ebp),%eax
0810c230 +0x46:  mov    %eax,(%esp)
0810c233 +0x49:  call   08110756 <_ZN13EventClassify20CUsedFatigueGiveItem15verifyApplyUserEP5CUser>  ; EventClassify::CUsedFatigueGiveItem::verifyApplyUser(CUser*)
0810c238 +0x4e:  test   %al,%al
0810c23a +0x50:  je     0810c26d <+0x83>
0810c23c +0x52:  mov    0x10(%ebp),%eax
0810c23f +0x55:  mov    %eax,0x4(%esp)
0810c243 +0x59:  mov    0xc(%ebp),%eax
0810c246 +0x5c:  mov    %eax,(%esp)
0810c249 +0x5f:  call   08110e3a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x34c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x34c
0810c24e +0x64:  mov    0x10(%ebp),%eax
0810c251 +0x67:  mov    %eax,0x8(%esp)
0810c255 +0x6b:  mov    0xc(%ebp),%eax
0810c258 +0x6e:  mov    %eax,0x4(%esp)
0810c25c +0x72:  mov    -0xc(%ebp),%eax
0810c25f +0x75:  mov    %eax,(%esp)
0810c262 +0x78:  call   081105f6 <_ZN13EventClassify20CUsedFatigueGiveItem24sendEventItemFromFatigueEP5CUserj>  ; EventClassify::CUsedFatigueGiveItem::sendEventItemFromFatigue(CUser*, unsigned int)
0810c267 +0x7d:  jmp    0810c26d <+0x83>
0810c269 +0x7f:  nop
0810c26a +0x80:  jmp    0810c26d <+0x83>
0810c26c +0x82:  nop
0810c26d +0x83:  leave
0810c26e +0x84:  ret
0810c26f +0x85:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::send_gift_fatigue_item @ 0x810c1ea

/* EventClassify::CEventScriptMng::send_gift_fatigue_item(CUser*, unsigned int) */

void __thiscall
EventClassify::CEventScriptMng::send_gift_fatigue_item
          (CEventScriptMng *this,CUser *param_1,uint param_2)

{
  char cVar1;
  CUsedFatigueGiveItem *this_00;
  
  cVar1 = is_eventing(this,0x65);
  if (((cVar1 == '\x01') &&
      (this_00 = (CUsedFatigueGiveItem *)get_event_entity((int)this),
      this_00 != (CUsedFatigueGiveItem *)0x0)) &&
     (cVar1 = CUsedFatigueGiveItem::verifyApplyUser(this_00,param_1), cVar1 != '\0')) {
    CUser::IncCurCharacUsedGiftFatigueQuantity(param_1,param_2);
    CUsedFatigueGiveItem::sendEventItemFromFatigue(this_00,param_1,param_2);
  }
  return;
}
```
