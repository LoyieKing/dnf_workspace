# IsRecipeRight

`_ZN10expert_job10CEnchanter13IsRecipeRightEv`

`expert_job::CEnchanter::IsRecipeRight()`

| 类 | 地址 |
|---|---|
| `expert_job::CEnchanter` | `0x0849ca06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849ca06  _ZN10expert_job10CEnchanter13IsRecipeRightEv
#           expert_job::CEnchanter::IsRecipeRight()
# range [0x0849ca06, 0x0849ca69]
0849ca06 +0x00:  push   %ebp
0849ca07 +0x01:  mov    %esp,%ebp
0849ca09 +0x03:  sub    $0x18,%esp
0849ca0c +0x06:  mov    0x8(%ebp),%eax
0849ca0f +0x09:  mov    0x40(%eax),%eax
0849ca12 +0x0c:  test   %eax,%eax
0849ca14 +0x0e:  jne    0849ca1d <+0x17>
0849ca16 +0x10:  mov    $0x0,%eax
0849ca1b +0x15:  jmp    0849ca67 <+0x61>
0849ca1d +0x17:  mov    0x8(%ebp),%eax
0849ca20 +0x1a:  mov    0x40(%eax),%eax
0849ca23 +0x1d:  mov    %eax,(%esp)
0849ca26 +0x20:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0849ca2b +0x25:  xor    $0x1,%eax
0849ca2e +0x28:  test   %al,%al
0849ca30 +0x2a:  je     0849ca39 <+0x33>
0849ca32 +0x2c:  mov    $0x0,%eax
0849ca37 +0x31:  jmp    0849ca67 <+0x61>
0849ca39 +0x33:  mov    0x8(%ebp),%eax
0849ca3c +0x36:  mov    0x40(%eax),%eax
0849ca3f +0x39:  mov    (%eax),%eax
0849ca41 +0x3b:  add    $0xc,%eax
0849ca44 +0x3e:  mov    (%eax),%edx
0849ca46 +0x40:  mov    0x8(%ebp),%eax
0849ca49 +0x43:  mov    0x40(%eax),%eax
0849ca4c +0x46:  mov    %eax,(%esp)
0849ca4f +0x49:  call   *%edx
0849ca51 +0x4b:  cmp    $0x3,%eax
0849ca54 +0x4e:  setne  %al
0849ca57 +0x51:  test   %al,%al
0849ca59 +0x53:  je     0849ca62 <+0x5c>
0849ca5b +0x55:  mov    $0x0,%eax
0849ca60 +0x5a:  jmp    0849ca67 <+0x61>
0849ca62 +0x5c:  mov    $0x1,%eax
0849ca67 +0x61:  leave
0849ca68 +0x62:  ret
0849ca69 +0x63:  nop
```

## 反编译 C

```c
// expert_job::CEnchanter::IsRecipeRight @ 0x849ca06

/* expert_job::CEnchanter::IsRecipeRight() */

undefined4 __thiscall expert_job::CEnchanter::IsRecipeRight(CEnchanter *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x40) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CItem::is_stackable(*(CItem **)(this + 0x40));
    if (cVar1 == '\x01') {
      iVar3 = (**(code **)(**(int **)(this + 0x40) + 0xc))(*(undefined4 *)(this + 0x40));
      if (iVar3 == 3) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
