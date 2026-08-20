# getSubKeyAction

`_ZN11eventReward15getSubKeyActionERSs`

`eventReward::getSubKeyAction(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)`

| 类 | 地址 |
|---|---|
| `eventReward` | `0x080ef128` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ef128  _ZN11eventReward15getSubKeyActionERSs
#           eventReward::getSubKeyAction(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)
# range [0x080ef128, 0x080ef18f]
080ef128 +0x00:  push   %ebp
080ef129 +0x01:  mov    %esp,%ebp
080ef12b +0x03:  sub    $0x18,%esp
080ef12e +0x06:  movl   $"equip",0x4(%esp)
080ef136 +0x0e:  mov    0xc(%ebp),%eax
080ef139 +0x11:  mov    %eax,(%esp)
080ef13c +0x14:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef141 +0x19:  test   %al,%al
080ef143 +0x1b:  je     080ef14c <+0x24>
080ef145 +0x1d:  mov    $0x2,%eax
080ef14a +0x22:  jmp    080ef18d <+0x65>
080ef14c +0x24:  movl   $"inven",0x4(%esp)
080ef154 +0x2c:  mov    0xc(%ebp),%eax
080ef157 +0x2f:  mov    %eax,(%esp)
080ef15a +0x32:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef15f +0x37:  test   %al,%al
080ef161 +0x39:  je     080ef16a <+0x42>
080ef163 +0x3b:  mov    $0x1,%eax
080ef168 +0x40:  jmp    080ef18d <+0x65>
080ef16a +0x42:  movl   $"postal",0x4(%esp)
080ef172 +0x4a:  mov    0xc(%ebp),%eax
080ef175 +0x4d:  mov    %eax,(%esp)
080ef178 +0x50:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
080ef17d +0x55:  test   %al,%al
080ef17f +0x57:  je     080ef188 <+0x60>
080ef181 +0x59:  mov    $0x3,%eax
080ef186 +0x5e:  jmp    080ef18d <+0x65>
080ef188 +0x60:  mov    $0x0,%eax
080ef18d +0x65:  leave
080ef18e +0x66:  ret
080ef18f +0x67:  nop
```

## 反编译 C

```c
// eventReward::getSubKeyAction @ 0x80ef128

/* eventReward::getSubKeyAction(std::string&) */

undefined4 __thiscall eventReward::getSubKeyAction(eventReward *this,string *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_1,"equip");
  if (bVar1) {
    uVar2 = 2;
  }
  else {
    bVar1 = std::operator==(param_1,"inven");
    if (bVar1) {
      uVar2 = 1;
    }
    else {
      bVar1 = std::operator==(param_1,"postal");
      if (bVar1) {
        uVar2 = 3;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}
```
