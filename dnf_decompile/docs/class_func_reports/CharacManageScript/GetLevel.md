# GetLevel

`_ZN18CharacManageScript8GetLevelEi`

`CharacManageScript::GetLevel(int)`

| 类 | 地址 |
|---|---|
| `CharacManageScript` | `0x088e0ed4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e0ed4  _ZN18CharacManageScript8GetLevelEi
#           CharacManageScript::GetLevel(int)
# range [0x088e0ed4, 0x088e0f57]
088e0ed4 +0x00:  push   %ebp
088e0ed5 +0x01:  mov    %esp,%ebp
088e0ed7 +0x03:  sub    $0x28,%esp
088e0eda +0x06:  cmpl   $0x0,0xc(%ebp)
088e0ede +0x0a:  jne    088e0ee7 <+0x13>
088e0ee0 +0x0c:  mov    $0x0,%eax
088e0ee5 +0x11:  jmp    088e0f56 <+0x82>
088e0ee7 +0x13:  movl   $0x0,-0x10(%ebp)
088e0eee +0x1a:  mov    0x8(%ebp),%eax
088e0ef1 +0x1d:  add    $0xc,%eax
088e0ef4 +0x20:  mov    %eax,(%esp)
088e0ef7 +0x23:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
088e0efc +0x28:  sub    $0x1,%eax
088e0eff +0x2b:  mov    %eax,-0xc(%ebp)
088e0f02 +0x2e:  jmp    088e0f34 <+0x60>
088e0f04 +0x30:  mov    -0xc(%ebp),%eax
088e0f07 +0x33:  mov    0x8(%ebp),%edx
088e0f0a +0x36:  add    $0xc,%edx
088e0f0d +0x39:  mov    %eax,0x4(%esp)
088e0f11 +0x3d:  mov    %edx,(%esp)
088e0f14 +0x40:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
088e0f19 +0x45:  mov    (%eax),%eax
088e0f1b +0x47:  cmp    0xc(%ebp),%eax
088e0f1e +0x4a:  setle  %al
088e0f21 +0x4d:  test   %al,%al
088e0f23 +0x4f:  je     088e0f30 <+0x5c>
088e0f25 +0x51:  mov    -0xc(%ebp),%eax
088e0f28 +0x54:  add    $0x1,%eax
088e0f2b +0x57:  mov    %eax,-0x10(%ebp)
088e0f2e +0x5a:  jmp    088e0f40 <+0x6c>
088e0f30 +0x5c:  subl   $0x1,-0xc(%ebp)
088e0f34 +0x60:  mov    -0xc(%ebp),%eax
088e0f37 +0x63:  not    %eax
088e0f39 +0x65:  shr    $0x1f,%eax
088e0f3c +0x68:  test   %al,%al
088e0f3e +0x6a:  jne    088e0f04 <+0x30>
088e0f40 +0x6c:  mov    0x8(%ebp),%eax
088e0f43 +0x6f:  mov    0x48(%eax),%eax
088e0f46 +0x72:  cmp    -0x10(%ebp),%eax
088e0f49 +0x75:  jge    088e0f53 <+0x7f>
088e0f4b +0x77:  mov    0x8(%ebp),%eax
088e0f4e +0x7a:  mov    0x48(%eax),%eax
088e0f51 +0x7d:  jmp    088e0f56 <+0x82>
088e0f53 +0x7f:  mov    -0x10(%ebp),%eax
088e0f56 +0x82:  leave
088e0f57 +0x83:  ret
```

## 反编译 C

```c
// CharacManageScript::GetLevel @ 0x88e0ed4

/* CharacManageScript::GetLevel(int) */

uint __thiscall CharacManageScript::GetLevel(CharacManageScript *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint local_14;
  uint local_10;
  
  if (param_1 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0xc));
    do {
      local_10 = uVar2 - 1;
      uVar1 = local_14;
      if ((int)local_10 < 0) break;
      piVar3 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)(this + 0xc),local_10);
      uVar1 = uVar2;
      uVar2 = local_10;
    } while (param_1 < *piVar3);
    local_14 = uVar1;
    if (*(int *)(this + 0x48) < (int)local_14) {
      local_14 = *(uint *)(this + 0x48);
    }
  }
  return local_14;
}
```
