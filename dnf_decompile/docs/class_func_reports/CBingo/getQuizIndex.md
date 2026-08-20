# getQuizIndex

`_ZN6CBingo12getQuizIndexEv`

`CBingo::getQuizIndex()`

| 类 | 地址 |
|---|---|
| `CBingo` | `0x080cae1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080cae1e  _ZN6CBingo12getQuizIndexEv
#           CBingo::getQuizIndex()
# range [0x080cae1e, 0x080cae6f]
080cae1e +0x00:  push   %ebp
080cae1f +0x01:  mov    %esp,%ebp
080cae21 +0x03:  sub    $0x28,%esp
080cae24 +0x06:  movl   $0x0,-0xc(%ebp)
080cae2b +0x0d:  jmp    080cae53 <+0x35>
080cae2d +0x0f:  mov    -0xc(%ebp),%edx
080cae30 +0x12:  mov    0x8(%ebp),%eax
080cae33 +0x15:  mov    %edx,0x4(%esp)
080cae37 +0x19:  mov    %eax,(%esp)
080cae3a +0x1c:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
080cae3f +0x21:  mov    (%eax),%eax
080cae41 +0x23:  test   %eax,%eax
080cae43 +0x25:  sete   %al
080cae46 +0x28:  test   %al,%al
080cae48 +0x2a:  je     080cae4f <+0x31>
080cae4a +0x2c:  mov    -0xc(%ebp),%eax
080cae4d +0x2f:  jmp    080cae6d <+0x4f>
080cae4f +0x31:  addl   $0x1,-0xc(%ebp)
080cae53 +0x35:  mov    0x8(%ebp),%eax
080cae56 +0x38:  mov    %eax,(%esp)
080cae59 +0x3b:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
080cae5e +0x40:  cmp    -0xc(%ebp),%eax
080cae61 +0x43:  setg   %al
080cae64 +0x46:  test   %al,%al
080cae66 +0x48:  jne    080cae2d <+0xf>
080cae68 +0x4a:  mov    $0xffffffff,%eax
080cae6d +0x4f:  leave
080cae6e +0x50:  ret
080cae6f +0x51:  nop
```

## 反编译 C

```c
// CBingo::getQuizIndex @ 0x80cae1e

/* CBingo::getQuizIndex() */

uint __thiscall CBingo::getQuizIndex(CBingo *this)

{
  int *piVar1;
  int iVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)this);
    if (iVar2 <= (int)local_10) {
      return 0xffffffff;
    }
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)this,local_10);
    if (*piVar1 == 0) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
