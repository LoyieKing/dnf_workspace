# dispatch_sig

`_ZN33Inter_UpdatePurchaseCashItemBonus12dispatch_sigEP5CUserPci`

`Inter_UpdatePurchaseCashItemBonus::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_UpdatePurchaseCashItemBonus` | `0x084e42e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e42e0  _ZN33Inter_UpdatePurchaseCashItemBonus12dispatch_sigEP5CUserPci
#           Inter_UpdatePurchaseCashItemBonus::dispatch_sig(CUser*, char*, int)
# range [0x084e42e0, 0x084e4341]
084e42e0 +0x00:  push   %ebp
084e42e1 +0x01:  mov    %esp,%ebp
084e42e3 +0x03:  push   %ebx
084e42e4 +0x04:  sub    $0x24,%esp
084e42e7 +0x07:  mov    0xc(%ebp),%eax
084e42ea +0x0a:  mov    %eax,(%esp)
084e42ed +0x0d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e42f2 +0x12:  cmp    $0x2,%eax
084e42f5 +0x15:  setle  %al
084e42f8 +0x18:  test   %al,%al
084e42fa +0x1a:  je     084e4303 <+0x23>
084e42fc +0x1c:  mov    $0x0,%eax
084e4301 +0x21:  jmp    084e433c <+0x5c>
084e4303 +0x23:  mov    0x10(%ebp),%eax
084e4306 +0x26:  mov    %eax,-0xc(%ebp)
084e4309 +0x29:  mov    -0xc(%ebp),%eax
084e430c +0x2c:  mov    (%eax),%eax
084e430e +0x2e:  test   %eax,%eax
084e4310 +0x30:  je     084e4337 <+0x57>
084e4312 +0x32:  mov    -0xc(%ebp),%eax
084e4315 +0x35:  mov    (%eax),%ebx
084e4317 +0x37:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e431c +0x3c:  mov    %eax,(%esp)
084e431f +0x3f:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084e4324 +0x44:  mov    %ebx,0x8(%esp)
084e4328 +0x48:  mov    0xc(%ebp),%edx
084e432b +0x4b:  mov    %edx,0x4(%esp)
084e432f +0x4f:  mov    %eax,(%esp)
084e4332 +0x52:  call   0810c2d4 <_ZN13EventClassify15CEventScriptMng24send_purchase_bonus_mailEP5CUserj>  ; EventClassify::CEventScriptMng::send_purchase_bonus_mail(CUser*, unsigned int)
084e4337 +0x57:  mov    $0x0,%eax
084e433c +0x5c:  add    $0x24,%esp
084e433f +0x5f:  pop    %ebx
084e4340 +0x60:  pop    %ebp
084e4341 +0x61:  ret
```

## 反编译 C

```c
// Inter_UpdatePurchaseCashItemBonus::dispatch_sig @ 0x84e42e0

/* Inter_UpdatePurchaseCashItemBonus::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdatePurchaseCashItemBonus::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  CDataManager *this;
  CEventScriptMng *this_00;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar2) && (*(int *)param_3 != 0)) {
    uVar1 = *(uint *)param_3;
    this = (CDataManager *)G_CDataManager();
    this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
    EventClassify::CEventScriptMng::send_purchase_bonus_mail(this_00,(CUser *)param_2,uVar1);
  }
  return 0;
}
```
