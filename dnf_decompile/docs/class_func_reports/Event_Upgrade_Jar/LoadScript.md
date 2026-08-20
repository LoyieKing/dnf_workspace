# LoadScript

`_ZN17Event_Upgrade_Jar10LoadScriptEPKcS1_`

`Event_Upgrade_Jar::LoadScript(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `Event_Upgrade_Jar` | `0x080f49e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080f49e0  _ZN17Event_Upgrade_Jar10LoadScriptEPKcS1_
#           Event_Upgrade_Jar::LoadScript(char const*, char const*)
# range [0x080f49e0, 0x080f4a09]
080f49e0 +0x00:  push   %ebp
080f49e1 +0x01:  mov    %esp,%ebp
080f49e3 +0x03:  sub    $0x18,%esp
080f49e6 +0x06:  mov    0x8(%ebp),%eax
080f49e9 +0x09:  mov    0x10(%ebp),%edx
080f49ec +0x0c:  mov    %edx,0x4(%esp)
080f49f0 +0x10:  mov    %eax,(%esp)
080f49f3 +0x13:  call   089687d1 <_Z27importEventUpgradeJarScriptP19EventUpgradeJarInfoPKc>  ; importEventUpgradeJarScript(EventUpgradeJarInfo*, char const*)
080f49f8 +0x18:  test   %al,%al
080f49fa +0x1a:  je     080f4a03 <+0x23>
080f49fc +0x1c:  mov    $0x1,%eax
080f4a01 +0x21:  jmp    080f4a08 <+0x28>
080f4a03 +0x23:  mov    $0x0,%eax
080f4a08 +0x28:  leave
080f4a09 +0x29:  ret
```

## 反编译 C

```c
// Event_Upgrade_Jar::LoadScript @ 0x80f49e0

/* Event_Upgrade_Jar::LoadScript(char const*, char const*) */

bool __thiscall Event_Upgrade_Jar::LoadScript(Event_Upgrade_Jar *this,char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = importEventUpgradeJarScript((EventUpgradeJarInfo *)this,param_2);
  return cVar1 != '\0';
}
```
