# SaveCoin

`_ZN6CParty8SaveCoinE14eCoinSubReason`

`CParty::SaveCoin(eCoinSubReason)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b3520` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b3520  _ZN6CParty8SaveCoinE14eCoinSubReason
#           CParty::SaveCoin(eCoinSubReason)
# range [0x085b3520, 0x085b357b]
085b3520 +0x00:  push   %ebp
085b3521 +0x01:  mov    %esp,%ebp
085b3523 +0x03:  sub    $0x28,%esp
085b3526 +0x06:  movl   $0x0,-0xc(%ebp)
085b352d +0x0d:  jmp    085b356e <+0x4e>
085b352f +0x0f:  mov    -0xc(%ebp),%eax
085b3532 +0x12:  mov    %eax,0x4(%esp)
085b3536 +0x16:  mov    0x8(%ebp),%eax
085b3539 +0x19:  mov    %eax,(%esp)
085b353c +0x1c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
085b3541 +0x21:  xor    $0x1,%eax
085b3544 +0x24:  test   %al,%al
085b3546 +0x26:  jne    085b3569 <+0x49>
085b3548 +0x28:  mov    -0xc(%ebp),%edx
085b354b +0x2b:  mov    0x8(%ebp),%ecx
085b354e +0x2e:  mov    %edx,%eax
085b3550 +0x30:  add    %eax,%eax
085b3552 +0x32:  add    %edx,%eax
085b3554 +0x34:  shl    $0x3,%eax
085b3557 +0x37:  lea    (%ecx,%eax,1),%eax
085b355a +0x3a:  add    $0x78,%eax
085b355d +0x3d:  mov    (%eax),%eax
085b355f +0x3f:  mov    %eax,(%esp)
085b3562 +0x42:  call   086504d8 <_ZN5CUser13SaveMoneyCoinEv>  ; CUser::SaveMoneyCoin()
085b3567 +0x47:  jmp    085b356a <+0x4a>
085b3569 +0x49:  nop
085b356a +0x4a:  addl   $0x1,-0xc(%ebp)
085b356e +0x4e:  cmpl   $0x3,-0xc(%ebp)
085b3572 +0x52:  setle  %al
085b3575 +0x55:  test   %al,%al
085b3577 +0x57:  jne    085b352f <+0xf>
085b3579 +0x59:  leave
085b357a +0x5a:  ret
085b357b +0x5b:  nop
```

## 反编译 C

```c
// CParty::SaveCoin @ 0x85b3520

/* CParty::SaveCoin(eCoinSubReason) */

void CParty::SaveCoin(CParty *param_1)

{
  char cVar1;
  int local_10;
  
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    cVar1 = _checkValidUser(param_1,local_10);
    if (cVar1 == '\x01') {
      CUser::SaveMoneyCoin(*(CUser **)(param_1 + local_10 * 0x18 + 0x78));
    }
  }
  return;
}
```
