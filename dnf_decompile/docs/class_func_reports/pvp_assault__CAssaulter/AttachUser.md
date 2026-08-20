# AttachUser

`_ZN11pvp_assault10CAssaulter10AttachUserEP5CUser17ENUM_ASSAULT_TEAM`

`pvp_assault::CAssaulter::AttachUser(CUser*, ENUM_ASSAULT_TEAM)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaulter` | `0x082e67e6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e67e6  _ZN11pvp_assault10CAssaulter10AttachUserEP5CUser17ENUM_ASSAULT_TEAM
#           pvp_assault::CAssaulter::AttachUser(CUser*, ENUM_ASSAULT_TEAM)
# range [0x082e67e6, 0x082e6811]
082e67e6 +0x00:  push   %ebp
082e67e7 +0x01:  mov    %esp,%ebp
082e67e9 +0x03:  sub    $0x18,%esp
082e67ec +0x06:  mov    0x8(%ebp),%eax
082e67ef +0x09:  mov    0xc(%ebp),%edx
082e67f2 +0x0c:  mov    %edx,(%eax)
082e67f4 +0x0e:  mov    0x8(%ebp),%eax
082e67f7 +0x11:  mov    0x10(%ebp),%edx
082e67fa +0x14:  mov    %edx,0x4(%eax)
082e67fd +0x17:  mov    0xc(%ebp),%eax
082e6800 +0x1a:  mov    %eax,0x4(%esp)
082e6804 +0x1e:  mov    0x8(%ebp),%eax
082e6807 +0x21:  mov    %eax,(%esp)
082e680a +0x24:  call   082e6780 <_ZN11pvp_assault10CAssaulter15_PrepareAssaultEP5CUser>  ; pvp_assault::CAssaulter::_PrepareAssault(CUser*)
082e680f +0x29:  leave
082e6810 +0x2a:  ret
082e6811 +0x2b:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaulter::AttachUser @ 0x82e67e6

/* pvp_assault::CAssaulter::AttachUser(CUser*, ENUM_ASSAULT_TEAM) */

void __thiscall
pvp_assault::CAssaulter::AttachUser(CAssaulter *this,CUser *param_1,undefined4 param_3)

{
  *(CUser **)this = param_1;
  *(undefined4 *)(this + 4) = param_3;
  _PrepareAssault(this,param_1);
  return;
}
```
