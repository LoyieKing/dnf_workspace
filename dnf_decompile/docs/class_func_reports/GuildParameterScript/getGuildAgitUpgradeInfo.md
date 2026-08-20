# getGuildAgitUpgradeInfo

`_ZN20GuildParameterScript23getGuildAgitUpgradeInfoEi`

`GuildParameterScript::getGuildAgitUpgradeInfo(int)`

| 类 | 地址 |
|---|---|
| `GuildParameterScript` | `0x089796dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089796dc  _ZN20GuildParameterScript23getGuildAgitUpgradeInfoEi
#           GuildParameterScript::getGuildAgitUpgradeInfo(int)
# range [0x089796dc, 0x08979725]
089796dc +0x00:  push   %ebp
089796dd +0x01:  mov    %esp,%ebp
089796df +0x03:  push   %ebx
089796e0 +0x04:  sub    $0x14,%esp
089796e3 +0x07:  mov    0xc(%ebp),%eax
089796e6 +0x0a:  lea    -0x1(%eax),%ebx
089796e9 +0x0d:  mov    0x8(%ebp),%eax
089796ec +0x10:  add    $0x2c,%eax
089796ef +0x13:  mov    %eax,(%esp)
089796f2 +0x16:  call   08979b30 <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x200>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x200
089796f7 +0x1b:  cmp    %eax,%ebx
089796f9 +0x1d:  setl   %al
089796fc +0x20:  test   %al,%al
089796fe +0x22:  je     0897971a <+0x3e>
08979700 +0x24:  mov    0xc(%ebp),%eax
08979703 +0x27:  sub    $0x1,%eax
08979706 +0x2a:  mov    0x8(%ebp),%edx
08979709 +0x2d:  add    $0x2c,%edx
0897970c +0x30:  mov    %eax,0x4(%esp)
08979710 +0x34:  mov    %edx,(%esp)
08979713 +0x37:  call   08979b4c <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x21c>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x21c
08979718 +0x3c:  jmp    0897971f <+0x43>
0897971a +0x3e:  mov    $0x0,%eax
0897971f +0x43:  add    $0x14,%esp
08979722 +0x46:  pop    %ebx
08979723 +0x47:  pop    %ebp
08979724 +0x48:  ret
08979725 +0x49:  nop
```

## 反编译 C

```c
// GuildParameterScript::getGuildAgitUpgradeInfo @ 0x89796dc

/* GuildParameterScript::getGuildAgitUpgradeInfo(int) */

undefined4 __thiscall
GuildParameterScript::getGuildAgitUpgradeInfo(GuildParameterScript *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = std::vector<STAgitUpgradeInfo,std::allocator<STAgitUpgradeInfo>>::size
                    ((vector<STAgitUpgradeInfo,std::allocator<STAgitUpgradeInfo>> *)(this + 0x2c));
  if (param_1 + -1 < iVar1) {
    uVar2 = std::vector<STAgitUpgradeInfo,std::allocator<STAgitUpgradeInfo>>::at
                      ((vector<STAgitUpgradeInfo,std::allocator<STAgitUpgradeInfo>> *)(this + 0x2c),
                       param_1 - 1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
