# update_purchase_target_item_count

`_ZN13EventClassify15CEventScriptMng33update_purchase_target_item_countEP5CUserjP22stCeraShopIPGRequest_t`

`EventClassify::CEventScriptMng::update_purchase_target_item_count(CUser*, unsigned int, stCeraShopIPGRequest_t*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c270` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c270  _ZN13EventClassify15CEventScriptMng33update_purchase_target_item_countEP5CUserjP22stCeraShopIPGRequest_t
#           EventClassify::CEventScriptMng::update_purchase_target_item_count(CUser*, unsigned int, stCeraShopIPGRequest_t*)
# range [0x0810c270, 0x0810c2d3]
0810c270 +0x00:  push   %ebp
0810c271 +0x01:  mov    %esp,%ebp
0810c273 +0x03:  sub    $0x28,%esp
0810c276 +0x06:  movl   $0x19a,0x4(%esp)
0810c27e +0x0e:  mov    0x8(%ebp),%eax
0810c281 +0x11:  mov    %eax,(%esp)
0810c284 +0x14:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810c289 +0x19:  xor    $0x1,%eax
0810c28c +0x1c:  test   %al,%al
0810c28e +0x1e:  jne    0810c2ce <+0x5e>
0810c290 +0x20:  movl   $0x19a,0x4(%esp)
0810c298 +0x28:  mov    0x8(%ebp),%eax
0810c29b +0x2b:  mov    %eax,(%esp)
0810c29e +0x2e:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810c2a3 +0x33:  mov    %eax,-0xc(%ebp)
0810c2a6 +0x36:  cmpl   $0x0,-0xc(%ebp)
0810c2aa +0x3a:  je     0810c2d1 <+0x61>
0810c2ac +0x3c:  mov    0x14(%ebp),%eax
0810c2af +0x3f:  mov    %eax,0xc(%esp)
0810c2b3 +0x43:  mov    0x10(%ebp),%eax
0810c2b6 +0x46:  mov    %eax,0x8(%esp)
0810c2ba +0x4a:  mov    0xc(%ebp),%eax
0810c2bd +0x4d:  mov    %eax,0x4(%esp)
0810c2c1 +0x51:  mov    -0xc(%ebp),%eax
0810c2c4 +0x54:  mov    %eax,(%esp)
0810c2c7 +0x57:  call   0810f9ce <_ZN13EventClassify22CPurchaseCashItemBonus22updateTargetGoodsCountEP5CUserjP22stCeraShopIPGRequest_t>  ; EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount(CUser*, unsigned int, stCeraShopIPGRequest_t*)
0810c2cc +0x5c:  jmp    0810c2d2 <+0x62>
0810c2ce +0x5e:  nop
0810c2cf +0x5f:  jmp    0810c2d2 <+0x62>
0810c2d1 +0x61:  nop
0810c2d2 +0x62:  leave
0810c2d3 +0x63:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::update_purchase_target_item_count @ 0x810c270

/* EventClassify::CEventScriptMng::update_purchase_target_item_count(CUser*, unsigned int,
   stCeraShopIPGRequest_t*) */

void __thiscall
EventClassify::CEventScriptMng::update_purchase_target_item_count
          (CEventScriptMng *this,CUser *param_1,uint param_2,stCeraShopIPGRequest_t *param_3)

{
  char cVar1;
  CPurchaseCashItemBonus *this_00;
  
  cVar1 = is_eventing(this,0x19a);
  if ((cVar1 == '\x01') &&
     (this_00 = (CPurchaseCashItemBonus *)get_event_entity((int)this),
     this_00 != (CPurchaseCashItemBonus *)0x0)) {
    CPurchaseCashItemBonus::updateTargetGoodsCount(this_00,param_1,param_2,param_3);
  }
  return;
}
```
