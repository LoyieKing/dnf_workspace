# GetPowerWarResponPenalty

`_ZN13CPowerManager24GetPowerWarResponPenaltyEP5CUser`

`CPowerManager::GetPowerWarResponPenalty(CUser*)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x08480ec8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08480ec8  _ZN13CPowerManager24GetPowerWarResponPenaltyEP5CUser
#           CPowerManager::GetPowerWarResponPenalty(CUser*)
# range [0x08480ec8, 0x08480f41]
08480ec8 +0x00:  push   %ebp
08480ec9 +0x01:  mov    %esp,%ebp
08480ecb +0x03:  push   %ebx
08480ecc +0x04:  sub    $0x44,%esp
08480ecf +0x07:  mov    $0x3f800000,%eax
08480ed4 +0x0c:  mov    %eax,-0xc(%ebp)
08480ed7 +0x0f:  mov    0xc(%ebp),%eax
08480eda +0x12:  mov    %eax,(%esp)
08480edd +0x15:  call   084810b4 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x132>  ; global constructors keyed to CPowerManager::CPowerManager()+0x132
08480ee2 +0x1a:  mov    %eax,%ebx
08480ee4 +0x1c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08480ee9 +0x21:  mov    0xa640(%eax),%eax
08480eef +0x27:  cmp    %eax,%ebx
08480ef1 +0x29:  setb   %al
08480ef4 +0x2c:  test   %al,%al
08480ef6 +0x2e:  je     08480f33 <+0x6b>
08480ef8 +0x30:  mov    0xc(%ebp),%eax
08480efb +0x33:  mov    %eax,(%esp)
08480efe +0x36:  call   084810b4 <_GLOBAL__I__ZN13CPowerManagerC2Ev+0x132>  ; global constructors keyed to CPowerManager::CPowerManager()+0x132
08480f03 +0x3b:  mov    $0x0,%edx
08480f08 +0x40:  mov    %eax,-0x20(%ebp)
08480f0b +0x43:  mov    %edx,-0x1c(%ebp)
08480f0e +0x46:  fildll -0x20(%ebp)
08480f11 +0x49:  fstps  -0x28(%ebp)
08480f14 +0x4c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08480f19 +0x51:  mov    0xa640(%eax),%eax
08480f1f +0x57:  mov    %eax,-0x24(%ebp)
08480f22 +0x5a:  fildl  -0x24(%ebp)
08480f25 +0x5d:  fdivrs -0x28(%ebp)
08480f28 +0x60:  flds   ""
08480f2e +0x66:  fsubp  %st,%st(1)
08480f30 +0x68:  fstps  -0xc(%ebp)
08480f33 +0x6b:  mov    -0xc(%ebp),%eax
08480f36 +0x6e:  mov    %eax,-0x2c(%ebp)
08480f39 +0x71:  flds   -0x2c(%ebp)
08480f3c +0x74:  add    $0x44,%esp
08480f3f +0x77:  pop    %ebx
08480f40 +0x78:  pop    %ebp
08480f41 +0x79:  ret
```

## 反编译 C

```c
// CPowerManager::GetPowerWarResponPenalty @ 0x8480ec8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPowerManager::GetPowerWarResponPenalty(CUser*) */

longdouble __thiscall CPowerManager::GetPowerWarResponPenalty(CPowerManager *this,CUser *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = 1.0;
  uVar1 = CUserCharacInfo::GetCurCharacChaosStateTime((CUserCharacInfo *)param_1);
  iVar2 = G_CDataManager();
  if (uVar1 < *(uint *)(iVar2 + 0xa640)) {
    uVar1 = CUserCharacInfo::GetCurCharacChaosStateTime((CUserCharacInfo *)param_1);
    iVar2 = G_CDataManager();
    local_10 = _DAT_08c72fd0 - (float)uVar1 / (float)*(int *)(iVar2 + 0xa640);
  }
  return (longdouble)local_10;
}
```
