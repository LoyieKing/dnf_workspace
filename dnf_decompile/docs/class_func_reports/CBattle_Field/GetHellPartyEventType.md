# GetHellPartyEventType

`_ZN13CBattle_Field21GetHellPartyEventTypeEc`

`CBattle_Field::GetHellPartyEventType(char)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x082ffb06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ffb06  _ZN13CBattle_Field21GetHellPartyEventTypeEc
#           CBattle_Field::GetHellPartyEventType(char)
# range [0x082ffb06, 0x082ffb2f]
082ffb06 +0x00:  push   %ebp
082ffb07 +0x01:  mov    %esp,%ebp
082ffb09 +0x03:  sub    $0x28,%esp
082ffb0c +0x06:  mov    0xc(%ebp),%eax
082ffb0f +0x09:  mov    %al,-0xc(%ebp)
082ffb12 +0x0c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
082ffb17 +0x11:  mov    %eax,(%esp)
082ffb1a +0x14:  call   0836378c <_ZN12CDataManager27get_hellparty_script_valuesEv>  ; CDataManager::get_hellparty_script_values()
082ffb1f +0x19:  movsbl -0xc(%ebp),%edx
082ffb23 +0x1d:  movzbl 0x8a(%eax,%edx,1),%eax
082ffb2b +0x25:  movsbl %al,%eax
082ffb2e +0x28:  leave
082ffb2f +0x29:  ret
```

## 反编译 C

```c
// CBattle_Field::GetHellPartyEventType @ 0x82ffb06

/* CBattle_Field::GetHellPartyEventType(char) */

int __thiscall CBattle_Field::GetHellPartyEventType(CBattle_Field *this,char param_1)

{
  int iVar1;
  
  G_CDataManager();
  iVar1 = CDataManager::get_hellparty_script_values();
  return (int)*(char *)(iVar1 + 0x8a + (int)param_1);
}
```
