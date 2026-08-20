# getTodayEnterLayer

`_ZNK13TOD_UserState18getTodayEnterLayerEv`

`TOD_UserState::getTodayEnterLayer() const`

| 类 | 地址 |
|---|---|
| `TOD_UserState` | `0x0864383e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864383e  _ZNK13TOD_UserState18getTodayEnterLayerEv
#           TOD_UserState::getTodayEnterLayer() const
# range [0x0864383e, 0x0864386f]
0864383e +0x00:  push   %ebp
0864383f +0x01:  mov    %esp,%ebp
08643841 +0x03:  push   %ebx
08643842 +0x04:  sub    $0x14,%esp
08643845 +0x07:  mov    0x8(%ebp),%ebx
08643848 +0x0a:  mov    %ebx,%eax
0864384a +0x0c:  mov    0xc(%ebp),%edx
0864384d +0x0f:  add    $0x14,%edx
08643850 +0x12:  movl   $0x1,0x8(%esp)
08643858 +0x1a:  mov    %edx,0x4(%esp)
0864385c +0x1e:  mov    %eax,(%esp)
0864385f +0x21:  call   086439c8 <_GLOBAL__I__ZN13TOD_UserStateC2Ev+0x1c>  ; global constructors keyed to TOD_UserState::TOD_UserState()+0x1c
08643864 +0x26:  sub    $0x4,%esp
08643867 +0x29:  mov    %ebx,%eax
08643869 +0x2b:  mov    %ebx,%eax
0864386b +0x2d:  mov    -0x4(%ebp),%ebx
0864386e +0x30:  leave
0864386f +0x31:  ret    $0x4
```

## 反编译 C

```c
// TOD_UserState::getTodayEnterLayer @ 0x864383e

/* TOD_UserState::getTodayEnterLayer() const */

TOD_Layer * TOD_UserState::getTodayEnterLayer(void)

{
  TOD_Layer *in_stack_00000004;
  int in_stack_00000008;
  
  TOD_Layer::operator+(in_stack_00000004,in_stack_00000008 + 0x14);
  return in_stack_00000004;
}
```
