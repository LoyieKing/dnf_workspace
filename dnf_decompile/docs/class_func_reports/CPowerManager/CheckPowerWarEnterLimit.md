# CheckPowerWarEnterLimit

`_ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser`

`CPowerManager::CheckPowerWarEnterLimit(CUser*)`

| 类 | 地址 |
|---|---|
| `CPowerManager` | `0x0847fa7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0847fa7c  _ZN13CPowerManager23CheckPowerWarEnterLimitEP5CUser
#           CPowerManager::CheckPowerWarEnterLimit(CUser*)
# range [0x0847fa7c, 0x0847fb01]
0847fa7c +0x00:  push   %ebp
0847fa7d +0x01:  mov    %esp,%ebp
0847fa7f +0x03:  sub    $0x28,%esp
0847fa82 +0x06:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0847fa87 +0x0b:  mov    0xa68c(%eax),%eax
0847fa8d +0x11:  mov    %eax,-0x10(%ebp)
0847fa90 +0x14:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0847fa95 +0x19:  mov    0xa690(%eax),%eax
0847fa9b +0x1f:  mov    %eax,-0xc(%ebp)
0847fa9e +0x22:  cmpl   $0x0,-0x10(%ebp)
0847faa2 +0x26:  jne    0847faab <+0x2f>
0847faa4 +0x28:  movl   $0x1e,-0x10(%ebp)
0847faab +0x2f:  cmpl   $0x0,-0xc(%ebp)
0847faaf +0x33:  jne    0847fab8 <+0x3c>
0847fab1 +0x35:  movl   $0xf,-0xc(%ebp)
0847fab8 +0x3c:  lea    -0x14(%ebp),%eax
0847fabb +0x3f:  mov    %eax,0x8(%esp)
0847fabf +0x43:  mov    -0xc(%ebp),%eax
0847fac2 +0x46:  mov    %eax,0x4(%esp)
0847fac6 +0x4a:  mov    0xc(%ebp),%eax
0847fac9 +0x4d:  mov    %eax,(%esp)
0847facc +0x50:  call   0864fc3e <_ZN5CUser19CheckLimitMiniumAgeEiRi>  ; CUser::CheckLimitMiniumAge(int, int&)
0847fad1 +0x55:  xor    $0x1,%eax
0847fad4 +0x58:  test   %al,%al
0847fad6 +0x5a:  je     0847fadf <+0x63>
0847fad8 +0x5c:  mov    $0x5f,%eax
0847fadd +0x61:  jmp    0847fb00 <+0x84>
0847fadf +0x63:  mov    0xc(%ebp),%eax
0847fae2 +0x66:  mov    %eax,(%esp)
0847fae5 +0x69:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0847faea +0x6e:  cmp    -0x10(%ebp),%eax
0847faed +0x71:  setl   %al
0847faf0 +0x74:  test   %al,%al
0847faf2 +0x76:  je     0847fafb <+0x7f>
0847faf4 +0x78:  mov    $0xe,%eax
0847faf9 +0x7d:  jmp    0847fb00 <+0x84>
0847fafb +0x7f:  mov    $0x0,%eax
0847fb00 +0x84:  leave
0847fb01 +0x85:  ret
```

## 反编译 C

```c
// CPowerManager::CheckPowerWarEnterLimit @ 0x847fa7c

/* CPowerManager::CheckPowerWarEnterLimit(CUser*) */

undefined4 __thiscall CPowerManager::CheckPowerWarEnterLimit(CPowerManager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  int local_14;
  int local_10;
  
  iVar2 = G_CDataManager();
  local_14 = *(int *)(iVar2 + 0xa68c);
  iVar2 = G_CDataManager();
  local_10 = *(int *)(iVar2 + 0xa690);
  if (local_14 == 0) {
    local_14 = 0x1e;
  }
  if (local_10 == 0) {
    local_10 = 0xf;
  }
  cVar1 = CUser::CheckLimitMiniumAge(param_1,local_10,&local_18);
  if (cVar1 == '\x01') {
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (iVar2 < local_14) {
      uVar3 = 0xe;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x5f;
  }
  return uVar3;
}
```
