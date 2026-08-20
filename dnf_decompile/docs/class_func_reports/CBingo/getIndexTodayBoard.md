# getIndexTodayBoard

`_ZN6CBingo18getIndexTodayBoardEi`

`CBingo::getIndexTodayBoard(int)`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080caafa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080caafa  _ZN6CBingo18getIndexTodayBoardEi
#           CBingo::getIndexTodayBoard(int)
# range [0x080caafa, 0x080cab59]
080caafa +0x00:  push   %ebp
080caafb +0x01:  mov    %esp,%ebp
080caafd +0x03:  sub    $0x28,%esp
080cab00 +0x06:  cmpl   $0x0,0xc(%ebp)
080cab04 +0x0a:  jns    080cab0d <+0x13>
080cab06 +0x0c:  mov    $0xffffffff,%eax
080cab0b +0x11:  jmp    080cab57 <+0x5d>
080cab0d +0x13:  movl   $0x0,-0xc(%ebp)
080cab14 +0x1a:  jmp    080cab3d <+0x43>
080cab16 +0x1c:  mov    -0xc(%ebp),%edx
080cab19 +0x1f:  mov    0x8(%ebp),%eax
080cab1c +0x22:  mov    %edx,0x4(%esp)
080cab20 +0x26:  mov    %eax,(%esp)
080cab23 +0x29:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080cab28 +0x2e:  mov    (%eax),%eax
080cab2a +0x30:  cmp    0xc(%ebp),%eax
080cab2d +0x33:  sete   %al
080cab30 +0x36:  test   %al,%al
080cab32 +0x38:  je     080cab39 <+0x3f>
080cab34 +0x3a:  mov    -0xc(%ebp),%eax
080cab37 +0x3d:  jmp    080cab57 <+0x5d>
080cab39 +0x3f:  addl   $0x1,-0xc(%ebp)
080cab3d +0x43:  mov    0x8(%ebp),%eax
080cab40 +0x46:  mov    %eax,(%esp)
080cab43 +0x49:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080cab48 +0x4e:  cmp    -0xc(%ebp),%eax
080cab4b +0x51:  setg   %al
080cab4e +0x54:  test   %al,%al
080cab50 +0x56:  jne    080cab16 <+0x1c>
080cab52 +0x58:  mov    $0xffffffff,%eax
080cab57 +0x5d:  leave
080cab58 +0x5e:  ret
080cab59 +0x5f:  nop
```

## 反编译 C

```c
// CBingo::getIndexTodayBoard @ 0x80caafa

/* CBingo::getIndexTodayBoard(int) */

uint __thiscall CBingo::getIndexTodayBoard(CBingo *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint local_10;
  
  if (-1 < param_1) {
    for (local_10 = 0;
        iVar2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)this),
        (int)local_10 < iVar2; local_10 = local_10 + 1) {
      piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)this,local_10);
      if (*piVar1 == param_1) {
        return local_10;
      }
    }
  }
  return 0xffffffff;
}
```
