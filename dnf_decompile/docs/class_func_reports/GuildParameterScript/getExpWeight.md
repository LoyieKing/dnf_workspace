# getExpWeight

`_ZN20GuildParameterScript12getExpWeightEi`

`GuildParameterScript::getExpWeight(int)`

| 类 | 地址 |
|---|---|
| `GuildParameterScript` | `0x08979864` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08979864  _ZN20GuildParameterScript12getExpWeightEi
#           GuildParameterScript::getExpWeight(int)
# range [0x08979864, 0x089798ef]
08979864 +0x00:  push   %ebp
08979865 +0x01:  mov    %esp,%ebp
08979867 +0x03:  sub    $0x28,%esp
0897986a +0x06:  mov    0x8(%ebp),%eax
0897986d +0x09:  add    $0xe4,%eax
08979872 +0x0e:  mov    %eax,(%esp)
08979875 +0x11:  call   08979c3c <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x30c>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x30c
0897987a +0x16:  sub    $0x1,%eax
0897987d +0x19:  mov    %eax,-0xc(%ebp)
08979880 +0x1c:  jmp    089798c7 <+0x63>
08979882 +0x1e:  mov    -0xc(%ebp),%eax
08979885 +0x21:  mov    0x8(%ebp),%edx
08979888 +0x24:  add    $0xe4,%edx
0897988e +0x2a:  mov    %eax,0x4(%esp)
08979892 +0x2e:  mov    %edx,(%esp)
08979895 +0x31:  call   08979c5e <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x32e>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x32e
0897989a +0x36:  mov    (%eax),%eax
0897989c +0x38:  cmp    0xc(%ebp),%eax
0897989f +0x3b:  setle  %al
089798a2 +0x3e:  test   %al,%al
089798a4 +0x40:  je     089798c3 <+0x5f>
089798a6 +0x42:  mov    -0xc(%ebp),%eax
089798a9 +0x45:  mov    0x8(%ebp),%edx
089798ac +0x48:  add    $0xe4,%edx
089798b2 +0x4e:  mov    %eax,0x4(%esp)
089798b6 +0x52:  mov    %edx,(%esp)
089798b9 +0x55:  call   08979c5e <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x32e>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x32e
089798be +0x5a:  fldl   0x4(%eax)
089798c1 +0x5d:  jmp    089798ee <+0x8a>
089798c3 +0x5f:  subl   $0x1,-0xc(%ebp)
089798c7 +0x63:  mov    -0xc(%ebp),%eax
089798ca +0x66:  not    %eax
089798cc +0x68:  shr    $0x1f,%eax
089798cf +0x6b:  test   %al,%al
089798d1 +0x6d:  jne    08979882 <+0x1e>
089798d3 +0x6f:  mov    0x8(%ebp),%eax
089798d6 +0x72:  add    $0xe4,%eax
089798db +0x77:  movl   $0x0,0x4(%esp)
089798e3 +0x7f:  mov    %eax,(%esp)
089798e6 +0x82:  call   08979c5e <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x32e>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x32e
089798eb +0x87:  fldl   0x4(%eax)
089798ee +0x8a:  leave
089798ef +0x8b:  ret
```

## 反编译 C

```c
// GuildParameterScript::getExpWeight @ 0x8979864

/* GuildParameterScript::getExpWeight(int) */

longdouble __thiscall GuildParameterScript::getExpWeight(GuildParameterScript *this,int param_1)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  uint local_10;
  
  local_10 = std::vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>::size
                       ((vector<std::pair<int,double>,std::allocator<std::pair<int,double>>> *)
                        (this + 0xe4));
  do {
    local_10 = local_10 - 1;
    if ((int)local_10 < 0) {
      iVar3 = std::vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>::operator[]
                        ((vector<std::pair<int,double>,std::allocator<std::pair<int,double>>> *)
                         (this + 0xe4),0);
      dVar1 = *(double *)(iVar3 + 4);
      goto LAB_089798ee;
    }
    piVar2 = (int *)std::vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>::
                    operator[]((vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>
                                *)(this + 0xe4),local_10);
  } while (param_1 < *piVar2);
  iVar3 = std::vector<std::pair<int,double>,std::allocator<std::pair<int,double>>>::operator[]
                    ((vector<std::pair<int,double>,std::allocator<std::pair<int,double>>> *)
                     (this + 0xe4),local_10);
  dVar1 = *(double *)(iVar3 + 4);
LAB_089798ee:
  return (longdouble)dVar1;
}
```
