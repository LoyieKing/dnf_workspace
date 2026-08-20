# Event_Upgrade_Jar

`_ZN17Event_Upgrade_JarC1Ev`

`Event_Upgrade_Jar::Event_Upgrade_Jar()`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f49b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f49b8  _ZN17Event_Upgrade_JarC1Ev
#           Event_Upgrade_Jar::Event_Upgrade_Jar()
# range [0x080f49b8, 0x080f49cb]
080f49b8 +0x00:  push   %ebp
080f49b9 +0x01:  mov    %esp,%ebp
080f49bb +0x03:  sub    $0x18,%esp
080f49be +0x06:  mov    0x8(%ebp),%eax
080f49c1 +0x09:  mov    %eax,(%esp)
080f49c4 +0x0c:  call   080f50a4 <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x55>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x55
080f49c9 +0x11:  leave
080f49ca +0x12:  ret
080f49cb +0x13:  nop
```

## 反编译 C

```c
// Event_Upgrade_Jar::Event_Upgrade_Jar @ 0x80f49b8

/* Event_Upgrade_Jar::Event_Upgrade_Jar() */

void __thiscall Event_Upgrade_Jar::Event_Upgrade_Jar(Event_Upgrade_Jar *this)

{
  EventUpgradeJarInfo::EventUpgradeJarInfo((EventUpgradeJarInfo *)this);
  return;
}
```
