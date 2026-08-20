# createCharacEquipReward

`_ZN11eventReward23createCharacEquipRewardEP10Inven_Item9rewardKeyi`

`eventReward::createCharacEquipReward(Inven_Item*, rewardKey, int)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080f033c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f033c  _ZN11eventReward23createCharacEquipRewardEP10Inven_Item9rewardKeyi
#           eventReward::createCharacEquipReward(Inven_Item*, rewardKey, int)
# range [0x080f033c, 0x080f0407]
080f033c +0x00:  push   %ebp
080f033d +0x01:  mov    %esp,%ebp
080f033f +0x03:  sub    $0x38,%esp
080f0342 +0x06:  movb   $0x0,-0x9(%ebp)
080f0346 +0x0a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f034b +0x0f:  lea    0xb628(%eax),%edx
080f0351 +0x15:  mov    0x18(%ebp),%eax
080f0354 +0x18:  mov    %eax,0x10(%esp)
080f0358 +0x1c:  mov    0x10(%ebp),%eax
080f035b +0x1f:  mov    %eax,0x8(%esp)
080f035f +0x23:  movzbl 0x14(%ebp),%eax
080f0363 +0x27:  mov    %al,0xc(%esp)
080f0367 +0x2b:  mov    0xc(%ebp),%eax
080f036a +0x2e:  mov    %eax,0x4(%esp)
080f036e +0x32:  mov    %edx,(%esp)
080f0371 +0x35:  call   080f06da <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi>  ; eventReward::rewardWriteUserEquip(Inven_Item*, rewardKey, int)
080f0376 +0x3a:  test   %al,%al
080f0378 +0x3c:  je     080f037e <+0x42>
080f037a +0x3e:  movb   $0x1,-0x9(%ebp)
080f037e +0x42:  movb   $0x0,0x11(%ebp)
080f0382 +0x46:  movb   $0x2,0x14(%ebp)
080f0386 +0x4a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f038b +0x4f:  lea    0xb628(%eax),%edx
080f0391 +0x55:  mov    0x18(%ebp),%eax
080f0394 +0x58:  mov    %eax,0x10(%esp)
080f0398 +0x5c:  mov    0x10(%ebp),%eax
080f039b +0x5f:  mov    %eax,0x8(%esp)
080f039f +0x63:  movzbl 0x14(%ebp),%eax
080f03a3 +0x67:  mov    %al,0xc(%esp)
080f03a7 +0x6b:  mov    0xc(%ebp),%eax
080f03aa +0x6e:  mov    %eax,0x4(%esp)
080f03ae +0x72:  mov    %edx,(%esp)
080f03b1 +0x75:  call   080f06da <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi>  ; eventReward::rewardWriteUserEquip(Inven_Item*, rewardKey, int)
080f03b6 +0x7a:  test   %al,%al
080f03b8 +0x7c:  je     080f03be <+0x82>
080f03ba +0x7e:  movb   $0x1,-0x9(%ebp)
080f03be +0x82:  movb   $0xb,0x10(%ebp)
080f03c2 +0x86:  movb   $0x0,0x11(%ebp)
080f03c6 +0x8a:  movb   $0x2,0x14(%ebp)
080f03ca +0x8e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
080f03cf +0x93:  lea    0xb628(%eax),%edx
080f03d5 +0x99:  mov    0x18(%ebp),%eax
080f03d8 +0x9c:  mov    %eax,0x10(%esp)
080f03dc +0xa0:  mov    0x10(%ebp),%eax
080f03df +0xa3:  mov    %eax,0x8(%esp)
080f03e3 +0xa7:  movzbl 0x14(%ebp),%eax
080f03e7 +0xab:  mov    %al,0xc(%esp)
080f03eb +0xaf:  mov    0xc(%ebp),%eax
080f03ee +0xb2:  mov    %eax,0x4(%esp)
080f03f2 +0xb6:  mov    %edx,(%esp)
080f03f5 +0xb9:  call   080f06da <_ZN11eventReward20rewardWriteUserEquipEP10Inven_Item9rewardKeyi>  ; eventReward::rewardWriteUserEquip(Inven_Item*, rewardKey, int)
080f03fa +0xbe:  test   %al,%al
080f03fc +0xc0:  je     080f0402 <+0xc6>
080f03fe +0xc2:  movb   $0x1,-0x9(%ebp)
080f0402 +0xc6:  movzbl -0x9(%ebp),%eax
080f0406 +0xca:  leave
080f0407 +0xcb:  ret
```

## 反编译 C

```c
// eventReward::createCharacEquipReward @ 0x80f033c

/* eventReward::createCharacEquipReward(Inven_Item*, rewardKey, int) */

bool eventReward::createCharacEquipReward
               (undefined4 param_1,undefined4 param_2,uint param_3,undefined1 param_4,
               undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool local_d;
  
  iVar3 = G_CDataManager();
  cVar1 = rewardWriteUserEquip(iVar3 + 0xb628,param_2,param_3,param_4,param_5);
  param_3 = param_3 & 0xff;
  iVar3 = G_CDataManager();
  cVar2 = rewardWriteUserEquip(iVar3 + 0xb628,param_2,param_3,2,param_5);
  local_d = cVar2 != '\0' || cVar1 != '\0';
  iVar3 = G_CDataManager();
  cVar1 = rewardWriteUserEquip(iVar3 + 0xb628,param_2,0xb,2,param_5);
  if (cVar1 != '\0') {
    local_d = true;
  }
  return local_d;
}
```
