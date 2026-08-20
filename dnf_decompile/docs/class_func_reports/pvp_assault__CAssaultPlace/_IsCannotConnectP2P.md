# _IsCannotConnectP2P

`_ZN11pvp_assault13CAssaultPlace19_IsCannotConnectP2PEii`

`pvp_assault::CAssaultPlace::_IsCannotConnectP2P(int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e927e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e927e  _ZN11pvp_assault13CAssaultPlace19_IsCannotConnectP2PEii
#           pvp_assault::CAssaultPlace::_IsCannotConnectP2P(int, int)
# range [0x082e927e, 0x082e92c5]
082e927e +0x00:  push   %ebp
082e927f +0x01:  mov    %esp,%ebp
082e9281 +0x03:  sub    $0x18,%esp
082e9284 +0x06:  mov    0xc(%ebp),%ecx
082e9287 +0x09:  mov    0x10(%ebp),%eax
082e928a +0x0c:  mov    0x8(%ebp),%edx
082e928d +0x0f:  shl    $0x5,%ecx
082e9290 +0x12:  add    %ecx,%edx
082e9292 +0x14:  lea    (%edx,%eax,1),%eax
082e9295 +0x17:  add    $0x10,%eax
082e9298 +0x1a:  movzbl 0x5(%eax),%eax
082e929c +0x1e:  test   %al,%al
082e929e +0x20:  je     082e92bf <+0x41>
082e92a0 +0x22:  mov    0x10(%ebp),%eax
082e92a3 +0x25:  shl    $0x5,%eax
082e92a6 +0x28:  add    0x8(%ebp),%eax
082e92a9 +0x2b:  mov    %eax,(%esp)
082e92ac +0x2e:  call   082f055c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2e0>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2e0
082e92b1 +0x33:  xor    $0x1,%eax
082e92b4 +0x36:  test   %al,%al
082e92b6 +0x38:  je     082e92bf <+0x41>
082e92b8 +0x3a:  mov    $0x0,%eax
082e92bd +0x3f:  jmp    082e92c4 <+0x46>
082e92bf +0x41:  mov    $0x1,%eax
082e92c4 +0x46:  leave
082e92c5 +0x47:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_IsCannotConnectP2P @ 0x82e927e

/* pvp_assault::CAssaultPlace::_IsCannotConnectP2P(int, int) */

undefined4 __thiscall
pvp_assault::CAssaultPlace::_IsCannotConnectP2P(CAssaultPlace *this,int param_1,int param_2)

{
  char cVar1;
  
  if ((this[param_2 + param_1 * 0x20 + 0x15] != (CAssaultPlace)0x0) &&
     (cVar1 = CAssaulter::Empty((CAssaulter *)(this + param_2 * 0x20)), cVar1 != '\x01')) {
    return 0;
  }
  return 1;
}
```
