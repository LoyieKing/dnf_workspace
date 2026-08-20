# ClearBadP2PUser

`_ZN11pvp_assault13CAssaultPlace15ClearBadP2PUserEv`

`pvp_assault::CAssaultPlace::ClearBadP2PUser()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e949c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e949c  _ZN11pvp_assault13CAssaultPlace15ClearBadP2PUserEv
#           pvp_assault::CAssaultPlace::ClearBadP2PUser()
# range [0x082e949c, 0x082e9501]
082e949c +0x00:  push   %ebp
082e949d +0x01:  mov    %esp,%ebp
082e949f +0x03:  sub    $0x28,%esp
082e94a2 +0x06:  movl   $0x0,-0x10(%ebp)
082e94a9 +0x0d:  movl   $0x0,-0x14(%ebp)
082e94b0 +0x14:  movl   $0x0,-0xc(%ebp)
082e94b7 +0x1b:  jmp    082e94f2 <+0x56>
082e94b9 +0x1d:  lea    -0x14(%ebp),%eax
082e94bc +0x20:  mov    %eax,0x8(%esp)
082e94c0 +0x24:  lea    -0x10(%ebp),%eax
082e94c3 +0x27:  mov    %eax,0x4(%esp)
082e94c7 +0x2b:  mov    0x8(%ebp),%eax
082e94ca +0x2e:  mov    %eax,(%esp)
082e94cd +0x31:  call   082e9412 <_ZN11pvp_assault13CAssaultPlace25_GetConnectP2PMaxMinPointERiS1_>  ; pvp_assault::CAssaultPlace::_GetConnectP2PMaxMinPoint(int&, int&)
082e94d2 +0x36:  mov    -0x10(%ebp),%edx
082e94d5 +0x39:  mov    -0x14(%ebp),%eax
082e94d8 +0x3c:  cmp    %eax,%edx
082e94da +0x3e:  je     082e94ff <+0x63>
082e94dc +0x40:  mov    -0x14(%ebp),%eax
082e94df +0x43:  mov    %eax,0x4(%esp)
082e94e3 +0x47:  mov    0x8(%ebp),%eax
082e94e6 +0x4a:  mov    %eax,(%esp)
082e94e9 +0x4d:  call   082e9358 <_ZN11pvp_assault13CAssaultPlace24_ClearConnectP2PRelativeEi>  ; pvp_assault::CAssaultPlace::_ClearConnectP2PRelative(int)
082e94ee +0x52:  addl   $0x1,-0xc(%ebp)
082e94f2 +0x56:  cmpl   $0x7,-0xc(%ebp)
082e94f6 +0x5a:  setle  %al
082e94f9 +0x5d:  test   %al,%al
082e94fb +0x5f:  jne    082e94b9 <+0x1d>
082e94fd +0x61:  jmp    082e9500 <+0x64>
082e94ff +0x63:  nop
082e9500 +0x64:  leave
082e9501 +0x65:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::ClearBadP2PUser @ 0x82e949c

/* pvp_assault::CAssaultPlace::ClearBadP2PUser() */

void __thiscall pvp_assault::CAssaultPlace::ClearBadP2PUser(CAssaultPlace *this)

{
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_10 = 0;
  while ((local_10 < 8 &&
         (_GetConnectP2PMaxMinPoint(this,&local_14,&local_18), local_14 != local_18))) {
    _ClearConnectP2PRelative(this,local_18);
    local_10 = local_10 + 1;
  }
  return;
}
```
