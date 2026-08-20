# getGuildCargoUpradeInfo

`_ZN20GuildParameterScript23getGuildCargoUpradeInfoEi`

`GuildParameterScript::getGuildCargoUpradeInfo(int)`

| 类 | 地址 |
|---|---|
| `GuildParameterScript` | `0x08979726` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08979726  _ZN20GuildParameterScript23getGuildCargoUpradeInfoEi
#           GuildParameterScript::getGuildCargoUpradeInfo(int)
# range [0x08979726, 0x089797a3]
08979726 +0x00:  push   %ebp
08979727 +0x01:  mov    %esp,%ebp
08979729 +0x03:  sub    $0x28,%esp
0897972c +0x06:  mov    0x8(%ebp),%eax
0897972f +0x09:  lea    0x38(%eax),%edx
08979732 +0x0c:  lea    -0x14(%ebp),%eax
08979735 +0x0f:  mov    %edx,0x4(%esp)
08979739 +0x13:  mov    %eax,(%esp)
0897973c +0x16:  call   08979b78 <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x248>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x248
08979741 +0x1b:  sub    $0x4,%esp
08979744 +0x1e:  jmp    0897976e <+0x48>
08979746 +0x20:  lea    -0x14(%ebp),%eax
08979749 +0x23:  mov    %eax,(%esp)
0897974c +0x26:  call   08979bee <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x2be>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x2be
08979751 +0x2b:  mov    %eax,-0xc(%ebp)
08979754 +0x2e:  mov    -0xc(%ebp),%eax
08979757 +0x31:  mov    (%eax),%eax
08979759 +0x33:  cmp    0xc(%ebp),%eax
0897975c +0x36:  jne    08979763 <+0x3d>
0897975e +0x38:  mov    -0xc(%ebp),%eax
08979761 +0x3b:  jmp    089797a1 <+0x7b>
08979763 +0x3d:  lea    -0x14(%ebp),%eax
08979766 +0x40:  mov    %eax,(%esp)
08979769 +0x43:  call   08979bf8 <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x2c8>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x2c8
0897976e +0x48:  mov    0x8(%ebp),%eax
08979771 +0x4b:  lea    0x38(%eax),%edx
08979774 +0x4e:  lea    -0x10(%ebp),%eax
08979777 +0x51:  mov    %edx,0x4(%esp)
0897977b +0x55:  mov    %eax,(%esp)
0897977e +0x58:  call   08979b9c <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x26c>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x26c
08979783 +0x5d:  sub    $0x4,%esp
08979786 +0x60:  lea    -0x10(%ebp),%eax
08979789 +0x63:  mov    %eax,0x4(%esp)
0897978d +0x67:  lea    -0x14(%ebp),%eax
08979790 +0x6a:  mov    %eax,(%esp)
08979793 +0x6d:  call   08979bc2 <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x292>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x292
08979798 +0x72:  test   %al,%al
0897979a +0x74:  jne    08979746 <+0x20>
0897979c +0x76:  mov    $0x0,%eax
089797a1 +0x7b:  leave
089797a2 +0x7c:  ret
089797a3 +0x7d:  nop
```

## 反编译 C

```c
// GuildParameterScript::getGuildCargoUpradeInfo @ 0x8979726

/* GuildParameterScript::getGuildCargoUpradeInfo(int) */

int * __thiscall
GuildParameterScript::getGuildCargoUpradeInfo(GuildParameterScript *this,int param_1)

{
  bool bVar1;
  __normal_iterator<STGuildStorageUpgradeInfo*,std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int *local_10;
  
  std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>::begin();
  while( true ) {
    std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return (int *)0x0;
    }
    local_10 = (int *)__gnu_cxx::
                      __normal_iterator<STGuildStorageUpgradeInfo*,std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>>
                      ::operator*(local_18);
    if (*local_10 == param_1) break;
    __gnu_cxx::
    __normal_iterator<STGuildStorageUpgradeInfo*,std::vector<STGuildStorageUpgradeInfo,std::allocator<STGuildStorageUpgradeInfo>>>
    ::operator++(local_18);
  }
  return local_10;
}
```
