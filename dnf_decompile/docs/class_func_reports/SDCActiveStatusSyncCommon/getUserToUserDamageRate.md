# getUserToUserDamageRate

`_ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb`

`SDCActiveStatusSyncCommon::getUserToUserDamageRate(bool)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808df5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808df5c  _ZN25SDCActiveStatusSyncCommon23getUserToUserDamageRateEb
#           SDCActiveStatusSyncCommon::getUserToUserDamageRate(bool)
# range [0x0808df5c, 0x0808df81]
0808df5c +0x00:  push   %ebp
0808df5d +0x01:  mov    %esp,%ebp
0808df5f +0x03:  sub    $0x8,%esp
0808df62 +0x06:  mov    0xc(%ebp),%eax
0808df65 +0x09:  mov    %al,-0x4(%ebp)
0808df68 +0x0c:  cmpb   $0x0,-0x4(%ebp)
0808df6c +0x10:  je     0808df75 <+0x19>
0808df6e +0x12:  mov    &ACTIVESTATUS_USER_TO_USER_DAMAGE_RATE_DEATH_TOWER,%eax
0808df73 +0x17:  jmp    0808df7a <+0x1e>
0808df75 +0x19:  mov    &ACTIVESTATUS_USER_TO_USER_DAMAGE_RATE,%eax
0808df7a +0x1e:  mov    %eax,-0x8(%ebp)
0808df7d +0x21:  flds   -0x8(%ebp)
0808df80 +0x24:  leave
0808df81 +0x25:  ret
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::getUserToUserDamageRate @ 0x808df5c

/* SDCActiveStatusSyncCommon::getUserToUserDamageRate(bool) */

longdouble __thiscall
SDCActiveStatusSyncCommon::getUserToUserDamageRate(SDCActiveStatusSyncCommon *this,bool param_1)

{
  float fVar1;
  
  fVar1 = ACTIVESTATUS_USER_TO_USER_DAMAGE_RATE;
  if (param_1) {
    fVar1 = ACTIVESTATUS_USER_TO_USER_DAMAGE_RATE_DEATH_TOWER;
  }
  return (longdouble)fVar1;
}
```
