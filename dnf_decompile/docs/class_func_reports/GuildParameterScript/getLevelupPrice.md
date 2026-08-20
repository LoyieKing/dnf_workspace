# getLevelupPrice

`_ZN20GuildParameterScript15getLevelupPriceEii`

`GuildParameterScript::getLevelupPrice(int, int)`

| 类 | 地址 |
|---|---|
| `GuildParameterScript` | `0x089797a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089797a4  _ZN20GuildParameterScript15getLevelupPriceEii
#           GuildParameterScript::getLevelupPrice(int, int)
# range [0x089797a4, 0x08979863]
089797a4 +0x00:  push   %ebp
089797a5 +0x01:  mov    %esp,%ebp
089797a7 +0x03:  push   %ebx
089797a8 +0x04:  sub    $0x24,%esp
089797ab +0x07:  mov    0x8(%ebp),%eax
089797ae +0x0a:  add    $0xf0,%eax
089797b3 +0x0f:  mov    %eax,(%esp)
089797b6 +0x12:  call   08979c0e <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x2de>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x2de
089797bb +0x17:  sub    $0x1,%eax
089797be +0x1a:  mov    %eax,-0xc(%ebp)
089797c1 +0x1d:  jmp    0897981f <+0x7b>
089797c3 +0x1f:  mov    -0xc(%ebp),%eax
089797c6 +0x22:  mov    0x8(%ebp),%edx
089797c9 +0x25:  add    $0xf0,%edx
089797cf +0x2b:  mov    %eax,0x4(%esp)
089797d3 +0x2f:  mov    %edx,(%esp)
089797d6 +0x32:  call   08979c2a <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x2fa>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x2fa
089797db +0x37:  mov    (%eax),%eax
089797dd +0x39:  cmp    0x10(%ebp),%eax
089797e0 +0x3c:  setle  %al
089797e3 +0x3f:  test   %al,%al
089797e5 +0x41:  je     0897981b <+0x77>
089797e7 +0x43:  mov    0xc(%ebp),%ebx
089797ea +0x46:  mov    -0xc(%ebp),%eax
089797ed +0x49:  mov    0x8(%ebp),%edx
089797f0 +0x4c:  add    $0xf0,%edx
089797f6 +0x52:  mov    %eax,0x4(%esp)
089797fa +0x56:  mov    %edx,(%esp)
089797fd +0x59:  call   08979c2a <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x2fa>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x2fa
08979802 +0x5e:  add    $0x4,%eax
08979805 +0x61:  mov    %ebx,0x4(%esp)
08979809 +0x65:  mov    %eax,(%esp)
0897980c +0x68:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08979811 +0x6d:  mov    (%eax),%eax
08979813 +0x6f:  imul   $0x2710,%eax,%eax
08979819 +0x75:  jmp    0897985d <+0xb9>
0897981b +0x77:  subl   $0x1,-0xc(%ebp)
0897981f +0x7b:  mov    -0xc(%ebp),%eax
08979822 +0x7e:  not    %eax
08979824 +0x80:  shr    $0x1f,%eax
08979827 +0x83:  test   %al,%al
08979829 +0x85:  jne    089797c3 <+0x1f>
0897982b +0x87:  mov    0xc(%ebp),%ebx
0897982e +0x8a:  mov    0x8(%ebp),%eax
08979831 +0x8d:  add    $0xf0,%eax
08979836 +0x92:  movl   $0x0,0x4(%esp)
0897983e +0x9a:  mov    %eax,(%esp)
08979841 +0x9d:  call   08979c2a <_GLOBAL__I__Z26importGuildParameterScriptP20GuildParameterScriptPKc+0x2fa>  ; global constructors keyed to importGuildParameterScript(GuildParameterScript*, char const*)+0x2fa
08979846 +0xa2:  add    $0x4,%eax
08979849 +0xa5:  mov    %ebx,0x4(%esp)
0897984d +0xa9:  mov    %eax,(%esp)
08979850 +0xac:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08979855 +0xb1:  mov    (%eax),%eax
08979857 +0xb3:  imul   $0x2710,%eax,%eax
0897985d +0xb9:  add    $0x24,%esp
08979860 +0xbc:  pop    %ebx
08979861 +0xbd:  pop    %ebp
08979862 +0xbe:  ret
08979863 +0xbf:  nop
```

## 反编译 C

```c
// GuildParameterScript::getLevelupPrice @ 0x89797a4

/* GuildParameterScript::getLevelupPrice(int, int) */

int __thiscall
GuildParameterScript::getLevelupPrice(GuildParameterScript *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint local_10;
  
  local_10 = std::
             vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
             ::size((vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                     *)(this + 0xf0));
  do {
    local_10 = local_10 - 1;
    if ((int)local_10 < 0) {
      iVar1 = std::
              vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
              ::operator[]((vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                            *)(this + 0xf0),0);
      piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(iVar1 + 4),param_1);
      iVar1 = *piVar2;
      goto LAB_0897985d;
    }
    piVar2 = (int *)std::
                    vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                    ::operator[]((vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                                  *)(this + 0xf0),local_10);
  } while (param_2 < *piVar2);
  iVar1 = std::
          vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
          ::operator[]((vector<std::pair<int,std::vector<int,std::allocator<int>>>,std::allocator<std::pair<int,std::vector<int,std::allocator<int>>>>>
                        *)(this + 0xf0),local_10);
  piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                            ((vector<int,std::allocator<int>> *)(iVar1 + 4),param_1);
  iVar1 = *piVar2;
LAB_0897985d:
  return iVar1 * 10000;
}
```
