# getItem

`_ZN19CraneMinigameScript7getItemEs`

`CraneMinigameScript::getItem(short)`

| 类 | 地址 |
|---|---|
| `CraneMinigameScript` | `0x088e38d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 088e38d6  _ZN19CraneMinigameScript7getItemEs
#           CraneMinigameScript::getItem(short)
# range [0x088e38d6, 0x088e3923]
088e38d6 +0x00:  push   %ebp
088e38d7 +0x01:  mov    %esp,%ebp
088e38d9 +0x03:  push   %ebx
088e38da +0x04:  sub    $0x24,%esp
088e38dd +0x07:  mov    0xc(%ebp),%eax
088e38e0 +0x0a:  mov    %ax,-0xc(%ebp)
088e38e4 +0x0e:  movswl -0xc(%ebp),%ebx
088e38e8 +0x12:  mov    0x8(%ebp),%eax
088e38eb +0x15:  add    $0x4,%eax
088e38ee +0x18:  mov    %eax,(%esp)
088e38f1 +0x1b:  call   088e4332 <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x281>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x281
088e38f6 +0x20:  cmp    %eax,%ebx
088e38f8 +0x22:  setb   %al
088e38fb +0x25:  test   %al,%al
088e38fd +0x27:  je     088e3919 <+0x43>
088e38ff +0x29:  movswl -0xc(%ebp),%eax
088e3903 +0x2d:  mov    0x8(%ebp),%edx
088e3906 +0x30:  add    $0x4,%edx
088e3909 +0x33:  mov    %eax,0x4(%esp)
088e390d +0x37:  mov    %edx,(%esp)
088e3910 +0x3a:  call   088e434e <_GLOBAL__I__ZN13CraneItemInfoaSERKS_+0x29d>  ; global constructors keyed to CraneItemInfo::operator=(CraneItemInfo const&)+0x29d
088e3915 +0x3f:  mov    (%eax),%eax
088e3917 +0x41:  jmp    088e391e <+0x48>
088e3919 +0x43:  mov    $0x0,%eax
088e391e +0x48:  add    $0x24,%esp
088e3921 +0x4b:  pop    %ebx
088e3922 +0x4c:  pop    %ebp
088e3923 +0x4d:  ret
```

## 反编译 C

```c
// CraneMinigameScript::getItem @ 0x88e38d6

/* CraneMinigameScript::getItem(short) */

undefined4 __thiscall CraneMinigameScript::getItem(CraneMinigameScript *this,short param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::size
                    ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4));
  if ((uint)(int)param_1 < uVar1) {
    puVar2 = (undefined4 *)
             std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::at
                       ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4),
                        (int)param_1);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
