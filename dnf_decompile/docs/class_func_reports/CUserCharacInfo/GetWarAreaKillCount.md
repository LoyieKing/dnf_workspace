# GetWarAreaKillCount

`_ZN15CUserCharacInfo19GetWarAreaKillCountEi`

`CUserCharacInfo::GetWarAreaKillCount(int)`

| 类 | 地址 |
|---|---|
| `CUserCharacInfo` | `0x08645866` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08645866  _ZN15CUserCharacInfo19GetWarAreaKillCountEi
#           CUserCharacInfo::GetWarAreaKillCount(int)
# range [0x08645866, 0x086458cd]
08645866 +0x00:  push   %ebp
08645867 +0x01:  mov    %esp,%ebp
08645869 +0x03:  sub    $0x38,%esp
0864586c +0x06:  mov    0x8(%ebp),%eax
0864586f +0x09:  mov    0x10(%eax),%eax
08645872 +0x0c:  test   %eax,%eax
08645874 +0x0e:  jne    086458b3 <+0x4d>
08645876 +0x10:  movl   $0x5,0xc(%esp)
0864587e +0x18:  movl   $0x260,0x8(%esp)
08645886 +0x20:  movl   $&_ZZN15CUserCharacInfo19GetWarAreaKillCountEiE19__PRETTY_FUNCTION__,0x4(%esp)
0864588e +0x28:  lea    -0x18(%ebp),%eax
08645891 +0x2b:  mov    %eax,(%esp)
08645894 +0x2e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08645899 +0x33:  movl   $"WARAREA CUserCharacInfo::GetWarAreaKillCount() : m_selected is NULL",0x4(%esp)
086458a1 +0x3b:  lea    -0x18(%ebp),%eax
086458a4 +0x3e:  mov    %eax,(%esp)
086458a7 +0x41:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086458ac +0x46:  mov    $0x0,%eax
086458b1 +0x4b:  jmp    086458c6 <+0x60>
086458b3 +0x4d:  mov    0x8(%ebp),%eax
086458b6 +0x50:  mov    0x10(%eax),%eax
086458b9 +0x53:  mov    0xc(%ebp),%edx
086458bc +0x56:  add    $0x380,%edx
086458c2 +0x5c:  mov    0xe(%eax,%edx,4),%eax
086458c6 +0x60:  mov    %eax,-0x1c(%ebp)
086458c9 +0x63:  flds   -0x1c(%ebp)
086458cc +0x66:  leave
086458cd +0x67:  ret
```

## 反编译 C

```c
// CUserCharacInfo::GetWarAreaKillCount @ 0x8645866

/* CUserCharacInfo::GetWarAreaKillCount(int) */

longdouble __thiscall CUserCharacInfo::GetWarAreaKillCount(CUserCharacInfo *this,int param_1)

{
  float fVar1;
  cMyTrace local_1c [24];
  
  if (*(int *)(this + 0x10) == 0) {
    cMyTrace::cMyTrace(local_1c,"float CUserCharacInfo::GetWarAreaKillCount(int)",0x260,5);
    cMyTrace::operator()
              (local_1c,"WARAREA CUserCharacInfo::GetWarAreaKillCount() : m_selected is NULL");
    fVar1 = 0.0;
  }
  else {
    fVar1 = *(float *)(*(int *)(this + 0x10) + 0xe + (param_1 + 0x380) * 4);
  }
  return (longdouble)fVar1;
}
```
