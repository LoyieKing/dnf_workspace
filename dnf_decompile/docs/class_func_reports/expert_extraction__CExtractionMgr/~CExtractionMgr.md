# ~CExtractionMgr

`_ZN17expert_extraction14CExtractionMgrD1Ev`

`expert_extraction::CExtractionMgr::~CExtractionMgr()`

| 类 | 地址 |
|---|---|
| `expert_extraction::CExtractionMgr` | `0x084a311a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a311a  _ZN17expert_extraction14CExtractionMgrD1Ev
#           expert_extraction::CExtractionMgr::~CExtractionMgr()
# range [0x084a311a, 0x084a3165]
084a311a +0x00:  push   %ebp
084a311b +0x01:  mov    %esp,%ebp
084a311d +0x03:  sub    $0x28,%esp
084a3120 +0x06:  movl   $0x0,-0xc(%ebp)
084a3127 +0x0d:  jmp    084a3158 <+0x3e>
084a3129 +0x0f:  mov    -0xc(%ebp),%edx
084a312c +0x12:  mov    0x8(%ebp),%eax
084a312f +0x15:  mov    (%eax,%edx,4),%eax
084a3132 +0x18:  test   %eax,%eax
084a3134 +0x1a:  je     084a3154 <+0x3a>
084a3136 +0x1c:  mov    -0xc(%ebp),%edx
084a3139 +0x1f:  mov    0x8(%ebp),%eax
084a313c +0x22:  mov    (%eax,%edx,4),%eax
084a313f +0x25:  mov    (%eax),%eax
084a3141 +0x27:  add    $0x4,%eax
084a3144 +0x2a:  mov    (%eax),%ecx
084a3146 +0x2c:  mov    -0xc(%ebp),%edx
084a3149 +0x2f:  mov    0x8(%ebp),%eax
084a314c +0x32:  mov    (%eax,%edx,4),%eax
084a314f +0x35:  mov    %eax,(%esp)
084a3152 +0x38:  call   *%ecx
084a3154 +0x3a:  addl   $0x1,-0xc(%ebp)
084a3158 +0x3e:  cmpl   $0x2,-0xc(%ebp)
084a315c +0x42:  setle  %al
084a315f +0x45:  test   %al,%al
084a3161 +0x47:  jne    084a3129 <+0xf>
084a3163 +0x49:  leave
084a3164 +0x4a:  ret
084a3165 +0x4b:  nop
```

## 反编译 C

```c
// expert_extraction::CExtractionMgr::~CExtractionMgr @ 0x84a311a

/* expert_extraction::CExtractionMgr::~CExtractionMgr() */

void __thiscall expert_extraction::CExtractionMgr::~CExtractionMgr(CExtractionMgr *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4) != 0) {
      (**(code **)(**(int **)(this + local_10 * 4) + 4))(*(undefined4 *)(this + local_10 * 4));
    }
  }
  return;
}
```
