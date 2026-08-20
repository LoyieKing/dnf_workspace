# isKeyItem

`_ZNK15CNPCDynamicInfo9isKeyItemEmj`

`CNPCDynamicInfo::isKeyItem(unsigned long, unsigned int) const`

| 类 | 地址 |
|---|---|
| `CNPCDynamicInfo` | `0x08580584` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08580584  _ZNK15CNPCDynamicInfo9isKeyItemEmj
#           CNPCDynamicInfo::isKeyItem(unsigned long, unsigned int) const
# range [0x08580584, 0x085805a7]
08580584 +0x00:  push   %ebp
08580585 +0x01:  mov    %esp,%ebp
08580587 +0x03:  sub    $0x18,%esp
0858058a +0x06:  mov    0x8(%ebp),%eax
0858058d +0x09:  mov    (%eax),%eax
0858058f +0x0b:  mov    0x10(%ebp),%edx
08580592 +0x0e:  mov    %edx,0x8(%esp)
08580596 +0x12:  mov    0xc(%ebp),%edx
08580599 +0x15:  mov    %edx,0x4(%esp)
0858059d +0x19:  mov    %eax,(%esp)
085805a0 +0x1c:  call   08580e6a <_ZNK10CNPCScript9isKeyItemEmj>  ; CNPCScript::isKeyItem(unsigned long, unsigned int) const
085805a5 +0x21:  leave
085805a6 +0x22:  ret
085805a7 +0x23:  nop
```

## 反编译 C

```c
// CNPCDynamicInfo::isKeyItem @ 0x8580584

/* CNPCDynamicInfo::isKeyItem(unsigned long, unsigned int) const */

void __thiscall CNPCDynamicInfo::isKeyItem(CNPCDynamicInfo *this,ulong param_1,uint param_2)

{
  CNPCScript::isKeyItem(*(CNPCScript **)this,param_1,param_2);
  return;
}
```
