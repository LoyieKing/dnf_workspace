# GainCurCharacChaosExp

`_ZN15CUserCharacInfo21GainCurCharacChaosExpEi`

`CUserCharacInfo::GainCurCharacChaosExp(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645e5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645e5e  _ZN15CUserCharacInfo21GainCurCharacChaosExpEi
#           CUserCharacInfo::GainCurCharacChaosExp(int)
# range [0x08645e5e, 0x08645f7f]
08645e5e +0x000:  push   %ebp
08645e5f +0x001:  mov    %esp,%ebp
08645e61 +0x003:  push   %ebx
08645e62 +0x004:  sub    $0x24,%esp
08645e65 +0x007:  mov    0x8(%ebp),%eax
08645e68 +0x00a:  mov    0x10(%eax),%eax
08645e6b +0x00d:  test   %eax,%eax
08645e6d +0x00f:  je     08645f79 <+0x11b>
08645e73 +0x015:  mov    0x8(%ebp),%eax
08645e76 +0x018:  mov    0x10(%eax),%eax
08645e79 +0x01b:  mov    0xe49(%eax),%eax
08645e7f +0x021:  test   %eax,%eax
08645e81 +0x023:  jle    08645f79 <+0x11b>
08645e87 +0x029:  mov    0x8(%ebp),%eax
08645e8a +0x02c:  mov    0x10(%eax),%eax
08645e8d +0x02f:  mov    0x8(%ebp),%edx
08645e90 +0x032:  mov    0x10(%edx),%edx
08645e93 +0x035:  mov    0xe4d(%edx),%edx
08645e99 +0x03b:  add    0xc(%ebp),%edx
08645e9c +0x03e:  mov    %edx,0xe4d(%eax)
08645ea2 +0x044:  mov    0x8(%ebp),%eax
08645ea5 +0x047:  mov    %eax,(%esp)
08645ea8 +0x04a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08645ead +0x04f:  mov    %eax,%ebx
08645eaf +0x051:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08645eb4 +0x056:  movl   $0x1,0x8(%esp)
08645ebc +0x05e:  mov    %ebx,0x4(%esp)
08645ec0 +0x062:  mov    %eax,(%esp)
08645ec3 +0x065:  call   083604fe <_ZNK12CDataManager21get_level_exp_percentEii>  ; CDataManager::get_level_exp_percent(int, int) const
08645ec8 +0x06a:  mov    %eax,-0xc(%ebp)
08645ecb +0x06d:  mov    0x8(%ebp),%eax
08645ece +0x070:  mov    0x10(%eax),%eax
08645ed1 +0x073:  mov    0xe4d(%eax),%eax
08645ed7 +0x079:  cmp    -0xc(%ebp),%eax
08645eda +0x07c:  jle    08645f79 <+0x11b>
08645ee0 +0x082:  cmpl   $0x0,-0xc(%ebp)
08645ee4 +0x086:  jle    08645f79 <+0x11b>
08645eea +0x08c:  mov    0x8(%ebp),%eax
08645eed +0x08f:  mov    %eax,(%esp)
08645ef0 +0x092:  call   0819a870 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x556>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x556
08645ef5 +0x097:  mov    0x8(%ebp),%eax
08645ef8 +0x09a:  mov    0x10(%eax),%ecx
08645efb +0x09d:  mov    0x8(%ebp),%eax
08645efe +0x0a0:  mov    0x10(%eax),%eax
08645f01 +0x0a3:  mov    0xe49(%eax),%ebx
08645f07 +0x0a9:  mov    0x8(%ebp),%eax
08645f0a +0x0ac:  mov    0x10(%eax),%eax
08645f0d +0x0af:  mov    0xe4d(%eax),%eax
08645f13 +0x0b5:  mov    %eax,%edx
08645f15 +0x0b7:  sar    $0x1f,%edx
08645f18 +0x0ba:  idivl  -0xc(%ebp)
08645f1b +0x0bd:  mov    %ebx,%edx
08645f1d +0x0bf:  sub    %eax,%edx
08645f1f +0x0c1:  mov    %edx,%eax
08645f21 +0x0c3:  mov    %eax,0xe49(%ecx)
08645f27 +0x0c9:  mov    0x8(%ebp),%eax
08645f2a +0x0cc:  mov    0x10(%eax),%ecx
08645f2d +0x0cf:  mov    0x8(%ebp),%eax
08645f30 +0x0d2:  mov    0x10(%eax),%eax
08645f33 +0x0d5:  mov    0xe4d(%eax),%eax
08645f39 +0x0db:  mov    %eax,%edx
08645f3b +0x0dd:  sar    $0x1f,%edx
08645f3e +0x0e0:  idivl  -0xc(%ebp)
08645f41 +0x0e3:  mov    %edx,%eax
08645f43 +0x0e5:  mov    %eax,0xe4d(%ecx)
08645f49 +0x0eb:  mov    0x8(%ebp),%eax
08645f4c +0x0ee:  mov    0x10(%eax),%eax
08645f4f +0x0f1:  mov    0xe49(%eax),%eax
08645f55 +0x0f7:  test   %eax,%eax
08645f57 +0x0f9:  jns    08645f79 <+0x11b>
08645f59 +0x0fb:  mov    0x8(%ebp),%eax
08645f5c +0x0fe:  mov    0x10(%eax),%eax
08645f5f +0x101:  movl   $0x0,0xe49(%eax)
08645f69 +0x10b:  mov    0x8(%ebp),%eax
08645f6c +0x10e:  mov    0x10(%eax),%eax
08645f6f +0x111:  movl   $0x0,0xe4d(%eax)
08645f79 +0x11b:  add    $0x24,%esp
08645f7c +0x11e:  pop    %ebx
08645f7d +0x11f:  pop    %ebp
08645f7e +0x120:  ret
08645f7f +0x121:  nop
```

## 反编译 C

```c
// CUserCharacInfo::GainCurCharacChaosExp @ 0x8645e5e

/* CUserCharacInfo::GainCurCharacChaosExp(int) */

void __thiscall CUserCharacInfo::GainCurCharacChaosExp(CUserCharacInfo *this,int param_1)

{
  int iVar1;
  CDataManager *this_00;
  
  if ((*(int *)(this + 0x10) != 0) && (0 < *(int *)(*(int *)(this + 0x10) + 0xe49))) {
    *(int *)(*(int *)(this + 0x10) + 0xe4d) = *(int *)(*(int *)(this + 0x10) + 0xe4d) + param_1;
    iVar1 = get_charac_level(this);
    this_00 = (CDataManager *)G_CDataManager();
    iVar1 = CDataManager::get_level_exp_percent(this_00,iVar1,1);
    if ((iVar1 < *(int *)(*(int *)(this + 0x10) + 0xe4d)) && (0 < iVar1)) {
      enableSaveCharacStat(this);
      *(int *)(*(int *)(this + 0x10) + 0xe49) =
           *(int *)(*(int *)(this + 0x10) + 0xe49) - *(int *)(*(int *)(this + 0x10) + 0xe4d) / iVar1
      ;
      *(int *)(*(int *)(this + 0x10) + 0xe4d) = *(int *)(*(int *)(this + 0x10) + 0xe4d) % iVar1;
      if (*(int *)(*(int *)(this + 0x10) + 0xe49) < 0) {
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe49) = 0;
        *(undefined4 *)(*(int *)(this + 0x10) + 0xe4d) = 0;
      }
    }
  }
  return;
}
```
