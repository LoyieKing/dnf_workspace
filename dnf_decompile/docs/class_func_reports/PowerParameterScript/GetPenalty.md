# GetPenalty

`_ZN20PowerParameterScript10GetPenaltyEi`

`PowerParameterScript::GetPenalty(int)`

| 类 | 地址 |
|---|---|
| `PowerParameterScript` | `0x08a59c6e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a59c6e  _ZN20PowerParameterScript10GetPenaltyEi
#           PowerParameterScript::GetPenalty(int)
# range [0x08a59c6e, 0x08a59d55]
08a59c6e +0x00:  push   %ebp
08a59c6f +0x01:  mov    %esp,%ebp
08a59c71 +0x03:  push   %ebx
08a59c72 +0x04:  sub    $0x34,%esp
08a59c75 +0x07:  mov    0x8(%ebp),%ebx
08a59c78 +0x0a:  mov    0xc(%ebp),%eax
08a59c7b +0x0d:  lea    0xbc(%eax),%edx
08a59c81 +0x13:  lea    -0x10(%ebp),%eax
08a59c84 +0x16:  mov    %edx,0x4(%esp)
08a59c88 +0x1a:  mov    %eax,(%esp)
08a59c8b +0x1d:  call   08a59f22 <_GLOBAL__I__Z26importPowerParameterScriptP20PowerParameterScriptPKc+0x90>  ; global constructors keyed to importPowerParameterScript(PowerParameterScript*, char const*)+0x90
08a59c90 +0x22:  sub    $0x4,%esp
08a59c93 +0x25:  jmp    08a59ce3 <+0x75>
08a59c95 +0x27:  lea    -0x10(%ebp),%eax
08a59c98 +0x2a:  mov    %eax,(%esp)
08a59c9b +0x2d:  call   08a59fae <_GLOBAL__I__Z26importPowerParameterScriptP20PowerParameterScriptPKc+0x11c>  ; global constructors keyed to importPowerParameterScript(PowerParameterScript*, char const*)+0x11c
08a59ca0 +0x32:  mov    (%eax),%edx
08a59ca2 +0x34:  mov    %edx,-0x20(%ebp)
08a59ca5 +0x37:  mov    0x4(%eax),%edx
08a59ca8 +0x3a:  mov    %edx,-0x1c(%ebp)
08a59cab +0x3d:  mov    0x8(%eax),%edx
08a59cae +0x40:  mov    %edx,-0x18(%ebp)
08a59cb1 +0x43:  mov    0xc(%eax),%eax
08a59cb4 +0x46:  mov    %eax,-0x14(%ebp)
08a59cb7 +0x49:  mov    -0x1c(%ebp),%eax
08a59cba +0x4c:  cmp    0x10(%ebp),%eax
08a59cbd +0x4f:  jl     08a59cd8 <+0x6a>
08a59cbf +0x51:  mov    -0x20(%ebp),%eax
08a59cc2 +0x54:  mov    %eax,(%ebx)
08a59cc4 +0x56:  mov    -0x1c(%ebp),%eax
08a59cc7 +0x59:  mov    %eax,0x4(%ebx)
08a59cca +0x5c:  mov    -0x18(%ebp),%eax
08a59ccd +0x5f:  mov    %eax,0x8(%ebx)
08a59cd0 +0x62:  mov    -0x14(%ebp),%eax
08a59cd3 +0x65:  mov    %eax,0xc(%ebx)
08a59cd6 +0x68:  jmp    08a59d4f <+0xe1>
08a59cd8 +0x6a:  lea    -0x10(%ebp),%eax
08a59cdb +0x6d:  mov    %eax,(%esp)
08a59cde +0x70:  call   08a59f98 <_GLOBAL__I__Z26importPowerParameterScriptP20PowerParameterScriptPKc+0x106>  ; global constructors keyed to importPowerParameterScript(PowerParameterScript*, char const*)+0x106
08a59ce3 +0x75:  mov    0xc(%ebp),%eax
08a59ce6 +0x78:  lea    0xbc(%eax),%edx
08a59cec +0x7e:  lea    -0xc(%ebp),%eax
08a59cef +0x81:  mov    %edx,0x4(%esp)
08a59cf3 +0x85:  mov    %eax,(%esp)
08a59cf6 +0x88:  call   08a59f46 <_GLOBAL__I__Z26importPowerParameterScriptP20PowerParameterScriptPKc+0xb4>  ; global constructors keyed to importPowerParameterScript(PowerParameterScript*, char const*)+0xb4
08a59cfb +0x8d:  sub    $0x4,%esp
08a59cfe +0x90:  lea    -0xc(%ebp),%eax
08a59d01 +0x93:  mov    %eax,0x4(%esp)
08a59d05 +0x97:  lea    -0x10(%ebp),%eax
08a59d08 +0x9a:  mov    %eax,(%esp)
08a59d0b +0x9d:  call   08a59f6c <_GLOBAL__I__Z26importPowerParameterScriptP20PowerParameterScriptPKc+0xda>  ; global constructors keyed to importPowerParameterScript(PowerParameterScript*, char const*)+0xda
08a59d10 +0xa2:  test   %al,%al
08a59d12 +0xa4:  jne    08a59c95 <+0x27>
08a59d14 +0xa6:  mov    0xc(%ebp),%eax
08a59d17 +0xa9:  add    $0xbc,%eax
08a59d1c +0xae:  mov    %eax,(%esp)
08a59d1f +0xb1:  call   08a59fb8 <_GLOBAL__I__Z26importPowerParameterScriptP20PowerParameterScriptPKc+0x126>  ; global constructors keyed to importPowerParameterScript(PowerParameterScript*, char const*)+0x126
08a59d24 +0xb6:  lea    -0x1(%eax),%edx
08a59d27 +0xb9:  mov    0xc(%ebp),%eax
08a59d2a +0xbc:  add    $0xbc,%eax
08a59d2f +0xc1:  mov    %edx,0x4(%esp)
08a59d33 +0xc5:  mov    %eax,(%esp)
08a59d36 +0xc8:  call   08a59fd4 <_GLOBAL__I__Z26importPowerParameterScriptP20PowerParameterScriptPKc+0x142>  ; global constructors keyed to importPowerParameterScript(PowerParameterScript*, char const*)+0x142
08a59d3b +0xcd:  movl   $0x10,0x8(%esp)
08a59d43 +0xd5:  mov    %eax,0x4(%esp)
08a59d47 +0xd9:  mov    %ebx,(%esp)
08a59d4a +0xdc:  call   0807d880 <_init+0x178>
08a59d4f +0xe1:  mov    %ebx,%eax
08a59d51 +0xe3:  mov    -0x4(%ebp),%ebx
08a59d54 +0xe6:  leave
08a59d55 +0xe7:  ret    $0x4
```

## 反编译 C

```c
// PowerParameterScript::GetPenalty @ 0x8a59c6e

/* PowerParameterScript::GetPenalty(int) */

int PowerParameterScript::GetPenalty(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  void *__src;
  int in_stack_00000008;
  int in_stack_0000000c;
  __normal_iterator<stVictoryPenalty*,std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>>
  local_14 [4];
  __normal_iterator local_10 [8];
  
  std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>::begin();
  while( true ) {
    std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>::end();
    bVar3 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar3) {
      iVar5 = std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>::size
                        ((vector<stVictoryPenalty,std::allocator<stVictoryPenalty>> *)
                         (in_stack_00000008 + 0xbc));
      __src = (void *)std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>::operator[]
                                ((vector<stVictoryPenalty,std::allocator<stVictoryPenalty>> *)
                                 (in_stack_00000008 + 0xbc),iVar5 - 1);
      memmove((void *)param_1,__src,0x10);
      return param_1;
    }
    puVar4 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<stVictoryPenalty*,std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>>
             ::operator*(local_14);
    iVar5 = puVar4[1];
    uVar1 = puVar4[2];
    uVar2 = puVar4[3];
    if (in_stack_0000000c <= iVar5) break;
    __gnu_cxx::
    __normal_iterator<stVictoryPenalty*,std::vector<stVictoryPenalty,std::allocator<stVictoryPenalty>>>
    ::operator++(local_14);
  }
  *(undefined4 *)param_1 = *puVar4;
  *(int *)(param_1 + 4) = iVar5;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return param_1;
}
```
