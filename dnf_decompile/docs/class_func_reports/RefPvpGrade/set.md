# set

`_ZN11RefPvpGrade3setERK15stPvpRefTable_t`

`RefPvpGrade::set(stPvpRefTable_t const&)`

| 类 | 地址 |
|---|---|
| `RefPvpGrade` | `0x085d48a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d48a0  _ZN11RefPvpGrade3setERK15stPvpRefTable_t
#           RefPvpGrade::set(stPvpRefTable_t const&)
# range [0x085d48a0, 0x085d48ef]
085d48a0 +0x00:  push   %ebp
085d48a1 +0x01:  mov    %esp,%ebp
085d48a3 +0x03:  sub    $0x18,%esp
085d48a6 +0x06:  mov    0xc(%ebp),%eax
085d48a9 +0x09:  mov    0x10(%eax),%edx
085d48ac +0x0c:  mov    0x8(%ebp),%eax
085d48af +0x0f:  mov    %edx,0x134(%eax)
085d48b5 +0x15:  mov    0xc(%ebp),%eax
085d48b8 +0x18:  mov    0x14(%eax),%edx
085d48bb +0x1b:  mov    0x8(%ebp),%eax
085d48be +0x1e:  mov    %edx,0x138(%eax)
085d48c4 +0x24:  mov    0xc(%ebp),%eax
085d48c7 +0x27:  mov    0x18(%eax),%edx
085d48ca +0x2a:  mov    0x8(%ebp),%eax
085d48cd +0x2d:  mov    %edx,0x13c(%eax)
085d48d3 +0x33:  mov    0xc(%ebp),%eax
085d48d6 +0x36:  lea    0x1c(%eax),%edx
085d48d9 +0x39:  mov    0x8(%ebp),%eax
085d48dc +0x3c:  add    $0x140,%eax
085d48e1 +0x41:  mov    %edx,0x4(%esp)
085d48e5 +0x45:  mov    %eax,(%esp)
085d48e8 +0x48:  call   080ccfd2 <_GLOBAL__I__ZN10BingoEventC2Ev+0x1e1f>  ; global constructors keyed to BingoEvent::BingoEvent()+0x1e1f
085d48ed +0x4d:  leave
085d48ee +0x4e:  ret
085d48ef +0x4f:  nop
```

## 反编译 C

```c
// RefPvpGrade::set @ 0x85d48a0

/* RefPvpGrade::set(stPvpRefTable_t const&) */

void __thiscall RefPvpGrade::set(RefPvpGrade *this,stPvpRefTable_t *param_1)

{
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_1 + 0x18);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x140),(vector *)(param_1 + 0x1c));
  return;
}
```
