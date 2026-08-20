# GetBreakBonus

`_ZN20PowerParameterScript13GetBreakBonusEi`

`PowerParameterScript::GetBreakBonus(int)`

| 类 | 地址 |
|---|---|
| `PowerParameterScript` | `0x08a59d58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a59d58  _ZN20PowerParameterScript13GetBreakBonusEi
#           PowerParameterScript::GetBreakBonus(int)
# range [0x08a59d58, 0x08a59db3]
08a59d58 +0x00:  push   %ebp
08a59d59 +0x01:  mov    %esp,%ebp
08a59d5b +0x03:  sub    $0x28,%esp
08a59d5e +0x06:  mov    0x8(%ebp),%eax
08a59d61 +0x09:  add    $0xc8,%eax
08a59d66 +0x0e:  mov    %eax,(%esp)
08a59d69 +0x11:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
08a59d6e +0x16:  mov    %eax,-0xc(%ebp)
08a59d71 +0x19:  mov    0xc(%ebp),%eax
08a59d74 +0x1c:  cmp    -0xc(%ebp),%eax
08a59d77 +0x1f:  jl     08a59d98 <+0x40>
08a59d79 +0x21:  mov    -0xc(%ebp),%eax
08a59d7c +0x24:  sub    $0x1,%eax
08a59d7f +0x27:  mov    0x8(%ebp),%edx
08a59d82 +0x2a:  add    $0xc8,%edx
08a59d88 +0x30:  mov    %eax,0x4(%esp)
08a59d8c +0x34:  mov    %edx,(%esp)
08a59d8f +0x37:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08a59d94 +0x3c:  mov    (%eax),%eax
08a59d96 +0x3e:  jmp    08a59db2 <+0x5a>
08a59d98 +0x40:  mov    0xc(%ebp),%eax
08a59d9b +0x43:  mov    0x8(%ebp),%edx
08a59d9e +0x46:  add    $0xc8,%edx
08a59da4 +0x4c:  mov    %eax,0x4(%esp)
08a59da8 +0x50:  mov    %edx,(%esp)
08a59dab +0x53:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08a59db0 +0x58:  mov    (%eax),%eax
08a59db2 +0x5a:  leave
08a59db3 +0x5b:  ret
```

## 反编译 C

```c
// PowerParameterScript::GetBreakBonus @ 0x8a59d58

/* PowerParameterScript::GetBreakBonus(int) */

undefined4 __thiscall PowerParameterScript::GetBreakBonus(PowerParameterScript *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = std::vector<int,std::allocator<int>>::size
                    ((vector<int,std::allocator<int>> *)(this + 200));
  if (param_1 < iVar1) {
    puVar2 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + 200),param_1);
    uVar3 = *puVar2;
  }
  else {
    puVar2 = (undefined4 *)
             std::vector<int,std::allocator<int>>::operator[]
                       ((vector<int,std::allocator<int>> *)(this + 200),iVar1 - 1);
    uVar3 = *puVar2;
  }
  return uVar3;
}
```
