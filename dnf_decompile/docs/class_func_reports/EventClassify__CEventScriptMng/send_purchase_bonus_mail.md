# send_purchase_bonus_mail

`_ZN13EventClassify15CEventScriptMng24send_purchase_bonus_mailEP5CUserj`

`EventClassify::CEventScriptMng::send_purchase_bonus_mail(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c2d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c2d4  _ZN13EventClassify15CEventScriptMng24send_purchase_bonus_mailEP5CUserj
#           EventClassify::CEventScriptMng::send_purchase_bonus_mail(CUser*, unsigned int)
# range [0x0810c2d4, 0x0810c339]
0810c2d4 +0x00:  push   %ebp
0810c2d5 +0x01:  mov    %esp,%ebp
0810c2d7 +0x03:  sub    $0x28,%esp
0810c2da +0x06:  movl   $0x19a,0x4(%esp)
0810c2e2 +0x0e:  mov    0x8(%ebp),%eax
0810c2e5 +0x11:  mov    %eax,(%esp)
0810c2e8 +0x14:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810c2ed +0x19:  xor    $0x1,%eax
0810c2f0 +0x1c:  test   %al,%al
0810c2f2 +0x1e:  je     0810c2fb <+0x27>
0810c2f4 +0x20:  mov    $0x0,%eax
0810c2f9 +0x25:  jmp    0810c337 <+0x63>
0810c2fb +0x27:  movl   $0x19a,0x4(%esp)
0810c303 +0x2f:  mov    0x8(%ebp),%eax
0810c306 +0x32:  mov    %eax,(%esp)
0810c309 +0x35:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810c30e +0x3a:  mov    %eax,-0xc(%ebp)
0810c311 +0x3d:  cmpl   $0x0,-0xc(%ebp)
0810c315 +0x41:  jne    0810c31e <+0x4a>
0810c317 +0x43:  mov    $0x0,%eax
0810c31c +0x48:  jmp    0810c337 <+0x63>
0810c31e +0x4a:  mov    0x10(%ebp),%eax
0810c321 +0x4d:  mov    %eax,0x8(%esp)
0810c325 +0x51:  mov    0xc(%ebp),%eax
0810c328 +0x54:  mov    %eax,0x4(%esp)
0810c32c +0x58:  mov    -0xc(%ebp),%eax
0810c32f +0x5b:  mov    %eax,(%esp)
0810c332 +0x5e:  call   0810fb34 <_ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri>  ; EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward(CUser*, int)
0810c337 +0x63:  leave
0810c338 +0x64:  ret
0810c339 +0x65:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::send_purchase_bonus_mail @ 0x810c2d4

/* EventClassify::CEventScriptMng::send_purchase_bonus_mail(CUser*, unsigned int) */

undefined4 __thiscall
EventClassify::CEventScriptMng::send_purchase_bonus_mail
          (CEventScriptMng *this,CUser *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  CPurchaseCashItemBonus *this_00;
  
  cVar1 = is_eventing(this,0x19a);
  if (cVar1 == '\x01') {
    this_00 = (CPurchaseCashItemBonus *)get_event_entity((int)this);
    if (this_00 == (CPurchaseCashItemBonus *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CPurchaseCashItemBonus::sendPurchaseBonusReward(this_00,param_1,param_2);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
