# getIllustIndex

`_ZN17stNPCCommonData_t14getIllustIndexEi`

`stNPCCommonData_t::getIllustIndex(int)`

| 类 | 地址 |
|---|---|
| `stNPCCommonData_t` | `0x089faeee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089faeee  _ZN17stNPCCommonData_t14getIllustIndexEi
#           stNPCCommonData_t::getIllustIndex(int)
# range [0x089faeee, 0x089faf45]
089faeee +0x00:  push   %ebp
089faeef +0x01:  mov    %esp,%ebp
089faef1 +0x03:  sub    $0x28,%esp
089faef4 +0x06:  movl   $0x0,-0xc(%ebp)
089faefb +0x0d:  jmp    089faf27 <+0x39>
089faefd +0x0f:  mov    0x8(%ebp),%eax
089faf00 +0x12:  lea    0x24(%eax),%edx
089faf03 +0x15:  mov    -0xc(%ebp),%eax
089faf06 +0x18:  mov    %eax,0x4(%esp)
089faf0a +0x1c:  mov    %edx,(%esp)
089faf0d +0x1f:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
089faf12 +0x24:  mov    (%eax),%eax
089faf14 +0x26:  cmp    0xc(%ebp),%eax
089faf17 +0x29:  sete   %al
089faf1a +0x2c:  test   %al,%al
089faf1c +0x2e:  je     089faf23 <+0x35>
089faf1e +0x30:  mov    -0xc(%ebp),%eax
089faf21 +0x33:  jmp    089faf44 <+0x56>
089faf23 +0x35:  addl   $0x1,-0xc(%ebp)
089faf27 +0x39:  mov    0x8(%ebp),%eax
089faf2a +0x3c:  add    $0x24,%eax
089faf2d +0x3f:  mov    %eax,(%esp)
089faf30 +0x42:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
089faf35 +0x47:  cmp    -0xc(%ebp),%eax
089faf38 +0x4a:  seta   %al
089faf3b +0x4d:  test   %al,%al
089faf3d +0x4f:  jne    089faefd <+0xf>
089faf3f +0x51:  mov    $0xffffffff,%eax
089faf44 +0x56:  leave
089faf45 +0x57:  ret
```

## 反编译 C

```c
// stNPCCommonData_t::getIllustIndex @ 0x89faeee

/* stNPCCommonData_t::getIllustIndex(int) */

uint __thiscall stNPCCommonData_t::getIllustIndex(stNPCCommonData_t *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    uVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + 0x24));
    if (uVar2 <= local_10) {
      return 0xffffffff;
    }
    piVar1 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(this + 0x24),local_10);
    if (*piVar1 == param_1) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
