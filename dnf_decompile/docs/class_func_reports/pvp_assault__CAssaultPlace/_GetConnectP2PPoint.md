# _GetConnectP2PPoint

`_ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi`

`pvp_assault::CAssaultPlace::_GetConnectP2PPoint(int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e93bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e93bc  _ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi
#           pvp_assault::CAssaultPlace::_GetConnectP2PPoint(int)
# range [0x082e93bc, 0x082e9411]
082e93bc +0x00:  push   %ebp
082e93bd +0x01:  mov    %esp,%ebp
082e93bf +0x03:  sub    $0x28,%esp
082e93c2 +0x06:  movl   $0x0,-0x10(%ebp)
082e93c9 +0x0d:  movl   $0x0,-0xc(%ebp)
082e93d0 +0x14:  jmp    082e9402 <+0x46>
082e93d2 +0x16:  mov    0xc(%ebp),%eax
082e93d5 +0x19:  cmp    -0xc(%ebp),%eax
082e93d8 +0x1c:  je     082e93fe <+0x42>
082e93da +0x1e:  mov    -0xc(%ebp),%eax
082e93dd +0x21:  mov    %eax,0x8(%esp)
082e93e1 +0x25:  mov    0xc(%ebp),%eax
082e93e4 +0x28:  mov    %eax,0x4(%esp)
082e93e8 +0x2c:  mov    0x8(%ebp),%eax
082e93eb +0x2f:  mov    %eax,(%esp)
082e93ee +0x32:  call   082e927e <_ZN11pvp_assault13CAssaultPlace19_IsCannotConnectP2PEii>  ; pvp_assault::CAssaultPlace::_IsCannotConnectP2P(int, int)
082e93f3 +0x37:  xor    $0x1,%eax
082e93f6 +0x3a:  test   %al,%al
082e93f8 +0x3c:  je     082e93fe <+0x42>
082e93fa +0x3e:  addl   $0x1,-0x10(%ebp)
082e93fe +0x42:  addl   $0x1,-0xc(%ebp)
082e9402 +0x46:  cmpl   $0x7,-0xc(%ebp)
082e9406 +0x4a:  setle  %al
082e9409 +0x4d:  test   %al,%al
082e940b +0x4f:  jne    082e93d2 <+0x16>
082e940d +0x51:  mov    -0x10(%ebp),%eax
082e9410 +0x54:  leave
082e9411 +0x55:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_GetConnectP2PPoint @ 0x82e93bc

/* pvp_assault::CAssaultPlace::_GetConnectP2PPoint(int) */

int __thiscall pvp_assault::CAssaultPlace::_GetConnectP2PPoint(CAssaultPlace *this,int param_1)

{
  char cVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    if (param_1 != local_10) {
      cVar1 = _IsCannotConnectP2P(this,param_1,local_10);
      if (cVar1 != '\x01') {
        local_14 = local_14 + 1;
      }
    }
  }
  return local_14;
}
```
