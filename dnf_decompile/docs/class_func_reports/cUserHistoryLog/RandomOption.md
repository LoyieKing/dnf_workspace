# RandomOption

`_ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE`

`cUserHistoryLog::RandomOption(Inven_Item const&, randomOptionReason::T)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682d3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682d3a  _ZN15cUserHistoryLog12RandomOptionERK10Inven_ItemN18randomOptionReason1TE
#           cUserHistoryLog::RandomOption(Inven_Item const&, randomOptionReason::T)
# range [0x08682d3a, 0x08682e83]
08682d3a +0x000:  push   %ebp
08682d3b +0x001:  mov    %esp,%ebp
08682d3d +0x003:  push   %edi
08682d3e +0x004:  push   %esi
08682d3f +0x005:  push   %ebx
08682d40 +0x006:  sub    $0x9c,%esp
08682d46 +0x00c:  mov    0x10(%ebp),%eax
08682d49 +0x00f:  mov    %eax,-0x44(%ebp)
08682d4c +0x012:  mov    0xc(%ebp),%eax
08682d4f +0x015:  movzbl 0x32(%eax),%eax
08682d53 +0x019:  movzbl %al,%eax
08682d56 +0x01c:  mov    %eax,-0x40(%ebp)
08682d59 +0x01f:  mov    0xc(%ebp),%eax
08682d5c +0x022:  movzbl 0x31(%eax),%eax
08682d60 +0x026:  movzbl %al,%eax
08682d63 +0x029:  mov    %eax,-0x3c(%ebp)
08682d66 +0x02c:  mov    0xc(%ebp),%eax
08682d69 +0x02f:  movzbl 0x30(%eax),%eax
08682d6d +0x033:  movzbl %al,%eax
08682d70 +0x036:  mov    %eax,-0x38(%ebp)
08682d73 +0x039:  mov    0xc(%ebp),%eax
08682d76 +0x03c:  movzbl 0x2f(%eax),%eax
08682d7a +0x040:  movzbl %al,%eax
08682d7d +0x043:  mov    %eax,-0x34(%ebp)
08682d80 +0x046:  mov    0xc(%ebp),%eax
08682d83 +0x049:  movzbl 0x2e(%eax),%eax
08682d87 +0x04d:  movzbl %al,%eax
08682d8a +0x050:  mov    %eax,-0x30(%ebp)
08682d8d +0x053:  mov    0xc(%ebp),%eax
08682d90 +0x056:  movzbl 0x2d(%eax),%eax
08682d94 +0x05a:  movzbl %al,%eax
08682d97 +0x05d:  mov    %eax,-0x2c(%ebp)
08682d9a +0x060:  mov    0xc(%ebp),%eax
08682d9d +0x063:  movzbl 0x2c(%eax),%eax
08682da1 +0x067:  movzbl %al,%eax
08682da4 +0x06a:  mov    %eax,-0x28(%ebp)
08682da7 +0x06d:  mov    0xc(%ebp),%eax
08682daa +0x070:  movzbl 0x2b(%eax),%eax
08682dae +0x074:  movzbl %al,%eax
08682db1 +0x077:  mov    %eax,-0x24(%ebp)
08682db4 +0x07a:  mov    0xc(%ebp),%eax
08682db7 +0x07d:  movzbl 0x2a(%eax),%eax
08682dbb +0x081:  movzbl %al,%eax
08682dbe +0x084:  mov    %eax,-0x20(%ebp)
08682dc1 +0x087:  mov    0xc(%ebp),%eax
08682dc4 +0x08a:  movzbl 0x29(%eax),%eax
08682dc8 +0x08e:  movzbl %al,%eax
08682dcb +0x091:  mov    %eax,-0x1c(%ebp)
08682dce +0x094:  mov    0xc(%ebp),%eax
08682dd1 +0x097:  movzbl 0x28(%eax),%eax
08682dd5 +0x09b:  movzbl %al,%edi
08682dd8 +0x09e:  mov    0xc(%ebp),%eax
08682ddb +0x0a1:  movzbl 0x27(%eax),%eax
08682ddf +0x0a5:  movzbl %al,%esi
08682de2 +0x0a8:  mov    0xc(%ebp),%eax
08682de5 +0x0ab:  movzbl 0x26(%eax),%eax
08682de9 +0x0af:  movzbl %al,%ebx
08682dec +0x0b2:  mov    0xc(%ebp),%eax
08682def +0x0b5:  movzbl 0x25(%eax),%eax
08682df3 +0x0b9:  movzbl %al,%ecx
08682df6 +0x0bc:  mov    0xc(%ebp),%eax
08682df9 +0x0bf:  mov    0x2(%eax),%edx
08682dfc +0x0c2:  mov    0x8(%ebp),%eax
08682dff +0x0c5:  mov    (%eax),%eax
08682e01 +0x0c7:  mov    %eax,-0x4c(%ebp)
08682e04 +0x0ca:  mov    -0x44(%ebp),%eax
08682e07 +0x0cd:  mov    %eax,0x44(%esp)
08682e0b +0x0d1:  mov    -0x40(%ebp),%eax
08682e0e +0x0d4:  mov    %eax,0x40(%esp)
08682e12 +0x0d8:  mov    -0x3c(%ebp),%eax
08682e15 +0x0db:  mov    %eax,0x3c(%esp)
08682e19 +0x0df:  mov    -0x38(%ebp),%eax
08682e1c +0x0e2:  mov    %eax,0x38(%esp)
08682e20 +0x0e6:  mov    -0x34(%ebp),%eax
08682e23 +0x0e9:  mov    %eax,0x34(%esp)
08682e27 +0x0ed:  mov    -0x30(%ebp),%eax
08682e2a +0x0f0:  mov    %eax,0x30(%esp)
08682e2e +0x0f4:  mov    -0x2c(%ebp),%eax
08682e31 +0x0f7:  mov    %eax,0x2c(%esp)
08682e35 +0x0fb:  mov    -0x28(%ebp),%eax
08682e38 +0x0fe:  mov    %eax,0x28(%esp)
08682e3c +0x102:  mov    -0x24(%ebp),%eax
08682e3f +0x105:  mov    %eax,0x24(%esp)
08682e43 +0x109:  mov    -0x20(%ebp),%eax
08682e46 +0x10c:  mov    %eax,0x20(%esp)
08682e4a +0x110:  mov    -0x1c(%ebp),%eax
08682e4d +0x113:  mov    %eax,0x1c(%esp)
08682e51 +0x117:  mov    %edi,0x18(%esp)
08682e55 +0x11b:  mov    %esi,0x14(%esp)
08682e59 +0x11f:  mov    %ebx,0x10(%esp)
08682e5d +0x123:  mov    %ecx,0xc(%esp)
08682e61 +0x127:  mov    %edx,0x8(%esp)
08682e65 +0x12b:  movl   $"RandomOptionItem,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d",0x4(%esp)
08682e6d +0x133:  mov    -0x4c(%ebp),%eax
08682e70 +0x136:  mov    %eax,(%esp)
08682e73 +0x139:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682e78 +0x13e:  add    $0x9c,%esp
08682e7e +0x144:  pop    %ebx
08682e7f +0x145:  pop    %esi
08682e80 +0x146:  pop    %edi
08682e81 +0x147:  pop    %ebp
08682e82 +0x148:  ret
08682e83 +0x149:  nop
```

## 反编译 C

```c
// cUserHistoryLog::RandomOption @ 0x8682d3a

/* cUserHistoryLog::RandomOption(Inven_Item const&, randomOptionReason::T) */

void __thiscall cUserHistoryLog::RandomOption(cUserHistoryLog *this,int param_1,undefined4 param_3)

{
  CUser::LogHistory(*(CUser **)this,
                    "RandomOptionItem,%d,%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X,%d"
                    ,*(undefined4 *)(param_1 + 2),(uint)*(byte *)(param_1 + 0x25),
                    (uint)*(byte *)(param_1 + 0x26),(uint)*(byte *)(param_1 + 0x27),
                    (uint)*(byte *)(param_1 + 0x28),(uint)*(byte *)(param_1 + 0x29),
                    (uint)*(byte *)(param_1 + 0x2a),(uint)*(byte *)(param_1 + 0x2b),
                    (uint)*(byte *)(param_1 + 0x2c),(uint)*(byte *)(param_1 + 0x2d),
                    (uint)*(byte *)(param_1 + 0x2e),(uint)*(byte *)(param_1 + 0x2f),
                    (uint)*(byte *)(param_1 + 0x30),(uint)*(byte *)(param_1 + 0x31),
                    (uint)*(byte *)(param_1 + 0x32),param_3);
  return;
}
```
