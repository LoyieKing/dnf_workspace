# check_power_side

`_ZN5Quest16check_power_sideEc`

`Quest::check_power_side(char)`

| 类 | 地址 |
|---|---|
| `Quest` | `0x08352cc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08352cc2  _ZN5Quest16check_power_sideEc
#           Quest::check_power_side(char)
# range [0x08352cc2, 0x08352d85]
08352cc2 +0x00:  push   %ebp
08352cc3 +0x01:  mov    %esp,%ebp
08352cc5 +0x03:  sub    $0x48,%esp
08352cc8 +0x06:  mov    0xc(%ebp),%eax
08352ccb +0x09:  mov    %al,-0x1c(%ebp)
08352cce +0x0c:  mov    0x8(%ebp),%eax
08352cd1 +0x0f:  movzbl 0x131(%eax),%eax
08352cd8 +0x16:  cmp    $0xff,%al
08352cda +0x18:  jne    08352ce6 <+0x24>
08352cdc +0x1a:  mov    $0x1,%eax
08352ce1 +0x1f:  jmp    08352d84 <+0xc2>
08352ce6 +0x24:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08352ceb +0x29:  mov    %eax,(%esp)
08352cee +0x2c:  call   0837501a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefe6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefe6
08352cf3 +0x31:  mov    %al,-0xa(%ebp)
08352cf6 +0x34:  mov    0x8(%ebp),%eax
08352cf9 +0x37:  movzbl 0x131(%eax),%eax
08352d00 +0x3e:  test   %al,%al
08352d02 +0x40:  jne    08352d14 <+0x52>
08352d04 +0x42:  movzbl -0xa(%ebp),%eax
08352d08 +0x46:  cmp    -0x1c(%ebp),%al
08352d0b +0x49:  jne    08352d7f <+0xbd>
08352d0d +0x4b:  mov    $0x1,%eax
08352d12 +0x50:  jmp    08352d84 <+0xc2>
08352d14 +0x52:  mov    0x8(%ebp),%eax
08352d17 +0x55:  movzbl 0x131(%eax),%eax
08352d1e +0x5c:  cmp    $0x1,%al
08352d20 +0x5e:  jne    08352d42 <+0x80>
08352d22 +0x60:  mov    &_ZN10GlobalData15s_power_managerE,%eax
08352d27 +0x65:  mov    %eax,(%esp)
08352d2a +0x68:  call   0837501a <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xefe6>  ; global constructors keyed to CServerEvent::m_nExpRate+0xefe6
08352d2f +0x6d:  mov    %al,-0x9(%ebp)
08352d32 +0x70:  movzbl -0x9(%ebp),%eax
08352d36 +0x74:  cmp    -0x1c(%ebp),%al
08352d39 +0x77:  je     08352d7f <+0xbd>
08352d3b +0x79:  mov    $0x1,%eax
08352d40 +0x7e:  jmp    08352d84 <+0xc2>
08352d42 +0x80:  mov    0x8(%ebp),%eax
08352d45 +0x83:  mov    0x4(%eax),%eax
08352d48 +0x86:  mov    %eax,0x14(%esp)
08352d4c +0x8a:  movl   $"Quest Script Error q_index(%d)",0x10(%esp)
08352d54 +0x92:  movl   $0x1161,0xc(%esp)
08352d5c +0x9a:  movl   $&_ZZN5Quest16check_power_sideEcE19__PRETTY_FUNCTION__,0x8(%esp)
08352d64 +0xa2:  movl   $"data_manager.cpp",0x4(%esp)
08352d6c +0xaa:  movl   $0x1,(%esp)
08352d73 +0xb1:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08352d78 +0xb6:  mov    $0x0,%eax
08352d7d +0xbb:  jmp    08352d84 <+0xc2>
08352d7f +0xbd:  mov    $0x0,%eax
08352d84 +0xc2:  leave
08352d85 +0xc3:  ret
```

## 反编译 C

```c
// Quest::check_power_side @ 0x8352cc2

/* Quest::check_power_side(char) */

undefined4 __thiscall Quest::check_power_side(Quest *this,char param_1)

{
  char cVar1;
  
  if (this[0x131] == (Quest)0xff) {
    return 1;
  }
  cVar1 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
  if (this[0x131] == (Quest)0x0) {
    if (cVar1 == param_1) {
      return 1;
    }
  }
  else {
    if (this[0x131] != (Quest)0x1) {
      LogManager::logFormat
                (1,"data_manager.cpp","bool Quest::check_power_side(char)",0x1161,
                 "Quest Script Error q_index(%d)",*(undefined4 *)(this + 4));
      return 0;
    }
    cVar1 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
    if (cVar1 != param_1) {
      return 1;
    }
  }
  return 0;
}
```
