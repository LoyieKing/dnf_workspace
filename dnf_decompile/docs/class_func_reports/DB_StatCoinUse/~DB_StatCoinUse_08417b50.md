# ~DB_StatCoinUse

`_ZN14DB_StatCoinUseD0Ev`

`DB_StatCoinUse::~DB_StatCoinUse()`

| 类 | 地址 |
|---|---|
| `DB_StatCoinUse` | `0x08417b50` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08417b50  _ZN14DB_StatCoinUseD0Ev
#           DB_StatCoinUse::~DB_StatCoinUse()
# range [0x08417b50, 0x08417b6d]
08417b50 +0x00:  push   %ebp
08417b51 +0x01:  mov    %esp,%ebp
08417b53 +0x03:  sub    $0x18,%esp
08417b56 +0x06:  mov    0x8(%ebp),%eax
08417b59 +0x09:  mov    %eax,(%esp)
08417b5c +0x0c:  call   08417b20 <_ZN14DB_StatCoinUseD1Ev>  ; DB_StatCoinUse::~DB_StatCoinUse()
08417b61 +0x11:  mov    0x8(%ebp),%eax
08417b64 +0x14:  mov    %eax,(%esp)
08417b67 +0x17:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08417b6c +0x1c:  leave
08417b6d +0x1d:  ret
```

## 反编译 C

```c
// DB_StatCoinUse::~DB_StatCoinUse @ 0x8417b50

/* DB_StatCoinUse::~DB_StatCoinUse() */

void __thiscall DB_StatCoinUse::~DB_StatCoinUse(DB_StatCoinUse *this)

{
  ~DB_StatCoinUse(this);
  operator_delete(this);
  return;
}
```
