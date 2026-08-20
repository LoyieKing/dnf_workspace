# _ClearConnectP2PRelative

`_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PRelativeEi`

`pvp_assault::CAssaultPlace::_ClearConnectP2PRelative(int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e9358` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e9358  _ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PRelativeEi
#           pvp_assault::CAssaultPlace::_ClearConnectP2PRelative(int)
# range [0x082e9358, 0x082e93bb]
082e9358 +0x00:  push   %ebp
082e9359 +0x01:  mov    %esp,%ebp
082e935b +0x03:  sub    $0x28,%esp
082e935e +0x06:  movl   $0x2,-0xc(%ebp)
082e9365 +0x0d:  jmp    082e93a9 <+0x51>
082e9367 +0x0f:  mov    -0xc(%ebp),%eax
082e936a +0x12:  mov    %eax,0x4(%esp)
082e936e +0x16:  mov    0x8(%ebp),%eax
082e9371 +0x19:  mov    %eax,(%esp)
082e9374 +0x1c:  call   082e93bc <_ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi>  ; pvp_assault::CAssaultPlace::_GetConnectP2PPoint(int)
082e9379 +0x21:  cmp    0xc(%ebp),%eax
082e937c +0x24:  sete   %al
082e937f +0x27:  test   %al,%al
082e9381 +0x29:  je     082e93a5 <+0x4d>
082e9383 +0x2b:  movl   $0x0,0xc(%esp)
082e938b +0x33:  movl   $0x1,0x8(%esp)
082e9393 +0x3b:  mov    -0xc(%ebp),%eax
082e9396 +0x3e:  mov    %eax,0x4(%esp)
082e939a +0x42:  mov    0x8(%ebp),%eax
082e939d +0x45:  mov    %eax,(%esp)
082e93a0 +0x48:  call   082ead6a <_ZN11pvp_assault13CAssaultPlace17LeaveAssaultPlaceEibb>  ; pvp_assault::CAssaultPlace::LeaveAssaultPlace(int, bool, bool)
082e93a5 +0x4d:  addl   $0x1,-0xc(%ebp)
082e93a9 +0x51:  cmpl   $0x7,-0xc(%ebp)
082e93ad +0x55:  setle  %al
082e93b0 +0x58:  test   %al,%al
082e93b2 +0x5a:  jne    082e9367 <+0xf>
082e93b4 +0x5c:  mov    $0x1,%eax
082e93b9 +0x61:  leave
082e93ba +0x62:  ret
082e93bb +0x63:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_ClearConnectP2PRelative @ 0x82e9358

/* pvp_assault::CAssaultPlace::_ClearConnectP2PRelative(int) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_ClearConnectP2PRelative(CAssaultPlace *this,int param_1)

{
  int iVar1;
  undefined4 local_10;
  
  for (local_10 = 2; local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = _GetConnectP2PPoint(this,local_10);
    if (iVar1 == param_1) {
      LeaveAssaultPlace(this,local_10,true,false);
    }
  }
  return 1;
}
```
