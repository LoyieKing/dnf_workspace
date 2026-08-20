# createCharacInvenReward

`_ZN11eventReward23createCharacInvenRewardEP10Inven_Item9rewardKeyi`

`eventReward::createCharacInvenReward(Inven_Item*, rewardKey, int)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080f0270` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f0270  _ZN11eventReward23createCharacInvenRewardEP10Inven_Item9rewardKeyi
#           eventReward::createCharacInvenReward(Inven_Item*, rewardKey, int)
# range [0x080f0270, 0x080f033b]
080f0270 +0x00:  push   %ebp
080f0271 +0x01:  mov    %esp,%ebp
080f0273 +0x03:  sub    $0x38,%esp
080f0276 +0x06:  movb   $0x0,-0x9(%ebp)
080f027a +0x0a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f027f +0x0f:  lea    0xb628(%eax),%edx
080f0285 +0x15:  mov    0x18(%ebp),%eax
080f0288 +0x18:  mov    %eax,0x10(%esp)
080f028c +0x1c:  mov    0x10(%ebp),%eax
080f028f +0x1f:  mov    %eax,0x8(%esp)
080f0293 +0x23:  movzbl 0x14(%ebp),%eax
080f0297 +0x27:  mov    %al,0xc(%esp)
080f029b +0x2b:  mov    0xc(%ebp),%eax
080f029e +0x2e:  mov    %eax,0x4(%esp)
080f02a2 +0x32:  mov    %edx,(%esp)
080f02a5 +0x35:  call   080f0408 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi>  ; eventReward::rewardWriteUserInven(Inven_Item*, rewardKey, int)
080f02aa +0x3a:  test   %al,%al
080f02ac +0x3c:  je     080f02b2 <+0x42>
080f02ae +0x3e:  movb   $0x1,-0x9(%ebp)
080f02b2 +0x42:  movb   $0x0,0x11(%ebp)
080f02b6 +0x46:  movb   $0x1,0x14(%ebp)
080f02ba +0x4a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f02bf +0x4f:  lea    0xb628(%eax),%edx
080f02c5 +0x55:  mov    0x18(%ebp),%eax
080f02c8 +0x58:  mov    %eax,0x10(%esp)
080f02cc +0x5c:  mov    0x10(%ebp),%eax
080f02cf +0x5f:  mov    %eax,0x8(%esp)
080f02d3 +0x63:  movzbl 0x14(%ebp),%eax
080f02d7 +0x67:  mov    %al,0xc(%esp)
080f02db +0x6b:  mov    0xc(%ebp),%eax
080f02de +0x6e:  mov    %eax,0x4(%esp)
080f02e2 +0x72:  mov    %edx,(%esp)
080f02e5 +0x75:  call   080f0408 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi>  ; eventReward::rewardWriteUserInven(Inven_Item*, rewardKey, int)
080f02ea +0x7a:  test   %al,%al
080f02ec +0x7c:  je     080f02f2 <+0x82>
080f02ee +0x7e:  movb   $0x1,-0x9(%ebp)
080f02f2 +0x82:  movb   $0xb,0x10(%ebp)
080f02f6 +0x86:  movb   $0x0,0x11(%ebp)
080f02fa +0x8a:  movb   $0x1,0x14(%ebp)
080f02fe +0x8e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f0303 +0x93:  lea    0xb628(%eax),%edx
080f0309 +0x99:  mov    0x18(%ebp),%eax
080f030c +0x9c:  mov    %eax,0x10(%esp)
080f0310 +0xa0:  mov    0x10(%ebp),%eax
080f0313 +0xa3:  mov    %eax,0x8(%esp)
080f0317 +0xa7:  movzbl 0x14(%ebp),%eax
080f031b +0xab:  mov    %al,0xc(%esp)
080f031f +0xaf:  mov    0xc(%ebp),%eax
080f0322 +0xb2:  mov    %eax,0x4(%esp)
080f0326 +0xb6:  mov    %edx,(%esp)
080f0329 +0xb9:  call   080f0408 <_ZN11eventReward20rewardWriteUserInvenEP10Inven_Item9rewardKeyi>  ; eventReward::rewardWriteUserInven(Inven_Item*, rewardKey, int)
080f032e +0xbe:  test   %al,%al
080f0330 +0xc0:  je     080f0336 <+0xc6>
080f0332 +0xc2:  movb   $0x1,-0x9(%ebp)
080f0336 +0xc6:  movzbl -0x9(%ebp),%eax
080f033a +0xca:  leave
080f033b +0xcb:  ret
```

## 反编译 C

```c
// eventReward::createCharacInvenReward @ 0x80f0270

/* eventReward::createCharacInvenReward(Inven_Item*, rewardKey, int) */

bool eventReward::createCharacInvenReward
               (undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4,
               undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool local_d;
  
  iVar3 = G_CDataManager();
  cVar1 = rewardWriteUserInven(iVar3 + 0xb628,param_2,param_3,param_4,param_5);
  param_3 = param_3 & 0xff;
  iVar3 = G_CDataManager();
  cVar2 = rewardWriteUserInven(iVar3 + 0xb628,param_2,param_3,1,param_5);
  local_d = cVar2 != '\0' || cVar1 != '\0';
  iVar3 = G_CDataManager();
  cVar1 = rewardWriteUserInven(iVar3 + 0xb628,param_2,0xb,1,param_5);
  if (cVar1 != '\0') {
    local_d = true;
  }
  return local_d;
}
```
