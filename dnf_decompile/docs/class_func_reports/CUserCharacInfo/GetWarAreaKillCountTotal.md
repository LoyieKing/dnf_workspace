# GetWarAreaKillCountTotal

`_ZN15CUserCharacInfo24GetWarAreaKillCountTotalEv`

`CUserCharacInfo::GetWarAreaKillCountTotal()`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x086456d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086456d0  _ZN15CUserCharacInfo24GetWarAreaKillCountTotalEv
#           CUserCharacInfo::GetWarAreaKillCountTotal()
# range [0x086456d0, 0x08645763]
086456d0 +0x00:  push   %ebp
086456d1 +0x01:  mov    %esp,%ebp
086456d3 +0x03:  sub    $0x48,%esp
086456d6 +0x06:  mov    0x8(%ebp),%eax
086456d9 +0x09:  mov    0x10(%eax),%eax
086456dc +0x0c:  test   %eax,%eax
086456de +0x0e:  jne    0864571d <+0x4d>
086456e0 +0x10:  movl   $0x5,0xc(%esp)
086456e8 +0x18:  movl   $0x22f,0x8(%esp)
086456f0 +0x20:  movl   $&_ZZN15CUserCharacInfo24GetWarAreaKillCountTotalEvE19__PRETTY_FUNCTION__,0x4(%esp)
086456f8 +0x28:  lea    -0x20(%ebp),%eax
086456fb +0x2b:  mov    %eax,(%esp)
086456fe +0x2e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08645703 +0x33:  movl   $"WARAREA CUserCharacInfo::GetWarAreaKillCountTotal() : m_selected is NULL",0x4(%esp)
0864570b +0x3b:  lea    -0x20(%ebp),%eax
0864570e +0x3e:  mov    %eax,(%esp)
08645711 +0x41:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08645716 +0x46:  mov    $0x0,%eax
0864571b +0x4b:  jmp    0864575b <+0x8b>
0864571d +0x4d:  mov    $0x0,%eax
08645722 +0x52:  mov    %eax,-0x10(%ebp)
08645725 +0x55:  movl   $0x0,-0xc(%ebp)
0864572c +0x5c:  jmp    0864574d <+0x7d>
0864572e +0x5e:  mov    0x8(%ebp),%eax
08645731 +0x61:  mov    0x10(%eax),%eax
08645734 +0x64:  mov    -0xc(%ebp),%edx
08645737 +0x67:  add    $0x380,%edx
0864573d +0x6d:  flds   0xe(%eax,%edx,4)
08645741 +0x71:  flds   -0x10(%ebp)
08645744 +0x74:  faddp  %st,%st(1)
08645746 +0x76:  fstps  -0x10(%ebp)
08645749 +0x79:  addl   $0x1,-0xc(%ebp)
0864574d +0x7d:  cmpl   $0x3,-0xc(%ebp)
08645751 +0x81:  setle  %al
08645754 +0x84:  test   %al,%al
08645756 +0x86:  jne    0864572e <+0x5e>
08645758 +0x88:  mov    -0x10(%ebp),%eax
0864575b +0x8b:  mov    %eax,-0x2c(%ebp)
0864575e +0x8e:  flds   -0x2c(%ebp)
08645761 +0x91:  leave
08645762 +0x92:  ret
08645763 +0x93:  nop
```

## 反编译 C

```c
// CUserCharacInfo::GetWarAreaKillCountTotal @ 0x86456d0

/* CUserCharacInfo::GetWarAreaKillCountTotal() */

longdouble __thiscall CUserCharacInfo::GetWarAreaKillCountTotal(CUserCharacInfo *this)

{
  cMyTrace local_24 [16];
  float local_14;
  int local_10;
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_24,"float CUserCharacInfo::GetWarAreaKillCountTotal()",0x22f,5);
    cMyTrace::operator()
              (local_24,"WARAREA CUserCharacInfo::GetWarAreaKillCountTotal() : m_selected is NULL");
    local_14 = 0.0;
  }
  else {
    local_14 = 0.0;
    for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
      local_14 = local_14 + *(float *)(*(int *)(this + 0x10) + 0xe + (local_10 + 0x380) * 4);
    }
  }
  return (longdouble)local_14;
}
```
