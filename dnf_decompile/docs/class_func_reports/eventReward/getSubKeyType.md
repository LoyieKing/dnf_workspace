# getSubKeyType

`_ZN11eventReward13getSubKeyTypeERSs`

`eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080ef0c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ef0c0  _ZN11eventReward13getSubKeyTypeERSs
#           eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x080ef0c0, 0x080ef127]
080ef0c0 +0x00:  push   %ebp
080ef0c1 +0x01:  mov    %esp,%ebp
080ef0c3 +0x03:  sub    $0x18,%esp
080ef0c6 +0x06:  movl   $"common",0x4(%esp)
080ef0ce +0x0e:  mov    0xc(%ebp),%eax
080ef0d1 +0x11:  mov    %eax,(%esp)
080ef0d4 +0x14:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef0d9 +0x19:  test   %al,%al
080ef0db +0x1b:  je     080ef0e4 <+0x24>
080ef0dd +0x1d:  mov    $0x0,%eax
080ef0e2 +0x22:  jmp    080ef125 <+0x65>
080ef0e4 +0x24:  movl   $"level",0x4(%esp)
080ef0ec +0x2c:  mov    0xc(%ebp),%eax
080ef0ef +0x2f:  mov    %eax,(%esp)
080ef0f2 +0x32:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef0f7 +0x37:  test   %al,%al
080ef0f9 +0x39:  je     080ef102 <+0x42>
080ef0fb +0x3b:  mov    $0x1,%eax
080ef100 +0x40:  jmp    080ef125 <+0x65>
080ef102 +0x42:  movl   $"fatigue",0x4(%esp)
080ef10a +0x4a:  mov    0xc(%ebp),%eax
080ef10d +0x4d:  mov    %eax,(%esp)
080ef110 +0x50:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef115 +0x55:  test   %al,%al
080ef117 +0x57:  je     080ef120 <+0x60>
080ef119 +0x59:  mov    $0x2,%eax
080ef11e +0x5e:  jmp    080ef125 <+0x65>
080ef120 +0x60:  mov    $0x0,%eax
080ef125 +0x65:  leave
080ef126 +0x66:  ret
080ef127 +0x67:  nop
```

## 反编译 C

```c
// eventReward::getSubKeyType @ 0x80ef0c0

/* eventReward::getSubKeyType(std::string&) */

undefined4 __thiscall eventReward::getSubKeyType(eventReward *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_1,"common");
  if (bVar1) {
    uVar2 = 0;
  }
  else {
    bVar1 = std::operator==(param_1,"level");
    if (bVar1) {
      uVar2 = 1;
    }
    else {
      bVar1 = std::operator==(param_1,"fatigue");
      if (bVar1) {
        uVar2 = 2;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
