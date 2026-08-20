# LoadPurcahseBonusScript

`_ZN18ItemVendingMachine23LoadPurcahseBonusScriptEv`

`ItemVendingMachine::LoadPurcahseBonusScript()`

| 类 | 地址 |
|---|---|
| `ItemVendingMachine` | `0x08179eae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08179eae  _ZN18ItemVendingMachine23LoadPurcahseBonusScriptEv
#           ItemVendingMachine::LoadPurcahseBonusScript()
# range [0x08179eae, 0x08179ed7]
08179eae +0x00:  push   %ebp
08179eaf +0x01:  mov    %esp,%ebp
08179eb1 +0x03:  sub    $0x18,%esp
08179eb4 +0x06:  mov    0x8(%ebp),%eax
08179eb7 +0x09:  add    $0x8,%eax
08179eba +0x0c:  mov    %eax,(%esp)
08179ebd +0x0f:  call   081abf14 <_ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv>  ; ARAD::CeraShopPurcahseCountBonus::LoadScript()
08179ec2 +0x14:  xor    $0x1,%eax
08179ec5 +0x17:  test   %al,%al
08179ec7 +0x19:  je     08179ed0 <+0x22>
08179ec9 +0x1b:  mov    $0x0,%eax
08179ece +0x20:  jmp    08179ed5 <+0x27>
08179ed0 +0x22:  mov    $0x1,%eax
08179ed5 +0x27:  leave
08179ed6 +0x28:  ret
08179ed7 +0x29:  nop
```

## 反编译 C

```c
// ItemVendingMachine::LoadPurcahseBonusScript @ 0x8179eae

/* ItemVendingMachine::LoadPurcahseBonusScript() */

bool __thiscall ItemVendingMachine::LoadPurcahseBonusScript(ItemVendingMachine *this)

{
  char cVar1;
  
  cVar1 = ARAD::CeraShopPurcahseCountBonus::LoadScript((CeraShopPurcahseCountBonus *)(this + 8));
  return cVar1 == '\x01';
}
```
