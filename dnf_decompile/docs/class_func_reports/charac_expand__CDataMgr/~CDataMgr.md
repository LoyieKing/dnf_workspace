# ~CDataMgr

`_ZN13charac_expand8CDataMgrD1Ev`

`charac_expand::CDataMgr::~CDataMgr()`

| 类 | 地址 |
|---|---|
| `charac_expand::CDataMgr` | `0x0832ac48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0832ac48  _ZN13charac_expand8CDataMgrD1Ev
#           charac_expand::CDataMgr::~CDataMgr()
# range [0x0832ac48, 0x0832ac93]
0832ac48 +0x00:  push   %ebp
0832ac49 +0x01:  mov    %esp,%ebp
0832ac4b +0x03:  sub    $0x28,%esp
0832ac4e +0x06:  movl   $0x0,-0xc(%ebp)
0832ac55 +0x0d:  jmp    0832ac86 <+0x3e>
0832ac57 +0x0f:  mov    -0xc(%ebp),%edx
0832ac5a +0x12:  mov    0x8(%ebp),%eax
0832ac5d +0x15:  mov    (%eax,%edx,4),%eax
0832ac60 +0x18:  test   %eax,%eax
0832ac62 +0x1a:  je     0832ac82 <+0x3a>
0832ac64 +0x1c:  mov    -0xc(%ebp),%edx
0832ac67 +0x1f:  mov    0x8(%ebp),%eax
0832ac6a +0x22:  mov    (%eax,%edx,4),%eax
0832ac6d +0x25:  mov    (%eax),%eax
0832ac6f +0x27:  add    $0x14,%eax
0832ac72 +0x2a:  mov    (%eax),%ecx
0832ac74 +0x2c:  mov    -0xc(%ebp),%edx
0832ac77 +0x2f:  mov    0x8(%ebp),%eax
0832ac7a +0x32:  mov    (%eax,%edx,4),%eax
0832ac7d +0x35:  mov    %eax,(%esp)
0832ac80 +0x38:  call   *%ecx
0832ac82 +0x3a:  addl   $0x1,-0xc(%ebp)
0832ac86 +0x3e:  cmpl   $0x13,-0xc(%ebp)
0832ac8a +0x42:  setle  %al
0832ac8d +0x45:  test   %al,%al
0832ac8f +0x47:  jne    0832ac57 <+0xf>
0832ac91 +0x49:  leave
0832ac92 +0x4a:  ret
0832ac93 +0x4b:  nop
```

## 反编译 C

```c
// charac_expand::CDataMgr::~CDataMgr @ 0x832ac48

/* charac_expand::CDataMgr::~CDataMgr() */

void __thiscall charac_expand::CDataMgr::~CDataMgr(CDataMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4) != 0) {
      (**(code **)(**(int **)(this + local_10 * 4) + 0x14))(*(undefined4 *)(this + local_10 * 4));
    }
  }
  return;
}
```
