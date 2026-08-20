# _GetConnectP2PMaxMinPoint

`_ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_`

`pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint(int&, int&)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e9412` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e9412  _ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_
#           pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint(int&, int&)
# range [0x082e9412, 0x082e949b]
082e9412 +0x00:  push   %ebp
082e9413 +0x01:  mov    %esp,%ebp
082e9415 +0x03:  sub    $0x28,%esp
082e9418 +0x06:  mov    0xc(%ebp),%eax
082e941b +0x09:  movl   $0x0,(%eax)
082e9421 +0x0f:  mov    0x10(%ebp),%eax
082e9424 +0x12:  movl   $0x8,(%eax)
082e942a +0x18:  movl   $0x0,-0x10(%ebp)
082e9431 +0x1f:  movl   $0x0,-0xc(%ebp)
082e9438 +0x26:  jmp    082e948f <+0x7d>
082e943a +0x28:  mov    -0xc(%ebp),%eax
082e943d +0x2b:  shl    $0x5,%eax
082e9440 +0x2e:  add    0x8(%ebp),%eax
082e9443 +0x31:  mov    %eax,(%esp)
082e9446 +0x34:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e944b +0x39:  test   %al,%al
082e944d +0x3b:  jne    082e948a <+0x78>
082e944f +0x3d:  mov    -0xc(%ebp),%eax
082e9452 +0x40:  mov    %eax,0x4(%esp)
082e9456 +0x44:  mov    0x8(%ebp),%eax
082e9459 +0x47:  mov    %eax,(%esp)
082e945c +0x4a:  call   082e93bc <_ZN11pvp_assault13CAssaultPlace19_GetConnectP2PPointEi>  ; pvp_assault::CAssaultPlace::_GetConnectP2PPoint(int)
082e9461 +0x4f:  mov    %eax,-0x10(%ebp)
082e9464 +0x52:  mov    0x10(%ebp),%eax
082e9467 +0x55:  mov    (%eax),%eax
082e9469 +0x57:  cmp    -0x10(%ebp),%eax
082e946c +0x5a:  jle    082e9476 <+0x64>
082e946e +0x5c:  mov    0x10(%ebp),%eax
082e9471 +0x5f:  mov    -0x10(%ebp),%edx
082e9474 +0x62:  mov    %edx,(%eax)
082e9476 +0x64:  mov    0xc(%ebp),%eax
082e9479 +0x67:  mov    (%eax),%eax
082e947b +0x69:  cmp    -0x10(%ebp),%eax
082e947e +0x6c:  jge    082e948b <+0x79>
082e9480 +0x6e:  mov    0xc(%ebp),%eax
082e9483 +0x71:  mov    -0x10(%ebp),%edx
082e9486 +0x74:  mov    %edx,(%eax)
082e9488 +0x76:  jmp    082e948b <+0x79>
082e948a +0x78:  nop
082e948b +0x79:  addl   $0x1,-0xc(%ebp)
082e948f +0x7d:  cmpl   $0x7,-0xc(%ebp)
082e9493 +0x81:  setle  %al
082e9496 +0x84:  test   %al,%al
082e9498 +0x86:  jne    082e943a <+0x28>
082e949a +0x88:  leave
082e949b +0x89:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint @ 0x82e9412

/* pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint(int&, int&) */

void __thiscall
pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint(CAssaultPlace *this,int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int local_10;
  
  *param_1 = 0;
  *param_2 = 8;
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    cVar1 = CAssaulter::Empty((CAssaulter *)(this + local_10 * 0x20));
    if (cVar1 == '\0') {
      iVar2 = _GetConnectP2PPoint(this,local_10);
      if (iVar2 < *param_2) {
        *param_2 = iVar2;
      }
      if (*param_1 < iVar2) {
        *param_1 = iVar2;
      }
    }
  }
  return;
}
```
