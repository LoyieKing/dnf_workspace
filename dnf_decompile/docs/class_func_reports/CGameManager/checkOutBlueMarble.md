# checkOutBlueMarble

`_ZN12CGameManager18checkOutBlueMarbleEP5CUser`

`CGameManager::checkOutBlueMarble(CUser*)`

| 类 | 地址 |
|---|---|
| `CGameManager` | `0x0829844a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829844a  _ZN12CGameManager18checkOutBlueMarbleEP5CUser
#           CGameManager::checkOutBlueMarble(CUser*)
# range [0x0829844a, 0x0829849f]
0829844a +0x00:  push   %ebp
0829844b +0x01:  mov    %esp,%ebp
0829844d +0x03:  sub    $0x28,%esp
08298450 +0x06:  mov    0xc(%ebp),%eax
08298453 +0x09:  mov    %eax,(%esp)
08298456 +0x0c:  call   080da32a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4c7>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4c7
0829845b +0x11:  xor    $0x1,%eax
0829845e +0x14:  test   %al,%al
08298460 +0x16:  jne    0829849a <+0x50>
08298462 +0x18:  mov    0xc(%ebp),%eax
08298465 +0x1b:  mov    %eax,(%esp)
08298468 +0x1e:  call   080da35e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4fb>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4fb
0829846d +0x23:  cwtl
0829846e +0x24:  mov    %eax,0x4(%esp)
08298472 +0x28:  mov    0x8(%ebp),%eax
08298475 +0x2b:  mov    %eax,(%esp)
08298478 +0x2e:  call   082a239e <_ZN12CGameManager13getBlueMarbleEi>  ; CGameManager::getBlueMarble(int)
0829847d +0x33:  mov    %eax,-0xc(%ebp)
08298480 +0x36:  cmpl   $0x0,-0xc(%ebp)
08298484 +0x3a:  je     0829849d <+0x53>
08298486 +0x3c:  mov    0xc(%ebp),%eax
08298489 +0x3f:  mov    %eax,0x4(%esp)
0829848d +0x43:  mov    -0xc(%ebp),%eax
08298490 +0x46:  mov    %eax,(%esp)
08298493 +0x49:  call   080d9136 <_ZN10BlueMarble9leaveUserEP5CUser>  ; BlueMarble::leaveUser(CUser*)
08298498 +0x4e:  jmp    0829849e <+0x54>
0829849a +0x50:  nop
0829849b +0x51:  jmp    0829849e <+0x54>
0829849d +0x53:  nop
0829849e +0x54:  leave
0829849f +0x55:  ret
```

## 反编译 C

```c
// CGameManager::checkOutBlueMarble @ 0x829844a

/* CGameManager::checkOutBlueMarble(CUser*) */

void __thiscall CGameManager::checkOutBlueMarble(CGameManager *this,CUser *param_1)

{
  char cVar1;
  BlueMarble *this_00;
  
  cVar1 = CUser::checkInBlueMarble(param_1);
  if (cVar1 == '\x01') {
    CUser::getBlueMarbleIndex(param_1);
    this_00 = (BlueMarble *)getBlueMarble((int)this);
    if (this_00 != (BlueMarble *)0x0) {
      BlueMarble::leaveUser(this_00,param_1);
    }
  }
  return;
}
```
