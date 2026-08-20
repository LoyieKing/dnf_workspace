# isPickSuccess

`_ZN20CraneMinigameManager13isPickSuccessEsi`

`CraneMinigameManager::isPickSuccess(short, int)`

| 类 | 地址 |
|---|---|
| `CraneMinigameManager` | `0x080ebce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080ebce0  _ZN20CraneMinigameManager13isPickSuccessEsi
#           CraneMinigameManager::isPickSuccess(short, int)
# range [0x080ebce0, 0x080ebd43]
080ebce0 +0x00:  push   %ebp
080ebce1 +0x01:  mov    %esp,%ebp
080ebce3 +0x03:  sub    $0x38,%esp
080ebce6 +0x06:  mov    0xc(%ebp),%eax
080ebce9 +0x09:  mov    %ax,-0x1c(%ebp)
080ebced +0x0d:  movswl -0x1c(%ebp),%edx
080ebcf1 +0x11:  mov    0x8(%ebp),%eax
080ebcf4 +0x14:  mov    %edx,0x4(%esp)
080ebcf8 +0x18:  mov    %eax,(%esp)
080ebcfb +0x1b:  call   088e38d6 <_ZN19CraneMinigameScript7getItemEs>  ; CraneMinigameScript::getItem(short)
080ebd00 +0x20:  mov    %eax,-0x10(%ebp)
080ebd03 +0x23:  cmpl   $0x0,-0x10(%ebp)
080ebd07 +0x27:  je     080ebd3c <+0x5c>
080ebd09 +0x29:  mov    -0x10(%ebp),%eax
080ebd0c +0x2c:  mov    0x4(%eax),%eax
080ebd0f +0x2f:  cmp    0x10(%ebp),%eax
080ebd12 +0x32:  je     080ebd1b <+0x3b>
080ebd14 +0x34:  mov    $0x0,%eax
080ebd19 +0x39:  jmp    080ebd41 <+0x61>
080ebd1b +0x3b:  movl   $0x64,(%esp)
080ebd22 +0x42:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
080ebd27 +0x47:  mov    %eax,-0xc(%ebp)
080ebd2a +0x4a:  mov    -0x10(%ebp),%eax
080ebd2d +0x4d:  mov    0x10(%eax),%eax
080ebd30 +0x50:  cmp    -0xc(%ebp),%eax
080ebd33 +0x53:  jl     080ebd3c <+0x5c>
080ebd35 +0x55:  mov    $0x1,%eax
080ebd3a +0x5a:  jmp    080ebd41 <+0x61>
080ebd3c +0x5c:  mov    $0x0,%eax
080ebd41 +0x61:  leave
080ebd42 +0x62:  ret
080ebd43 +0x63:  nop
```

## 反编译 C

```c
// CraneMinigameManager::isPickSuccess @ 0x80ebce0

/* CraneMinigameManager::isPickSuccess(short, int) */

undefined4 __thiscall
CraneMinigameManager::isPickSuccess(CraneMinigameManager *this,short param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CraneMinigameScript::getItem((CraneMinigameScript *)this,param_1);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != param_2) {
      return 0;
    }
    iVar2 = get_rand_int(100);
    if (iVar2 <= *(int *)(iVar1 + 0x10)) {
      return 1;
    }
  }
  return 0;
}
```
