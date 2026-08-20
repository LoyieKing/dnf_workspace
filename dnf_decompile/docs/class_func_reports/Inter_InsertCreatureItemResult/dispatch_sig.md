# dispatch_sig

`_ZN30Inter_InsertCreatureItemResult12dispatch_sigEP5CUserPci`

`Inter_InsertCreatureItemResult::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_InsertCreatureItemResult` | `0x084d027e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d027e  _ZN30Inter_InsertCreatureItemResult12dispatch_sigEP5CUserPci
#           Inter_InsertCreatureItemResult::dispatch_sig(CUser*, char*, int)
# range [0x084d027e, 0x084d02ed]
084d027e +0x00:  push   %ebp
084d027f +0x01:  mov    %esp,%ebp
084d0281 +0x03:  sub    $0x28,%esp
084d0284 +0x06:  mov    0x10(%ebp),%eax
084d0287 +0x09:  mov    %eax,-0xc(%ebp)
084d028a +0x0c:  mov    0xc(%ebp),%eax
084d028d +0x0f:  mov    %eax,(%esp)
084d0290 +0x12:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084d0295 +0x17:  test   %eax,%eax
084d0297 +0x19:  je     084d02ae <+0x30>
084d0299 +0x1b:  mov    0xc(%ebp),%eax
084d029c +0x1e:  mov    %eax,(%esp)
084d029f +0x21:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d02a4 +0x26:  mov    -0xc(%ebp),%edx
084d02a7 +0x29:  mov    0x48(%edx),%edx
084d02aa +0x2c:  cmp    %edx,%eax
084d02ac +0x2e:  je     084d02b5 <+0x37>
084d02ae +0x30:  mov    $0x1,%eax
084d02b3 +0x35:  jmp    084d02ba <+0x3c>
084d02b5 +0x37:  mov    $0x0,%eax
084d02ba +0x3c:  test   %al,%al
084d02bc +0x3e:  je     084d02c5 <+0x47>
084d02be +0x40:  mov    $0x2e45,%eax
084d02c3 +0x45:  jmp    084d02ec <+0x6e>
084d02c5 +0x47:  mov    0xc(%ebp),%eax
084d02c8 +0x4a:  mov    %eax,(%esp)
084d02cb +0x4d:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
084d02d0 +0x52:  mov    %eax,(%esp)
084d02d3 +0x55:  call   080dd568 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xb1>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xb1
084d02d8 +0x5a:  mov    -0xc(%ebp),%edx
084d02db +0x5d:  mov    %edx,0x4(%esp)
084d02df +0x61:  mov    %eax,(%esp)
084d02e2 +0x64:  call   0833b38c <_ZN13user_creature12CCreatureMgr24InsertCreatureItemResultEP17SIG_CREATURE_ITEM>  ; user_creature::CCreatureMgr::InsertCreatureItemResult(SIG_CREATURE_ITEM*)
084d02e7 +0x69:  mov    $0x0,%eax
084d02ec +0x6e:  leave
084d02ed +0x6f:  ret
```

## 反编译 C

```c
// Inter_InsertCreatureItemResult::dispatch_sig @ 0x84d027e

/* Inter_InsertCreatureItemResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_InsertCreatureItemResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CInventory *this;
  CCreatureMgr *this_00;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar2 != 0) {
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar2 == *(int *)(param_3 + 0x48)) {
      bVar1 = false;
      goto LAB_084d02ba;
    }
  }
  bVar1 = true;
LAB_084d02ba:
  if (bVar1) {
    uVar3 = 0x2e45;
  }
  else {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this);
    user_creature::CCreatureMgr::InsertCreatureItemResult(this_00,(SIG_CREATURE_ITEM *)param_3);
    uVar3 = 0;
  }
  return uVar3;
}
```
